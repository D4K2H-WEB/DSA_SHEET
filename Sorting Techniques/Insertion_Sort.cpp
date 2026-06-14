// Insertion Sort 
// Time Complexity: O(n^2) for Avg and Worst Case, O(n) for Best Case



for(int i=1 ; i<n ; i++){
    int j = i;
    while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j], arr[j-1]);
        j--;
    }
}