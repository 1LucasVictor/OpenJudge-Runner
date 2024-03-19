#include <stdio.h>
#include <math.h>

int hantei(int x){
  int i;

  if(x==2) return 1;

  else if(x<2) return 0;

  if(x%2==0) return 0;


  for(i=3; i<=sqrt(x); i+=2){
    if(x%i==0) return 0;
    }

  return 1;
}

int main(){

  int n,x,i,cnt=0;

    scanf("%d",&n);


  for(i=1; i<=n; i++){
     scanf("%d",&x);
     if(hantei(x)) cnt++;
  }

  printf("%d\n",cnt);

  return 0;
}


