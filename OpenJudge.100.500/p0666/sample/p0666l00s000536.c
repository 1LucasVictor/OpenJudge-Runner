    #include <stdio.h>
     
    int main(void)
    {
     int X, A, B;
     
     scanf("%d", &X);
     scanf("%d", &A);
     scanf("%d", &B);
     
     int c = (B - A);
     if (c <= 0) puts("delicious");
     if (c > 0 && c <= X) puts("safe");
     if (c > 0 && c > X)  puts("dangerous"); 
     
     return 0;
     
    }