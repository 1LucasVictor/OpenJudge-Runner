#include<stdio.h>
int main(void){
    int a[4][13]={0};
    int i,j,k,n,x;
    char m;
    scanf("%d", &n);
    for(k=0;k<n;k++){
        scanf(" %c%d", &m, &x);
        if(m == 'S'){
            a[0][x-1] = 1;
        }else if(m == 'H'){
            a[1][x-1] = 1;
        }else if(m == 'C'){
            a[2][x-1] = 1;
        }else if(m == 'D'){
            a[3][x-1] = 1;
        }
    }
    //printf("\n");
    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            if(a[i][j] == 0){
                if(i == 0){
                    printf("S %d\n", j+1);
                }else if(i == 1){
                    printf("H %d\n", j+1);
                }else if(i == 2){
                    printf("C %d\n", j+1);
                }else if(i == 3){
                    printf("D %d\n", j+1);
                }
            }
            //printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        }
        //printf("\n");
    }
    return 0;
}

