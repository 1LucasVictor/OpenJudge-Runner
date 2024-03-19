#include<stdio.h>
#define W 300
int main(){
    int i,c=0,d=0,j;
    int a[W],b[W];
    for(i=0;i<W;i++){
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
        if(a[i]==0||b[i]==0)break;
    }
    i=0;
    j=0;
    while(a[c]!=0||b[d]!=0){
    for ( i = 0; i < a[c]; i++ ){
        for ( j = 0; j < b[d]; j++ ){
            if(i>0&&j>0&&i<a[c]-1&&j<b[d]-1){
                printf(".");
            }else{
            printf("#");
            }
        }
        printf("\n");
    }
        printf("\n");
        c++;
        d++;
    }
    
	return 0;
}

