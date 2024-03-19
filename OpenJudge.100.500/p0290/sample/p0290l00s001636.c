#include <stdio.h>
#include <math.h>
#define Max 10000

int sosuu(int);

int main(){
  int a,n,sum=0;
  int judge;
  int x[Max];

  scanf("%d",&n);

  for(a=0 ; a<n ; a++){
     scanf("%d",&x[a]);
  }

  for(a=0 ; a<n ; a++){
    judge = sosuu(x[a]);
    if(judge == 0)sum++;
  }
  printf("%d\n",sum);

  return 0;
}

int sosuu(int x){
  int m;
  int n;
  n = sqrt(x);
  
  if(x < 2)return -1;
  if(x == 2)return 0;
  if(x % 2 == 0)return -1;
  for(m=3 ; m<=n ; m+=2){
    if(x % m == 0) {
      return -1;
      break;
    }
  }
  return 0;
}