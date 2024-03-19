main () {
    int a, b, c;
    int t = 0;
    scanf("%d %d %d", &a, &b, &c);
    for (a ; a <= b; a++) {
        if (c % a == 0) t++;
    }
    printf("%d\n",t);
}
