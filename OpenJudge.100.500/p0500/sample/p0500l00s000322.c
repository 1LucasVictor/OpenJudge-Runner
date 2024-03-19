#include <stdio.h>

int main(void) {
    int N, M, s[10], c[15], X[10], i;
    scanf("%d%d", &N, &M);
    for (i=0; i<N; i++) X[i]=-1;
    for (i=0; i<M; i++) {
        // printf("[%d]\n", i);
        scanf("%d%d", &s[i], &c[i]);
        s[i]--;
        if (X[s[i]]!=-1 && X[s[i]]!=c[i]) {
            printf("-1");
            return 0;
        }
        else X[s[i]]=c[i];
    }
    if (X[0]==0) {
        printf("-1");
        return 0;
    }
    if (X[0]==-1) X[0]=1;
    for (i=0; i<N; i++) {
        if (X[i]==-1) X[i]=0;
        printf("%d", X[i]);
    }
    return 0;
}
