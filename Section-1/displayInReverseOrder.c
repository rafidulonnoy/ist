#include<stdio.h>

int main(){

    int i,n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=n;i>=0;i--){
        printf("%d\n",i);
        sum+=i;
    }
    printf("Sum of the digits: %d",sum);
    return 0;
}