#include <stdio.h>
 
int n,m;
int i,j;
int x,y;
int a[256][256];
int b[256];
int sum;
 
main(){
    scanf("%d %d",&n,&m);
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d",&x);
            a[i][j]=x;
        }
    }
    for(i=0; i<m; i++){
        scanf("%d",&y);
        b[i]=y;
    }
     
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            sum += a[i][j]*b[j];
        }
                printf("%d\n",sum);
                sum=0;
    }
return 0;   
}