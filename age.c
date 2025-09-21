#include <stdio.h>

int main(){

    int current_year , birth_year, age;
    printf("Enter current year: \n");
    scanf("%d", &current_year);
    printf("Enter your birth year: \n");
    scanf("%d", &birth_year);
    age = current_year - birth_year;
    printf("Your age is %d \n", age);
    return 0;
} 
