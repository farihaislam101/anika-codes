#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a;
    int Even=0,Odd=0, Positive=0,Negative=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        if(a==0||a%2==0){
            Even++;
        }
        else if(a%2==1 || a%2==-1){
            Odd++;
        }

         if(a>0){
            Positive++;
        }
    else if (a<0){
        Negative++;
    }
    }
        printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",Even,Odd,Positive,Negative);
    
}