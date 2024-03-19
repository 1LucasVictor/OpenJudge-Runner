#include<stdio.h>
#define N 8
  
int Q[N][N];

int putQueen(int *r,int *c,int k){
 
  int i;
  
  for(i = 0;i < k;i ++)
    {
      if(r[i] == r[k])return 0;
 
      if(c[i]==c[k])return 0;
     
      if(r[i] + c[i] == r[k] + c[k])return 0;
     
      if(r[i]-c[i] == r[k] - c[k])return 0;
    }
  return 1;
}

 
int main(){
  
  int i,j;
  int n,k;
  int r[N],c[N];
  
  for(i = 0;i < N;i ++)
    {
      r[i] = 0;
      c[i] = 0;
     
      for(j = 0;j < N;j ++)
    {
      Q[j][i] = 0;
    }
    }
  
  scanf("%d",&n);
 
  k = n;
  
  for(i = 0;i < n;i ++)
    {
      scanf("%d%d",&r[i],&c[i]);
    }
   
  while(k < N){
 
    if(c[k] == N-1)
      {
    r[k] ++;
    c[k] = 0;
      }
    else
      c[k] ++;
  
    if(r[k] > N-1)
      {
    r[k] = 0;
    c[k] = 0;
    k--;
      }
     
    else if(putQueen(r,c,k))
      k ++;
  }
  
  for(i = 0;i < N;i ++)
    {
      Q[c[i]][r[i]]=1;
    }
  
  for(i = 0;i < N;i ++)
    {
      for(j = 0;j < N;j ++)
    {
      if(Q[j][i] == 1)printf("Q");
      else{
        printf(".");
      }
    }
      printf("\n");
    }
  return 0;
}
 