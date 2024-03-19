#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x,y,z;
    scanf("%d",&x);
    if(x==0){
        printf("0:0:0\n");

    }
    if(x>=0&&x<=86400){
        if(x>=60){
            y=x/60;
            x%=60;
        }
        if(y>=60){
            z=y/60;
            y%=60;
            
        }
        printf("%d:%d:%d\n",z,y,x);
    }

    return 0;
}
