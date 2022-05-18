#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <string.h>
#include <signal.h>

int _exec(char *command, char **cmd, char **env)
void _exit_func(char **environ)
char *find_path(char **environ)
int _fork(char *myself, command_t *cmd_node, char *path, char **env)
char *command_t **_prompt(char *myself, char *argv)
int main(int ac, char **av, char **env)

int prompt(void);
char *_read(void);
char *_fullpathbuffer(char **av, char *PATH, char *copy);
int checkbuiltins(char **av, char *buffer, int exitstatus);
int _forkprocess(char **av, char *buffer, char *fullpathbuffer);

char *_strdup(char *str);
int _splitstring(char *str);
int _strcmp(const char *s1, const char *s2);
char *_strcat(char *dest, char *src);
int _strlen(char *s);

char *_getenv(const char *name);
int _env(void);
void _puts(char *str);
int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);

#endif
