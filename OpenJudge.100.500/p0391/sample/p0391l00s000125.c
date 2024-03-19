#include <stdio.h>
int main() {
	char str[1001], line[1016], buf[1001], *p1, *p2;
	int q, a, b, n;
	scanf("%s\n%d\n", str, &q);  // read q  
	while (q--) {                // loop q times
		for (p1 = line; (*p1 = getchar()) != '\n';)p1++;  // read line
		sscanf(line, "%*s %d %d%n", &a, &b, &n);          // parse it
		switch (line[2]) {
			case 'p':  // replace
				*p1 = '\0';
				for (p1 = line + n + 1, p2 = str + a; *p1; *p2++ = *p1++);
				break;
			case 'v':  // reverse
				p1 = buf;
				for (p2 = str + a; p2 <= str + b; *p1++ = *p2++);
				for (p2 = str + a; p2 <= str + b; *p2++ = *--p1);
				break;
			case 'i':  // print
				for (p1 = str + a; p1 <= str + b; putchar(*p1++));
				putchar('\n');
		}
	}
}
