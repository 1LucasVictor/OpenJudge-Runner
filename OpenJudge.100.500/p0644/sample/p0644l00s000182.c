#include<stdio.h>
#include<string.h>
int main()
{
  int i=0,count=0;
  char str[10]={};
  
  scanf("%s",str);
  strcpy(str,str);
 
  for(i=0;i<3;i++)
  {
    if(str[i]=='1'){
      count++;
    }
  }
  printf("%d\n",count);
  
  return 0;
}