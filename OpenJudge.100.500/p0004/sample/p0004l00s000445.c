#include<stdio.h>
int main()
{
    int x,y;
    int a,b,c,i,j,count=0;
    while (scanf("%d%d",&x,&y) != EOF){
        if(x > y){
            a=x;
            b=y;
            for(;;){
                c = a % b;
                if(a % b == 0){
                    break;
                }
                a=b;
                b=c;
            }
        }
        else if(x < y){
            a=y;
            b=x;
            for(;;){
                c = a % b;
                if(a % b == 0){
                    break;
                }
                a=b;
                b=c;
            }
        }
        else if(x == y){
            b=x;
            j=x;
        }
        j=(x/b)*(y/b)*b;
        printf("%d %d\n",b,j);
    }
    return 0;
}