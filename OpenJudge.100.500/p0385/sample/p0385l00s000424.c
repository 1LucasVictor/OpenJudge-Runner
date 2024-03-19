int main(void){
    char N[120];
    int sum[10001];
    int i,l,m,dummy;
    for(int w = 0; w <= 120; w++){
            N[w] = '0';
    }
    for(int w = 0; w <= 10001; w++){
        sum[w] = 0;
    }
    for(i = 1; ; i++){
        scanf("%s", N);
        dummy = N[0] - '0';
        if(dummy == 0) break;
        for(m = 0; m <= 120; m++ ){
            N[m] = N[m] - '0';
            if(N[m] == -48)   N[m] = 0;
            sum[i] = sum[i] + N[m];
        }
    }
    for(int w = 1; w < i; w++){
        printf("%d\n", sum[w]);
    }
    return 0;
} 
