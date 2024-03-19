#include<stdio.h>
#include<string.h>
#define INT_MAX 0x3f3f3f3f
struct edge
{
    int x, y, z;
}a[10005];
int n, m, dis[105];
void Bellman_ford()
{
    memset(dis, INT_MAX, sizeof(dis));
    dis[0] = 0;
    for(int i = 1; i < n; i++)
        for(int j = 1; j <= m; j++)
            if(dis[a[j].y] > dis[a[j].x] + a[j].z)
                dis[a[j].y] = dis[a[j].x] + a[j].z;
}
int main()
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int x, j;
        scanf("%d%d", &x, &j);
        while(j--){
            a[++m].x = x;
            scanf("%d%d", &a[m].y, &a[m].z);
        }
    }
    Bellman_ford();
    for(int i = 0; i < n; i++)
        printf("%d %d\n", i, dis[i]);
    return 0;
}
