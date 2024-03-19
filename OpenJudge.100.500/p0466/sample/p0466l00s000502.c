#include<stdio.h>
#include<string.h>
int main()
{
  char s[10],t[11];
scanf("%s %s",s,t);
int a=strlen(t);
int flag=0;
for(int i=0;i<a-1;i++)
{if(s[i]!=t[i])
{flag=1;
 
} 
}
if(flag==0)
{printf("Yes\n");}
else{printf("No\n");}
return 0;}
