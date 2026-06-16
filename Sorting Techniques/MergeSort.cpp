
// Merge Sort Algorithm in C++
// Merge Sort is a divide and conquer algorithm that divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves. The merge() function is used for merging two halves. The merge(arr[], l, m, r) is a key process that assumes that arr[l..m] and arr[m+1..r] are sorted and merges the two sorted sub-arrays into one.
// Time Complexity: O(n log n) for all cases




void merge(int arr[] , s , e){
    int mid = (s+e)/2;
    int l1=mid-s+1;
    int l2=e-mid;
    int *first = new int[l1];
    int *second = new int[l2];

    int m = s;
    for(int i=0 ; i<l1 ; i++){
        first[i] = arr[m++];
    }

    m=mid+1;
    for(int i=0 ; i<l2 ; i++){
        second[i] = arr[m++];
    }

    int i=0 , j=0 , m=s;
    while(i<l1 && j<l2){
        if(first[i]<second[j]){
            arr[m++] = first[i++];
        }
        else{
            arr[m++] = second[j++];
        }
    }
    while(i<l1){
        arr[m++] = first[i++];
    }
    while(j<l2){
        arr[m++] = second[j++];
    }

    delete []first;
    delete []second;
}


void mergeSort(int *arr[], int s ,int e){

    if(s>=e){
        return ; 
    }

    int mid = (s+e)/2;

    mergeSort(arr[], s , mid);
    mergeSort(arr[], mid+1 , e);

    merge(arr[], s , e);
}