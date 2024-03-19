#include<stdio.h>


int main(void){
  int i,N;


  scanf("%d",&N);

  int array[N],j,big,max;

  for(i=0;i<N;i++){
    scanf("%d",&array[i]);
  }



  max=array[1]-array[0];
  for(i=1;i<N;i++){
    for(j=0;j<i;j++){
      big=array[i]-array[j];
      if(max<big){max=big;}

    }
  }

  printf("%d\n",max);
  return 0;
}

