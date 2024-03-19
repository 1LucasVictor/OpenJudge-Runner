#include<stdio.h>

int judge(int);
int main(){
  int n,a[10000],i,count = 0;
  scanf("%d",&n);
  for(i = 0;i < n;i++){
    scanf("%d",&a[i]);
    if(judge(a[i]) == 0) count++;
  }
  printf("%d\n",count);
  return 0;
}

int judge(int x){
  int i,j = 0;
  for(i = 2;i < x;i++){
    if(x % i == 0){
      j = 1;
      break;
    }
  }
  return j;
}