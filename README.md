# ini rw
minimal ini parser with read/write functionality. single header include.

## 'features'
- read/write/remove items to/from ini file 
- sections and items are created/updated/removed as needed solely using `ini_write`/`ini_remove`
- able to retrieve a list of all sections in the loaded ini, no need to know what sections are in the ini
- no support for comments or useless indentation, they aren't parsed and wont be written back
- no support for quotes, don't use them they don't have any point anyway
- no datatypes, all values are returned as char \* regardless, sscanf them if you need more functionality

## functions
- `INI *ini_load(char *path)`\
load in ini file
- `ini_free(INI *ini)`\
free loaded ini
- `char **ini_list_sections(INI *ini)`\
retrieve a list of all loaded sections, last element will be `NULL`
- `char **ini_list_items(INI *ini, char *section)`\
retrieve a list of all loaded items in the section, last element will be `NULL`
- `char *ini_read(INI *ini, char *section, char *item)`\
retrieve value of `item` in	`section`. returns `NULL` on item not found
- `int ini_write(INI *ini, char *section, char *item, char *value)`\
write `value` to `item` in `section`. returns write actions, meaning `0` on item already in with that value
- `int ini_remove(INI *ini, char *section, char *item)`\
remove `item`(pass `NULL` to remove entire section) in `section`. returns remove actions, meaning `0` on item not found
