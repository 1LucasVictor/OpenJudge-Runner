#include<stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  int a[n];
  int ans=0;
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]%2==0 && a[i]%3!=0 && a[i]%5!=0){
      ans=1;}}

  if(ans==0){
    printf("APPROVED\n");}
  else{
    printf("DENIED\n");}

  return 0;
}
