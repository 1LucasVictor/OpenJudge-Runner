#include<stdio.h>
int main(void)
{
    int n;
    int i;
    int kari = 100000,kari2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        kari = kari + kari*0.05;
        kari2 =(kari/1000)*1000;
        if(kari-kari2>0)
        {
            kari = kari-(kari- ((kari2/1000)*1000));
            kari=kari + 1000;
        }
    }
    printf("%d\n",kari);
    return 0;
}