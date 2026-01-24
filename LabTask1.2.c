#include<stdio.h>
int main(){
    int size;
    printf("Enter Array Size: ");
    scanf("%d", &size);

    int array[size];
    for(int i=0; i<size; i++){
        printf("Array[%d]: ",i);
        scanf("%d",&array[i]);
    }
    int searchValue;
    printf("Enter search value: ");
    scanf("%d", &searchValue);

    int LB = 0;
    int UB = size-1;
    int iteration = 1;
    int found = 0;

    while (LB <= UB){

        int mid = LB + (UB - LB) / 2;
        printf("\nIteration %d, LB = %d, Mid = %d, UB = %d ",iteration,LB, mid,UB);

            if (searchValue == array[mid]){
            printf("\nValue found at index %d",mid);
            found = 1;
            break;
            }
            else if (searchValue < array[mid]){
                UB = mid - 1;
            }
            else if (searchValue > array[mid]){
                LB = mid + 1;
            }
            iteration++;
        }
        if (!found){
            printf("Invalid Input!!!!");
        }
        return 0;
}
