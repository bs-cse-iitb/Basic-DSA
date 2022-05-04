void insertionSort(int arr[], int n)
{
//code here
	int i,j,temp;
	for(i=1;i<n;i++){
		temp = arr[i];
		j=i-1;
		while(j>=0&& arr[j]>temp){ // 
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp; // j+1, not j-1
	}
}
