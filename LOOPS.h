void LOOPS(){
  
}
void VECTORES(int arr[], int length){
  int arr[] = {1,2,3,4,5,}, arr2[5];
  int arr_length =sizeof(arr) / sizeof (int), arr2_length = sizeof(arr2) / sizeof(int);
  VECTORES(arr,arr_length);
  int i,j;
  for (i=arr_length-1,j=0;, i>=0 && j< arr2_length; i--, j++){
    arr[j] = arr[i];
    printf("%d",arr2[j]);
  }
  return 0;
}
void VECTORES(int arr[], int length){
  int i;
  for (i =0; i <length; i++){
    printf("%d",arr[i]);
  }
}
