#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c,k,result;
    result = 0;
    scanf("%d %d %d %d",&a,&b,&c,&k);
    if (a <= k){
        result += a;
        k = k-a;
        a = 0;
    }
    if (b <= k){
        k = k-b;
        b = 0;
    }

    while (k > 0)
    {
        if (a > 0)
        {
            a--;
            k--;
            result++;
            continue;
        }
        else if(b > 0){
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
