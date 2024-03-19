#include <stdio.h>
#include <math.h>
int judge(int);
int main(){
  int A[10000],i,n,cnt=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
    }
  for(i=0;i<n;i++){
    if (judge(A[i])==3)cnt++;
    }
  printf("%d\n",cnt);
  return 0;
}

int judge(int x){
  int i;
  if(x==2)return 3;
  if(x<2)return 1;
  if(x%2==0)return 1;
  
  for(i=3;i< (double)sqrt(x);i+=2){
    if(x%i==0)return 1;
  }
  return 3;
}

