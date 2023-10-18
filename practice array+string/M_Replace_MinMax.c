#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int max_idx=0;
int max=a[0];

for(int i=0;i<n;i++){
    if(max<a[i]){
max=a[i];
max_idx=i;
    }
}
//printf("%d",max);
int min=a[0];
int min_idx=0;
for(int i=0;i<n;i++){
    if(min>a[i]){
min=a[i];
min_idx=i;
    }
}

//printf("%d\n",min);

    int temp=a[max_idx];
    a[max_idx]=a[min_idx];
    a[min_idx]=temp;
    for(int i=0;i<n;i++){
    printf("%d",a[i]);
}
    
}
