#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{

    int a = 0, b = 0;
    int figa;
    int figac = 0;
    double i;
    
    while (scanf("%d%d",&a ,&b) != EOF) {
       // printf("%d\n",(int)(a + b / pow(10.0, i)));
        for (i = 0; i <= 6; i++) {
            if (((int)((a + b) / pow(10.0, i)) == 0) && figac == 0){
                figa = i;
                figac++;
            }
        }
        printf("%d\n",figa);
        figac = 0;
    }
    return 0;
}