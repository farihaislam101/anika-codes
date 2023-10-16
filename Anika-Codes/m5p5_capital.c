#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>=48 && a<=57){
        printf("IS DIGIT\n");
    }
    else{
        printf("ALPHA\n");
        if(a>='a'&&a<='z'){
            printf("IS SMALL");
        }
        else{
            printf("IS CAPITAL");
        }
    }
}