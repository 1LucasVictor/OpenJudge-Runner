#include<stdio.h>

int main(){
   int n,m,i,j,sum = 0,s,c,ans = -1;
   scanf("%d %d",&n,&m);
   int judge[3];
   for(i = 0; i < 3; i++){
      judge[i] = 0;
   }
   for(i = 0; i < m; i++){
      scanf("%d %d",&s,&c);
      if(n == 3){
         if(s == 1 && judge[0] == 0){
               sum += c*100;
               judge[0] = 1;
         }else if(s == 2 && judge[1] == 0){
            sum += c*10;
            judge[1] = 1;
         }else if(s == 3 && judge[2] == 0){
            sum += c;
            judge[2] = 1;
         }
         if(sum/100 >= 1){
            ans = sum;
         }
      }else if(n = 2){
         if(s == 1 && judge[0] == 0){
            sum += c*10;
            judge[0] = 1;
         }else if(s == 2 && judge[1] == 0){
            sum += c;
            judge[1] = 1;
         }
         if(sum/10 >= 1){
            ans = sum;
         }
      }else{
         if(s == 1 && judge[0] == 0){
            sum += c;
            judge[0] = 1;
         }
         if(sum >= 1){
            ans = sum;
         }
      }
   }
   printf("%d",ans);
   return 0;
}
