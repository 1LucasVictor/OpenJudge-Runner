#include <stdio.h>
 
int main()
{
 long n, i, j, flg, ans=0;
 while(scanf("%ld", &n) != EOF){
  ans=0;
  for(i=2; i<=n; i++){
   flg=0;
   for(j=2; j<i && flg==0; j++){
    if(i%j==0) flg++;
   }
   if(flg==0) ans++;
  }
  printf("%d\n", ans);
 }
 return(0);
}