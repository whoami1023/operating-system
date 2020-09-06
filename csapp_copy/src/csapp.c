#include <csapp.h>




/************************
* Error-handling functions
*************************/
void Unix_error(char *msg)
{
	fprintf(stderr,"%s: %s\n", msg, strerror(errno));
	exit(0);
}


/*********************
* I/O wrapper
**********************/
int Open(const char *pathname, int flags, mode_t mode)
{
	int rc;

	if((rc = open(pathname, flags, mode)) < 0)
		Unix_error("Open error!");
	return rc;
}

ssize_t Read(int fd, void *buf, size_t count)
{
	ssize_t rc;

	if ((rc = read(fd, buf, count)) < 0)
		Unix_error("Read error!");
	return rc;
}

ssize_t Write(int fd, void *buf, size_t count)
{
	ssize_t rc;
	if ((rc = write(fd, buf, count)) < 0)
		Unix_error("Write error!");
	return rc;
}

int Close(int fd)
{
	int rc;

	if ((rc = close(fd)) < 0)
		Unix_error("Close error!");
	return rc;
}

/*******************
* Process control
********************/
pid_t Fork(void)
{
	pid_t pid;
	if ((pid = fork()) < 0)
		Unix_error("Fork error!");
	return pid;
}


pid_t Wait(int *status)
{
	pid_t pid;

	if ((pid = wait(status)) < 0)
		Unix_error("Wait error!");
	return pid;
}

int Dup2(int oldfd, int newfd)
{
	int rc;
	if ((rc = dup2(oldfd, newfd)) < 0)
		Unix_error("Dup2 error");
	return rc;
}
