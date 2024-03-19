
#include <stdio.h>
#include <stdlib.h>
int f[45];
int fibonacci(int n);
int main(int argc, char** argv) {
    int n;
    scanf("%d",&n);
    printf("%d\n",fibonacci(n));
    return (EXIT_SUCCESS);
}
int fibonacci(int n)
{
   
    if(f[n]!=0)
        return f[n];
    if(n==0||n==1)
        return 1;
    return f[n] = fibonacci(n-2) + fibonacci(n-1);
}

