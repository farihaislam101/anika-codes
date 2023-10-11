#include<stdio.h>
int main()
{
   int Test;
   scanf("%d",&Test);
   for(int j=1;j<=Test;j++){
    int n;
    scanf("%d",&n);
    do{
        printf("%d ",n%10);
        n=n/10;
    }
    while(n!=0);
    printf("\n");
   } 
}