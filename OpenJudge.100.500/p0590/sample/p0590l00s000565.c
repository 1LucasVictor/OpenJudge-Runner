#include <stdio.h>
#define abs(a) ((a)<0 ? -(a) : (a))

int main(){
  int dish[5];
  int k;
  for(int i=0; i<5; i++)
    scanf("%d", &dish[i]);
  scanf("%d", &k);
  for(int i=0; i<4; i++){
    for(int j=i+1; j<5; j++){
      if(abs(dish[i]-dish[j]) > k){
	printf(":(\n");
	return 0;
      }
    }
  }
  printf("Yay!\n");
  return 0;
}
