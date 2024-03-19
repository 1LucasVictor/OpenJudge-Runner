#include <stdio.h>

int main(void){
  int a[3] = { 0 };
  int b, c, temp;
  scanf("%d %d", &b, &c);
  a[0] = b + c;
  a[1] = b - c;
  a[2] = b * c;
  for(int i = 0; i < 3; i++){
    for(int j = i + 1; j < 3; j++){
      if(a[i] < a[j]){
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
      }
    }
  }
  printf("%d\n", a[0]);
  return 0;
}