#include<stdio.h>
int main(){
    int m,n,p,l,a,b,c,d;
   while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
   {m=b-a;
   n=m-c;
   if(n>0)
    printf("%d\n",n);
   else
    printf("0\n");}

  return 0;
}
