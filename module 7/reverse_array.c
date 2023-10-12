#include<stdio.h>
int main(){
    int ara[5];
    for(int i=0;i<=4; i++){
        scanf("%d",&ara[i]);
    }
    for(int i=4; i>=0;i--){
        printf("%d\n",ara[i]);
    }
}