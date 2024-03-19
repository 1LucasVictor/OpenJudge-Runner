#include<stdio.h>
#include<math.h>

int main()
{
  int i, j;
  int min = 2019;
  int temp;
  int L,R;

  scanf("%d", &L);
  scanf("%d", &R);

  for(i=L; i<=R; i++){
    for(j=i+1; j<=R; j++){
      temp = (i*j) % 2019;
      if(temp < min){
        min = temp;
      }
    }
  }

  printf("%d", min);

  return 0;

}