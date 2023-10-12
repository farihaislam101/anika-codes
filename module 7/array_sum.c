#include<stdio.h>
int main(){
    int ara[5];
    for(int i=0; i<=4;i++){
        scanf("%d",&ara[i]);
    }
    int sum=0;
    for(int i=0;i<=4;i++){
        sum=sum+ara[i];
    }
    printf("%d",sum);

}