#include <stdio.h>

int main(int argc, const char * argv[])
{
    long a, b, x, y;

    while (scanf("%ld %ld", &a, &b) != EOF){
        if (a <= b) {
            for (y=a*2; 0!=y%b; y+=a);
        } else {
            for (y=a*2; 0!=y%b; y+=a);
        }
        x = (a*b)/y;
        printf("%ld %ld\n",x,y);
    }
    return 0;
}