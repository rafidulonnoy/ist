#include<stdio.h>

int main(){

    long long int number,i,factorial=1;
    scanf("%lld",&number);
    if(number<0)
        printf("Factorial for negative number doesn't exist");
    else{
        for(i=1;i<=number;i++)
            factorial*=i;
    }
    printf("So factorial for %lld is: %lld",number,factorial);

    return 0;
}