#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

/**
 * print_error - prints error message to stderr
 * @code: exit code
 * @message: error message
 * @arg: argument for the message
 */
void print_error(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}

/**
 * close_file - closes a file descriptor with error checking
 * @fd: file descriptor to close
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_files - copies content from one file to another
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @filename_from: source filename for error messages
 * @filename_to: destination filename for error messages
 */
void copy_files(int fd_from, int fd_to, const char *filename_from, const char *filename_to)
{
	char buffer[BUFFER_SIZE];
	int read_bytes, write_bytes;

	while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes == -1 || write_bytes != read_bytes)
		{
			close_file(fd_from);
			close_file(fd_to);
			print_error(99, "Error: Can't write to %s\n", filename_to);
		}
	}

	if (read_bytes == -1)
	{
		close_file(fd_from);
		close_file(fd_to);
		print_error(98, "Error: Can't read from file %s\n", filename_from);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, appropriate error code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (fd_to == -1)
	{
		close_file(fd_from);
		print_error(99, "Error: Can't write to %s\n", argv[2]);
	}

	copy_files(fd_from, fd_to, argv[1], argv[2]);

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
