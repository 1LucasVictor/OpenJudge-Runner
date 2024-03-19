#include <stdio.h>
#include <math.h>

void check(int a, int b, int c){
 int x,y,z;
 x=pow(a,2);
 y=pow(b,2);
 z=pow(c,2);
 if(z==x+y)printf("YES\n");
 else printf("NO\n");
} 




int main(void){
 int N,a,b,c;
 int i;

 scanf("%d",&N);
 for(i=0; i<N; i++){
   scanf("%d %d %d",&a,&b,&c);
   check(a,b,c);
 }

 return 0;
}