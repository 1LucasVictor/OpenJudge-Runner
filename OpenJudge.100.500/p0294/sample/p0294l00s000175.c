#include<stdio.h>
int main(void){
  int N,i,j,num[36],mini=0,temp=0,s[36],n,te=0,stable=0,c_num[36],c_s[36];
  char ma[36],T,c_ma[36];
  scanf("%d",&N);
  for(i = 0 ; i < N ; i++){
    scanf(" %c%d",&ma[i],&num[i]);
  }
  for(n = 0 ; n < N ; n++){
    s[n] = n;
  }
  for(i = 0 ; i < N ; i++){
    c_num[i] = num[i];
    c_s[i] = s[i];
    c_ma[i] = ma[i];
  }
  /*BubbleSort*/
  for(i = 0 ; i < N ; i++){
    for(j = N-1 ; j > i ; j--){
      if(num[j] < num[j-1]){
	temp = num[j];
	T = ma[j];
	te = s[j];
	num[j] = num[j-1];
	ma[j] = ma[j-1];
	s[j] = s[j-1];
	num[j-1] = temp;
	ma[j-1] = T;
	s[j-1] = te;
      }
    }
  }
  for(i = 0 ; i < N ; i++){
    printf("%c%d",ma[i],num[i]);
    if(i < N-1){
      printf(" ");
      if(num[i] == num[i+1]){
	if(s[i] > s[i+1]){
	  stable = 1;
	}
      }
    }
  }
  if(stable == 1){
    printf("\nNot stable\n");
  } else {
    printf("\nStable\n");
  }
  stable = 0;
  for(i = 0 ; i < N ; i++){
    num[i] = c_num[i];
    s[i] = c_s[i];
    ma[i] = c_ma[i];
  }
  /*SelectionSort*/
  for(i = 0 ; i < N ; i++){
    mini = i;
    for(j = i+1 ; j < N ; j++){
      if(num[j] < num[j-1]){
	mini = j;
      }
    }
    temp = num[i];
    T = ma[i];
    te = s[i];
    num[i] = num[mini];
    ma[i] = ma[mini];
    s[i] = s[mini];
    num[mini] = temp;
    ma[mini] = T;
    s[mini] = te;
  }
  for(i = 0 ; i < N ; i++){
    printf("%c%d",ma[i],num[i]);
    if(i < N-1){
      printf(" ");
      if(num[i] == num[i+1]){
	if(s[i] > s[i+1]){
	  stable = 1;
	}
      }
    }
  }
  if(stable == 1){
    printf("\nNot stable\n");
  } else {
    printf("\nStable\n");
  }
  return 0;
}