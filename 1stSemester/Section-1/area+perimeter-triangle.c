#include<stdio.h>
#include<math.h>

int main(){

    float a,b,c, area,perimeter;
    printf("Enter the values for three sides of the triangle: ");
    scanf("%f%f%f",&a,&b,&c);
    perimeter = a+b+c;
    area = sqrt(perimeter*(perimeter-a)*(perimeter-b)*(perimeter-c));

    printf("Perimeter = %.2f, Area = %.2f\n",perimeter,area);

    return 0;
}