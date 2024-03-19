#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x,y;
    int p[200][200];
    int p2[200];
    int p1[200];

    scanf("%d %d",&x,&y);
    for(int n=1;n<=x;n++){
        for(int j=1; j<=y;j++){
            scanf("%d",&p[n][j]);
        }
    }
    for(int j=1; j<=y;j++){
        scanf("%d",&p1[j]);
    }

    for(int n=1;n<=x;n++){
        for(int j=1; j<=y;j++){
          p2[n]+=(p[n][j]*p1[j]);
        }
        printf("%d\n",p2[n]);


    }
    return 0;
}

