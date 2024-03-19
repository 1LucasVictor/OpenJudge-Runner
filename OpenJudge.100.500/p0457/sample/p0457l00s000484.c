#include <stdio.h>
int main(void){
   int n,m,k;
   int a[1333];
   int b[21323];
   int sum=0;
   int c=0,j1=0,j2=0;
   scanf("%d %d %d",&n,&m,&k);
   
   for(int i=0; i<n; i++){
       scanf("%d",&a[i]);
   }
   for(int i=0; i<m; i++){
       scanf("%d",&b[i]);
   }
   
   while(sum<=k ){
       if(a[j1]<b[j2]){
           sum+=a[j1];
           j1++;
       }else{
           sum+=b[j2];
           j2++;
       }
       c++;
   }
   printf("%d",c-1);
    return 0;
}