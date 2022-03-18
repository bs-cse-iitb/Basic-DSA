void selectionSort(int arr[], int n)
{
    //code here
        //code here
    int i,j, min;
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }
    
}