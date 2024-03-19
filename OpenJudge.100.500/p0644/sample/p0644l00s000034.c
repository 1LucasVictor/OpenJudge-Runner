#include <stdio.h>
int main()
{
    //int a,b,c;
    char ch[4];
    scanf("%s",ch);
    //scanf("%d %d",&a, &b);
    int n=3;
    int i=0,flag = 0;
    while(n--){
        if(ch[i]=='1') flag++;
        i++;
    }
    printf("%d\n",flag);
    return 0;
}