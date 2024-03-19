#include<stdio.h>

int main(){
    int a;
    int cnt_5=0,cnt_7=0,i;

    for(i=0;i<3;i++)
    {
        if(scanf("%d",&a)<0)
        {
            perror("error");
        }
        if(a==5)
            cnt_5++;
        else if(a==7)
            cnt_7++;
    }
    if((cnt_5==2)&&(cnt_7==1))
    {
        puts("YES");
    }
    else
    {
        puts("NO");
    }
  

}