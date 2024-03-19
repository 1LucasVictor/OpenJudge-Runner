void main() {
    int hund, tens, unit, n;
    scanf("%d", &n);

    hund = n / 100;
    n %= 100;
    tens = n / 10;
    unit = n % 10;

    if (hund == 7 || tens == 7 || unit == 7)
        printf("Yes");
    else
        printf("No");
}
