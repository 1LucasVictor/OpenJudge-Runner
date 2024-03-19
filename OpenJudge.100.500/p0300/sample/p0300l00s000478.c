#include<stdio.h>

int S[100];
int T[100];

int count=0;
int Scount;
int Tcount;
int linearSearch(void);

int main(){

  scanf("%d",&Scount);
  while(count < Scount){
    scanf("%d",&S[count]);
    // printf("%d ",S[count]);
    count++;
  }
  //printf("\n");
  count = 0;

  scanf("%d",&Tcount);
  while(count < Tcount){
    scanf("%d",&T[count]);
    // printf("%d ",T[count]);
    count++;
  }
  //printf("\n");

  printf("%d\n",linearSearch());
}

int linearSearch(){
  int i = 0;
  int j = 0;
  int same = 0;
  while(i < Scount){
    // printf("%d\n",count);
    T[count] = S[i];  
    j = 0;
    //  printf("%d\n",T[count]);

    while(T[j] != S[i]){
      j++;
    }
    if(j != count) same++;
    i++;
  } 
  return same;
}
      