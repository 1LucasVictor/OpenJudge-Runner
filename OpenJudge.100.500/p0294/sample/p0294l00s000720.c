#include <stdio.h>

typedef struct {
  char c;
  int n;
} card;

void Bubblesort(card *, int);
void SelectionSort(card *, int);

int main() {

  card A[36],B[36],x;
  int i,j,k,N;

  scanf("%d",&N);

  for(i = 0; i < N; i++) {
    scanf(" %c%d",&A[i].c,&A[i].n);
  }
   for(i = 0; i < N; i++) {
      B[i].c = A[i].c;
      B[i].n = A[i].n;
    }

  Bubblesort(A,N);
  SelectionSort(B,N);
  return 0;
}


//??????????????????                                                                                        
void Bubblesort(card *A, int N) {
  int i,j,k;
  card x,B[36];
   for(i = 0; i < N; i++) {
      B[i] = A[i];
    }

  for(i = 0; i < N-1; i++) {
    for(j = N-1; j > i; j--) {
      if(A[j].n < A[j-1].n) {
     x.c = A[j].c;
     x.n = A[j].n;
     A[j].c = A[j-1].c;
     A[j].n = A[j-1].n;
     A[j-1].c = x.c;
     A[j-1].n = x.n;

      }
    }
  }
 for(i = 0; i < N; i++) {
    printf("%c%d",A[i].c,A[i].n);
    if(N-1 != i) printf(" ");
  }
  printf("\n");
printf("Stable\n");
  return;
}


//?????¬????????§????????????                                                                                  
void SelectionSort(card *A, int N) {
  int i,j,flag,minj;
  card x,B[36];
     for(i = 0; i < N; i++) {
      B[i].n = A[i].n;
      B[i].c = B[i].c;
    }


  for(i = 0; i < N; i++) {
    minj = i;
    flag = 0;
    for(j = i; j < N; j++) {
      if(A[j].n < A[minj].n) {
    minj = j; /*????°????????????£??????????????????????¨???¶?????????????????????*/
    flag = 1; /*for?????§?¢??????????????????§???????°???????????????£??????flag???1????????????*/

      }
    }
    if(flag == 1) {
      x.c = A[i].c;
      x.n = A[i].n;
      A[i].c = A[minj].c;
      A[i].n = A[minj].n;
      A[minj].c = x.c;
      A[minj].n = x.n;
    }
  }
 for(i = 0; i < N; i++) {
    printf("%c%d",A[i].c,A[i].n);
      if(N-1 != i) printf(" ");
    }
    printf("\n");
    for(i = 0; i < N; i++) {
      if(B[i].n != A[i].n) flag = 2;
    }
    if(flag == 2) printf("Not stable\n");
  else printf("Stable\n");
  return;
}