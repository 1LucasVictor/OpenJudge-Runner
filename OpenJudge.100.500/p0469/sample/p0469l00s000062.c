#include<stdio.h>

void main(){
int k,a,b;
int i=0,fl=0;
scanf("%d",&k);

scanf("%d %d",&a,&b);

for(i=0;i<=b;i++){
if(a<=k*i && k*i<=b)fl=1;
}
if(fl==1)printf("OK\n");
else printf("NG\n");
}