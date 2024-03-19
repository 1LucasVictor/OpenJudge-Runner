#include<stdio.h>
#define N 100000
#define M 50000


int main(void){
  int i, j, n, q, S[N], T[M], count=0;
  scanf("%d", &n);
  for(i=1; i <= n ;i++) scanf("%d", &S[i]);
  scanf("%d", &q);
  for(j=0; j<q ;j++)  scanf("%d", &T[j]);
  
  for(j=0; j < q;j++){
    i=0;
    S[n+1] = T[j];
    while(S[i] != T[j]){
       i++;
       // printf("%d\n", i);
      if(i == n) break;
      
      else if(S[i] == T[j]) {
	count++;
	//	printf("T[j]:%d\n", T[j]); 
	break;
      }
      //   i++;
      }
  }    
  printf("%d\n", count);
  return 0;  
}