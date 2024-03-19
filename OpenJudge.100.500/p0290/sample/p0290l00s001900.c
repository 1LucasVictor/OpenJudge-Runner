#include<stdio.h>
#include<math.h>

int main(){

  int n, t, count, i, j;
  int num[10000];

  scanf("%d",&n);

  for(i=0; i < n; i++){
    scanf("%d",&num[i]);
  }
  count = n;

  for (i = 0; i < n; i++){
    if (num[i] == 2) {
    }
    else if(num[i] % 2 == 0){
      count--; 
    }
    else{
      t = sqrt(num[i]);
      for(j=3; j<=t; j=j+2){
        if(num[i] % j == 0){
          count--;  
          break;  
        }
      }  
    }
  }

  printf("%d\n",count);

  return 0;
}