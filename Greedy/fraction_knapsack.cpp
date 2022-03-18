struct Item{
    int value;
    int weight;
};

//Function to get the maximum total value in the knapsack.
// static and non static
static bool comp(Item i1, Item i2){
        double p_w1 = double(i1.value)/double(i1.weight);
        double p_w2 = double(i2.value)/double(i2.weight);
        return p_w1>p_w2;
}

double fractionalKnapsack(int W, Item arr[], int n)
{
    // Your code here
    // sort acc. to profit/weight from scratch (without using stl)
    
    sort(arr, arr+n, comp);
    int i=0;
    // print sorted according profit/weight
    /*
    for(i=0;i<n;i++){
        cout<<arr[i].profit<<"  "<<arr[i].weight<<"  "<<arr[i].profit/arr[i].weight<<endl;
    }
    */
    double profit=0;
    i=0;
    while(W>0 && i<n){  // Check boundary conditions very very carefully 
        if(W>=arr[i].weight){
            profit+=arr[i].value;
        }
        else{
            double p = W*(double(arr[i].value)/double(arr[i].weight));
            profit+=p;
            // cout<<p<<" "<<arr[i].value<<"  "<<arr[i].weight<<"  "<<arr[i].value/arr[i].weight<<endl;
    
            
        }
        W-=arr[i].weight;
        i++;
    }
    //cout<<profit;
    return profit;
}