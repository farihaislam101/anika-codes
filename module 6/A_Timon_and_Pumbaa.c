#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int minus=a-b;
    if(minus>=0){
        printf("%d",minus);
    }
    else{
        printf("0");
    }
}