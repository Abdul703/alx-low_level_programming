#ifndef MAIN_H
#define MAIN_H

#define BUFSIZE 1024

void copy_file(const char *from_file, const char *to_file);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
