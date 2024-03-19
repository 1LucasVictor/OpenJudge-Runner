#include <stdio.h>

#define max 100

int main(){
  int i,j,num,min,minj,ans=0;

  int data[max][max],flag[max],d[max];

  scanf("%d",&num);

  for(i = 0 ; i < num ; i++){
    flag[i] = 0;
    d[i] = 2001;
  }
  d[0] = 0;

  for(i = 0 ; i < num ; i++){
    for(j = 0 ; j < num ; j++){
      scanf("%d",&data[i][j]);
    }
  }

  for(i = 0 ; i < num-1 ; i++){
    min = 2001;
    
    for(j = 0 ; j < num ; j++){
      if(d[j] < min && flag[j] == 0 ){
	min = d[j];
	minj = j;
      }
    }
    flag[minj] = 1;
    for(j = 0 ; j < num ; j++){
      if(data[minj][j] != -1 && data[minj][j] < d[j] && flag[j] ==0){

	d[j] = data[minj][j];
      }
    }
  }
  for(i = 0 ; i < num ; i++){
    ans += d[i];
  }
  printf("%d\n",ans);

  return 0;

}