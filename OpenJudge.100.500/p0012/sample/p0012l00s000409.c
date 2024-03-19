#include<stdio.h>
main(){
  int n=0;
  int data[10]={0},tmp[10]={0};
  int i,j;
  for(i=0,j=0;~scanf("%d ",&n);i++){
    if(n==0){
      data[j]=tmp[i-1];
      tmp[i-1]=0;
      j++;
      i-=2;
    }
    else{
      tmp[i]=n;
    }
  }
  for(i=0;i<j;i++)
    printf("%d\n",data[i]);
  return 0;
}