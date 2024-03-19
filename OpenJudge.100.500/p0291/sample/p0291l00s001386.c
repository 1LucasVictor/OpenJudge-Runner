#include<stdio.h>

int main(void){
long long max=-10000000000,n[1000000],i,a,j;
scanf("%d",&a);
for(i=0;i<a;i++){
scanf("%d",&n[i]);
}
for(i=0;i<a;i++){
for(j=i+1;j<a;j++){
if(max<n[j]-n[i])max=n[j]-n[i];
}
}
printf("%d\n",max);
return 0;
}