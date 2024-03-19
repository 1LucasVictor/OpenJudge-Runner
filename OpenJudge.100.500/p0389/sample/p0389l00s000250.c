#include <stdio.h>

int main(void){
    char line[201],line1[201];
    int t,i,num,h,o;
    for(;scanf("%s",line),line[0] != '-';){
        scanf("%d",&num);
        for(o=0;t=0,o<num;o++){
            scanf("%d",&h);
            for(i=0;i<h;i++)
                line1[i]=line[i];
            line1[i]=0;
            while(line[i])
                line[t++]=line[i++];
            i=0;
            while(line1[i])
                line[t++]=line1[i++];
            line[t]=0;
        }
        printf("%s\n",line);
    }
}