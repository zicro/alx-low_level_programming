#include "main.h"

/**
 * read_textfile - read and print a text file
 * @filename: the file to be readen
 * @letters: letter to read and print
 * Return: total read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int frwd;
	char *buffer;
	ssize_t r_bytes, w_bytes;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL || filename == NULL)
		return (0);

	frwd = open(filename, O_RDONLY);
	if (frwd == -1)
	{
		free(buffer);
		return (0);
	}

	r_bytes = read(frwd, buffer, letters);
	if (r_bytes == -1)
	{
		free(buffer);
		close(frwd);
		return (0);
	}

	w_bytes = write(STDOUT_FILENO, buffer, r_bytes);
	if (w_bytes == -1)
	{
		free(buffer);
		close(frwd);
		return (0);
	}

	free(buffer);
	close(frwd);
	return (w_bytes);
}
