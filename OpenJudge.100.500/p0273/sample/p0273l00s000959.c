#include<stdio.h>
#define N 44
int a[N];

int fibona(int i){
  if(a[i]==NULL){
    if(i==0||i==1)  a[i]=1;
    else{
      a[i]=fibona(i-1)+fibona(i-2);
    }
  }
  return a[i];
}
int main(){

  int n,i,p,q;
  scanf("%d",&n);
  printf("%d\n",fibona(n));
  return 0;
}