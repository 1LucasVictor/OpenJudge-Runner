#include<stdio.h>
#include<math.h>
int main(){
  int unused __attribute__((unused));
  int i, j, counter, N, M, num, n, end;
  int flag = 0;
  int s[3], c[10], a[3]={-1, -1, -1};

  unused = scanf("%d %d", &N, &M);
  for(i=0; i<M; i++){
    unused = scanf("%d %d", &s[i], &c[i]); //si桁目がciである
    if(s[i]==1 && c[i]==0 && N!=1){
      printf("-1");
      flag = 1;
    }
    if(s[i]==1 && c[i]==0 && N==1){
      printf("0");
      flag = 1;
    }
  }

  j = 0;
  end = pow(10,N);
  if(flag == 0){
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
        printf("%d", num);
        flag = 1;
        break;
      }else{
        j++;
      }
    }
  }
  if(j==end-1 && flag==0) printf("-1");

  return 0;
}