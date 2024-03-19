#include<stdio.h>

#define max 101

int main(){
  int i,j,num,count = 0;
  int array[max][max],color[max],data[max],pi[max],min,kai;

  scanf("%d",&num);

  for(i = 0;i < num;i++){
    for(j = 0;j < num;j++){
      scanf("%d",&array[i][j]);
    }
  }
  
  for(i = 0;i < num;i++){
    color[i] = 0;
    pi[i] = -1;
    data[i] = 2001;
  }
  data[0] = 0;

  while(1){
    min = 2001;

    for(i = 0;i < num;i++){
      if(color[i] != 2 && data[i] < min){
        min = data[i];
        kai = i;
      }
    }
    if(min == 2001){
      break;
    }
    color[kai] = 2;

    for(i = 0;i < num;i++){
      if(array[kai][i] != -1 && color[i] != 2 && array[kai][i] < data[i]){
        pi[i] = kai;
        data[i] = array[kai][i];
        color[i] = 1;
      }
    }
  }

  for(i = 0;i < num;i++){
    if(pi[i] != -1){
      count += array[i][pi[i]];
    }
  }
  printf("%d\n",count);
  return 0;
}

