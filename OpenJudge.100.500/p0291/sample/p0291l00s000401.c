#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n;
  int max = -1000000000;
  int mini = 1000000001;
  int minusMax[2];
  int pulusMax[2];
  int flug = 0;
  int max2 = -1000000000;
  
  scanf("%d",&n);

  if(n < 2 || 200000 < n){
    exit(0);
  }

  int Rt[n];

  for(int i=0; i<n; i++){
    
    scanf("%d",&Rt[i]);

    if(Rt[i] < 1 || 1000000000 < Rt[i]){
      exit(1);
    }

    if(Rt[i] <= mini){
      minusMax[0] = Rt[i] - mini;
      mini = Rt[i];
      minusMax[1] = i;
    }
    if(Rt[i] >= max){
      pulusMax[0] = Rt[i] - max;
      max = Rt[i];
      pulusMax[1] = i;
      if(pulusMax[1] > minusMax[1]){
	pulusMax[0] = max -mini;
	flug = 1;
      }
    }

    if(flug == 0){
      if(Rt[i] > max2 && max > Rt[i]){
	minusMax[0] = Rt[i] - mini;
	max2 = Rt[i];
      }
    }
    
  }
  if(flug == 1){
    printf("%d\n",pulusMax[0]);
  } else printf("%d",minusMax[0]);

  return 0;
}

