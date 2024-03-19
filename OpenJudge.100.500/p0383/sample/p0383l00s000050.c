#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,m,l;
    int i,j,k;
    int a[100][100];
    int b[100][100];
    long int c[100][100]={0};
    scanf("%d %d %d",&n,&m,&l);
    for(i=0;i<n;i++){//???
        for(j=0;j<m;j++){//?¨?
            scanf("%d",&a[j][i]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<l;j++){
            scanf("%d",&b[j][i]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            for(k=0;k<m;k++){
                c[j][i]+=a[k][i]*b[j][k];
            }
        }
    }
    for(i=0;i<n;i++){
        if(i!=0){
            printf("\n");
        }
        for(j=0;j<l;j++){
            if(j!=0){
                printf(" ");
            }
            printf("%ld",c[j][i]);
        }
    }
    printf("\n");

    return 0;
}