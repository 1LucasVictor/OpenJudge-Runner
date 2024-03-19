#include<stdio.h>

int main(void)
{
    int num;
    int a[4][13]={0};
    char c;    
    char check;
    int i,j,k;

    scanf("%d",&num);
    while((check = getchar())!='\n');

    for(k=0;k<num;k++){
        scanf("%c %d",&c,&i);
        while((check = getchar())!='\n');
        switch(c){
            case 'S':
                a[0][i-1]=i;
                break;
            case 'H':
                a[1][i-1]=i;
                break;
            case 'C':
                a[2][i-1]=i;
                break;
            case 'D':
                a[3][i-1]=i;
                break;
        }
    }


    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            if(a[i][j]!=j+1){
                if(i==0)
                    printf("S %d\n",j+1);
                else if(i==1)
                    printf("H %d\n",j+1);
                else if(i==2)
                    printf("C %d\n",j+1);
                else if(i==3)
                    printf("D %d\n",j+1);
            }
        }
    }

    return 0;

}   
