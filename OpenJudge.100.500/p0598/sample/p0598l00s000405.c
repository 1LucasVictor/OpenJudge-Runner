#include<stdio.h>
int at(int x, int y);
int main(void)
{

        int a,b,c;

        scanf("%d%d",&a,&b);
        if((1<=a) && (a<=b) && (b<=20))
                c = at(a, b);
        else
                printf("正しい値を入力してください\n");
        printf("%d\n",c);
        return 0;
}

int at(int x, int y){

        int g;

        if(y%x==0)
                g = x + y;
        else
                g = y - x;
        return g;
}
