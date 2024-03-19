#include <stdio.h>
#define N 36
#define exch(a, b) {card x = a; a = b; b = x;}
#define less(a, b) (a.num < b.num)
#define compexch(a, b) {if(less(a, b))exch(a, b);}

typedef struct{
  char mark, num;
}card;

void printarr(card *a, int n){
  int i;
  for(i = 0; i < n; i++){
    printf("%c%c", a[i].mark, a[i].num);
    printf((i == n - 1) ? "" : " ");
  }
  printf("\n");
}

void selectionSort(card *a, int n){
  int i, j, min, count = 0;
  for(i = 0; i < n - 1; i++){
    min = i;
    for(j = i + 1; j < n; j++)
      if(less(a[j], a[min])) min = j;
    if(min != i) exch(a[i], a[min]);
  }
}

void bubblesort(card *a, int n, int onlyOnce){
  int i, j, limit = (onlyOnce) ? 1 : n - 1;
  for(i = 0; i < limit; i++)
    for(j = n - 1; j >= i; j--)
      compexch(a[j], a[j - 1]);
}

int comparr(card *a, card *b, int n){
  int i;
  for(i = 0; i < n; i++)
    if(a[i].mark != b[i].mark) return 0;
  return 1;
}

int main(void){
  int n, i;
  char ch;
  card bubble[N], insert[N];
  scanf("%d%c", &n, &ch);
  for(i = 0; i < n; i++){
    scanf("%c%c%c", &bubble[i].mark, &bubble[i].num, &ch);
    insert[i] = bubble[i];
  }
  bubblesort(bubble, n, 0);
  printarr(bubble, n);
  printf("Stable\n");
  bubblesort(insert, n, 1);
  selectionSort(insert, n);
  printarr(insert, n);
  printf(comparr(bubble, insert, n) ? "Stable\n" : "Not stable\n");
  return 0;
}