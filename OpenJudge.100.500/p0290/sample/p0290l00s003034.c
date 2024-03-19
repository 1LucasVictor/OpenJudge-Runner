#include<stdio.h>

static const int N = 10000;

void PrimeC(int *Prime,int n){

  int i,j,net,count=0;
  
   for(i=0;i<n;i++){
 
    for(j=2;j < Prime[i];j++){

      if(Prime[i]%j==0){
	net=777;
	break;
      }
    }
    if(Prime[i]==2)
      count++;
    else if(net==0)
      count++;

    net=0;

   }

  printf("%d\n",count);
}

int main(){

  int n,i;
  int Prime[N];
  
  scanf("%d",&n);

  for(i=0;i<n;i++)
    scanf("%d",&Prime[i]);
  
  PrimeC(Prime,n);
  return 0;

}