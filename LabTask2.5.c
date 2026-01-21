/*5. A program must count how many even numbers are present in an array.
Write a C program using pointers to count even numbers.*/

#include<stdio.h>
int main(){
    int size, count = 0;
    printf("Array size: ");
    scanf("%d",&size);

    int array[size];
    printf("Enter Array: ");
    for(int i=0; i<size; i++){
        scanf("%d", &array[i]);
    }
    int *p1= array;

    for(int i=0; i<size; i++){
        if(*p1 % 2 == 0){
            count++;
        }
        p1++;
    }
    printf("Even numbers : %d", count);
    return 0;
}
