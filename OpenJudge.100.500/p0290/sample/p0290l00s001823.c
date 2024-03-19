#include<stdio.h>
#include<math.h>

int isPrime(int);

int main(){
  static int n,m;
  int i,j=0;
  int a[10000],b[10000];
  int jud;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  if(isPrime(a[i])){
    j++;
  }
}
    printf("%d\n",j);

  return 0;
}

int isPrime(int x){
  int i;

  if(x==2)return 1;
  if(x<2)return 0;
  if(x%2 == 0)return 0;

  i=3;
  while(i<=sqrt(x)){
    if(x%i == 0)return 0;
    i = i + 2;
  }

return 1;
}

