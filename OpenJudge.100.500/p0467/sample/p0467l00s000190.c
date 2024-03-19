#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c,k,result;
    result = 0;
    scanf("%d %d %d %d",&a,&b,&c,&k);
    while (k > 0)
    {
        if (a>0){
            result++;
            a--;
            k--;
            continue;
        }
        else if (b > 0){
            b--;
            k--;
            continue;
        }
        else{
            result--;
            c--;
            k--;
            continue;
        }
    }
    printf("%d",result);
    return 0;
}