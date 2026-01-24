#include<stdio.h>
int main() {
    int start,end,count = 0;

    printf("Printing odd numbers within a Specific Range.\n");
    printf("Starting from: ");
    scanf("%d",&start);
    printf("To: ");
    scanf("%d",&end);

    int array[end];
    printf("Odd Numbers: ");
    for(int i = start; i <= end; i++){
        if(i % 2 != 0){
            printf("%d ",i);
            count++;
        }
    }
    printf("\nTotal odd numbers: %d", count);
}
