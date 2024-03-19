#include<stdio.h>
#include<string.h>
#define LEN 201
#define END "-"
void shuffle(char[],int);
int main(void)
{
  int i;
  int h;
  int m;
  char str[LEN];
  for(;;)
    {
      scanf("%s",str);
      if(strcmp(END,str)==0) break;
      scanf("%d",&m);
      for(i=0;i<m;i++)
        {
          scanf("%d",&h);
          shuffle(str,h);
        }
      printf("%s\n",str);
    }
  return 0;
}
void shuffle(char str[],int h)
{
  char temp[LEN*2+1];
  strcpy(temp,str+h);
  strcpy(temp+strlen(str)-h,str);
  temp[strlen(str)]='\0';
  strcpy(str,temp);
}
