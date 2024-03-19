#include<stdio.h>
#include<string.h>
int main(void){
    int n,i,j;
    scanf("%d",&n);
    int a[4][13];
    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            a[i][j]=0;
        }
    }
    
    char c;
    int r;
    for(i=0;i<n;i++){
        scanf("%c",&c);
        scanf("%c %d",&c,&r);
        switch (c){
            case 'S':
                a[0][r-1]=1;
                break;
            case 'H':
                a[1][r-1]=1;
                break;
            case 'C':
                a[2][r-1]=1;
                break;
            case 'D':
                a[3][r-1]=1;
                break;
        }
    }
    
   
    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            if(a[i][j]==0){
                if(i==0){
                    printf("S %d\n",j+1);
                }
                if(i==1){
                    printf("H %d\n",j+1);
                }
                if(i==2){
                    printf("C %d\n",j+1);
                }
                if(i==3){
                    printf("D %d\n",j+1);
                }
            }
        }
        
    }
    
    return 0;
}
    
    
