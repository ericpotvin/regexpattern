# regexpattern

## Regular Expression Pattern PHP Module

Use regular expression the easy way.


## Prerequisite

You need the php5-dev components in order to compile this PHP module.

	sudo apt-get install php5-dev

## Compile

	$ phpize
	$ ./configure
	$ make

## Verify Install

	php -d extension=path/to/so/module/regexpattern.so -m

## Test

	php -d extension=path/to/so/module/regexpattern.so -r 'echo REGEXP_ZIP_US_SHORT;'

## Install

	$ make install  # it (may require root)

