#include<stdio.h>

int main(){

    float l,w, area,perimeter;
    scanf("%f%f",&l,&w);
    perimeter = 2*(l+w);
    area = l*w;

    printf("Perimeter = %.2f, Area = %.2f",perimeter,area);

    return 0;
}