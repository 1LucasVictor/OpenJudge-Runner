#include<stdio.h>
int a[8][8], row[8], col[8], d1[17], d2[17];

int f(int i, int j, int s){
    int i1 = i + (j==7), j1 = (j + 1) % 8;
    if(s == 0)
        return 1;
    if(i > 7)
        return 0;
    if(a[i][j] == 1){
        if(f(i1, j1, s-1))
            return 1;
        return 0;
    }
    if(row[i] == 0 && col[j] == 0 && d1[i + j] == 0 && d2[j - i + 7] == 0){
        a[i][j] = 1;
        row[i] = col[j] = d1[i + j] = d2[j - i + 7] = 1;
        if(f(i1, j1, s-1))
            return 1;
        row[i] = col[j] = d1[i + j] = d2[j - i + 7] = 0;
        a[i][j] = 0;
    }
    if(f(i1, j1, s))
        return 1;
    return 0;
}

int main(){
    int k, i, j, x, y;
    scanf("%d", &k);
    for(i = 1; i <= k; i++){
        scanf("%d %d", &x, &y);
        a[x][y] = 1;
        row[x] = col[y] = d1[x+y] = d2[y - x + 7] = 1;
    }
    f(0, 0, 8);
    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){
            if(a[i][j])
                printf("Q");
            else
                printf(".");
        }
        printf("\n");
    }





}