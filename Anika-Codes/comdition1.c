#include<stdio.h>
int main(){
    printf("Enter the amount of money");
    int tk;
    scanf("%d",&tk);
    if(tk>=100){
        printf("I will have burger");
    }
    else if(tk>=50){
        printf("I will have fuchka");
    }
    else{
        printf("I will have nothing");
    }
}