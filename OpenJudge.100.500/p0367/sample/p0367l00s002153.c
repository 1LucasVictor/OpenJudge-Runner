#include <stdio.h>

int main(int argc, char *argv[])
{
    int a = 0, b = 0, c = 0;
    int ans = 0;
    fscanf(stdin,"%d %d %d", &a, &b, &c);

    int i = 0;
    for(i=a; i<=b && i<=c; i++) {
        if(c%i==0) {
            ans++;
        }
    }
    printf("%d\n", ans);

    return 0;
}