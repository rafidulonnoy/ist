#include<stdio.h>
#include<math.h>

int main(){

    int i,n;
    float s=0,num;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            s+=pow(i,-i);
        }
        printf("\nSum of series upto %d terms: %.2f",n,s);
    return 0;
}