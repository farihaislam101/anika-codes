#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    int min=INT_MAX,pos;

    for(int i=0;i<n;i++)
    {
    if(ara[i]<min)
    {
    min=ara[i];
    pos=i+1;
     
}

    }
   //printf("%d\n",pos);
    printf("%d %d",min,pos);
    
}