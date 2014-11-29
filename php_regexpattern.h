#define REGEXP_VERSION "1.0"

#define REGEXP_ALPHANUMERIC	"^[[:alnum:]]+$"
#define REGEXP_ALPHA		"^[[:alpha:]]+$"
#define REGEXP_NUMERIC		"^[[:digit:]]+$"
#define REGEXP_ARCHIVEFILE	"^[.[:alnum:]_-]+[.](bz2|tgz|rar|zip|cab|arj|lzh|ace|tar|gz|gzip|z|jar)$"
#define REGEXP_IMAGEFILE	"^[.[:alnum:]_-]+[.](jp(e){0,1}g|gif|png|bmp)$"
#define REGEXP_EMAIL		"^[.[:alnum:]_-]+@[.[:alnum:]_-]{2,}.[[:alnum:]]{2,4}$"
#define REGEXP_DOMAIN		"^(http|https)+(://)+[.[:alpha:]_-]+.+[.[:alpha:]_-]{2,4}"
#define REGEXP_PHONE		"([((){0,1}[:digit:]()){0,1}]{3})[ .-]([0-9]{3})[ .-]([0-9]{4})"
#define REGEXP_PHONE_FR		"^[[:digit:]]{2}[ ][[:digit:]]{2}[ ][[:digit:]]{2}[ ][[:digit:]]{2}[ ][[:digit:]]{2}$"

#define REGEXP_ZIP_CA		"^[[:alpha:]][[:digit:]][[:alpha:]][- ]{0,1}[[:digit:]][[:alpha:]][[:digit:]]$"
#define REGEXP_ZIP_US_SHORT	"^[[:digit:]]{5}$"
#define REGEXP_ZIP_US_LONG	"^[[:digit:]]{5}-[[:digit:]]{4}$"

#define _ADDFIELD_(k, v) add_assoc_string_ex(return_value, k, sizeof(k), (char *) v, 1);

PHP_MINIT_FUNCTION(regexpattern);
PHP_MINFO_FUNCTION(regexpattern);
PHP_FUNCTION(regexp_patterns);
