#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int i;
//	char s[4];

//	for(i=0;i<4;i++) scanf("%c",&s[i]);
  int N, A, B;
//int *agi;int min = 1000;
  scanf("%d",&N);
  scanf("%d",&A);
  scanf("%d",&B);

  double y = fmin(N*A, B);

  printf("%d", (int) y);

  return 0;


/*
	for(i=0;i<3;i++){
		if(s[i]==s[i+1]){
			printf("Bad\n");
			return 0;
		}
	}
	printf("Good\n");*/
}