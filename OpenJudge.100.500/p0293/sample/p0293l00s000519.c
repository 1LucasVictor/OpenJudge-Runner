#include <stdio.h>

int main(){

  int n,i,j,min = 120,sita = 0,temp,sum = 0;
  int array[124] = {};

  array[120] = 124;
  scanf("%d",&n);

  for(i = 0;i < n;i++){
    scanf("%d",&array[i]);
  }
  
  while(1){
    for(i = sita;i < n;i++){
      if(array[i] < array[min]){
	min = i;
      }    
    }
     if(array[sita] != array[min]){
      temp = array[sita];
      array[sita] =array[min];
      array[min] = temp;  
      sum++;
      }
     sita++;
    /* printf("sita = %d,min = %d,array[sita] = %d\n",sita,array[min],array[sita]);
       for(i = 0;i < n;i++){
       if(i != n - 1) printf("%d ",array[i]);
       else printf("%d",array[i]);
       }
       printf("\n");*/
 
    if(sita == n - 1) break;
    min = 120;
  }

  for(i = 0;i < n;i++){
    if(i != n - 1) printf("%d ",array[i]);
    else printf("%d",array[i]);
  }
  printf("\n");
  printf("%d\n",sum);
  
  return 0;
}
  