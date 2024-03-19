#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int i,cnt=0;
    for(i=0;i<100;i++)
        if(i+0.5>a&&i+0.5<b&&i+0.5>c&&i+0.5<d)
            cnt++;
    printf("%d",cnt);
    
}
