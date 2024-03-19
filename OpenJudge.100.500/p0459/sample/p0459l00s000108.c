#include <stdlib.h>
#include <stdio.h>


int main(){
    int x,y;
    int turtle =4;
    int crane = 2;
    scanf("%d",&x);
    scanf("%d",&y);

    int sum = y/turtle;
    int sum2= y/crane;

    if(sum * sum2 == y || turtle == y || crane == y){
        printf("Yes");
    }else{
        printf("no");
    }


    return 0;
}
