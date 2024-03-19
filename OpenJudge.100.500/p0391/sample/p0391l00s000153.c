#include <string.h>
int main(void){
    int x,i,j,Num;
    int InNumA,InNumB;
    
    char Input[1001],tmp[1001],Order[10];
    
    scanf("%s",Input);
//    printf("ppp %s \n",Input);
    scanf("%d",&Num);
    for(j=0;j<Num;j++){
        scanf("%s",Order);
        scanf("%d %d",&InNumA,&InNumB);
        x=0;
        if(strcmp(Order,"print")==0){
            for(i=InNumA;i<=InNumB;i++){
                printf("%c",Input[i]);
            }printf("\n");
        }
        
        if(strcmp(Order,"replace")==0){
            scanf("%s",tmp);
            x=0;
            for(i=InNumA;i<=InNumB;i++){
                Input[i]=tmp[x];
                x++;
            }
        }
        if(strcmp(Order,"reverse")==0){
            x=InNumB;
            for(i=InNumA;i<=InNumB;i++){
                tmp[x]=Input[i];
                x--;
            }
            for(i=InNumA;i<=InNumB;i++){
                Input[i]=tmp[i];
            }
        }
    }
}
