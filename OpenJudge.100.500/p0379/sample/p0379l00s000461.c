#include <stdio.h>
#include<string.h>
#include<stdlib.h>
//if文は()の中身が0ならfalse 0以外ならture　writer:al19010
//scanf("%s",&a[0]);入力された文字列（空白文字の手前までを文字リテラルとしてa[0]から代入する。('\n'を'\0'に置き換えているともいえる)
//%sは&a[0]のようにアドレスで対応させる！！（忘れがちなので注意！！）
//gets(&a[0]);//これでやると入力された文字列（空白文字も含めて）を文字リテラルとしてa[0]から代入する。('\n'を'\0'に置き換えているともいえる)。ただし、バッファオーバーフローの温床になり得るのでgccコンパイラが警告を出す。
//fgets(&a[0],入力文字数,stdin(ファイルポインタをstdinによって標準入力化));//こっちは安全なget関数。警告も出ない。
//scanf("%[^\n]",&a[0]);これが一番文字入力でおすすめ！！
//strcmp(s1,s2) s1とs2が同じ文字列なら0を返す。#include<string.h>が必要　s1とs2はchar型のポインタでなければならない！
//fprint(fp,"");ファイルポインタの示すファイルに""の中身を入力                                      
//fscanf(fp,"");ファイルポインタの示すファイルから""のと合致する変数型の中身を取得
//fp=fopen("ファイル名.txt","r");　ファイルの中身はUTF-8である必要がある//

//double hyouji(int n,double a[][n])
double hyouji(int n,double a[][n]){//テスト用//double hyouji(int n,double a[][n])//左から順に変数が宣言されている？・・・
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%f ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void yoinnshitennkai(int n,int line,int row,double a[][n],double b[][n-1]){//(行列の大きさ,展開する行,展開する列,展開したい行列,展開した行列の代入先,)
    int i,j,k,l;
        k=0;
        for(i=0;i<n;i++){
            if(i==line) continue;
            l=0;
                for(j=0;j<n;j++){
                    if(row==j) continue;

                    
            
                    b[k][l]=a[i][j];
                    l++;
            }
            k++;
        }
    //hyouji(n-1,b);//テスト用
}




double gyouretushiki(int n,double a[][n]){//再帰関数//double hyouji(int n,double a[][n])//左から順に変数が宣言されている？・・・
    int i,j;//この関数は常に0行目について余因子展開を行う。　//bは世因子展開後のやつ
    
    if(n==1){//一次正方行列だった時
        return a[0][0];
    }
    else if(n==2){//二次正方行列だった時
        return a[0][0]*a[1][1]-a[1][0]*a[0][1];
    }

    else if(n==3){//三次正方行列だった時
        return a[0][0]*a[1][1]*a[2][2]+a[0][1]*a[1][2]*a[2][0]+a[0][2]*a[1][0]*a[2][1]-(a[0][2]*a[1][1]*a[2][0]+a[0][0]*a[1][2]*a[2][1]+a[0][1]*a[1][0]*a[2][2]);
    }
    else{//四次正方行列以上だった時
        int v=0,w=0,r,seifuhanntei;//vは行wは列を担当
        double ans=0;
        double b[n-1][n-1];//何度も使いまわす。
        //0行目について（a[0][n]について）余因子展開を行う
        
        
    for(r=0;r<n;r++){
        //a[0][r]での展開
        v=0;
        for(i=0;i<n;i++){//座標(0,r)で余因子展開　後でa[0][r]の値を乗算する。
            if(i==0) continue;
            w=0;
            for(j=0;j<n;j++){
                if(j==r) continue;
                b[v][w]=a[i][j];
                w++;
            }
            v++;
        }
        //hyouji(n-1,b);//世因子展開が上手くいっているかを判定
        seifuhanntei=1;
        for(i=0;i<r;i++) seifuhanntei=seifuhanntei*(-1);//余因子展開の際の正負判定
        ans=ans+a[0][r]*gyouretushiki(n-1,b)*seifuhanntei;
    }
    return ans;
    }
}
int main(void){//線形代数学p57参照（参考）
    //入力部
    int i,j,n,m;
    scanf("%d %d",&n,&m);
    int a[n][m],b[m],c[n];
        //初期化
        for(i=0;i<n;i++){
            c[i]=0;
        }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    //処理部
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            c[i]=c[i]+a[i][j]*b[j];
        }
    }
    //出力部
    //printf("n=%d,m=%d\n",n,m);
    for(i=0;i<n;i++){
        printf("%d\n",c[i]);
    }

    return 0;
}
