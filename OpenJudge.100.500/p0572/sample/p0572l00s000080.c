#include <stdio.h>

int main(){
    
    int L ,R ,i, j ;
    int isum ,jsum ,iminsum ,jminsum ,minsum;

    iminsum =2019;
    jminsum =2019;

    scanf("%d", &L);
    scanf("%d" ,&R);

    i=L;
    
    for(j= i+1; j <= R ; j++){
        
        jsum = i*j%2019;

        if(jsum < jminsum){
            jminsum = jsum;
        }

        for(i = L;i <= j-1; i++){
            isum = i*j%2019;

            if(isum <iminsum){
                iminsum = isum;
            }

        }

        if(iminsum < jminsum){
            minsum =iminsum;
        }
        else{
            minsum =jminsum;
        }
    }


    printf("%d\n", minsum );
}