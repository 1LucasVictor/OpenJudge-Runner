#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <string.h>
#include <stdio.h>

const char main_[] = {
	0x48, 0x89, 0xf8,
	0x48, 0x0f, 0xaf, 0xc6,
	0x48, 0x83, 0xe0, 0x01,
	0xc3
};

int main(void){
	int fd = open("/dev/zero", O_RDONLY);
	int (*solve)(int, int) = mmap(NULL, sizeof main_, PROT_WRITE | PROT_EXEC, MAP_PRIVATE, fd, 0);
	memcpy(solve, main_, sizeof main_);

	int a, b;
	scanf("%d%d", &a, &b);
	puts(solve(a, b) ? "Odd" : "Even");

	close(fd);
	munmap(solve, sizeof main_);
	return 0;
}
