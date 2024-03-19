#include <stdio.h>

int main(void)
{
    int cnt[200005];
    int N;
    scanf("%d",&N);
    for (int i = 1;i < N;i++){
        int tt;
        scanf("%d",&tt);
        cnt[tt]++;
    }
    for(int i = 1;i <= N;i++)
        printf("%d\n",cnt[i]);
}