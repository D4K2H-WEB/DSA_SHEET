// Time Complexity: O(n^2)
// Space Complexity: O(n) due to recursion stack

void insertionSort(vector<int>& arr, int n) {
    if(n <= 1)
        return;

    insertionSort(arr, n-1);

    int key = arr[n-1];
    int j = n-2;

    while(j >= 0 && arr[j] > key) {
        arr[j+1] = arr[j];
        j--;
    }

    arr[j+1] = key;
}