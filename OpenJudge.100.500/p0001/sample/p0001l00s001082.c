#include <stdio.h>

int main(int argc, const char * argv[])
{

    int a, b;
    int di;
    int counter = 0;
    int i;
    while (scanf("%d %d",&a ,&b) != EOF) {
    
        
        di = a + b;
        for (i = 0; i < 8; i++) {
            di /= 10;
            if (di == 0 && counter == 0) {
                printf("%d\n",i + 1);
                counter++;
            }
        }
        counter = 0;
    }
    
    return 0;
}