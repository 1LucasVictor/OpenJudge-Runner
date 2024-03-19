#include<stdio.h>
//C에서 함수 처음 만들어 써봄.. 재밌당 ㅋㅋㅋㅋㅋ
int check3(int i)
{
    if (i%3 == 0)
    {
        printf(" %d",i);
        return 0;
    }
    else{return 1;}
}
void include3(int i)
{
    if (i%10 == 3)
    {
        printf(" %d",i);
    }
    i = i/10;
    if (i)
    {
        include3(i);
    }
}

int main(void)
{
    int n;
    scanf("%d",&n);
    int c=1;
    for (;c<=n;c++)
    {
        int i = c;
        if (check3(i))
        {
            include3(i);
        }
    }
    printf("\n");
    return 0;
}
