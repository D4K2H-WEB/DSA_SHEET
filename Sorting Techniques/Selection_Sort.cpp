
// Selection Sort
// Selection Sort is a simple sorting algorithm that divides the input list into two parts: the sublist of items already sorted, which is built up from left to right at the front (left) of the list, and the sublist of items remaining to be sorted that occupy the rest of the list. Initially, the sorted sublist is empty and the unsorted sublist is the entire input list. The algorithm proceeds by finding the smallest (or largest, depending on sorting order) element from the unsorted sublist, swapping it with the leftmost unsorted element (putting it in sorted order), and moving the sublist boundaries one element to the right.
// Time Complexity: O(n^2) for all cases

int min=0;

for(int i = 0 ; i<n-1 ; i++){
    min = i;
    for(int j = i; j<n ; j++){
        if(arr[j]<arr[min]){
            min = j;
        }
    }
    swap(arr[i], arr[min]);     
}