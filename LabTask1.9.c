#include<stdio.h>
double averageSalary(double a[]){
    double sum = 0.0;
    for(int i = 0; i < 3; i++){
        sum += a[i];
    }
    return sum / 3.00;
}

int main(){
    double salary[3];
    for(int i = 0; i < 3; i++){
        printf("Employee %d salary: ",i+1);
        scanf("%lf",&salary[i]);
    }
    double avg = averageSalary(salary);
    printf("Average Salary: %.2lf\n",avg);
    if(avg < 40000.00){
        for(int i = 0; i < 3; i++){
            salary[i] += 3000.00;
        }
        printf("Updated Salaries: \n");
        for(int i = 0; i < 3; i++){
        printf("Employee %d salary: %.2lf\n", i+1, salary[i]);
        }
    }
    else{
        printf("Average salary of Employees is higher than 40000.");
    }
    return 0;
}
