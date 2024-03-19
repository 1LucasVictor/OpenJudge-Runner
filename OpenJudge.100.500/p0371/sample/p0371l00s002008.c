#include<stdio.h>
int main(void){
int n,data=0,max=-1000001,min=1000001;
scanf("%d",&n);
if(0<n&&n<=10000){
int a[n],i;
for(i=0;i<n;i++){
if(scanf("%d",&a[i])==1){
if(-1000000>a[i]||a[i]>1000000)
return 0;
data+=a[i];
if(max<a[i])
max=a[i];
if(min>a[i])
min=a[i];
}}
printf("%d %d %d\n",min,max,data);
}
return 0;
}