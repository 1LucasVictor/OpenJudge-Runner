#include <stdio.h>
int main(void){
  int R[200000];
  int i=0,j=0,len=0,max1=-99999999;
  while(scanf("%d",&R[i])==1){
    i++;
  }
  len=i;
    for(i=0;i<len;i++){
      for(j=i;j<len;j++){
        if(max1<(R[j]-R[i])){
          max1=R[j]-R[i];
        }
      }
    }
    printf("%d\n",max1);
  }