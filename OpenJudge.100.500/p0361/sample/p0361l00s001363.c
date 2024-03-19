#include<stdio.h>
int main(void){
    int a = 0;
    int h;
    int m;
    int s;
    scanf("%d",&a);
    h = a/60/60;
    m = (a-h*60*60)/60;
    s = a-(m*60+h*60*60);
    printf("%d:%d:%d\n",h,m,s);
    return 0;
    
}
