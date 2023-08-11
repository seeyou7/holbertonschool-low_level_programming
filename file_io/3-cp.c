#include "main.h"

/**
 *  * close_file - Close file
 *   * @file: file
 */

void close_file(int file)
{
	int cl;

	cl = close(file);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
			exit(100);
	}
}

/**
 *  * main - copie the content of a file to another file
 *   *
 *    * @argc: number of arguments
 *     * @argv: arguments in the array
 *      *
 *       * Return: 0
 */

int main(int argc, char **argv)
{
		int op1, op2, rd, wr;
		char buffer[1024];

		if (argc != 3)
		{
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
				exit(97);
		}

			op1 = open(argv[1], O_RDONLY);
			rd = read(op1, buffer, 1024);
			op2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

			while (rd > 0)
			{
				wr = write(op2, buffer, rd);
				rd = read(op1, buffer, 1024);
				op2 = open(argv[2], O_WRONLY | O_APPEND);
			}
			if (op1 == -1 || rd == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
				exit(98);
			}
			if (op2 == -1 || wr == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
					exit(99);
			}
				close_file(op1);
				close_file(op2);
				return (0);
}
