#include <stdio.h>

int main(){


 
  int i,j,key,num,array[100],k;
  
  
  scanf("%d",&num);
  for(i=0;i<num;i++){
    scanf("%d",&array[i]);
  }

  
  for(i=0;i<num;i++){
    printf("%-2d",array[i]);
  }
  printf("\n");
  
  for(i =1;i<num;i++){

    key = array[i];

    j = i -1;

    while(j >=0 && array[j] >key){

      array[j+1] = array[j];

      j = j -1;

      array[j+1] = key;
    }
    for(k=0;k<num;k++){
      printf("%-2d",array[k]);

  }
    printf("\n");
}
  return 0;
}