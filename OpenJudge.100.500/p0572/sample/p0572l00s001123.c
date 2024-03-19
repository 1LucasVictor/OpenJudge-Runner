#include <stdio.h>

int main(){
    
    int L ,R ,i, j ;
    int isum ,jsum ,iminsum ,jminsum ,minsum;

    iminsum =2019;
    jminsum =2019;

    scanf("%d", &L);
    scanf("%d" ,&R);

    i=L;
    if(R-L>=2019){
        minsum = 0;
    }

    for(j= i+1; j <= R ; j++){
        
        jsum = j%2019;

        if(jsum < jminsum){
            jminsum = jsum;
        }

        for(i = L;i <= j-1; i++){
            isum = i%2019;

            if(isum <iminsum){
                iminsum = isum;
            }

        }  
    }
     
    minsum = jminsum*iminsum;


    printf("%d\n", minsum );
}