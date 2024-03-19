#include <stdio.h>

int main(){
  int a,b,i,j,k,l;
  while(scanf("%d",&a)!=EOF){
    b=0;
    for(i=0;i<=9;i++){
    for(j=0;j<=9;j++){
    for(k=0;k<=9;k++){
    for(l=0;l<=9;l++){
      if(a==(i+j+k+l)){
        b++;break;
      }
    }}}}
    printf("%d\n",b);
  }
  return 0;
}