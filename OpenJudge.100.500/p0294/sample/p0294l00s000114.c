#include<stdio.h>

typedef struct{
  int value[36];
  char mark[36];
} Card;

void judge(char *);
void bubble(Card, char *, int);
void select(Card, char *, int);

int main(){
  int i, j, k, n, tmp, key;
  Card card;
  char pair[5];

  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%*c%c%d", &card.mark[i], &card.value[i]);
  }
  
  for(i=0; i<n; i++){
    for(j=i+1; j<n; j++){
      if(card.value [i] == card.value[j]){
	pair[0] = card.mark[i];
	pair[1] = card.mark[j];
      }
    }
  }
  bubble(card, pair, n);
  select(card, pair, n);

  return 0;
}




void judge(char *pair){
  if(pair[0] == pair[2] && pair[1] == pair[3]) printf("Stable\n");
  else printf("Not stable\n");
}

void bubble(Card card, char *pair, int n){
  int i, j, tmp;
  for(i=0; i<n; i++){ //バブル
    for(j=n-1; j>i; j--){
      if(card.value[j] < card.value[j-1]){
	tmp = card.value[j];
	card.value[j] = card.value[j-1];
	card.value[j-1] = tmp;
	
	tmp = card.mark[j];
	card.mark[j] = card.mark[j-1];
	card.mark[j-1] = tmp;
      }
    }
  }

  for(i=0; i<n-1; i++){
    printf("%c%d ", card.mark[i], card.value[i]);
  } printf("%c%d\n", card.mark[i], card.value[i]);
  
  for(i=0; i<n; i++){
    for(j=i+1; j<n; j++){
      if(card.value[i] == card.value[j]){
	pair[2] = card.mark[i];
	pair[3] = card.mark[j];
      }
    }
  }
  judge(pair);
}

void select(Card card, char *pair, int n){
  int i, j, minJ, tmp;
  for(i=0; i<n; i++){
    minJ = i;
    for(j=i; j<n; j++){
      if(card.value[j] < card.value[minJ]){
	minJ = j;
      }
    }
    if(minJ != i){
      tmp = card.value[i];
      card.value[i] = card.value[minJ];
      card.value[minJ] = tmp;

      tmp = card.mark[i];
      card.mark[i] = card.mark[minJ];
      card.mark[minJ] = tmp;
    }
  }
  for(i=0; i<n-1; i++){
    printf("%c%d ", card.mark[i], card.value[i]);
  } printf("%c%d\n", card.mark[i], card.value[i]);

  for(i=0; i<n; i++){
    for(j=i+1; j<n; j++){
      if(card.value[i] == card.value[j]){
	pair[2] = card.mark[i];
	pair[3] = card.mark[j];
      }
    }
  }
  judge(pair);
}

