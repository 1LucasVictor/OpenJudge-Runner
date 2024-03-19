#include<stdio.h>

int main(){
  
  int a[100][100]={0};
  int num,i,j,t=0,min[100];

  scanf("%d",&num);
  
  
  for(i = 0; i < num; i++){
    for(j = 0; j < num; j++){
      scanf("%d",&a[i][j]);
    }
  }
  
  for(i = 0; i < num; i++){
    min[i] = 1;
    for(j = 0; j < num; j++){
      if(a[i][j] > 0 && min[i] > a[i][j]){
	min[i] = a[i][j];
      }
    }
  }
  
  for(i = 0; i < num; i++){
    t += min[i];
  }
  
  printf("%d\n",t);
  return 0;
}