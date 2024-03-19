#include<stdio.h>

int main(void)
{
 int  i=0,a=0,b=0;
 char s[100000];

 scanf("%s",s);
 while(s[i]=='1' || s[i]=='0'){
    if     (s[i]=='1') a=a+2;
    else if(s[i]=='0') b=b+2;
    i=i+1;
 }
 if(a<=b) printf("%d\n",a);
 else     printf("%d\n",b);
 return 0;
}
