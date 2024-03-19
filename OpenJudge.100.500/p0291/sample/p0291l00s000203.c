#include <stdio.h>
int main(void){
  int R[2000000];
  int i=0,j=0,len=0,max1=-999999999,min1=99999999;
  scanf("%d",&len);
  while(scanf("%d",&R[i])!=EOF){
    i++;
  }
    for(i=0;i<len;i++){
      if(min1>R[i]){
        min1=R[i];
      }
      if(max1<(R[i+1]-min1)){
        max1=R[i+1]-min1;
      }
    }
    printf("%d\n",max1);
}