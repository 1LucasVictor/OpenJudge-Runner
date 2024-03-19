#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
  char a[100],b[100];
  int n;
  
  scanf("%s", a);
  scanf("%s", b);
  
  n = strlen(a);
  
  if(strncmp(a,b,n)==0 && strlen(b)==n+1)
  {
    printf("Yes");
  }else
  {
   printf("No"); 
  }
  return 0; 
}
