#define _CRAT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c;

    scanf("%d%d", &a, &b);

    if(a>=0 && b>=0){

        c=a+b;

        if(c<a*b){
            c=a*b;
        }

        printf("%d", c);

        //if(a*b > a+b){
        //    printf("%d", a*b);
        //}
        //else{
        //    printf("%d", a+b);
        //}
    }

    else if(a<0||b<0){

        c=a+b;

        if(c<a-b){
            //printf("%d", a+b);
            c=a-b;
        }

        else{
            //printf("%d", a-b);
            //c=a-b;
        }
        printf("%d", c);
    }

    else if(a<0 && b<0){
        printf("%d", a*b);
    }

    return 0;
}