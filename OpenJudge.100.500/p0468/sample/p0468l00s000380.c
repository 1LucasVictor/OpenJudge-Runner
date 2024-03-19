#include<stdio.h>
#include<string.h>

main()
{
  char st[10];
  char st1[10];
  char a[] = "ABC";
  char b[] = "ARC";
  
  scanf("%s",st);
  if(strcmp(st,a)>0)
    strcpy(st1,a);
  else
    strcpy(st1,b);
  
  printf("%s",st1);
}