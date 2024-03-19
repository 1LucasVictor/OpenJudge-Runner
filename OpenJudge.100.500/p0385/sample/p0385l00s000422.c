#include <stdio.h>
 
int main (void)
 
{
 
char in[1001];
 
int out,i;
 
for(;;)
 
{
 
scanf("%s",in);
 
if(in[0]=='0')
 
{
 
return 0;
 
}
 
out=0;
 
for(i=0;in[i]!='\0';i++)
 
{
 
out+=in[i]-'0';
 
}
 
printf("%d\n",out);
 
}
 
}