/* 1. A company wants to compare salaries of two employees using pointers.
Write a program to find the maximum of two numbers using pointers.*/

#include <stdio.h>
int main(){
    double person1 , person2, maximumSalary;
    double *p1 = &person1;
    double *p2 = &person2;

    printf("Salary of 1st Person: ");
    scanf("%lf", &person1);
    printf("Salary of 2nd Person: ");
    scanf("%lf", &person2);

    if(*p1 > *p2){
        maximumSalary = *p1;
        printf("Person 1 paid more than Person 2.\nMaximum Salary : %.2f", *p1);
    }
    else if (*p2 > *p1){
        maximumSalary = *p2;
        printf("Person 2 paid more than Person 1.\nMaximum Salary : %.2f", *p2);
    }
    else{
        printf("Both are equally paid.");
    }
}
