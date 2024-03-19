#include<stdio.h>

int main(void){

    int n,a,b,c,d;

    char str[200000];

    int i,j;//制御
    int hantei,hantei2;

    scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
    scanf("%s",str);

    if(c<d){
        for(i=1;i<n;i++){
            if(str[i]=='#'&&str[i-1]=='#'){
                hantei=0;//hantei=0はno
                break;
            }
            else{
                hantei=1;
            }
        }
        if(hantei==0){
            printf("No");
        }
        else{
            printf("Yes");
        }

    }
    else{
        str[d-1]='#';
        for(i=2;i<d-1;i++){
            if(str[i-2]=='.'&&str[i-1]=='.'&&str[i]=='.'){
                hantei=1;
                break;
                //printf("koko1");
            }
            else{
                hantei=0;
               // printf("koko2");
            }
        }
        for(i=1;i<c;i++){
             if(str[i]=='#'&&str[i-1]=='#'){
                hantei2=0;//hantei=0はno
               // printf("koko3");
                break;
            }
            else{
                hantei2=1;
               // printf("koko4");
            }
        }
        if(hantei==1&&hantei2==0){
            printf("Yes");
        }
        else if(hantei==1&&hantei2==1){
            printf("Yes");
        }
        else if(hantei==0&&hantei2==1){
            printf("Yes");  
            }
        else{
            printf("No");
        }
        
    }
    
    



    return 0;
}