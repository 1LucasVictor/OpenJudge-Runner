#include<stdio.h>
#define N 200000
int main(){
  int ary[N],i,n,min,t,max;
  scanf("%d",&n);
  scanf("%d",&ary[0]);
  min=ary[0];
  for(i=1;i<n;i++){
    scanf("%d",&ary[i]);
    if(ary[i]<min){
      min=ary[i];
      t=i;
    }
  }
  max=ary[1]-ary[0];
  for(i=n-1;i>t;i--){
    if(ary[i]-ary[t]>max){
      max=ary[i]-ary[t];
    }
  }
  printf("%d\n",max);
  return 0;
}

