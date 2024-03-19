#include <stdio.h>
int main(){
   int a,b,c;
   scanf("%d %d %d\n",&a,&b,&c);
   if(a==b && a==5 && c==7||a==5 && a==c && b==7 ||a==7 && b==c && b==5)
     printf("YES");
   else
     printf("NO");
}