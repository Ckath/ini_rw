# ini rw
minimal ini parser with read/write functionality. single header include.

## 'features'
- read/write/remove items to/from ini file 
- no support for comments or useless indentation, they aren't parsed and wont be written back
- no support for quotes, don't use them they don't have any point anyway
- no datatypes, all values are returned as char \* regardless, sscanf them if you need more functionality

## functions
- `INI *ini_load(char *path)`\
load in ini file
- `ini_free(IMI *ini)`\
free loaded ini
- `char **ini_list_sections(INI *ini)`\
retrieve a list of all loaded sections
- `char *ini_read(INI *ini, char *section, char *item)`\
retrieve value of `item` in	`section`
- `int ini_write(INI *ini, char *section, char *item, char *value)`\
write `value` to `item` in `section`, returns write actions
- `int ini_remove(INI *ini, char *section, char *item)`\
remove `item`(pass `NULL` to remove entire section) in `section`, returns remove actions.
