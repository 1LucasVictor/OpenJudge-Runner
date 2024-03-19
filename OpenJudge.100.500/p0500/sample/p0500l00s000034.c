#include<stdio.h>
#include<math.h>
int main(){
  int unused __attribute__((unused));
  int i, counter, N, M, num, n, end, flag = 0;
  int s[3], c[10], a[3]={-1, -1, -1};

  unused = scanf("%d %d", &N, &M);
  for(i=0; i<M; i++){
    unused = scanf("%d %d", &s[i], &c[i]); //si桁目がciである
    if(s[i]==1 && c[i]==0 && N!=1){
      printf("-1");
      flag = 1;
    }else if(s[i]==1 && c[i]==0 && N==1){
      printf("0");
      flag = 1;
    }
  }

  end = pow(10,N);
  num=0;
  while(flag==0 && num<end){
    counter = 0;
    n = num;
    for(i=N-1; i>=0; i--){
      a[i] = n%10;
      n = n/10;
    }
    for(i=0; i<M; i++){
      if(a[s[i]-1] == c[i]) counter++;
    }
    if(counter==N){
      printf("%d", num);
      flag = 1;
    }
    num++;
  }
  if(flag==0) printf("-1");

  return 0;
}