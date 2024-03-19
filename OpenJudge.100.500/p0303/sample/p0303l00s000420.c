#include <stdio.h>
int find(void);
int Thenumber(int);

int w[100000],n,k;

int main(void){
  int i;
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++)
    scanf("%d",&w[i]);
  printf("%d\n",find());
  return 0;
}

int find(){
  int left,right,mid,quantity;
  left=0;
  right=1000000000;//Max Quantity_total(100000*10000)最大積載量
  while(right-left>1){
    mid=(right+left)/2;
    quantity=Thenumber(mid);
    if(quantity>n)right=mid;
    else left=mid;
    if(quantity==n)return mid;
  }
  return right;
}

//midで積める荷物の個数(per k)
int Thenumber(int mid){
  int i,j,sum;
  for(i=0,j=0;j<k;j++){
    sum=0;
    while(sum+w[i]<=mid){
      sum+=w[i];
      if(++i==n)return ++i;
    }
  }
  return i;
}
