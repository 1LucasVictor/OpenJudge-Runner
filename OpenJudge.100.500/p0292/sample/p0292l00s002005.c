#include<stdio.h>

main(){

  int i,j,key = 0,count = 0,array[100],n;

  scanf("%d",&n);

  for(i = 0; i < n; i++){
    scanf("%d",&array[i]);
  }

  for(i = 0; i < n; i++){
    for(j = n-1; j > i; j--){
      
      if(array[j] < array[j-1]){
	key = array[j];
	array[j] = array[j-1];
	array[j-1] = key;
	count++;
      }

    }
  }

  for(i = 0; i < n; i++){
    if(i < n-1) printf("%d ",array[i]);
    else if(i = n-1) printf("%d\n",array[i]);
  }

  printf("%d\n",count);

  return 0;

}