#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
int main()
{
  long long int i,j,k,l;
  long long int N,M;
  long long int space;
  long long int A,B,C,D;
  char S[256];
  char T[256];
  scanf("%s",S);
  scanf("%s",T);
  
  i = strlen(T);
  i = i-1;
  T[i] = '\0';
  
 if( strcmp(S,T) == 0 ){
   printf("Yes\n");
 }
 else{
   printf("No\n");
 }
 
  return 0; 
  
}