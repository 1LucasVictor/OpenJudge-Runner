#include<stdio.h>
int main(){
  int a[10000],n,i,count=0;
int judge(int);
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
      count+=judge(a[i]);
    }
  printf("%d\n",count);
}
int judge(int a){
  int i;
  if(a<2) return 0;
  else if(a==2) return 1;
  if(a%2==0) return 0;
  for(i=3;i*i<=a;i+=2){
    if(a%i==0) return 0;
  }
  return 1;
}

