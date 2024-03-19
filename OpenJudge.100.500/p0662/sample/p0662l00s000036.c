#include<stdio.h>
#include<string.h>

int main(){
  
  int A,B,C,D;
  scanf("%d %d %d %d",&A,&B,&C,&D);
  int numA[101]={0};
  int numC[101]={0};
  int imax=0;
  int imin=100;

  for(int i=A; i<=B; i++){
    numA[i]++;
  }

  for(int i=C; i<=D; i++){
    numC[i]++;
  }

  for(int i=1; i<=100; i++){
    //printf("%d %d\n",numA[i],numC[i]);
    if(numA[i] == 1 && numC[i] == 1 ){
      if(imin > i){
        imin = i;
      }
      if(imax < i){
        imax = i;
      }
    }
  }

  if(imax-imin<=0){
    printf("0");
  }else{
    printf("%d",imax-imin);
  }
  return 0;

}