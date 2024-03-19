#include <stdio.h>

int main(void){
    int x,y=0;
    int count=0;
    scanf("%d %d",&x,&y);
    for(int i=0;i<=x;i++){
        for(int j=0;j<=x;j++){
            if(i==0&&j!=0){
                if(y/4*j==x){
                    count++;
                    break;
                }
            }else if(j==0&&i!=0){
                if(y/2*i==x){
                    count++;
                    break;
                }
            }else if(i==0&&j==0){
                continue;
            }else{
                if(y/(4*j)+y/(2*i)==x){
                    count++;
                    break;
                }
            }
            //printf("%d %d\n",i,j);
        }
        if(count>=1){
            break;
        }
    }
    if(count>=1){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}