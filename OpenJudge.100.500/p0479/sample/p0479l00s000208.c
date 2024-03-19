#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){
  int N,r,q;

  scanf("%d",&N);
  int a[N];
  for(int i=0;i<N;i++)
    a[i]=0;
  for(int i = 0; i< N-1; i++){
    scanf("%d",&r);
//    printf("%d/",r);
    q = a[r-1];
    q++;
    a[r-1] = q;
  }
  for(int i=0;i<N;i++)
    printf("%d\n",a[i]);
 
  return 0;
  
}