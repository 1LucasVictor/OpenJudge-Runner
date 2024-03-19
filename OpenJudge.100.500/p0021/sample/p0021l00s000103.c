#include<stdio.h>
#define MAX 5000

int max(int a,int b){
 if(a > b)return a;
 return b;
}


int main(){

 int n,i;
 int A[MAX];
 int s=0;
 int mss=0;

 while(1){
  s=0;
  mss=0;
  scanf("%d",&n);
  if(n==0)break;

  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
    s=max(0,s+A[i]);
    mss=max(mss,s);
  }

  printf("%d\n",mss);

 }

return 0;
}
