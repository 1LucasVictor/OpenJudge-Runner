#include<stdio.h>
#include<math.h>
int main(){
  int unused __attribute__((unused));
  int i, j, counter, N, M, num, n, end;
  int s[3], c[10], a[3]={0};

  unused = scanf("%d %d", &N, &M);
  for(i=0; i<M; i++) unused = scanf("%d %d", &s[i], &c[i]); //si桁目がciである

  j = 0;
  end = pow(10,N);
  for(num=1; num<end; num++){
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
      printf("%d\n", num);
      break;
    }else{
      j++;
    }
  }
  if(j==end-1) printf("-1\n");
  return 0;
}