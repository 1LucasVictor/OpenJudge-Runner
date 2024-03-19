#include<stdio.h>
int main()
{
char a[4];
  int c,i;
  c=0;
  scanf("%4s",a);
 for(i=0;i<3;++i)
 {
  if(a[i]==a[i+1])  {
    c++;
    }

 }
  
 if(c>0) printf("Bad");
  else printf("Good");
  
return 0;
}