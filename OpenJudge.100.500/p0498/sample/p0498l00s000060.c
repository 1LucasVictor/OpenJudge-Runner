 #include <stdio.h>
int main(){
  int N,n;
  scanf("%d",&n);
  N=n/2;
  if(n%2==1)
    N++;
  printf("%d\n",N);
  return 0;
  }