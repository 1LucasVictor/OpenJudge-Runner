
#include<stdio.h>
#include<stdlib.h>
int printArray(int numbers[], int length);
int main(void){
  int numbers[3];
  int n=3;
  int i=0;
  int k,min,temp,j;
  int in;
  for(i=0;i<3;i++){
    scanf("%d",&numbers[i]);
  }
 
    
  for (i=0;i<n-1;i++){
    min=numbers[i];
    
    k=i;
    
    for(j=i+1;j<n;j++){
    
      if(numbers[j]<min){
	
	min=numbers[j];

	k=j;

      }
    }
    temp=numbers[i];

    numbers[i]=numbers[k];
   
    numbers[k]=temp;
  }

 
  printArray(numbers, n);

  return 0;
}

 
printArray(int numbers[], int length){
  int i=0;
  for (i = 0; i < length-1; i++) {
    printf("%d ", numbers[i]);
  }
  printf("%d\n",numbers[length-1]);
  }