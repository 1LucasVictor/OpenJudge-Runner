#include <stdio.h>
#include <string.h>

int main(){
int n;
int s[13];
int h[13];
int c[13];
int d[13];
int i;
char mark;
int  rank;

for (i=0; i<13; i++){
        s[i]=0;
        h[i]=0;
        c[i]=0;
        d[i]=0;
}

 scanf("%d", &n);

for (i=0; i< n; i++){
        scanf(" %c %d", &mark, &rank);
        if     (mark == 'S') s[rank-1]=1;
        if     (mark == 'H') h[rank-1]=1;
        if     (mark == 'C') c[rank-1]=1;
        if     (mark == 'D') d[rank-1]=1;
}

for (i=0; i< 13; i++){
        if (s[i] == 0) printf("S %d\n", i+1);
}
for (i=0; i< 13; i++){
        if (h[i] == 0) printf("H %d\n", i+1);
}
for (i=0; i< 13; i++){
        if (c[i] == 0) printf("C %d\n", i+1);
}
for (i=0; i< 13; i++){
        if (d[i] == 0) printf("D %d\n", i+1);
}
}