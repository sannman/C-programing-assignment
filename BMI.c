#include<stdio.h>

int main(){

    float height , weight , bmi;
    printf("Enter your height in meters \n");
    scanf("%f",&height);
    printf("Enter your weight in Kgs \n");
    scanf("%f",&weight);
    bmi  = weight/(height*height);
    printf("Your BMI is %f \n",bmi);
    return 0 ;
    
}