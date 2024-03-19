#include<stdio.h>
#include<stdlib.h>
int main() {
    int i=0,hantei_sosu=0,count=0,n,*sosu,j;
    
    scanf("%d",&n);
    
    sosu = (int *)malloc(n * sizeof (int));
    
   
    
    for(i=n;i>=0;i--){
        scanf("%d",&sosu[i]);
        for(j=sosu[i];j>=1;j--){
            if(sosu[i] % j == 0) hantei_sosu++; 
        }
        if(hantei_sosu == 2) count++;
        hantei_sosu = 0;
       
    }
    
    printf("%d\n",count);
    return 0;
}
