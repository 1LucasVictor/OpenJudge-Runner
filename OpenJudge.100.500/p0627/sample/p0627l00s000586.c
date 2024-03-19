#include<stdio.h>

int main(void)
{
  int a = 0;
  int b = 0;
  int data[3] = {0};
  int buffer = 0;
  int i = 0, j = 0;

  scanf("%d %d", &a, &b);

  data[0] = a + b;
  data[1] = a - b;
  data[2] = a * b;

  for(i = 0; i< 2; i++){
    for(j = 1; j< 3; j++){
      if(data[i] < data[j]){
        buffer = data[i];
        data[i] = data[j];
        data[j] = buffer;
      }
    }
  }

  printf("%d\n", data[0]);

  return 0;

}
