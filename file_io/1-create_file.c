#include "main.h"

/**
 * _strlen - find length of string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}

/**
 * create_file -function that creates a file.
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * If the file already exists, truncate it.
 * @filename: new file name
 * @text_content: text to write inside file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int n_wrote;

	if (filename == NULL)
		return (-1);

	/* créer avec les permissions si le file n'existe pas, sinon tronquer */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* si rien à écrire, juste créer le file */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/* write */
	n_wrote = write(fd, text_content, _strlen(text_content));
	if (n_wrote == -1 || n_wrote != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
