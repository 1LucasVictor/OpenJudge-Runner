#include <stdio.h>
#include <stdlib.h>

#define MAX 200001

void input(int *,int );

int main()
{
  int n, m, k;
  int *a;
  int *b;
  int count=0;
  int read;
  int h=0, r=0;
  
  scanf("%d %d %d",&n,&m,&k);
  a=(int *)malloc(n*sizeof(int));
  b=(int *)malloc(n*sizeof(int));
  input(a,n);
  input(b,m);
  
  
  while(k>0){
    if(n==h && m>r){
      read=b[r];
      r++;
    }
    else if(n>h && m==r){
      read=a[h];
      h++;
    }
    else if(a[h]>b[r]){
      read=b[r];
      r++;
    }
    else{
      read=a[h];
      h++;
    }
    
    k-=read;
    
    if(k>=0)
      count++;
 
  }
  
  printf("%d\n",count);
  
  free(a);
  free(b);
  
  return 0;
}

void input(int *data,int limit)
{
  for(int i=0; i<limit; i++)
    scanf("%d",&data[i]);
    
}