#include<stdio.h>

int main(){

    int user_input , t = 3 , f=5;
    printf("Enter a number \n");
    scanf("%d", &user_input);


    if(user_input%t == 0 && user_input %f == 0){
        printf("%d is divisible by both 3 and 5 \n", user_input);
    }
    else if(user_input %t == 0){
        printf("%d is divisible by 3 \n", user_input);
    }
    else if(user_input %f == 0){
        printf("%d is divisible by 5 \n", user_input);
    
    }
    else{
        printf("%d is not divisible by 3 or 5 \n", user_input);
    }

    return 0;
}