#include<stdio.h>
int main(void){
   int n,m,l;
   unsigned long a[100][100],b[100][100],c[100][100];
   int i,j,k;

   scanf("%d%d%d",&n,&m,&l);
   for(i=0;i<n;i++){
      for(j=0;j<m;j++){
         scanf("%lu",&a[i][j]);
      }
   }
   for(i=0;i<m;i++){
      for(j=0;j<l;j++){
         scanf("%lu",&b[i][j]);
      }
   }
   for(i=0;i<n;i++){
      for(j=0;j<l;j++){
         c[i][j]=0;
         for(k=0;k<m;k++){
            c[i][j]+=a[i][k]*b[k][j];
         }
         if(j!=l-1)printf("%lu ",c[i][j]);
         else printf("%lu",c[i][j]);
      }
      printf("\n");
   }
   return 0;
}