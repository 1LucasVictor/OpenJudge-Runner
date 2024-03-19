#include<stdio.h>
#define MAX 100
int main(){
  int num,i=0,j=0,k=0,stuck[MAX],key;
  scanf("%d",&num);
  for(i=0;i<num;i++){
    scanf("%d",&stuck[i]);

  }
  for(k=0;k<num;k++){
      printf("%d ",stuck[k]);
    }
  
  for(i=1;i<num;i++){
 
   
    printf("\n");
    key=stuck[i];
    j=i-1;
    while(j>=0 && stuck[j]>key){
      stuck[j+1]=stuck[j];
      j--;
    }
      stuck[j+1]=key;
       for(k=0;k<num;k++){
      printf("%d ",stuck[k]);
    }
      
  }
  printf("\n");
  return 0;
}

