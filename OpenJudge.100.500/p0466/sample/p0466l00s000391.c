#include<stdio.h>
#include<string.h>
int main()
{
  char s[10],t[11];
scanf("%s %s",s,t);
int a=strlen(s);
int flag=0;
for(int i=0;i<a;i++)
{if(s[i]==t[i])
{
  flag=0;
}  else{ flag=1;
       }
}
if(flag==0)
{printf("Yes");}
else{printf("No");}
return 0;}
