#include <stdio.h>
int main (void){
    int loop1;
    int data[3];
    scanf("%d %d %d",&data[0],&data[1],&data[2]);
    int how_7=0;
    int how_5=0;
    for(loop1=0;loop1<3;loop1++){
        if(data[loop1]==5){
            how_5++;
        }
        if(data[loop1]==7){
            how_7++;
        }
    }
    if(how_5==2 && how_7==1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}