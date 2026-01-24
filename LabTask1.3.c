#include<stdio.h>
int main(){
    int weekday[6];
    int highestTemp, lowestTemp;

    for(int i=0; i<=6; i++){
        printf("Enter temperature of day %d : ", i+1);
        scanf("%d",&weekday[i]);
    }
    highestTemp = weekday[0];
    lowestTemp = weekday[0];
    for(int i=1; i<6; i++){
        if (weekday[i] > highestTemp){
            highestTemp = weekday[i];
        }
        if (weekday[i] < lowestTemp){
            lowestTemp = weekday[i];
        }
    }
    printf("Highest temperature of the week is: %d \n",highestTemp);
    printf("Lowest temperature of the week is: %d \n",lowestTemp);
}
