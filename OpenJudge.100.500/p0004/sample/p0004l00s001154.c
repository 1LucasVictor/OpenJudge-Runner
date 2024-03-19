#include <stdio.h>

int main()
{
    int a,b,temp,temp1,i,a1,b1,x,y,j;
    while(scanf("%d %d",&a,&b) ==2){
        if(a>b){
            temp=a; a=b; b=temp;
        }
        a1=a;
        b1=b;
        for(;;){
            if(b%a==0)break;
            else if(b%a !=0){
                temp1=a;
                a=b%a;
                b = temp1;
            }
        }
        y=b1;
        x=a1;
        for(i=2,j=2; ; ){
            if(y>x){
            x = a1*i;
            i++;
            }
            if(x==y)break;
            else if(x>y){
                y=b1*j;
                j++;
                if(x==y)break;
            }
        }
        printf("%d %d\n",a,x);
    }
}