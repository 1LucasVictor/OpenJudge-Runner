#include <stdio.h>

int main(int argc, char const *argv[]) {
    int s,m,h;

    scanf("%d", &s);
    m = 0;
    h = 0;

    if(s >59){
        m = s / 60;
        s = s % 60;
        if(m > 60){
            h = m / 60;
            m = m % 60;
        }

    }

    printf("%d:%d:%d\n",h,m,s);

    return 0;
}
