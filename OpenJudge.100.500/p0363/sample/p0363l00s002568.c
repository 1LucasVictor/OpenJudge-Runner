#include <stdio.h>

int main()
{
int a,b,c,tmp,i;

while(1)
{
scanf("%d %d %d",&a,&b,&c);
if(1<=a,b,c&&a,b,c<=10000);
break;
}

for(i=1;i<=3;i++){
if(a>b)
{
tmp=a;
a=b;
b=tmp;
}
else if(b>c)
{
tmp=b;
b=c;
c=tmp;
}
}

printf("%d %d %d\n",a,b,c);

return 0;
}