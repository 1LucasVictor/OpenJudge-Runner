#include <stdio.h>

void change(int);

int main(void){

  int len;

  scanf("%d",&len);

  change(len);


  return 0;

}

void change(int len){

  int i,j,f,key;
  int A[len];

  for(i=0;i<len;i++)
    scanf("%d",&A[i]);

  for(i=0;i<len;i++)
    printf("%d ",A[i]);

  printf("\n");

  for(j=1;j<len;j++){
    key = A[j];
    i = j - 1;
    while(i >= 0 && A[i] > key){
      A[i+1] = A[i];
      i = i - 1;
      A[i+1] = key;
    }
    for(f=0;f<len;f++)
      printf("%d ",A[f]);
    printf("\n");
  }
}