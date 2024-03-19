#include <stdio.h>
#include <math.h>

int main(){
    int N,D;
    float x,y;
    int count=0;
    scanf("%d %d",&N,&D);
    while(N--){
        scanf("%f %f",&x,&y);
        if(sqrt(pow(x,2)+pow(y,2))<=D)
            count++;
    }
    printf("%d\n",count);
}