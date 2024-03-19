#include<stdio.h>
// 荷物の個数×1個当たりの最大重量
#define PMAX 1000000000


 int n,w[100000],k,wmax=0;

 int check(int p){
       int i,truck=1,max=p;
       if(p<wmax)return 0;

       for(i=0;i<n;i++){
               if(w[i]<=max){max=max-w[i];}
               else {
                     truck++;
                     max=p-w[i];
                     }
               }
       if(truck>k)return 0;
       else return 1;
       }

 int main(){
     int i,p;
     scanf("%d%d",&n,&k);
     for(i=0;i<n;i++){
              scanf("%d",&w[i]);
              if(w[i]>wmax)wmax=w[i];
              }

     int left=0,right=0,mid=0;
     right=PMAX;

     while(right-left>1){
          mid=(right+left)/2;
          if(check(mid))right=mid;
          else left=mid;
          }
     printf("%d\n",right);
     return 0;
     }
