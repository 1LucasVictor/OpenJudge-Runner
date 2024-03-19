#include<stdio.h>

int main(void){

int a,b,c,n,x;
int q=0;

while(1){
scanf("%d",&n); scanf("%d",&x);

if(n==0&&x==0)
break;

for(a=1;a<=n-2;a++)
for(b=a+1;b<=n-1;b++)
for(c=b+1;c<=n;c++)
if(a+b+c==x)
 q++;

printf("%d\n",q);
q=0;
}

return 0;
}

