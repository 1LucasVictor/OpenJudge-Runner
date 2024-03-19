#include <stdio.h>


int main(int argc, char **argv)
{
  int a,b,xxx,i,j;
  int x[3];
  scanf("%d %d",&a,&b);
  x[0] = a + b;
  x[1] = a - b;
  x[2] = a * b;
  for(i = 0 ; i < 2 ; i++){
    for(j = i ; j < 2 ; j++){
      if(x[j] > x[j + 1]){
        xxx = x[j];
        x[j] = x[j + 1];
        x[j + 1] = xxx;
      }
    }
  }
  printf("%d\n",x[2]);  

  return 0;
}
