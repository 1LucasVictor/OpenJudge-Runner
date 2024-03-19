#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,i;
    double x1,y1,x2,y2,x3,y3,x4,y4,k1,k2;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        k1=(y1-y2)/(x1-x2);
        k2=(y3-y4)/(x3-x4);
        if(k1-k2<0.0001&&k2-k1<0.0001)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}