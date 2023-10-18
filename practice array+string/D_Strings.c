
#include<stdio.h>
#include<string.h>
int main(){
 char firstStr[11];
 scanf("%s",firstStr);
 char secStr[11];
 scanf("%s",secStr);
 int st1=strlen(firstStr);
 int st2=strlen(secStr);
 printf("%d %d\n",st1,st2);
 printf("%s%s\n",firstStr,secStr);

int c=firstStr[0];
firstStr[0]=secStr[0];
secStr[0]=c;

printf("%s ",firstStr);
printf("%s",secStr);
}
