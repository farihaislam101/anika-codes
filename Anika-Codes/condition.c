#include<stdio.h>
int main(){
    printf("Enter the amount of money: ");
    int tk;
    scanf("%d",&tk);
    if(tk>=10){
    printf("I will buy burger");
    }
else{
    printf("I dont have sufficient money");
}
return 0;
}