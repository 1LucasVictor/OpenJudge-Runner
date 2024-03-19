#include<stdio.h>

int n,i,a=1000000,b=-1000000,d;
long long c=0;
int main(){
scanf("%d",&n);
for(i=1;i<=n;i++){
scanf("%d",&d);
if(a>d)a=d;
if(b<d)b=d;
c=c+d;
}
printf("%d %d %d\n",a,b,c);
return 0;
} 