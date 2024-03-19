#include <stdio.h>
#include <stdlib.h>
typedef struct edge {
    int w, f, t;
} edge;
edge E[(100*100)/2];
int A[100][100];
int group[100];
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
int main(int argc,char * argv[])
{
    int i=0, j, n, s;
    scanf("%d", &n);
  for(i=0;i<n;i++){
        for(j=0; j<n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
      
    s=kru(n);
    printf("%d\n", s);
    return 0;
}
 