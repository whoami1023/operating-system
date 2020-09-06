#include <csapp.h>

int main()
{
	int fd1, fd2;
	char c;

	fd1 = Open("foobar.txt", O_RDONLY, 0);
	fd2 = Open("foobar.txt", O_RDONLY, 0);
	Read(fd2, &c, 1);
	Dup(fd2, fd1);
	Read(fd1, &c, 1);
	printf("c = %c\n");
	exit(0);
}
