#include<stdio.h>

#define N 1000000

int n,m,BOX[N];

int research(int x);

int main()
{
  int i,right=100000*10000,left=0,res;

  scanf("%d%d",&n,&m);

  for(i=0; i<n; i++){
    scanf("%d",&BOX[i]);
  }

  while(right-left>1){
    
    res = (right+left)/2;

    if(research(res)==1) right=res;
    else left = res;
  }
  
  printf("%d\n",right);

  return 0;
}

int research(int x)
{
  int i,con=0,total=0;

  for(i=0; i<m; i++){
    total=0;
  
    while(BOX[con]+total<=x){
    
      total+= BOX[con];
      con++;

      if(con==n) return 1;
    }
  }
  return 0;
}

