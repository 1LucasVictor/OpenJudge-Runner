#include<stdio.h>
#define N 10000
#define Q 500

int S[N],n;

int linerSearch(int key)
{
  int i;
  
  for(i=0;i<n;i++){
    if(S[i]==key) return 1;
  }
  return 0;
}

int main()
{

  int i,q,c=0,key,S[N],T[Q];

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&S[i]);
  }
  
  scanf("%d",&q);
  for(i=0;i<q;i++){
    scanf("%d",&T[i]);
    key = linerSearch(T[i]);
    if(key = 1) c++;
  }

  
      
  printf("%d\n",c);
  
  return 0;
}