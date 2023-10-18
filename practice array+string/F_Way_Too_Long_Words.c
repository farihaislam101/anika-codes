#include<stdio.h>
#include<string.h>
int main(){
    char a[101];
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){  
    scanf("%s",a);
    int st=strlen(a);
    if(st<=10){
        printf("%s",a);
    }

    else {
        printf("\n");
        printf("%c",a[0]);
        printf("%d",st-2);
        printf("%c",a[st-1]);
    }
    }
}