#include <stdio.h>

int main(){

    int a;
    float b;
    char c;
    
    printf("Enter a number \n");
    scanf("%i", &a );
    printf("enter a floating point number \n ");
    scanf("%f", &b);
    printf("Enter a Single Character \n");
    scanf("%c",&c);
    
    printf("You Entered %i \n",a);
    printf("You Entered %f \n",b);
    printf("You Entered %c \n",c);

    return 0;


}