#include <stdio.h>

void print(void)
{
        printf(":(\n");
        return ;
}
int main(void)
{
        int a,b,c,d,e,k;
        scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k);

        if(b-a>k)print();
        else if(c-a>k)print();
        else if(d-a>k)print();
        else if(e-a>k)print();
        else if(c-b>k)print();
        else if(d-b>k)print();
        else if(e-b>k)print();
        else if(d-c>k)print();
        else if(e-c>k)print();
        else if(e-d>k)print();
        else printf("Yay!\n");
        return 0;
}
