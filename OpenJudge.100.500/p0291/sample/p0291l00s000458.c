#include <stdio.h>
main(){
  int n;
  int Rt[200000];
  int prof,x;
  int i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&Rt[i]);
  }
  prof = Rt[1]-Rt[0];
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      x = Rt[j]-Rt[i];
      if(prof<x)prof=x;
    }
  }
  printf("%d\n",prof);
}