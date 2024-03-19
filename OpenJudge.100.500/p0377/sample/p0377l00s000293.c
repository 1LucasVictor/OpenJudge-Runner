#include <stdio.h>

int main(void){
    int n,i;
    scanf("%d",&n);
	int s[13],h[13],clo[13],dia[13];
    for(i=0;i<13;i++){
        s[i] = 0;
        h[i] = 0;
        clo[i] = 0;
        dia[i] = 0;
    }
    for(i=0;i<n;i++){
        char v;
        int x;
        char dummy;
        scanf("%c",&dummy);
        scanf("%c %d",&v,&x);
        if(v == 'S'){
            s[x-1] = 1;
        }else if(v == 'H'){
            h[x-1] = 1;
        }else if(v == 'C'){
            clo[x-1] = 1;
        }else if(v == 'D'){
            dia[x-1] = 1;
        }
    }
    for(i=0;i<13;i++){
        if(s[i] == 0){
            printf("S %d\n",i+1);
        }
    }    
    for(i=0;i<13;i++){
        if(h[i] == 0){
            printf("H %d\n",i+1);
        }
    }
    for(i=0;i<13;i++){
        if(clo[i] == 0){
            printf("C %d\n",i+1);
        }
    }
    for(i=0;i<13;i++){
    	if(dia[i] == 0){
    		printf("D %d\n",i+1);
    	}
    }
    return 0;
}
