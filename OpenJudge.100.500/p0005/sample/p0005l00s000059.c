#include<stdio.h>
#include<string.h>
l;
main(i)
{
char s[21],r;
scanf("%s",s);
l=strlen(s);
for(i=0;i<l/2;i++)
r=s[i],s[i]=s[l-i-1],s[l-i-1]=r;
printf("%s",s);
return 0;
}