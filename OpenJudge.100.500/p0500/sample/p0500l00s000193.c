#include<stdio.h>
int main(){
    int n,m,i,j,tmp;
    int s[5];
    int c[5];
    int data[4] = {0,0,0,0};
    int flag[4] = {1,1,1,1};
    int judge = 0;
    
    scanf("%d %d",&n,&m);
    
    for(i = 0 ; i < m ; i++){
        scanf("%d %d",&s[i],&c[i]);
    }
    
    for(i = 0 ; i < m ; i++){ //先頭0の場合
        if(n != 1 && s[i] == 1 && c[i] == 0){
            printf("-1\n");
            return 0;
        }
    }
    
    for(i = 0 ; i < m-1 ; i++){ //多重カウント対策
        for(j = i+1 ; j < m ; j++){
            if(s[i] == s[j] && c[i] == c[j]) flag[s[i]-1]++;
            else if(s[i] == s[j] && c[i] != c[j]) judge=1;
            else judge = 0;
        }
    }
//    printf("%d %d %d %d\n",flag[0],flag[1],flag[2],flag[3]);
    for(i = 0 ; i < m ; i++){
        if(s[i] > n) judge = 1; //桁数を超える
        data[s[i]-1] = c[i]; //仮のスペースに数字を代入
        flag[s[i]-1]--;
    }
    
    for(i = 0 ; i < n ; i++){
        if(flag[i] < 0){
            judge = 1;
        }
    }
    
    
//    for(i = 0 ; i <= 3 ; i++){
//        printf("%d ",data[i]);
//    }
//    printf("\n");
//    for(i = 0 ; i <= 3 ; i++){
//        printf("%d ",flag[i]);
//    }
    
    if(judge == 1){
        printf("-1\n");
    }else{
        for(i = 0 ; i < n ; i++){
            printf("%d",data[i]);
        }
        printf("\n");
    }
    return 0;
}
