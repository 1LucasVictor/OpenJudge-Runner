#include <stdio.h>
int main(void){
  int number,num1,num2,yes;
  scanf("%d",&number);//numberに値を入力
  yes = 0;//yesに０を代入
  for(num1 = 1;num1 <= 9;++num1){//num1を1から9まで1ずつ増やして
    for(num2 = 1;num2 <= 9;++num2){//num2を1から9まで1ずつ増やして
      if(number == num1 * num2 && yes == 0){//numberがnum1とnum2の積となり、かつyes = 0の時
        printf("Yes\n");//Yesを出力
        yes += 1;//yesに1を加える
      }
    }
  }
  if(yes == 0){//yesが0の時
    printf("No\n");//Noを出力
  }
  return 0;
}