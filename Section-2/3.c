#include<stdio.h>
int main(){
    int n,i,arr[100],m,sum=0;
    printf("\nEnter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter the array element: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the searching element: ");
    scanf("%d",&m);
    for (i=0;i<n;i++){
        if(m==arr[i]){
            sum=i+1;
            break;
        }
    }
    if(sum>0){
        printf("\nThe element was found in the index no: %d\n",sum);
    }
    else{
        printf("\nThe element couldn't be found in the array.\n");
    }
    return 0;
}