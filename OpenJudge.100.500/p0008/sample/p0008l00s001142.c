#include <stdio.h>

int pri[1000001];

int prime1(int n){
  int i;

  for(i=2;i<=n;i++){
    if(pri[i] == 0){
      pri[i] = 1;
      break;
    }
  }
  return i;
}

int prime2(int n){
  int j;

  for(j=2;j*n<=1000001;j++){
    pri[j * n] = -1;
  }
}

int prime3(int n){
  int k, l = 0;

  for(k=0;k<=n;k++){
    if(pri[k] == 1){
      l = l + 1;
    }
  }

  return l;
}

int main(){
  int n, m, o, p;

  pri[0] = pri[1] = -1;

  while(scanf("%d", &n)!=-1){


    while(o<=n){
      o = prime1(n);
      prime2(o);
    }

    printf("%d\n", prime3(n));

  }

  return 0;
}