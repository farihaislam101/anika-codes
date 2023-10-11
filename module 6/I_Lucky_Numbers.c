#include<stdio.h>
int main(){
    int n, x, y;

    scanf("%d",&n);
    x=n%10;
    y=n/10;
    if(n>=10 && n<=99){
        if(x%y==0||y%x==0){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }

}