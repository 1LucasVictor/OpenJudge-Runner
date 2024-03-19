#include<stdio.h>


int main(){

  int in[1024],out[1024],a,b,i,j;

  i=0;
  j=0;

  while(scanf("%d",&a) != EOF){
    if(a != 0)
      {
      in[i]=a;
      i++;
      }
    else{
  out[j] = in[i-1];
  i--;
  j++;
  }
  }

  while(i<j)
    {
      printf("%d\n",out[i]);
      i++;
    }

  return 0;
}