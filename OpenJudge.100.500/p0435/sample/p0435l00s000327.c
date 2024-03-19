#include<stdio.h>
#include<math.h>
int main(){
 
  int n,m;
  scanf("%d %d",&n,&m);
  
  long i,x,y,count = 0;
  m*=m;
  
  for( i = 0; i<n;i++){
  	scanf("%ld %ld",&x,&y);
    if(x*x +y*y <=m){
    count++;
    }
  	
  
  }

  
  printf("%ld",count);
 
}