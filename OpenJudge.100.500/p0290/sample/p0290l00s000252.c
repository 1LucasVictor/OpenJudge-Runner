#include <stdio.h>
#include <math.h>

int sosu(int);

int main(){

  int i,n,a,cnt=0;

  
  scanf("%d",&n);
 
  for(i=0;i<n;i++){


    //   printf(" i:%d\n",i);
    scanf("%d",&a);
    //  printf(" a:%d\n",a);

    
    if(sosu(a)==1)cnt++;
    
  }
  
  printf("%d\n",cnt);
  
  return 0;
}


int sosu(int x){

  int i;
  
  if (x==2)return 1;
  
  if (x<2 || x%2==0)return -1;

  i = 3;

   while (i <=sqrt(x)){
    if (x%i==0)return -1;
  
  i = i + 2;
   }

  return 1;	   

}

