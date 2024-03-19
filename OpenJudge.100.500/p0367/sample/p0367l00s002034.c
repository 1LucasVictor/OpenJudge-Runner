#include <stdio.h>

int main(int argc, const char * argv[]) {
    int count=0;
    int a,b,c,x;
    scanf("%d %d %d",&a,&b,&c);
    for(int x = a; x <= b; x++){
        if(c%x==0){
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}

