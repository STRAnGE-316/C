#include<stdio.h>
struct person{
    int age;
    float salary;

};
int main(){
    struct person person1,person2;
    printf("Enter the age for person 1: \n");
    scanf("%d", &person1.age);
    printf("Enter the salary for person 1: \n");
    scanf("%f", &person1.salary);
    printf("Age is : %d\n", person1.age);
    printf("Salary is %.2f\n", person2.salary);



    return 0;
}