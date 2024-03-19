#include<stdio.h>
int main(){
 int n,x,a,b,c,how=0;
 while(scanf("%d%d",&n,&x) && (n!=0 || x!=0)){
  for(a=1;a<n+1;a++){
   for(b=2;b<n+1;b++){
    for(c=3;c<n+1;c++){
     if(x == a + b + c ) {
      if(a!=b && b!=c && c!=a && a<b &&b<c) {
       how+=1;
       }
      }
     }
    }
   }
printf("%d\n",how);
how=0;
}


}
