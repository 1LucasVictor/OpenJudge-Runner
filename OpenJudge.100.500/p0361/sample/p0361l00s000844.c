#include <stdio.h>
int main(void){
    int n,m;
    scanf("%d %d" ,&n,&m);
    printf("%d:%d:%d\n",n/3600,n%3600/60,n%60);
    return 0;// Your code here!
}
