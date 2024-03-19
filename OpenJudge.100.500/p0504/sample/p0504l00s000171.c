#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int h = 0,a = 0;
    int b=0, count=1;
    scanf("%d%d",&h,&a);
    while (1) {
        b= h/a;
        h=b;
        count++;
        if(h<=0){
            break;
        }
    }
    
    printf("%d",count);
    return 0;
}
