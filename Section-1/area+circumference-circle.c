#include<stdio.h>
#define PI 3.14159

int main(){

    float r, area,circumference;
    scanf("%f",&r);
    area = PI*r*r;
    circumference = 2*PI*r;
    printf("Area = %.2f , Circumference = %.2f",area,circumference);

    return 0;
}