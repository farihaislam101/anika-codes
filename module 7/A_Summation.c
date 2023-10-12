#include<stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        sum=sum+a;
    }
    if (sum>=0){
    printf("%d",sum);}
    else{
        printf("%d", -1*sum);
    }
}