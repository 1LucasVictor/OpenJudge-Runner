#include<stdio.h>

#define QQ_MAX 9

int main(){

        unsigned int  a = 0,  b = 0;
        int ans = 0;
        int count = 0;

        while(scanf("%d %d",&a , &b) != EOF)
        {
                ans = a + b;
                while(1)
                {
                        ans /= 10;
                        count++;
                        if(1 > ans)
                        {
                                break;
                        }
                }
                printf("%d\n",count);
                ans = 0;
                count = 0;
        }


    return 0;
}