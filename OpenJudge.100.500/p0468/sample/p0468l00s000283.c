#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define _USE_MATH_DEFINES

int main()
{
    char t[4]="";
    scanf("%s",t);

    if(t[1]=='R')
	printf("ABC\n");
    else
	printf("ARC\n");

    return 0;
}

