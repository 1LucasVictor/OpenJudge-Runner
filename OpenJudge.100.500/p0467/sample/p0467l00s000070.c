/*
 * ----------------------------------------------------------------------------
 (: Bismillahir Rahmanir Rahim :) 
 * File: /home/grimfirefly/Programming/Atcoder/B_Easy_Linear_Programming.c
 * Project: /home/grimfirefly/Programming/Atcoder
 * Created Date: Thursday, May 14th 2020, 8:13:18 pm
 * Author: Grim Firefly :)
 * Author Mail : GrimFirefly1@gmail.com
 * -----
 * Last Modified: Thu May 14 2020
 * Modified By: Grim Firefly :)
 * -----
 * ----------------------------------------------------------------------------
 */
int min(int x, int y)
{
    if (x < y)
        return x;
    else
        return y;
}
#include <stdio.h>
int main()
{
    int a, b, c, k;
    scanf("%d %d %d %d", &a, &b, &c, &k);
    int ans = 0;
    ans += min(a, k)*1;
    k -= min(a, k);
    ans += min(b, k)*0;
    k -= min(b, k);
    ans -= min(c, k);
    k -= min(c, k);
    printf("%d\n", ans);
    return 0;
}