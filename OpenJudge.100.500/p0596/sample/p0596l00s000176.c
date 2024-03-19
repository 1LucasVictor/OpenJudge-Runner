#include<stdio.h>

int main(void)
{
  int i=0,c1=0,c0=0;
  char s[100000];
  
  scanf("%s",s);
  
  while(s[i]!='\0')
  {
	if(s[i]=='0') c0++; 
    else if(s[i]=='1') c1++;
    i++;
  }
	
  if(c0>=c1) printf("%d",2*c1);
  else printf("%d",2*c0);
  
  return 0; 
}