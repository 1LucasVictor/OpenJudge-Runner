#include <stdio.h>
#include <string.h>

int main(){

  int i=0;//いれた文字列の数

  int c[100];//シャッフルの回数

  char ch[100][200];//いれた文字列そのもの

  int sh[100][100];//シャッフルの各々の値

  int a;//ループ用

  while(1){

    scanf("%s",ch[i]);//文字列入力

    if(ch[i][0]=='-')

      break;

    scanf("%*c%d",&c[i]);//シャッフル回数入力

    /*
    printf("%d\n",c[i]);
    */

    for(a=0;a<=c[i]-1;a++){

      scanf("%*c%d",&sh[i][a]);//シャッフルの値入力

      /*
      printf("%d\n",sh[i][a]);
      */

    }

    i++;

    /*
    printf("%d",i);
    */

    scanf("%*c");

  }

  /*デバッグ用
  //ここですでにバグる

  int aa,bb,cc,dd,ee;

  for(aa=0;aa<=i-1;aa++){

    printf("%s\n",ch[aa]);

    for(bb=0;bb<=c[aa];bb++){

      printf("%d\n",sh[aa][bb]);

    }

  }

  */

  int ai,iu;//ループ用

  char string[i][20000];//文字列いっぱい並べた文字列

  int shuffle[1000]={};//シャッフル値の合計

  for(ai=0;ai<=i-1;ai++){

    for(iu=1;iu<=c[ai]+1;iu++){

      sprintf(string[ai],"%s%s",string[ai],ch[ai]);//文字列いっぱい並べる

      shuffle[ai]+=sh[ai][iu-1];

    }

  }

  /*
  printf("%s",string[0]);
  */

  int s,t;

  /*
  printf("%d,%d",shuffle[0],strlen(ch[0]));
  */

  /*
  printf("%c %c",string[0][2],string[0][3]);
  */

  for(s=0;s<=i-1;s++){

    for(t=shuffle[s];t<=(shuffle[s]+strlen(ch[s]))-1;t++){

      printf("%c",string[s][t]);

    }

    printf("\n");

  }

  return 0;

}