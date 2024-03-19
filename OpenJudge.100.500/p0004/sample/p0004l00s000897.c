#include<stdio.h>

long gcd(long a,long b){
 long i;
 if(a<b){ i=a; a=b; b=i; }
 for(i=a%b;i!=0;i=a%b){
  a=b;
  b=i;
 }
 return b;
}
int main(){
 long a,b,gc;

 while(scanf("%ld %ld",&a,&b)!=EOF){
  gc=gcd(a,b);
  printf("%ld ",gc);
  if(a%gc==0) printf("%ld\n",(a/gc)*b);
  else if(b%gc==0) printf("%ld\n",(b/gc)*a);
  else printf("%ld\n",b*a/gc);
 }
 return 0;
}