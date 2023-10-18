#include<stdio.h>
#include<string.h>
int main(){
    char a[1001];
    scanf("%s",a);
    int st=strlen(a)-1;
   int pal=1;
   int i=0,j=st;
   while(i<j){
    if(a[i]!=a[j]){
        pal=0;
        break;
    }
    i++;
    j--;
   }
   
 //  printf("%d",pal);
   if(pal==1){
    printf("YES");
   }
   else{
    printf("NO");
   }
   }
