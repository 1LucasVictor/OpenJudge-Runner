#include<stdio.h>
int a[1000000000];
int main(void){
  int n=0,i;
  long long int x=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%lld",&x);
    if(a[x]!=0){
      printf("NO\n");
      return 0;
    }
    else{
      a[x]++;
    }
  }
  printf("YES\n");
  return 0;
}
