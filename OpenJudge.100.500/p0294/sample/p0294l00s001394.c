#include <stdio.h>
struct Card{char suit[3];} ;

void bubbleSort(struct Card C[],int N){
  int i,j;
  struct Card t;
  for(i=0;i<N;i++){
    for(j=N-1;j>=i+1;j--){
      if(C[j].suit[1]<C[j-1].suit[1]){
        t=C[j];
        C[j]=C[j-1];
        C[j-1]=t;
      }
    }
  }
}

void selecitonSort(struct Card C[],int N){
  int i,j,minj;
  struct Card t;
  for(i=0;i<N;i++){
    minj=i;
    for(j=i;j<N;j++){
      if(C[j].suit[1]<C[minj].suit[1])minj=j;
    }
    t=C[i];
    C[i]=C[minj];
    C[minj]=t;
  }
}

int hantei(struct Card C0[],struct Card C[],int N){
  int i,j,h,l;
  for(i=0;i<N;i++){
    for(j=i+1;j<N;j++){
      for(l=0;l<N;l++){
	for(h=l+1;h<N;h++){
	  if(C[i].suit[1]==C[j].suit[1]&&C[i].suit[0]==C0[h].suit[0]&&C[j].suit[0]==C0[l].suit[0])return 0;
	}
      }
    }
  }
  return 1;
}

void syutryoku(struct Card C[],int N){
  int i;
  for(i=0;i<N;i++){
    if(i>0)printf(" ");
    printf("%s",C[i].suit);
  }
  printf("\n");
}
int main(){
  struct Card C0[100],C1[100],C2[100];
  int N,i;

  scanf("%d",&N);
  while(N>36||N<1){ scanf("%d",&N);}

  for(i=0;i<N;i++){
    scanf("%s",C0[i].suit);
  }
  for(i=0;i<N;i++){
    C1[i]=C0[i];
    C2[i]=C0[i];
  }

  bubbleSort(C1,N);
  selecitonSort(C2,N);

  syutryoku(C1,N);
  if(hantei(C0,C1,N))printf("Stable\n");
  else printf("Not stable\n");

  syutryoku(C2,N);
  if(hantei(C0,C2,N))printf("Stable\n");
  else printf("Not stable\n");
  
  return 0;
}

