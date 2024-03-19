#include<stdio.h>
int main() {
  int i, j, max, count=0, num[6];
  
  for(i=0; i<6; i++) {
  	scanf("%d", &num[i]);
  }
  max = num[5];
  
  for(i=0; i<5; i++) {
    for(j=1; j<6; j++) {
      if((num[j]-num[i]) > max) count++;
    }
  }
  if(count > 0) printf(":(");
  else printf("Yay!");
  
  return 0;
}