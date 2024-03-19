#include<stdio.h>
#include<string.h>
#include<math.h>

#define distance(a, b) (pow(pow((a), 2) + pow((b), 2), 0.5))

typedef struct {
    int x;
    int y;
} point;

point array[200000];

int main()
{
    int n, d;
    double target_distance;
    int answer = 0;

    scanf("%d %d", &n, &d);

    for (int i = 0; i<n; i++)
    {
        scanf("%d %d", &(array[i].x), &(array[i].y));
    }

    for (int i = 0; i<n; i++)
    {
        target_distance = distance(array[i].x, array[i].y);
        if (target_distance <= d)
            answer ++;
    }

    printf("%d", answer);

    return 0;
}