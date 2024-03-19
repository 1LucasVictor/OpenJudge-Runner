#include<stdio.h>
 
int main() {
  int array[4];
  for(int i = 0; i < 4; i++) {
    scanf("%1d", &array[i]);
  }
  for(int i = 0; i < 3; i++) {
    if(array[i] == array[i+1]) {
      printf("Bad\n");
      return 0;
    }
  }
  printf("Good\n");
  return 0;
}