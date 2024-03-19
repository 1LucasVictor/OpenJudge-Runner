#include <stdio.h>

struct {
  char mark;
  int num;
} typedef Card;

void bubble(int, Card *);
void select(int, Card *);
void result(int, Card *);

int main(){ 
  Card C[36] ,D[36];
  int n, x, i, j;

  scanf("%d" ,&n);
  scanf(" %c%d " ,&C[0].mark ,&C[0].num);
  for(i = 1; i < n - 1; i++) scanf("%c%d " ,&C[i].mark ,&C[i].num);
  scanf("%c%d" ,&C[n - 1].mark ,&C[n - 1].num);

  for(i = 0; i < n; i++) D[i] = C[i];

  bubble(n, C);
  select(n, D);

  return 0;
}

void bubble(int n, Card *C){

  char y;
  int x, i, j;

 for(j = 0; j < n; j++){
    for(i = n - 1; i > 0; i--){
      if(C[i].num < C[i - 1].num){ 
	x = C[i].num;
	C[i].num = C[i - 1].num;
	C[i - 1].num = x;

	y = C[i].mark;
	C[i].mark = C[i - 1].mark;
	C[i - 1].mark = y;
      }
    }
  }
 result(n, C);
 printf("Stable\n");
}

void select(int n, Card *D){

  char y;
  int min_d, min, x, i, j;

  for(i = 0; i < n; i++){
    min_d = D[i].num;
    min = i;
    for(j = i; j < n; j++){
      if(min_d > D[j].num){
	min_d = D[j].num;
	min = j;
      }
    }
    if(i != min){
      x = D[min].num;
      D[min].num = D[i].num;
      D[i].num = x;

      y = D[min].mark;
      D[min].mark = D[i].mark;
      D[i].mark = y;
    }
  }
  result(n, D);
  printf("Not stable\n");
}

void result(int n, Card *C){

  int i;

  for(i = 0; i < n - 1; i++) printf("%c%d " ,C[i].mark ,C[i].num);
  printf("%c%d\n" ,C[n - 1].mark ,C[n - 1].num);
  /*printf("Stable\n");
    printf("Not stable\n");*/

}