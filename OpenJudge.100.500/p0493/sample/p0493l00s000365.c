#include<stdio.h>
#include<math.h>
//#define DEBUG
//#define FILEIO

int GCD(int a, int b) { int c; while(b > 0) { c = a % b; a = b; b = c; } return a; }
void SWAP(int *a, int *b) { int c; c = *a; *a = *b; *b = c; }
int MAX(int a, int b) { return (a > b) ? a : b; }
int MIN(int a, int b) { return (a < b) ? a : b; }

int main()
{
    #ifdef FILEIO
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // variables
    int x, a, b, h1, h2, h;

    #ifdef DEBUG
    while(1) {
    # endif

    // code
    scanf("%d", &x);
    if(x >= 500)
    {
        a = x / 500;
        h1 = (a * 1000);
        if((x % 500) >= 5)
        {
            b = (x - (a * 500)) / 5;
            h2 = (b * 5);
        }
        else
        {
            h2 = 0;
        }
        h = h1 + h2;
    }
    else if(x >= 5)
    {
       b = (x - (a * 500)) / 5;
       h = (b * 5);
    }
    else
    {
        h = 0;
    }
    printf("%d\n", h);

    #ifdef DEBUG
    }
    #endif

    return 0;
}


