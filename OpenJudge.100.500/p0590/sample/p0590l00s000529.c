#include<stdio.h>
int main(){
  int a[5],k,i,j,x,s=0;
  for(i=0;i<5;i++){
  	scanf("%d",&a[i]);
  }
  scanf("%d",&k);
  for(i=0;i<5;i++){
    for(j=i+1;j<5;j++){
      x=a[j]-a[i];
      if(x<=k){
      }else{
       s++;
      }
    }
  }
  if(s==0){
    printf("Yay!");
  }else{
    printf(":(");
  }
  return 0;
}