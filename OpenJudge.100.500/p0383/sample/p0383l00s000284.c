#include <stdio.h>
 
int main(int argc, char **argv){
    int i,j,k;
    int n,m,l,*a,*b;
    int nm,ml,c1,c2;
 
    // Input N*M
    scanf("%d %d %d",&n,&m,&l);
    // Input a
    nm = n * m;
    a = malloc(sizeof(int)*nm);
    for(i=0;i<nm;i++){
        scanf("%d", a+i);
    }
    // Input b
    ml = m * l;
    b = malloc(sizeof(int)*ml);
    for(i=0;i<ml;i++){
        scanf("%d",b+i);
    }
    // Calc c & Output c
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            c1 = c2 = 0;
            for(k=0;k<m;k++){
                c1 += a[m*i+k] * b[l*k+j];
                if( c1 >= 100000000 ){
                    c2++;
                    c1 -= 100000000;
                }
            }
            if( c2 > 0 ){
                printf("%d%08d",c2,c1);
            } else {
                printf("%d",c1);
            }
            if( j < l-1 ){
                printf(" ");
            } else {
                printf("\n");
            }
        }
    }
 
    return 0;
}