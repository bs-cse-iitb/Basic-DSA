#include<iostream>
using namespace std;

int main(){
	int v,e;
	cin>>v>>e;
	int adj[1000][1000]={0};
	int i,j,a,b,q;
	for(i=0;i<e;i++){
		cin>>a>>b;
		adj[a-1][b-1]=1;
		adj[b-1][a-1]=1;
	}
	cin>>q;
	/*
	for(i=0;i<v;i++){
		for(j=0;j<v;j++){
			cout<<adj[i][j]<<" ";
		}
		cout<<endl;
	}

	*/

    while(q--){
		cin>>a>>b;
		if(adj[a-1][b-1]==1 || adj[b-1][a-1]==1){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
		cout<<endl;
		
	}
	
	return 0;
}