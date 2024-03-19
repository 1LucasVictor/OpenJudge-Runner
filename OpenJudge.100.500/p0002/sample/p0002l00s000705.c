#include<stdio.h>
int main(void){
  int data[3];
  int size,i;
  scanf("%d", &size);
  for(i=0;i<size;i++){
    scanf("%d %d %d", &data[0], &data[1], &data[2]);
    if((data[0]*data[0] + data[1]*data[1] == data[2]*data[2])||
       (data[1]*data[1] + data[2]*data[2] == data[0]*data[0])||
       (data[2]*data[2] + data[0]*data[0] == data[1]*data[1])){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }

  return 0;
}