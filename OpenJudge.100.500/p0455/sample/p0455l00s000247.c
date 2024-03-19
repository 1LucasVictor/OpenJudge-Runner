#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    int a;
    char buf[30];
    
    fgets(buf , sizeof(buf),stdin);
    a = atoi(buf);
    a = a+(a*a)+(a*a*a);
    printf("%d\n",a);
}