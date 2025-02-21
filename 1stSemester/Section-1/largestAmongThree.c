#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c)
            printf("First number is the largest");
        else
            printf("Third number is the largest");
    }
    else{
        if(b>c)
            printf("Second number is the largest");
        else
            printf("Third number is the largest");
    }

    return 0;
}