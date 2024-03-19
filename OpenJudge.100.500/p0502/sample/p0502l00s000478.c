#include<stdio.h>
int main(){
  int N; int n,i;
  int m = 0;
  scanf("%d", &N);
  char A[N];
  for(i=0;i<N;i++){
    scanf("%d",&n);
    A[i]=n;
  }
  for(i=0;i<N;i++){
    n=A[i];
    if(n % 2 == 0){
      if(n % 3 != 0 && n % 5 != 0)
        m++;
    }
  }
  if(m==0){
    printf("APPROVED");
  }else{
    printf("DENIED");
  }
  return 0;
}
  