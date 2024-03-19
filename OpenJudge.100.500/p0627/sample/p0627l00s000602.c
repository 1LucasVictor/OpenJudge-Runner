#include <stdio.h>

int main()
{
    int a,b,c,d,f, temp;
    scanf("%d", &a);
    scanf("%d", &b);
    c = a + b;
    d = a - b;
    f = a * b;
    temp = c;
    if (temp<d){
        temp = d;
    } else if(temp<f){
        temp = f;
    }
    printf("%d", temp);
}