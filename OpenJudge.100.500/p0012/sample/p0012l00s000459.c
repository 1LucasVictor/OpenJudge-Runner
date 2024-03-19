#include <stdio.h>
int main(void){
  int data[100],result[100],i=0,j=0,count=0;
  while(1){
    scanf("%d",&data[i]);
    if(feof(stdin))break;
    if(data[i]!=0){
      i++;
      count++;
    }else{
      result[j]=data[i-1];
      i--;
      j++;
    }
  }
  for(i=0;i<count;i++){
    printf("%d\n",result[i]);
  }
  return(0);
}