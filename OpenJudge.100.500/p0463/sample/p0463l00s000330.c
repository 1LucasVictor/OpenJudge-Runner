/*	ex3_2
	suzuto	*/

  #include <stdio.h>

  int main(void) {
    int num, first_place; /*変数の宣言*/

    scanf("%d",&num); /*本数の入力*/
    first_place = num % 10; /*本数の一の位をfirst_placeに代入*/

    switch (first_place) {
      case 2:
      case 4:
      case 5:
      case 7:
      case 9:
        printf("hon\n"); /*読み方が「ほん」の時*/
        break;
      case 0:
      case 1:
      case 6:
      case 8:
        printf("pon\n"); /*読み方が「ぽん」の時*/
        break;
      case 3:
        printf("bon\n"); /*読み方が「ぼん」の時*/
        break;
    }
    return 0;
  }
