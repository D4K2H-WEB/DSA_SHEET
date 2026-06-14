
// Bubble Sort
// Time Complexity: O(n^2) for Avg and Worst Case, O(n) for Best Case



for(int i = 0 ; i<n-1 ; i++){
    for(int j = 0 ; j<n-i-1 ; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }
}

