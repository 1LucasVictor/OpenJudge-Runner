int main(int argc, const char * argv[]) {
    int n;
    int i;
    int a[100];
    
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d", a[n-1]);
    for (i=n-2; i>=0; i--) {
        printf(" %d", a[i]);
    }
    printf("\n");
    return 0;
}
