#include<stdio.h>
#include<string.h>
 
int main()
{
    char str[1001];     /*入力される文字列*/
    char substr[1001];  /*処理用文字列*/
    char order[8];      /*命令用文字列*/
    char p[1001];       /*置換用文字列*/
    int q;              /*命令の数*/
    int a, b;           /*命令で指定される文字の番号*/
    int inc, dec;       /*インクリメント、デクリメント変数*/
    char rev;           /*入れ替え用文字*/
 
    /*文字列の入力*/
    scanf("%s",str);
    /*命令の数の入力*/
    scanf("%d",&q);
 
    for (int i = 0; i < q;i++) {
        scanf("%s", order);
        /*表示*/
        if (strcmp(order, "print") == 0) {
            /*aとbの入力*/
            scanf("%d %d", &a, &b);
            /*表示する文字数分substrにコピー*/
            strncpy(substr,&str[a],b - a + 1);
            /*終端記号を添付*/
            substr[b - a + 1] = '\0';
            /*表示する*/
            printf("%s\n",substr);
        }
        /*逆順*/
        else if (strcmp(order, "reverse") == 0) {
            /*aとbの入力*/
            scanf("%d %d", &a, &b);
            /*incとdecの設定*/
            inc = a;
            dec = b;
            /*逆順にする範囲の先頭と末尾を入れ替える（中心に行くまで）*/
            while (inc < dec) {
                rev = str[dec];
                str[dec] = str[inc];
                str[inc] = rev;
                inc++;
                dec--;
            }
        }
        /*置換*/
        else if (strcmp(order, "replace") == 0) {
            /*aとbの入力*/
            scanf("%d %d %s", &a, &b, p);
            /*strの指定された場所をpに置き換え*/
            for (int i = 0; i < b - a + 1; i++) {
                str[a + i] = p[i];
            }
        }
    }
    return 0;
}
