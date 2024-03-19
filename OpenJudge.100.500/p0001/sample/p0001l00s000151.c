#include<stdio.h>
int main(void){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        int add_ab=a+b;
        int digit=0;
        while(add_ab!=0){
            add_ab/=10;
            ++digit;
        }
        printf("%d\n",digit);
    }
    return 0;
}
