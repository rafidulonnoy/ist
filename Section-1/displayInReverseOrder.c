#include<stdio.h>

int main(){

    int i,n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=n;i>=0;i--){
        printf("%d ",i);
        sum+=i;
    }
    printf("\nSum of the digits: %d",sum);
    return 0;
}