#include <stdio.h>

#define NUM 30

int main()
{   
    int i,j;
    int fig[NUM];
    int pnum = 0;
    int countv = 0;
    int countpn = 0;
    char str[100000];
    
    while(fgets(str,sizeof(str),stdin) != NULL){
    
        sscanf(str,"%d",&pnum);
        
        for(i=2;i<=pnum;i++){
            for(j=2;j<=i;j++){
                if(i%j==0){
                   break;
                 }
                else{
                        /*nop*/
                    }
                }
                if(i==j){
                    countpn++;
                }
                else{
                    /*nop*/
                }
            }
        fig[countv++] = countpn;
        countpn = 0;
     }
    
    for(i=0;i<countv;i++){
        printf("%d\n",fig[i]);
    }
    
    return 0;
}