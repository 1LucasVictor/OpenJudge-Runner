#include <stdio.h>
int main(void){
   int n,m,l,i,k,j;
   int a[124][124],b[124][124],c[124][124];
   scanf("%d %d %d",&n,&m,&l);
   for(i=0;i<n;i++){
       for(k=0;k<m;k++){
           scanf("%d",&a[i][k]);
       }
   }
   for(k=0;k<m;k++){
       for(j=0;j<l;j++){
           scanf("%d",&b[k][j]);
       }
   }
   for(i=0;i<n;i++){
       for(j=0;j<l;j++){
           for(k=0;k<m;k++){
               if(k==0){
                   c[i][j]=a[i][0]*b[0][j];
               }else{
                   c[i][j]=c[i][j] + a[i][k]*b[k][j];
               }
           }
       }
   }
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            printf("%d",c[i][j]);
            if(j==l-1)break;
            printf(" ");
        }
        printf("\n");
    }
   

return 0;    
}

