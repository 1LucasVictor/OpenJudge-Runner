#include <stdio.h>

int main(int argc, const char * argv[])
{
    long a, b, x, y;

    while (scanf("%ld %ld", &a, &b) != EOF){
        if (a <= b) {
            for (x=a; (0!=a%x)||(0!=b%x); x--);
            for (y=b*2; 0!=y%a; y+=b);
        } else {
            for (x=b; (0!=a%x)||(0!=b%x); x--);
            for (y=a*2; 0!=y%b; y+=a);
        }
        printf("%ld %ld\n",x,y);
    }
    return 0;
}