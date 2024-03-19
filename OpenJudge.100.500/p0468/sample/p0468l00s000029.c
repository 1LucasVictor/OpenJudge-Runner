#include<stdio.h>
int main()
{
char str[4];
scanf("%s",str);
if(str[1]==82)
{
str[1]=66;
}
else if(str[1]==66)
{
str[1]=82;
}
for(int i=0;i<3;i++)
{
printf("%c",str[i]);
}
return 0;
}