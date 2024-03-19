#include <stdio.h>

int main()
{

    unsigned long long  a;
    double b;

    scanf("%lld", &a);
    scanf("%lf", &b);
    double c =( b * 100.0);
    int z = c / 100;//1のくらいのみ
   // printf("1けため%d\n",z);
    int q = ((int)c - z*100) / 10;
    int r = ((int)c - z * 100-q*10);
  //  printf("2けため%d\n",q);
    //printf("2けため%d\n", r);
    unsigned long long first =a *(unsigned long long)z;
    unsigned long long second =( a * (unsigned long long)q) / (unsigned long long)10;
    unsigned long long th = (a * (unsigned long long)r) / (unsigned long long)100;
    unsigned long long THamari = (a * (unsigned long long)r) - th * (unsigned long long)100;
    unsigned long long secondamari = (a * (unsigned long long)q) - (unsigned long long)second * 10;

    printf("%lld", first + second + th + (THamari + secondamari) / (unsigned long long)100);

    printf("\n");
}