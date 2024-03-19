main() {
    char s[100001];
    int len = 0, min = 0;
    int i = 0, zero = 0, one = 0;

    scanf("%s", s);
    while(s[i]) {
        len++;
        i++;
    }

    for (i = 0; i < len; i++) {
        if (s[i] == '0') zero++;
        else one++;
    }

    if (zero < one) {min = zero;}
    else {min = one;}

    printf("%d", 2*min);

    return 0;
}