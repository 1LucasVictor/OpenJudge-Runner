#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
  int unused __attribute__((unused));
  int i, j, counter, N, M, num, n, end;
  int s[3], c[10], a[3]={-1, -1, -1};

  unused = scanf("%d %d", &N, &M);
  for(i=0; i<M; i++){
    unused = scanf("%d %d", &s[i], &c[i]); //si桁目がciである
    if(s[i]==1 && c[i]==0 && N!=1){
      printf("-1");
      exit(1);
    }
  }

  j = 0;
  end = pow(10,N);
  for(num=1; num<end; num++){
    counter = 0;
    n = num;
    a[0] = -1; a[1] = -1; a[2] = -1;
    for(i=N-1; i>=0; i--){
      a[i] = n%10;
      if(n<10) i = -1;
      n = n/10;
    }
    for(i=0; i<M; i++){
      if(a[s[i]-1] == c[i]) counter++;
    }

    if(counter==N){
      printf("%d\n", num);
      break;
    }else{
      j++;
    }
  }

  if(j==end-1) printf("-1");
  return 0;
}