#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements you want: ");
    scanf("%d",&n);
    int largNum[n],i;
    printf("\nEnter %d numericElements: ",n);
    for (i=0;i<n;i++){
        scanf("%d",&largNum[i]);
    }
    for(i=1;i<n;i++){
        if(largNum[0]<largNum[i])
            largNum[0]=largNum[i];
    }
    printf("Largest element of this array is: %d\n",largNum[0]);
    return 0;
}