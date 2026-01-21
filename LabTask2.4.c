/*4. Reverse an Array using pointers.
Write a program to reverse an array using pointers.*/
#include<stdio.h>
void reverseArray(int *arr, int size){

    int *start = arr;
    int *end = arr + size-1;

    while(start < end){
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;

    }
}
int main(){
    int size;
    int arr[size];
    printf("Enter array size: ");
    scanf("%d", &size);

    printf("Enter input for array : ");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Original Array: ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr,size);
    printf("Reversed Array: ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

