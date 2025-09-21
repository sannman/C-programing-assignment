#include <stdio.h>

int main(){
    float radius , area;
    printf("enter the radius of circle \n");
    sacnf("%f", &radius);
    area = 3.14*radius*radius;
    printf("Area of circle is %f \n", area);

    return 0;
    

}