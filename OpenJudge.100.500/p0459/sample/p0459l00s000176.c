#include<stdio.h>
#include<string.h>

#define YES "Yes"
#define NO "No"

#define TSURU 2
#define KAME 4

int main()
{
    int obj_num, leg_num, diff;

    scanf("%d %d", &obj_num, &leg_num);

    diff = leg_num - (obj_num*2);

    if (((diff%2) == 0)&&((0 <= diff)&&((diff/2) <= obj_num)))
    {
        printf("%s", YES);
    } else {
        printf("%s", NO);
    }

    return 0;
}