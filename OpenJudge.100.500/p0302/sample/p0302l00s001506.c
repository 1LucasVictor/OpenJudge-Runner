#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 13
#define N 1000001
char arr[N][LEN];
int maxi=0;//max value of i (for double hashing)
void init(void);
void insert(char*);
void find(char*);
int hash1(int);
int hash2(int);
int toNumber(char*);
int main(void)
{
  int i;//counter
  int n;//the number of instructions
  char op[7];//operation(insert/find)
  char str[13];//string
  init();
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%s%s",op,str);
      if(strcmp(op,"insert")==0) insert(str);
      if(strcmp(op,"find")==0) find(str);
    }
  return 0;
}
void init(void)
{
  int i;//counter
  for(i=0;i<N;i++) strcpy(arr[i],""); 
}
void insert(char *str)
{
  int i;//counter
  int h;//hash number
  int k=toNumber(str);//key number
  int h1=hash1(k);
  int h2=hash2(k);
  for(i=0;;i++)
    {
      h=(h1+i*h2)%N;
      if(strcmp(arr[h],"")==0)
	{
	  strcpy(arr[h],str);
	  break;
	}
      if(maxi<i) maxi=i;
    }
}
void find(char *str)
{
  int i;//counter
  int h;//hash number
  int k=toNumber(str);//key number
  int h1=hash1(k);
  int h2=hash2(k);
  int flag=0;//judging whether str is found or not
  for(i=0;i<=maxi;i++)
    {
      h=(h1+i*h2)%N;
      if(strcmp(str,arr[h])==0)
	{
	  flag=1;
	  break;
	}
      if(strcmp(arr[h],"")==0)
	{
	  flag=0;
	  break;
	}
    }
  if(flag==1) printf("yes\n");
  else printf("no\n");
}
int hash1(int k)
{
  return k%N;
}
int hash2(int k)
{
  return 1+k%(N-1);
}
int toNumber(char *str)
{
  int i;//counter
  int key=0;//return number
  int num;//value of the digit
  int dig=1;//the number of digits as 4 decimal
  for(i=0;i<strlen(str);i++)
    {
      switch(str[i])
	{
	case 'A':
	  num=0;
	  break;
	case 'C':
	  num=1;
	  break;
	case 'G':
	  num=2;
	  break;
	case 'T':
	  num=3;
	  break;
	default:
	  exit(1);
	}
      key+=num*dig;
      dig*=4;
    }
  return key;
}

