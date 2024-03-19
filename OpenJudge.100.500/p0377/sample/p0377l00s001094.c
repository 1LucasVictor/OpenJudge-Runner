#include<stdio.h>
#include<string.h>

int main(void){
    int card[4][13] = {0} ;
    int i=0 ,j=0 ;
    int n=0 ,mem=0 ;

    char mark[100] ;
    int num ;

    scanf("%d",&n);
    for (i=0 ;i<n ;i++){
        scanf(" %s%d",mark,&num);

        if (strcmp(mark,"S")==0){
            mem=0;
        } else if (strcmp(mark,"H")==0){
            mem=1;
        } else if (strcmp(mark,"C")==0){
            mem=2;
        } else if (strcmp(mark,"D")==0){
            mem=3;
        }

        card[mem][num-1]=1;
    }

    for (i=0 ;i<4 ;i++){
        for (j=0 ;j<13 ;j++){
            if (card[i][j]==0){
                if (i==0){
                    printf("S ""%d\n",j+1);
                } else if (i==1){
                    printf("H ""%d\n",j+1);
                } else if (i==2){
                    printf("C ""%d\n",j+1);
                } else if (i==3){
                    printf("D ""%d\n",j+1);
                }
            }
        }
    }

    return 0;
}