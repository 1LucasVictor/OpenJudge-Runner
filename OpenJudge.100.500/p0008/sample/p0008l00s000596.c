// 20151023
// ???????????????????????????????????£????????§??°?????????????????£???. ????????????????????\.




#include<stdio.h>




int main() {
  int i, j ;
  int wari;     // ????????????????????°
  int sosu = 0; // ?´???°?????°
  int nyu;      // ??\??????
  int count = 0;// ??\????????°

    


  /* ??\??? */
  while ((scanf("%d", &nyu)) != EOF) {




    /* ??\???????????°??¶??? */
    if (count == 30) {
      return 0;
    }




    /* ??\????????????????¶????????????????????¢???? */
    if (nyu >= 100000 || nyu < 0) {
      return 0;
    }




    /* ?´???°?????°?????? */
    sosu = 0;
    for (i = 1; i <= nyu; i ++) {
      wari = 0;
      for (j = 1; j <= i; j ++) {
	if (i % j == 0) {
	  wari ++;
	}
      }
      if (wari == 2) {
	sosu ++;
      }
    }




    /* ????????¨??? */
    printf("%d\n", sosu);
    count ++;
  }




  return 0;
}