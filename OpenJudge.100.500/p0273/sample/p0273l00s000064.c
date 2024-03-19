#include <stdio.h>

int F[45];

int f(int n)
{ 
  if(n==0||n==1) return F[n]=1;
  if(F[n]!=-1) return F[n];

  return F[n]=f(n-2)+f(n-1);
}


int main(){

      int n,i;
  
  scanf("%d",&n);

  for(i=1;i<=n;i++)F[i]=-1;
  
  printf("%d\n",f(n));

  return 0;
  
}

