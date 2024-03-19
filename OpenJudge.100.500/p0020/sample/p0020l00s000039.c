#include <stdio.h>
int main(void){
    int i,j;
    
    float x1,y1;//A
    float x2,y2;//B
    float x3,y3;//C
    float x4,y4;//D

    scanf("%d",&j);
    for(i=0;i<j;i++){
        scanf("%f%f%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        
       
        if((y2-y1)/(x2-x1) == (y4-y3)/(x4-x3))
            printf("YES\n");
        else /*if(((y1-y2)/(x1-x2)) != ((y3-y4)/(x3-x4)))*/
            printf("NO\n");
    }
    return 0;
}


