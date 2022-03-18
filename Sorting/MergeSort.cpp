void merge(int arr[], int l, int m, int r)
{
        // Your code here
    int n1 = m-l+1;
    int n2 =r-m;
    int left[n1], right[n2];
    int i,j,k;
    
    for(i=0;i<n1;i++){
        left[i]= arr[l+i];
    }
    for(i=0;i<n2;i++){
        right[i]= arr[m+1+i];
    }
    
    i=j=0;
    k=l;
    
    while(i<n1 && j< n2){
        if(left[i] < right[j]){
            arr[k++]=left[i++];
        }
        else{
            arr[k++] = right[j++];
        }
    }
    
    while(i<n1){
        arr[k++]=left[i++];
    }
    
    while(j<n2){
        arr[k++]=right[j++];
    }
    
        
}

void mergeSort(int arr[], int l, int r)
{
    //code here
    int m = (l+r)/2;
    if(l<r){
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}