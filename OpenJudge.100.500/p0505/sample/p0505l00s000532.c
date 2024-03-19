#include<stdio.h>
int main(void){
int h,n;
int a[10000];
int sum=0;
int i;
scanf("%d%d",&h,&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
sum+=a[i];

if(sum>=h)
    printf("Yes\n");
else
    printf("No\n");

}