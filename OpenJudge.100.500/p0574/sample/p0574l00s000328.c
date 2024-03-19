#include <stdio.h>
#include <stdlib.h>
int main(){
        int s;
        scanf("%d",&s);
        int c[4];
        c[0]=s/1000;//1234
        c[1]=(s%1000)/100;//234
        c[2]=(s%100)/10;//34
        c[3]=(s%10);//4
        //printf("%d %d %d %d",c[0],c[1],c[2],c[3]);
        if(c[0]==c[1]||c[1]==c[2]||c[2]==c[3]){
                printf("Bad");
        }else{
                printf("Good");
        }
        return 0;
}