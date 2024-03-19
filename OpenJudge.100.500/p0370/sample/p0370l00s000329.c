#include <stdio.h>

int main(void)
{

int a,b;
char c;
while(c!='?'){
scanf("%d %c %d",&a,&c,&b);

if(c=='+')printf("%d\n",a+b);
else if(c=='-')printf("%d\n",a-b);
else if(c=='*')printf("%d\n",a*b);
else if(c=='/')printf("%d\n",a/b);
}
return 0;
}