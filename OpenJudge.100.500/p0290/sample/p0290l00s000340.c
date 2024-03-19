#include <stdio.h>


int cul(int);

int main(){
  int a,n,i,flag = 0;
  
  scanf("%d",&n);
  if(n < 1 || n > 10000)return 0;
  
  for(i = 0; i < n; i++){
    
    scanf("%d",&a);
    if(a < 2 || a > 100000000)return 0;
    
    if(cul(a)== 1)flag++;
  }

  printf("%d\n",flag);
  return 0;
}

int cul(int a){ 
  int i,j = 3;
 
    if(a == 2)return 1;
    else if(a%2 == 0)return 0;
    else{
      
      while(j <= sqrt(a)){
	if(a%j == 0)return 0;
	 j += 2;
      }
    }

  return 1;
}

