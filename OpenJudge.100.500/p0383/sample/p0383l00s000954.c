int main(void){
    int n, m, l, i, j, k;
    scanf("%d %d %d", &n, &m, &l);
    int a[100][100];
    int b[100][100];
    long c[100][100]={0};
    //printf("%d %d %d", n, m, l);
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
            //printf("%d", a[i][j]);
        }
        //printf("\n");
    }
    for(i = 0; i < m; i++){
        for(j = 0; j < l; j++){
            scanf("%d", &b[i][j]);
            //printf("%d", b[i][j]);
        }
        //printf("\n");
    }
    for(i = 0; i<n; i++){
        for(j = 0; j<l; j++){
            for(k = 0; k < m; k++){
               c[i][j] += a[i][k] * b[k][j];
            }
            printf("%lld", c[i][j]);
            if(j < l-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
