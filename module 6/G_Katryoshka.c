
#include<stdio.h>
int main(){
    long long int a, b, c;
    scanf("%lld %lld %lld",&a, &b, &c);
    int min=a;
if(b<=min ){
    min = b;
}
if(c<=min){
    min=c;
}

long long int x, y, z, divide,katryoshka;
x=a-min;
y=b-min;
z=c-min;
divide=x/2;
if(divide<=z){
    katryoshka=min+divide;

}
else{
    katryoshka=min+z;

}
printf("%lld",katryoshka);

}