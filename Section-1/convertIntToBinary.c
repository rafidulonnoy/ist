#include<stdio.h>

int main(){
    int integer,n,i=0,j,biNum[32];
    printf("Enter an integer value: ");
    scanf("%d",&n);
    integer=n;
    while(n>0){
        biNum[i++]=n%2;
        n/=2;
    }
    printf("Binary for %d is: ",integer);
    for(j=i-1;j>=0;j--){
        printf("%d",biNum[j]);
    }
    printf("\n");
    return 0;
}