#include<stdio.h>

int main(void){

int h,n;

scanf("%d %d",&h,&n);

int a[n];

for(int i=0;i<n;i++){
  scanf("%d",&a[i]);
}

int sum=a[0];

for(int i=1;i<n;i++){
  sum=sum+a[i];
}

if(sum<h){printf("No");}
if(sum>=h){printf("Yes");}

return 0;
}