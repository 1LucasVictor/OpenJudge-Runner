#include<stdio.h>
int main(void){
    int a,b,c,d=0;
    scanf("%d %d %d\n",&a,&b,&c);
    for(int x=a;x<=b;x++){
        if(c%x==0){d++;
        }
    }
    printf("%d\n",d++);
return 0;
}