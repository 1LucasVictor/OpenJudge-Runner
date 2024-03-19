#include <stdio.h>

int main(){
int n,m,l,i,j,k;
scanf("%d %d %d",&n,&m,&l);
int a[n][m],b[m][l];
long c[n][l];
for(i=0;i<n;i++){
   for(j=0;j<m;j++){
      scanf("%d",&a[i][j]);
   }
}
for(j=0;j<m;j++){
   for(k=0;k<l;k++){
      scanf("%d",&b[j][k]);
   }
}
for(i=0;i<n;i++){
   for(k=0;k<l;k++){
      c[i][k]=0;
   }
}
for(i=0;i<n;i++){
   for(j=0;j<m;j++){
      for(k=0;k<l;k++){
         c[i][k]=c[i][k]+a[i][j]*b[j][k];
      }
   }
}
for(i=0;i<n;i++){
   for(k=0;k<l;k++){
      printf("%ld",c[i][k]);
      if(k!=l-1) printf(" ");
   }
   printf("\n");
}
return 0;
}