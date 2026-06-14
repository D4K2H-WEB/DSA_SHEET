
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