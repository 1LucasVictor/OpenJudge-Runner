#include<stdio.h>
int main()
{
    int given,hour,minute,second;
    scanf("%d",&given);
    hour=given/3600;
    minute=(given%3600)/60;
    second=given-(hour*3600)-(minute*60);
    printf("%d:%d:%d\n",hour,minute,second);
    return 0;
}

