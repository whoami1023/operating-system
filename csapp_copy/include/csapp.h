#ifndef _CSAPP_H_ 

#define _CSAPP_H_

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

/* unix I/O wrappers */
int Open(const char *pathname, int flags, mode_t mode);
ssize_t Read(int fd, void *buf, size_t count);
ssize_t Write(int fd, void *buf, size_t count);
int Close(int fd);

/* error-handling functions */

void Unix_error(char *msg);


/* Process control */
pid_t Fork(void);
pid_t Wait(int *status);
int Dup2(int oldfd, int newfd);
#endif
