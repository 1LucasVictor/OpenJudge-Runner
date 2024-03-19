    #include <stdio.h>
     
    void abc139_b(/* arguments */) {
      int a,b,c=1,i;
      scanf("%d %d",&a,&b);
      for (i= 0;; i++) {
        if((c*a)<b){
          c++;
        }else{
          break;
        }
      }
      printf("%d\n",c);
    }
    int main() {
      abc139_b();
      return 0;
    }