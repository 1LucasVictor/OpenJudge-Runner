#include<stdio.h>
int main(){
    int n,a[4][13],b,i,j;
    char x;
    scanf("%d",&n);
	for(i=0;i<4;i++){
    	for(j=0;j<13;j++){
    		a[i][j]=0;
    	}
	}
    for(i=n;i>0;i--){
        scanf("%c", &x);
        scanf("%c %d",&x,&b);
        if(x=='S'){
            a[0][b-1]=1;
        }else if(x=='H'){
            a[1][b-1]=1;
        }else if(x=='C'){
            a[2][b-1]=1;
        }else{
            a[3][b-1]=1;
        }
    }
    for(i=0;i<4;i++){
    	for(j=0;j<13;j++){
    		if(a[i][j]==0){
            	if(i==0){
            		printf("S %d\n",j+1);
         		}else if(i==1){
          			printf("H %d\n",j+1);
       			}else if(i==2){
            		printf("C %d\n",j+1);
        		}else{
            		printf("D %d\n",j+1);
        		}
    		}
    	}
    }
    return 0;
}
