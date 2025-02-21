#include<stdio.h>
int main(){
    int num,count=0,i;
    printf("Length of the array: ");
    scanf("%d",&num);
    int array[num];
    printf("Enter values for the array: ");
    for(i=0;i<num;i++){
        scanf("%d",&array[i]);
    }
    for (i=0;i<num;i++){
        printf("%d ",array[i]);
    }
    printf("\nSo, summation of the array is: ");
    for(i=0;i<num;i++){
        count+=array[i];
    }
    printf("%d\n",count);
    return 0;
}