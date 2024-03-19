#include<stdio.h>
int main(){
  int array[5];
  int i,k,p,j;
  p=0;
  for(i=0;i<5;i++){
    scanf("%d",&array[i]);
  }
  scanf("%d",&k);
  for(i=0;i<5;i++){
    for(j=i;j<5;j++){
      if(k<array[j]-array[i]){
        p+=1;
      }
    }
  }
  if(p==0){
    printf("Yay!\n");
  }else{
    printf(":(\n");
  }
}