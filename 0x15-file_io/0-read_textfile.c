#include "main.h"
#include <stddef.h>

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file
 * @letters:  number of letters to be printed
 *
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, n_read, w;
	char *buffer;

	buffer = malloc(sizeof(*buffer) * (letters + 1));
	if (filename == NULL || buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	n_read = read(f, buffer, letters);
	if (n_read == -1)
		return (0);
	buffer[n_read] = '\0';
	w = write(STDOUT_FILENO, buffer, n_read);
	if (w != n_read)
		return (0);
	free(buffer);
	close(f);
	return (n_read);
}
