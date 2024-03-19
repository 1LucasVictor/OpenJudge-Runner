#include <stdio.h>
#include <string.h>
int main (int argc, char * argv[])
{
    char a[201];//山札のカードの枚数
    char b[201];
    int m;//シャッフルの回数
    int h;
    int j,k,l;
    while (1){
//        printf("文字列の入力");
        scanf("%s",a);
        if(strcmp(a, "-") == 0){
            break;
        }
//        int len = strlen(a);//文字の長さ
//        printf("シャッフルの回数");
        //シャッフルの回数の入力
        scanf("%d",&m);
      
        for(int i=0;i<m;i++){
//            printf("移動量");
            scanf("%d",&h);
            for( j=h;a[j]!='\0';j++)
                b[j-h] = a[j];
            for( k=0;k<h;k++)
                b[j-h+k] = a[k];
            for( l=0;a[l]!='\0';l++)
                a[l] = b[l];
        
        }
            printf("%s\n",a);
            
    }

    return 0;
}

