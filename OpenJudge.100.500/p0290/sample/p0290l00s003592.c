#include <stdio.h>

int main(void)
{
 int n,m[10000],i,j,ans=0;

 scanf("%d",&n);

 for(i=0;i<n;i++){
  scanf("%d",&m[i]);
 }

 for(i=0;i<n;i++){

  while(1){

   if(m[i]==2){
     ans++;
     break;
   }

   if(m[i]<2 || m[i]%2==0) break;

   j=3;
   while( i<=sqrt(m[i]) ){
    if(m[i]%i==0) break;
    i=i+2;
   }
   ans++;
   break;
  }
 }

 printf("%d\n",ans);

 return 0;
 
}
 