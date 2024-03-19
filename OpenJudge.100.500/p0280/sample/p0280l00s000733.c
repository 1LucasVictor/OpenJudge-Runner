#include <stdio.h>
#include <stdlib.h>
#define M 100

typedef struct edge {
    int w, f, t;
} edge;
edge E[M*M/2];
 
int A[M][M];
int group[M];
int comp(const void*,const void*); 
int kru(int);

int main(int argc,char * argv[])
{
    int i, j, n, s;
    scanf("%d", &n);
     
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
     
    s=kru(n);
    printf("%d\n", s);
    return 0;
}

int comp(const void *x, const void *y)
{
    return ((edge*)x)->w - ((edge*)y)->w;
}
 
int kru(int n)
{
    int i, j, en, s, from, to;
    for(i=0; i<n; i++) group[i]=i;
    en=0;
    for(i=0; i<n; i++) {
        for(j=0; j<i; j++) {
            if(A[i][j]!=-1) {
                E[en].w=A[i][j];
                E[en].f=i;
                E[en].t=j;
                en++;
            }
        }
    }
    qsort(E, en, sizeof(edge), comp);
     
    s=0;
    for(i=0; i<en; i++) {
        from=group[E[i].f];
        to=group[E[i].t];
        if(from != to) {
            s+=E[i].w;
            for(j=0; j<n; j++) {
                if(group[j]==from) group[j]=to;
            }
            for(j=1; j<n && group[j-1]==group[j]; j++);
            if(j==n) break;
        }
    }
      return s;
}