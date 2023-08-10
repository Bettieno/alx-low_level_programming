#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: r- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
size_t fn;
ssize_t r;
ssize_t h;
fn = open(filename, O_RDONLY);
if (fn == -1)
return (0);
buf = malloc(sizeof(char) * letters);
h = read(fn, buf, letters);
r = write(STDOUT_FILENO, buf, h);
free(buf);
close(fn);
return (r);
}
