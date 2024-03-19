#include<stdio.h>

int main(void)
{

    int s1, h ,m ,s2;

    scanf("%d",&s1);
    
    h = s1 / 3600;
    m = (s1 - h * 3600) / 60;
    s2 = s1 - 3600 * h - 60 * m;

    printf("%d:%d:%d\n",h, m, s2);

    return 0;
}
