//Finding Missing Cards

#include<stdio.h>

int main()
{
    int i=1, j=1;
    int max = 0, num=0;
    int S[14]={0};
    int H[14]={0};
    int C[14]={0};
    int D[14]={0};
//    char  str;
    char  str[1];
    
    scanf("%d ", &max);
//    printf("%d\n",max);
//    if(max>52) return 0;
    
    for(j=1; j<=max; j++){ //真ん中は終了条件
//        printf("%d\n",j);
//        printf("for start\n");
//        scanf("%c %d", &str, &num); //%cではだめ？ //0Sとか2文字入ってる
        scanf("%c %d ", &str, &num); 
//        printf("%c %d", str, num);//http://freeh.minim.ne.jp/minimini/develop/cscanf.html
        if(str[0]=='S'){
            S[num] = 1;
        }else if(str[0]=='H'){
            H[num] = 1;
        }else if(str[0]=='C'){
            C[num] = 1;
        }else if(str[0]=='D'){
            D[num] = 1;
        }
//        printf("for end\n");
    }
//    printf("\n");
    
    
    for(i=1; i<=13; i++){
        if(S[i] == 0) printf("S %d\n", i);
    }
    for(i=1; i<=13; i++){
        if(H[i] == 0) printf("H %d\n", i);
    }
    for(i=1; i<=13; i++){
        if(C[i] == 0) printf("C %d\n", i);
    }
    for(i=1; i<=13; i++){
        if(D[i] == 0) printf("D %d\n", i);
    }
    
    return 0;
}
