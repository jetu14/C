/*2. Sum of Array Elements using pointers.
Write a program to find the sum of array elements using pointer arithmetic.*/
#include <stdio.h>
int main (){
    int arr[5], sum = 0;
    int *p = arr;
    printf("Enter 5 numbers: ");

    for(int i=0; i < 5; i++){
        scanf("%d", p+i);
    }
    for(int i=0; i < 5; i++){
        sum += *(p+i);
    }
    printf("Sum = %d", sum);
    return 0;
}
