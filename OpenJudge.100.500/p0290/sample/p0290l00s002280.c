#include<stdio.h>


int isPrime(int);
int main () {

  int a,i,counter=0,n[10000];

  scanf("%d",&a);
  for(i=0;i<a;i++){

    scanf("%d",&n[i]);

  }
  
   for(i=0;i<a;i++){

     if(isPrime(n[i])==1)
       counter++;
     
  }

   printf("%d\n",counter);
   
   return 0;

}

int isPrime(int x){

  int i;
  
  if(x <= 1)
    return 0;

  for(i=2;i<x;i++)
    {
      if(x%i == 0)
	return 0;
    }
  
  return 1;
}