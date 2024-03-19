#include<stdio.h>
#include<math.h>
int main(){
 
  long int n,m;
  scanf("%ld %ld",&n,&m);
  
  long int i,x,y,count = 0;
  m*=m;
  
  for( i = 0; i<n;i++){
  	scanf("%ld %ld",&x,&y);
    if(x*x +y*y <=m){
    count++;
    }
  	
  
  }
 
  
  printf("%ld",count);
 
}