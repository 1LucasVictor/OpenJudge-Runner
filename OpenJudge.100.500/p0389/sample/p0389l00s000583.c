#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char C[201];
    char c[201];
    char c2[201];
    
    int m,h;
    
    int a=0,b=0;
    
    while(1){
        
        scanf("%s",C);
        
        if(C[0]=='-'){
            break;
        }//-でプログラム終了
        
        scanf("%d",&m);//シャッフル回数
        
        b=(int)strlen(C);
        
        for(a=0;a<m;a++){//入れ替え部分
            scanf("%d",&h);//下から何枚目か指定
            
            strncpy(c,&C[0],h);
//            printf("c: %s\n",c);
            strncpy(c2,&C[h],b-h);
//            printf("c2: %s\n",c2);
            strncpy(C,c2,b-h);
//            printf("A: %s\n",C);
            strncpy(&C[b-h],c,h);
//            printf("A2: %s\n",C);
            
        }
        printf("%s\n",C);
        
    }
    return 0;
}

