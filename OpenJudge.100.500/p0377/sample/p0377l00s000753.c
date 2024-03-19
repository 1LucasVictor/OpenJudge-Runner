#include<stdio.h>
int main(void){
int y,z,b,n,i[4][13]={0},j;
char a,x[4]={'S','H','C','D'};
scanf("%d",&n);
for(b=0;b<n;b++){
    scanf("%s %d",&a,&y);
    if(a=='S'){
        i[0][y]=1;
    }else if(a=='H'){
        i[1][y]=1;
    }else if(a=='C'){
        i[2][y]=1;
    }else if(a=='D'){
        i[3][y]=1;
    }
}
for(j=0;j<4;j++){
        if(j==0){
            a='S';
        }else if(j==1){
            a='H';
        }else if(j==2){
            a='C';
        }else if(j==3){
            a='D';
        }
        for(y=1;y<14;y++){
                if(i[j][y] == 0){
            printf("%c %d\n",a,y);
        }}

}

return 0;
}