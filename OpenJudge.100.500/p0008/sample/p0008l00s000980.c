#include<stdio.h>

unsigned long long int N = 1000000;

int main(void){

  int i, j, n;
  int pn[N];

  for(i=3; i<N; i+=2){
    pn[i]=-1;
  }
  pn[0]=pn[1]=-1;
  pn[2]=1;
  

  for(i=3; i<N; i+=2){
    if(pn[i]==-1){
      pn[i]=1;
      for(j=i*2; j<N; j+=i){
	pn[j]=0;
      }
    }
  }

  for(i=3; i<N; ++i){
    pn[i]+=pn[i-1];
  }

  while(scanf("%d", &n)!=EOF){
    printf("%d\n", pn[n]);
  }
  return(0);
}

