
/*
 * main.c
 *
 *  Created on: 2019/04/27
 *      Author: family
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int A, B, T;
    int ans = 0;
    scanf("%d %d %d", &A, &B, &T);
    ans = (T/A) * B;
    printf("%d\n",ans);
    return 0;
}

