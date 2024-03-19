#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>



int main(){
    int a, b, c, d;
    int valor;
    scanf("%d %d %d %d", &a, &b, &c, &d);
 	
 	if(c > b || a > d){
 	 valor = 0;
 	}
	else if(c > a && b < d){
	 valor = b-c;
	}
	else if(c > a && b > d){
	 valor = c-d;
	}
	else if(c < a && b < d){
	 valor = c-a + b-c;
	}
	else if(c < a && b > d){
	 valor = d - a;
	}
	else if(c == a && b > d){
	 valor = d;
	}
	else if(c == a && b > d){
	 valor = b;
	}
	else if(c < a && b == d){
	 valor = b-a;
	}
	else if(c > a && b == d){
	 valor = b-c;
	}	
    printf("%d\n", valor);
    return 0;
}
