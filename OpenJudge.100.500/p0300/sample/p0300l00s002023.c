#include<stdio.h>
#define LEN 1000

typedef struct{
  int number; 
  long pointer;
}ArrayPoint;

ArrayPoint GetPoint(long s);

int main()
{
  long n;
  int q, C=0;
  int S=0, S1[LEN], S2[LEN], S3[LEN];
  long i, j, k;
  int *s[3];
  ArrayPoint a;

  //Initialization
  for(i=0; i<LEN; i++)
    {
      S1[i]=0;
      S2[i]=0;
      S3[i]=0;
    }

  s[0]=&S1[0];
  s[1]=&S2[0];
  s[2]=&S3[0];

  //Set S
  scanf("%ld", &n);
  for(i=0; i<n; i++)
    {
      scanf("%d", &j);
      a=GetPoint(j);
      if(a.number==-1)S++;
      else *(s[a.number]+a.pointer)+=1;
    }

  //search
  scanf("%d", &q);
  for(i=0; i<q; i++)
    {
      scanf("%d", &j);
      a=GetPoint(j);
      if(a.number==-1 && S!=0)C++;
      else if(*(s[a.number]+a.pointer)!=0)C++;
    }

  //print
  printf("%d\n", C);

  return 0;
}


//-----function------
ArrayPoint GetPoint(long s)
{
  ArrayPoint a;
  
  if(s==0)
    {
      a.number=-1;
      a.pointer=-1;
      return a;
    }

  //get number and move_pointer
  if(s<LEN)
    {
      a.number=0;
      a.pointer=s-1;
    }
  else if(s<LEN*LEN)
    {
      a.number=1;
      s-=LEN*LEN;
      a.pointer=s;
    }
  else
    {
      a.number=2;
      s-=LEN*LEN*LEN;
      a.pointer=s;
    }
  return a;
}