#include<stdio.h>
int main(){
    int input[10];
    int sum = 0;

    printf("Enter your integer value : ");
    for(int i = 0; i<10; i++) {
        scanf("%d",&input[i]);
        sum += input[i];
    }
    for(int i = 0; i<10; i++) {
        printf("\n%d. %d", i+1, input[i]);
    }
    printf("\nSum : %d", sum);
}
