#include<stdio.h>
#include<string.h>
int main(void)
{
  char str[201],temp[201]={};
  int m,i,sh;
  size_t len;

  for( ; ; ){
      scanf("%s",&str);
      if(str[0] == '-'){break;}
  scanf("%d",&m);
  for(i=0;i<m;i++)
    {
      memset(temp,0,201*sizeof(char));
      scanf("%d",&sh);
      len= sh*sizeof(char);
      strncpy(temp,str,len);
      strcpy(str,str+len);
      strcat(str,temp);
    }
  printf("%s\n",str);   
  }
  return 0;
}