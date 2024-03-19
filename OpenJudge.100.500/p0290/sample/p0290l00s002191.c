#include<stdio.h>

int main()
{
  int data[10000];
  int n, i, j, count;
  
  scanf("%d", &n);
  for (i = 0; i < n; i++){
    scanf("%d", &data[i]);
  }
  
  count = 0;
  for( i = 0; i < n; i++){
    for( j = 2; j <= data[i]; j++){
      if ( j == data[i]){
        count +=1;
      } else if (data[i]%j == 0){
        break;
      }
    }
  }
  printf("%d\n", count);
  return 0;
}