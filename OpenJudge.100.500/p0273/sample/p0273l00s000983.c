#include <stdio.h>

int A[50];
int fibb(int );

int main ()
{
 int i,n;
 for(i=0;i<50;i++)
   {
     A[i]=-1;
   }
 scanf("%d",&n);
 printf("%d\n",fibb(n));

 
  return 0;
  
}
int fibb(int i){

  if(i==0 ||i==1) return A[i]= 1;
  else if(A[i] !=-1) return A[i];

  return A[i] =fibb(i-1)+ fibb(i-2);

}




