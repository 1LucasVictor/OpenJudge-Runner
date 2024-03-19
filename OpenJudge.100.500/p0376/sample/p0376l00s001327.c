int main(void) {
    int n, a[100], i, b;
    scanf("%d", &n);
    for(i=0; i<n;i++){
        scanf("%d", &a[i]);
    }
    for(b=0; b<n; b++){
        printf("%d", a[i-b-1]);
        if(b<n-1){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}