#include<stdio.h>

int main(){
   int n,m,i,j,sum = 0,s,c,ans = -1,a;
   scanf("%d %d",&n,&m);
   int judge[3];
   for(i = 0; i < 3; i++){
      judge[i] = 0;
   }
   for(i = 0; i < m; i++){
      scanf("%d %d",&s,&c);
      if(n == 3){
         if(s == 1){
            if(judge[0] == 0){
               judge[0] = 1;
            }else{
               sum -= sum/100*100;
            }
            sum += c*100;
         }else if(s == 2){
            if(judge[1] == 0){
               judge[1] = 1;
            }else{
               if(sum>100){
                  a = sum/10%10;
                  sum -= a*10;
               }else{
                  a = sum/10;
                  sum -= a*10;
               }
            }
            sum += c*10;
               
         }else if(s == 3){
            if(judge[2] == 0){
            judge[2] = 1;
            }else{
               if(sum<10){
                  sum = 0;
               }else{
                  a = sum%10;
                  sum -= a;
               }     
            }
            sum += c;
         }
         if(sum/100 >= 1){
            ans = sum;
         }
      }else if(n = 2){
         if(s == 1){
            if(judge[0] == 0){
               judge[0] = 1;
            }else{
               a = sum/10;
               sum -= a*10;
            }
            sum += c*10;
         }else if(s == 2){
            if(judge[1] == 0){
               judge[1] = 1;
            }else{
               if(sum>10){
                  a = sum%10;
                  sum -= a;
               }
            }
            sum += c;
         }
         if(sum/10 >= 1){
            ans = sum;
         }
      }else{
         if(s == 1){
            if(judge[0] == 0){
            judge[0] = 1;
            }else{
               sum = 0;
            }
            sum += c;
         }
         if(sum >= 1){
            ans = sum;
         }
      }
   }
   printf("%d",ans);
   return 0;
}
