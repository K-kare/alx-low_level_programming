#include "main.h"
#include <fcntl.h>
/**
*append_text_to_file - function that appends text at the end of a file
*@filename: file name
*@text_content: added content
*Return: 1 if the file exists and -1 if the file does not exist or
*if you do not have the required permissions to write the file
*/
int append_text_to_file(const char *filename, char *text_content)
{
int file_d;
int nletters;
int rwr;
if (!filename)
return (-1);
file_d = open(filename, O_WRONLY | O_APPEND);
if (file_d == -1)
return (-1);
if (text_content)
{
for (nletters = 0; text_content[nletters]; nletters++)
;
rwr = write(file_d, text_content, nletters);
if (rwr == -1)
return (-1);
}
close(file_d);
return (1);
}
