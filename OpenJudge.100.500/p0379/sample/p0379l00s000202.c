#include<stdio.h>

int main(void){
    int rows, columns;
    scanf("%d %d",&rows,&columns);

    int a[rows][columns];
    int b[columns];
    int i,n;
    for(i=0;i<rows;i++){
        for(n=0;n<columns;n++) scanf("%d",&a[i][n]);                  
    }        
    for(i=0;i<columns;i++) scanf("%d",&b[i]);
     
    int z;
    for(i=0;i<rows;i++){
        z = 0;
        for(n=0;n<columns;n++){
            z += a[i][n]*b[n];
        }
        printf("%d\n",z);
    }
    return 0;
}
