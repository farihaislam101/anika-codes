#include<stdio.h>
int main(){
    int n;

    scanf("%d",&n);
    
    int ara[n];
    for(int i=0; i<n;i++){
        scanf("%d",&ara[i]);
    }
    int x;
    scanf("%d",&x);
    int ans=-1;
for (int i=0;i<n;i++){
    if(ara[i]==x){
        ans =i;
        break;
    }
}
printf("%d\n",ans);

}