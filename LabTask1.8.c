#include<stdio.h>

void checkEvenOdd(int a , int b){
    int odd = 0, even = 0;

    for(int i = a; i <= b; i++){
        if(i % 2 == 0){
            printf("Even Number: %d \t",i);
            even++;
        }
        if(i % 2 != 0){
            printf("Odd Number: %d \n",i);
            odd++;
        }
    }
    printf("\nTotal odd numbers: %d", odd);
    printf("\nTotal even numbers: %d", even);

}
int main(){
    int start,end;
    printf("Printing odd numbers within a Specific Range.\n");
    printf("Starting from: ");
    scanf("%d",&start);
    printf("To: ");
    scanf("%d",&end);

    checkEvenOdd(start,end);
}
