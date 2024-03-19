# include<stdio.h>
int main(void) {
    int a,b,c,d;
    scanf("%d%d%d", &a, &b, &c);
    d = c - (a-b);
    printf("%d\n",d);
    return 0;
}