#include<stdio.h>
int check(void);
int check_2(void);
char step[200002];
int n,a,b,a_end,b_end;
int main(void){
    int i,flg,flg_2;
    for(i=0;i<200002;i++){
        step[i]=0;
    }
    scanf("%d %d %d %d %d",&n,&a,&b,&a_end,&b_end);
    scanf("%s",step);
    a--;
    b--;
    a_end--;
    b_end--;
    flg=0;
    flg_2=0;
    if(a_end==b_end){
        printf("No\n");
        return 0;
    }else if(b_end<a_end){
        flg=check();
        flg_2=check_2();
    }else{
        flg=check();
    }
    if(flg==0 && flg_2==0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
int check(void){
    int i,ren;
    ren=0;
    if(b_end>a_end){
        for(i=a;i<b_end;i++){
            if(step[i]=='#'){
                ren++;
            }else{
                ren=0;
            }
            if(ren==2){
                return 1;
            }
        }
    }else{
        for(i=a;i<a_end;i++){
            if(step[i]=='#'){
                ren++;
            }else{
                ren=0;
            }
            if(ren==2){
                return 1;
            }
        }
    }
    return 0;
}
int check_2(void){
    int i,ret=1;
    for(i=b;i<=b_end;i++){
        if(step[i-1]=='.' && step[i]=='.' && step[i+1]=='.'){
            ret=0;
        }
    }
    return ret;
}
