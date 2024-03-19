#include <stdio.h>

int main(void){
    int n,num,ary[4][13]={},i,j;
    char fig, f[5] = "SHCD";
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %d",&fig,&num);
        for (j=0;j<4;j++) {if (fig==f[j]) ary[j][num-1]=-1;}
    }
    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            if (ary[i][j]==0) printf("%c %d\n",f[i],j+1);
        }
    }
    return 0;
}
