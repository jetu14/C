#include <stdio.h>

int main() {
    int array[5];
    int *start, *end, temp;

    printf("Enter 5 elements:\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &array[i]);
    }
    start = array;
    end = array + 4;

    while(start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    printf("Reversed Array: ");
    for(int i= 0; i < 5; i++){
        printf("\nArray[%d] : %d", i+1, array[i]);
    }
}
