//structure :
#include<stdio.h>
struct person {
    int age;
    float salary;
};
int main(){

    struct person person1,person2;
    person1.age = 20;
    person1.salary = 27000.50;
    printf("Salary is : %.2f\n", person1.salary);
    printf("Age is : %d\n", person1.age);


   return 0;
}