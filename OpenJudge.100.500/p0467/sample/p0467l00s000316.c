main() {
    int a, b, c, k, ans = 0;
    scanf("%d%d%d%d", &a, &b, &c, &k);
    if(k <= a) ans = k;
    else if(k <= a + b) ans = a;
    else ans = a - (k - a - b);
    printf("%d\n", ans);
}