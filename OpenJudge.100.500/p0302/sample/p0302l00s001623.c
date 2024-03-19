#include<stdio.h>
#include<assert.h>
static const int MAX = 10000000;
int m = 1000033;
int m2 =1000003;
int exist[10000000];

int h1(int k){return k%m;}

int h2(int k){return 1+k%(m-1);}

int h(int k,int i){return (h1(k)+i*h2(k))%m;}

int toInt(char *o,int p)
{
  int res = 0,i;
  for(i = p;o[i] != '\0';i++)
    {
      res *= 10;
      res += o[i]-'A'+1;
    }
  return res;
}

void insert(char *o)
{
  int index = 0,key;
  while(1)
    {
      int value = toInt(o,0);   
      key = h(value,index);
      if(!exist[key])
	{
	  exist[key] = value;
	  return;
	}
      else index++;
      assert(index < m);
    }
}

int find(char *o)
{
  int index = 0,key;
  int value = toInt(o,0);
 
  while(index < m)
    {
      key = h(value,index);
      if(!exist[key])return 0;
      if(exist[key] == value)
	return 1;
      index++;
    }
  return 0;
}

int main()
{
  int i;
  char dummy;
  int T;
  scanf("%d%c",&T,&dummy);
  for(i=0;i<MAX;i++)exist[i] = 0; 
  while(T-- > 0)
    {
      char opera[50];
      char v[20];
      scanf("%s %s",opera,v);   
    
      switch(opera[0])
	{
	case 'i':
	  insert(v);
	  break;
	case 'f':
	  find(v)?puts("yes"):puts("no");
	  break;
	default:
	  assert(0);
	  break;
	}

    }
  return 0;
}