#include<stdio.h>
#include<stdlib.h>

int main(void){
  int zahyou[5],k,i,j,kyori,flag=0;
  for(i=0;i<5;i++){
  scanf("%d\n",&zahyou[i]);
  }
  scanf("%d",&k);
  
  for(i=0;i<5;i++){
    for(j=1;j<5-i;j++){
      kyori = abs(zahyou[i]-zahyou[j]);
      if(kyori>k){
        flag=1;
      }
    }
  }
  if(flag==0){
    puts("Yay!");
  }else{
    puts(":(");
  }
  return 0;
}
      