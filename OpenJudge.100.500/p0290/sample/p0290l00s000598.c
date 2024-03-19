#include<stdio.h>
#include<math.h>

main(){
  int n;        /* This n is number of scanning integer.*/
  int s;        /* This s is to substitute scanning integer.*/
  int counter=0,i,j;

  scanf("%d",&n);
  if(n<1||n>10000){
    return 0;
  }             /* Constraints: 1<=n<=10000 */
  
  for(i=n;i>0;i--){
    scanf("%d",&s);  /* Scanning integer */
    if(s<2||s>10e8){
      return 0;
    }           /* Constraints: 2<=an element of the list<=10e8 */

    if(s==2){
      counter++;
      continue;
    }
    else if(s%2==0)continue;
    for(j=3;j<sqrt((double)s);j+=2){
      if(s%j==0)break;
    }           /* Judging that s is prime or not */
    if(j>sqrt((double)s))counter++;
  }

  printf("%d\n",counter);  /* Printing number of prime */
  return 0;
}