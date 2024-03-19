#include<stdio.h>

int  truer(int N);
int main(){
  int N;
  scanf("%d",&N);
  if(truer(N)){
    printf("Yes\n");
  }
  else
    printf("No\n");
  return 0;
  
  
}

int truer(int N){
  for(int i= 1;i<10;i++)
    {
      if(N/i<10 && N%i==0)
	return 1;
    }
  return 0;
}
