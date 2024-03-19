#include <stdio.h>
#include <math.h>

int x,y,z;

int main (){
    scanf("%d %d %d\n",&x,&y,&z);
    if(0<=x&&x<y&&y<z&&z<=100){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
