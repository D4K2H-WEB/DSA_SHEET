// Quick Sort
// Quick Sort is a divide and conquer algorithm that works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. The sub-arrays are then sorted recursively. This can be done in-place, requiring small additional amounts of memory to perform the sorting.
// Time Complexity: O(n log n) for Avg and Best Case, O(n^2) for Worst Case



int partition(vector <int> &arr,int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j)
    {
        while(arr[i]<=pivot && i<high){  
            i++;
        }
        while(arr[j]>pivot && j>low){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low ,int high){
    if(low<high){
        int pIndex = partition(arr, low , high);
        qs(arr, low , pIndex-1);
        qs(arr, pIndex+1 , high);

    }

}

vector<int> quickSort(vector<int> arr ){

    qs(arr,0,arr.size()-1);
    return arr;
}