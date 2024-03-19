#include <stdio.h>
int main(){
  int top=0,a[200000]={},b,c[200000]={};
  scanf("%d\n",&b);
  for(int i=0;i<b-1;i++){
    scanf("%d",&c[i]);
  }
  for(int i=0;i<b-1;i++){
    if(c[i]==1)
      top++;
  }
  printf("%d\n",top);
  for(int i=0;i<b-1;i++){
    for(int j=i+1;j<b;j++){
    if(c[j]==i+2)
      a[i]++;
    }
    printf("%d\n",a[i]);
  }
  return 0;
}