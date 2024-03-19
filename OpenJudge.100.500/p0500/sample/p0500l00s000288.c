#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(a,b) (a > b) ? a : b
#define MIN(a,b) (a < b) ? a : b
const int inf = 1000000000; // 10^9

int main (){
   int n,m;scanf("%d %d",&n,&m);
   int sc[2][5];for(int i = 0;i < m;i++)scanf("%d %d",&sc[0][i],&sc[1][i]);
   if(m == 0)printf("%d",0);
   for(int i = 0;i < m-1;i++){
      for(int j = i+1;j < m;j++){
         if(sc[0][i] == sc[0][j]){
            if(sc[1][i] != sc[1][j]){
               printf("%d",-1);
               return 0;
            }else {
               sc[0][i] = 0;
            }
         }
      }
   }
   
   int ans = 0;
   for(int i = 0;i < m;i++){
      if(sc[0][i] == 0)continue;
      switch(n+1 - sc[0][i]){
         case 1:
            ans += sc[1][i];
            break;
         case 2:
            ans += sc[1][i] * 10;
            break;
         case 3:
            ans += sc[1][i] * 100;
            break;
      }
   }
   printf("%d\n",ans);
}