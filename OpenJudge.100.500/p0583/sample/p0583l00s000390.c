#include<stdio.h>

int main(void){
    int a,b,c,d,i,j,n,cnt;

    scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
    char masu[n+10];
    char sunuke[n+10];
    char hunuke[n+10];
    scanf("%s",masu);

    a--;
    b--;
    c--;
    d--;


    for(cnt=0; masu[cnt] !='\0'; cnt++){
        sunuke[cnt]=masu[cnt];
        hunuke[cnt]=masu[cnt];
    }


    for(i=0;  ;i++){
        if(sunuke[a+1] == '.'){
            a=a+1;
            if(a==c){
                break;
            }else{
                continue;
            }
        }else if(sunuke[a+2] == '.'){
            a=a+2;
            if(a==c){
                break;
            }else{
                continue;
            }
        }else{
            break;
        }
    }



    for(j=0;  ;j++){
        if(hunuke[b+1]=='.'){
            b=b+1;
            if(b==d){
                break;
            }else{
                continue;
            }
        }else if(hunuke[b+2]=='.'){
            b=b+2;
            if(b==d){
                break;
            }else{
                continue;
            }
        }else{
            break;
        }
    }



    if(a==c && b==d){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}
