#include<stdio.h>

 main() 
{
int n,m,i,j;
int a[101][101];
int b[101];
int c[101];

scanf("%d%d",&n,&m);


for(i=0;i<n;i++){
                 for(j=0;j<m;j++){
                                  scanf("%d",&a[i][j]);
                                  }
                 }
 

for(j=0;j<m;j++){
                 scanf("%d",&b[j]);
                 }
  


for(i=0;i<n;i++){
                 c[i]=0;
                 for(j=0;j<m;j++){
                                 c[i]+=a[i][j]*b[j];
                                  }
                 }

 for(i=0;i<n;i++){
                 printf("%d\n",c[i]);
                  }
return 0; 
}


