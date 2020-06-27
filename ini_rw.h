#ifndef INI_RW
#define INI_RW

typedef struct ini INI;

INI *ini_load(char *path);
char **ini_list_sections(INI *ini);
char **ini_list_items(INI *ini, char *section);
char *ini_read(INI *ini, char *section, char *item);
int ini_write(INI *ini, char *section, char *item, char *value);
int ini_remove(INI *ini, char *section, char *item);
void ini_free(INI *ini);

#endif
