/*
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0021&lang=jp
*/

#include<stdio.h>
#include<math.h>

const double eps=1e-10;
int n,i;
double ax,ay,bx,by,cx,cy,dx,dy;


int solve(void){
    double Ax=bx-ax;
    double Ay=by-ay;
    double Bx=dx-cx;
    double By=dy-cy;

    double val=fabs(Ax*By-Ay*Bx);

    return (fabs(val)<eps);
}

int main(void)
{
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&ax,&ay,&bx,&by,&cx,&cy,&dx,&dy);

        if(solve()){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
