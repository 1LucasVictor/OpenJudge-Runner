#include<stdio.h>

 int w[100000];
 int P,n,truck;

 int count(int P){
          int i,sum;
          i=0;
          for(int j=0;j<truck;j++){
                          sum=0;
                          while(sum+w[i]<=P){
                                   sum+=w[i];
                                   i++;
                                   if(i==n)return n;
                                   }
                          }
          return i;
          }
          

 int solve(){
          int mid,right,left,v;
          left=0;
          right=100000*10000;

          while(right-left>1){
                   mid=(left+right)/2;
                   v=count(mid);
                   if(v>=n)right=mid;
                   else left=mid;
                   }
         return right;
         }
                  


 int main(){
       int i,ans;
       scanf("%d%d",&n,&truck);
       for(i=0;i<n;i++){
                  scanf("%d",&w[i]);
                  }
       ans=solve();
       printf("%d\n",ans);
       return 0;
       }
       
