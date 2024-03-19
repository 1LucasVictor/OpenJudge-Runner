#include<stdio.h>
int main()
{
    int a, b, t, ku, ka;
    scanf("%d",&a);
    scanf("%d",&b);

    t=a+b;
    ku=a-b;
    ka=a*b;

    if(ka >= t && ka >= ku){
        printf("%d", ka);
        }
    else if(ku >= t && ku >= ka){
            printf("%d", ku);
        }
    else if(t >= ku && t >= ka){
            printf("%d", t);
        }
    else{
        printf("0");
    }
    return 0;
}
