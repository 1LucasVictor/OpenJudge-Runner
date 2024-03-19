#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c=0;
    int i,count,x=0;
    scanf("%d %d %d",&a,&b,&c);
    for(i=a; i<=b; i++){
        x = c%i;
        if(x == 0){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}