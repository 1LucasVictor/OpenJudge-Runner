#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main(void){
int N;
scanf("%d",&N);
bool OK = true;
int A[N];
for(int i = 0; i < N;i++)scanf("%d",&A[i]);
for(int i = 0; i < N;i++){
  if(A[i]%2 == 0){
    if(A[i]%3 != 0 && A[i]%5 != 0)OK == false;
  }
}
  if(OK == true)printf("APPROVED");
  else printf("DENIED");
}