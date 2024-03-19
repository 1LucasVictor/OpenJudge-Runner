#include <stdio.h>
#include <math.h>

int main(){
    
 int n;
 int d;
 int a=0;
 int x,y;
 
 scanf("%d%d",&n,&d);
  for(int i = 0; i < n; i++) {
   scanf("%d%d",&x,&y); 
  long long z=x*x+y*y;
   double w = sqrt(z);

if (w<=d){
    a=a+1;
}

  }

printf("%d",a);
    return 0;
}