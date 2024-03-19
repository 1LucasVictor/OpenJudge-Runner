#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
  char w[100];
  int A[100];
  int j=0;
  while( scanf("%s", w) != EOF ){
    if ( w[0] == '+' ){
      A[j-2]=A[j-2]+A[j-1];
      j--;
    } else if ( w[0] == '-' ){
      A[j-2]=A[j-2]-A[j-1];
      j--;
    } else if ( w[0] == '*' ){
      A[j-2]=A[j-2]*A[j-1];
      j--;
      } else {
      A[j] = atoi(w);
      j++;
    }
  }
  printf("%d\n",A[0]);
  return 0;
}
