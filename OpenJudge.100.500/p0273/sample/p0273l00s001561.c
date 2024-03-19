#include <stdio.h>

int fibo[45];

int kansuu(int n){

  if(n==0||n==1) return fibo[n]=1;
  else if(fibo[n]!=-1) return fibo[n];
  else return fibo[n]=kansuu(n-1)+kansuu(n-2);

}

int main(){

  int n, i;
  for(i=0;i<45;i++) fibo[i]=-1;

  scanf("%d", &n);

  if(n==0||n==1) printf("1\n");
  else{
  printf("%d\n",kansuu(n));
  }
  
  return 0;
}
  
  

