#include<stdio.h>
int main()
{
    //freopen("in.txt","r",stdin);
    float a,b,c,d,e,f;
    float x,y;
    int xx,yy;
    while(scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f)!=EOF)
    {
        x=c/a-(b/a)*(a*f-d*c)/(a*e-b*d);
        y=(a*f-d*c)/(a*e-b*d);
        x=x+0.0001;
        y=y+0.0001;
        xx=x*10000;
        yy=y*10000;
        if(xx%10>=5)
            x=(xx+10)/10/1000.0;
        if(yy%10>=5)
            y=(yy+10)/10/1000.0;
        printf("%.3f %.3f\n",x,y);
    }
    return 0;
}