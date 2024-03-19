#include<stdio.h>
#define N 36

struct Card{
  char pattern;
  int value;
};
typedef struct Card card;

void BubbleSort(card*, int);
void SelectionSort(card*, int);
int IsStable(card*, card*, int);
void PrintState(card*, int);

void BubbleSort(card *C1, int n){
  int i,j,flag;
  card tmp;
  while(flag){
    flag=0;
    for(j=n-1;j>=1;j--){
      if(C1[j].value < C1[j-1].value){
        tmp=C1[j];
        C1[j]=C1[j-1];
        C1[j-1]=tmp;
        flag=1;
      }
    }
  }
}

void SelectionSort(card *C2, int n){
  int i,j,minj;
  card tmp;
  for(i=0;i<n-1;i++){
    minj=i;
    for(j=i;j<n;j++) if(C2[j].value < C2[minj].value) minj=j;
    tmp=C2[i];
    C2[i]=C2[minj];
    C2[minj]=tmp;
  }
}

int IsStable(card *C1, card *C2, int n){
  int i;
  for(i=0;i<n;i++) if(C1[i].pattern != C2[i].pattern) return 0;
  return 1;
}

void PrintState(card *C, int n){
  int i;
  for(i=0;i<n;i++){
    printf("%c%d",C[i].pattern,C[i].value);
    if(i!=n-1) printf(" ");
  }
  printf("\n");
}

int main(void){
  int n,i,j;
  card data[N],C1[N], C2[N];

  //input
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf(" %c%d",&data[i].pattern,&data[i].value);
    C1[i]=data[i];
    C2[i]=data[i];
  }

  //check data
  /*for(i=0;i<n;i++) printf("%c%d ",&data[i].pattern,&data[i].value);
    printf("\n");*/

  BubbleSort(C1,n);
  SelectionSort(C2,n);

  PrintState(C1,n);
  printf("Stable\n");

  PrintState(C2,n);
  if(IsStable(C1, C2, n)) printf("Stable\n");
  else printf("Not stable\n");

  return 0;
}