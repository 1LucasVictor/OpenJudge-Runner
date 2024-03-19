#include<stdio.h>
#include<string.h>
#define LEN 1001
void print(char[],int,int);
void reverse(char[],int,int);
void replace(char[],int,int,char[]);
int main(void)
{
  int i,n;
  int a,b;
  char str[LEN];
  char op[10];
  char rep[LEN];
  scanf("%s",str);
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%s",op);
      scanf("%d%d",&a,&b);
      if(strcmp(op,"print")==0) print(str,a,b);
      if(strcmp(op,"reverse")==0) reverse(str,a,b);
      if(strcmp(op,"replace")==0)
        {
          scanf("%s",rep);
          replace(str,a,b,rep);
        }
    }
  return 0;

}
void print(char str[],int a,int b)
{
  char temp=str[b+1];
  str[b+1]='\0';
  printf("%s\n",str+a);
  str[b+1]=temp;
}
void reverse(char str[],int a,int b)
{
  int i;
  int n=b-a+1;
  char temp;
  char tempStr[LEN];
  for(i=0;i<n;i++) tempStr[i]=str[b-i];
  tempStr[n]='\0';
  temp=str[b+1];
  strcpy(str+a,tempStr);
  str[b+1]=temp;
}
void replace(char str[],int a,int b,char rep[])
{
  char temp=str[b+1];
  strcpy(str+a,rep);
  str[b+1]=temp;
}
