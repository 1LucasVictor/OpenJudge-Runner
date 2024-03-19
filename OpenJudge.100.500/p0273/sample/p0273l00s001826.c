#include<stdio.h>

int fb_num[45];

int fb(int n){
  if(n==1 || n==0)return fb_num[n]=1;
  if(fb_num[n]>0)return fb_num[n];
  return fb_num[n]=fb(n-1)+fb(n-2);
}
int main(){
  int n;

  scanf("%d",&n);
  printf("%d\n",fb(n));

  return 0;
}