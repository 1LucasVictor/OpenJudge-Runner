#include<stdio.h>
#include<stdlib.h>

int main(void){
  int n,q;
  int i;
  int t = 0;
  
  scanf("%d", &n);
  scanf("%d", &q);
  char name[n][100];
  int time[n];
  
  //  printf("n = %d, q = %d\n",n,q);
  for(i=0; i<n; i++){
    scanf("%s", name[i]);
    scanf("%d", &time[i]);
  }
  /*
  for(i=0; i<n; i++){
    printf("%s %d\n", name[i],time[i]);
  }
  */
  int count = 0;
  i = 0;
  
  while(count!=n){
    if(time[i]!=0){
      if(time[i] <= q){
	t+=time[i];
	printf("%s %d\n", name[i], t);
	time[i] = 0;
	count++;
      }else{
	t += q;
	//	printf("handle %s remain= %d , time = %d\n",name[i],time[i],t);
	time[i] -=  q;
      }
    }
    i++;
    if(i==n) i=0;
  }
  
  /*
  while( scanf("%s", A) != EOF){ 
    // printf("%s\n",A);
    a = atoi(A);
    if(a!=0){
      S[p] = a;
      // printf("S[%d] = %d\n",p,S[p]);
      p++;
    }else{
      if(A[0]=='+')
	S[p-2] = S[p-2] + S[p-1];
      if(A[0]=='-')
	S[p-2] = S[p-2] - S[p-1];
      if(A[0]=='*')
	S[p-2] = S[p-2] * S[p-1];
      // printf("S[%d] = %d\n",p-2,S[p-2]);
      p--;
    }
  }
  */
  return 0;
}