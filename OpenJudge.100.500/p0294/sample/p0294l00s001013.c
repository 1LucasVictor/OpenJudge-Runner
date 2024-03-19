#include<stdio.h>
typedef struct{
  char pattern;
  int value;
} card;
void BubbleSort(int, card *);
void SelectionSort(int, card *);
main(){
  card C1[36], C2[36];
  int N, i, j;
  scanf("%d", &N);
  for(i = 0; i < N; i++){
    scanf(" %c%d", &C1[i].pattern, &C1[i].value);
    C2[i].pattern = C1[i].pattern;
    C2[i].value = C1[i].value;
  }
  BubbleSort(N, C1);
  SelectionSort(N, C2);
  return 0;
}

void BubbleSort(int N, card *C){
  int i, j, k, l, a, flag, Stable = 0;
  char c;
  card S[36];
  for(i = 0; i < N; i++){
    S[i].pattern = C[i].pattern;
    S[i].value = C[i].value;
  }
  flag = 1;
  while(flag){
    flag = 0;
    for(i = N-1; 0 < i; i--){
      if(C[i].value < C[i-1].value){
  	a = C[i].value;
  	c = C[i].pattern;
  	C[i].value = C[i-1].value;
  	C[i].pattern = C[i-1].pattern;
      	C[i-1].value = a;
  	C[i-1].pattern = c;
  	flag = 1;
      }
    }
  }
  for(i = 0; i < N; i++){
    if(i == N-1){
      printf("%c%d\n", C[i].pattern, C[i].value);
    }
    else printf("%c%d ", C[i].pattern, C[i].value);
  }
  for(i = 0; i < N; i++){
    for(j = i+1; j < N; j++){
      for(k = 0; k < N; k++){
	for (l = k+1; l < N; l++){
	  if(C[i].value == C[j].value && C[i].value == S[k].value && C[j].value == S[l].value && C[i].pattern == S[k].pattern){
	    Stable = 1;
	  }
	}
      }
    }
  }
  if(Stable == 1){
    printf("Stable\n");
  }
  else if(Stable == 0){
    printf("Not stable\n");
  }
}

void SelectionSort(int N, card *C){
  int i, j, k, l, minj, a, Stable=0;
  char c;
card S[36];
  for(i = 0; i < N; i++){
    S[i].pattern = C[i].pattern;
    S[i].value = C[i].value;
  }
  for(i = 0; i < N; i++){
    minj = i;
    for(j = i; j < N; j++){
      if(C[j].value < C[minj].value){
	minj = j;
      }
    }
    a = C[i].value;
    c = C[i].pattern;
    C[i].value = C[minj].value;
    C[i].pattern = C[minj].pattern;
    C[minj].value = a;
    C[minj].pattern = c;
  }
  for(i = 0; i < N; i++){
    if(i == N-1){
      printf("%c%d\n", C[i].pattern, C[i].value);
    }
    else printf("%c%d ", C[i].pattern, C[i].value);
	   }
  for(i = 0; i < N; i++){
    for(j = i+1; j < N; j++){
      for(k = 0; k < N; k++){
	for (l = k+1; l < N; l++){
	  if(C[i].value == C[j].value && C[i].value == S[k].value && C[j].value == S[l].value && C[i].pattern == S[k].pattern){
	    Stable = 1;
	  }
	}
      }
    }
  }
  if(Stable == 1){
    printf("Stable\n");
  }
  else if(Stable == 0){
    printf("Not stable\n");
  }
}