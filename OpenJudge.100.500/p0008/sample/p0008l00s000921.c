#include<stdio.h>

typedef struct{
  int n;
  int count;
}Num;

int main(void)
{
  Num num[30];
  int i = 0, j, k;

  if(i < 30){
    while(scanf("%d", &num[i].n) != EOF){
      if(num[i].n==0){
	num[i].count = 0;
      }else{
	num[i].count = 1;
	for(j=3; j<=num[i].n; j++){
	  for(k=2; k<j; k++){
	    if(j % k == 0){
	      break;
	    }
	  }
	  if(k == j){
	    num[i].count++;
	  }
	}
      }
      i++;
    }
  }

  for(j=0; j<i; j++){
    printf("%d\n", num[j].count);
  }

  return 0;
}