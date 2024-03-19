#include<stdio.h>

int main(void){
long long max=-1000000000,n[200000];
int i,j,a;
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