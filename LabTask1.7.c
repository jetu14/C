#include<stdio.h>
int main(){

    int start,end;
    int count = 0, sum = 0;

    printf("Sum of Even Numbers within a Specific Range.\n");
    printf("Starting from: ");
    scanf("%d", &start);
    printf("To End : ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++){
        if(i % 2 == 0){
            sum += i;
            count++;
        }
    }
    printf("Total even numbers: %d\n", count);
    printf("Sum of even numbers: %d\n", sum);
}
