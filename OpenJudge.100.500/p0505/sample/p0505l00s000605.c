#include<stdio.h>

int main(){
  int h,n;
  scanf("%d%d",&h,&n);
  int a;
  int ans=0;
  for(int i=0;i<n;i++){
    scanf("%d",&a);
    ans+=a;}
  if(ans>=h){
    printf("Yes\n");}
  else{
    printf("No\n");}


  return 0;
}
