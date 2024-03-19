//abc153 a
#include <stdio.h>
int main(int argc, char const *argv[]) {
    int H,A;
    int x,y;
    scanf("%d %d",&H,&A );
    x = H/A;
    y = H%A;
    if(y!=0){
        x = x+1;
    }
    printf("%d\n",x );
    return 0;
}
