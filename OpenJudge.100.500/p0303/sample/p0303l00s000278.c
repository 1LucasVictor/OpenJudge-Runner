#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

// checkWeight checks if the packages in belt can be loaded onto k trucks without exceeding the maxWeight.
int checkWeight(int maxWeight, int k, int *belt, int n){
  int i, currentWeight = 0, trucksUsed = 1;
  for ( i = 0; i < n; i++ ){
    int nextWeight = currentWeight + belt[i];
    if ( nextWeight > maxWeight ){
      trucksUsed++;
      currentWeight = 0;
      i--;
      if ( trucksUsed > k )
	return 0;
    } else
      currentWeight = nextWeight;
  }
  return 1;
}

int main(){
  int i, n, k, min = 0, max, middle;
  scanf(" %d", &n);
  scanf(" %d", &k);
  
  int *belt = (int *) malloc(sizeof(int[n]));
  for ( i = 0; i < n; i++ )
    scanf(" %d", belt + i);
  
  for ( i = 0; i < n; i++ )
    if ( belt[i] > min )
     min = belt[i];
  
  max = min * n;
  
  if ( checkWeight(min, k, belt, n) ){
    printf("%d\n", min);
    return 0;
  }
  
  while ( min < max-1 ){
    middle = (min + max) / 2;
    if ( checkWeight(middle, k, belt, n) )
      max = middle;
    else
      min = middle;
  }
  printf("%d\n", max);
  free(belt);
  return 0;
}

