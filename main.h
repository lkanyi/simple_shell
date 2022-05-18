#ifndef MAIN_H
#define MAIN_H

int _exec(char *command, char **cmd, char **env)
void _exit_func(char **environ)
char *find_path(char **environ)
int _fork(char *myself, command_t *cmd_node, char *path, char **env)
char *command_t **_prompt(char *myself, char *argv)
int main(int ac, char **av, char **env)
int prompt(void);

#endif
