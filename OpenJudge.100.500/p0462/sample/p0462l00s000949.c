#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>
int main(void){
    uint_fast64_t a;
	float b;
    scanf("%" SCNuFAST64 " %f",&a,&b);
	printf("%" PRIuFAST64 "\n",a*(uint_fast16_t)(b*100)/100);
    exit(0);
}