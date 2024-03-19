#include <stdio.h>
#include <stdlib.h>
int main(void){
  int *ip;
  int *emp;
  int num,i;
  scanf("%d",&num);
  ip = (int *)malloc(num * sizeof(int));
  emp = (int *)malloc(num * sizeof(int));
 
  for(int i = 0; i < num-1; i++){
    scanf("%d",&ip[i]);
    emp[--ip[i]]++;
  }

  for(int i=0; i < num; i++){
    printf("%d\n",emp[i]);
  }
  return 0;
}