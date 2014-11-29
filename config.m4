dnl config.m4 for regexpattern

PHP_ARG_ENABLE(regexpattern, whether to enable regexpattern support,
[  --enable-regexpattern          Enable regexpattern support])

if test "$PHP_REGEXPATTERN" != "no"; then
    PHP_NEW_EXTENSION(regexpattern, regexpattern.c, $ext_shared)
fi
