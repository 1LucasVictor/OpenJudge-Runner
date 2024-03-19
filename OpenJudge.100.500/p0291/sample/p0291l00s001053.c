int main(){
    int n,i,j,a[1000000], maxv, tmp;
    scanf("%d", &n);
    for(i=0; i<n; i++) {scanf("%d", &a[i]);}
    maxv = -1000000000; // answer
        for(i = 0; i < n; i++){
            for( j = 0; j < n; j++){
                // i, j is integers
                if (i<j) {
                    tmp = a[j] - a[i];
                    if ( tmp > maxv ) maxv = tmp;
                }
            }
        }
    printf("%d\n", maxv);
    return 0;
}