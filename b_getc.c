#include "monty.h"
/**
* _getc - Reads a text file and prints it to the POSIX
* @fd: File descriptor
* Return: char
*/
int _getc(ssize_t fd)
{
	char buf[1], *chr;
	int res_read;

	res_read = read(fd, buf, 1);
	if (res_read > 0)
	{
		chr = buf;
		return (*chr);
	}

	if (res_read == -1)
		return (0);

	return (EOF);
}
