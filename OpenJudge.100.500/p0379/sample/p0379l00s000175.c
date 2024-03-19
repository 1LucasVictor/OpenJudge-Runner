#include <stdio.h>

int main(void) {
  
    int i,j,n,m,r,sum=0;
    int a[100][100],b[100];

    scanf("%d %d",&i,&j);
    
    
    for (n=0; n<i; n++) {
        for(m=0; m<j ; m++){
            scanf("%d ",&r);
            a[n][m]=r;
         }
    }
    for (n=0; n<i; n++) {
        scanf("%d",&r);
        b[n]=r;
    }
    for (n=0; n<i; n++) {
        for(m=0;m<j;m++){
            sum +=a[n][m]*b[m];
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}