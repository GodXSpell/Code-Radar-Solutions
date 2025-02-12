// Your code here...
int bubbleSort(arr, n){
    for (int i = 0; i<sizeof(arr); i++){
        for (int j = 1; j<sizeof(arr)-1; j++){
            if (arr[i] == arr[j]){
                i++;
                j++;
            }
            else if (arr[i]>arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                i++;
                j++;
            }
        }
    }
}