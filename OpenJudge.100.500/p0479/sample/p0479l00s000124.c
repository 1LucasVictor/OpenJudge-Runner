#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  int n;
  scanf("%d",&n);
  int a[200001];
  int b[200001]={};
  for(int i=2;i<=n;i++){
    scanf("%d",&a[i]);
    b[a[i]]++;}

  for(int i=1;i<=n;i++){
    printf("%d\n",b[i]);}
  
  return 0;
}
