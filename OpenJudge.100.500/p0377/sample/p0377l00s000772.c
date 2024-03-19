#include <stdio.h>
 
int main() {
    int a[4][13];
    int n, i, j;
    char b;
    int c;
     
    for (i=0; i<4; i++) {
        for (j=0; j<13; j++) {
            a[i][j] = 0;
        }
    }
     
    scanf("%d", &n);
 
    for (i=0; i<n; i++) {
        scanf("%s %d", &b, &c);
        if (b=='S') {
            a[0][c-1]=1;
        }else if(b=='H'){
            a[1][c-1]=1;
        }else if(b=='C'){
            a[2][c-1]=1;
        }else if(b=='D'){
            a[3][c-1]=1;
        }
    }
    for (i=0; i<4; i++) {
        for (j=0; j<13; j++) {
            if(a[i][j] == 0){
            if(i == 0){
                printf("S %d\n", j+1);
            }
            if(i == 1){
                printf("H %d\n", j+1);
            }
            if(i == 2){
                printf("C %d\n", j+1);
            }
            if(i == 3){
                printf("D %d\n", j+1);
                }
            }
        }
    }
    return 0;
}
