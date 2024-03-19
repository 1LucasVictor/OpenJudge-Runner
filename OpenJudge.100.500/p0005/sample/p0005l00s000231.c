#include<stdio.h>
char b[99];main(n){for(n=read(fileno(stdin),b,80);n--;)putchar(b[n]);}