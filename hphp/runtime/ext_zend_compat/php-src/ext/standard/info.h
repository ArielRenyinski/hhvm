/* 
   +----------------------------------------------------------------------+
   | PHP Version 5                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2013 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Rasmus Lerdorf <rasmus@php.net>                             |
   |          Zeev Suraski <zeev@zend.com>                                |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#ifndef INFO_H
#define INFO_H

#define PHP_ENTRY_NAME_COLOR "#ccccff"
#define PHP_CONTENTS_COLOR "#cccccc"
#define PHP_HEADER_COLOR "#9999cc"

#define PHP_INFO_GENERAL      (1<<0)
#define PHP_INFO_CREDITS      (1<<1)
#define PHP_INFO_CONFIGURATION    (1<<2)
#define PHP_INFO_MODULES      (1<<3)
#define PHP_INFO_ENVIRONMENT    (1<<4)
#define PHP_INFO_VARIABLES      (1<<5)
#define PHP_INFO_LICENSE      (1<<6)
#define PHP_INFO_ALL        0xFFFFFFFF

#ifndef HAVE_CREDITS_DEFS
#define HAVE_CREDITS_DEFS

#define PHP_CREDITS_GROUP      (1<<0)
#define PHP_CREDITS_GENERAL      (1<<1)
#define PHP_CREDITS_SAPI      (1<<2)
#define PHP_CREDITS_MODULES      (1<<3)
#define PHP_CREDITS_DOCS      (1<<4)
#define PHP_CREDITS_FULLPAGE    (1<<5)
#define PHP_CREDITS_QA        (1<<6)
#define PHP_CREDITS_WEB             (1<<7)
#define PHP_CREDITS_ALL        0xFFFFFFFF

#endif /* HAVE_CREDITS_DEFS */

#define PHP_LOGO_DATA_URI "data:image/gif;base64,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"
#define PHP_EGG_LOGO_DATA_URI  "data:image/gif;base64,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"
#define ZEND_LOGO_DATA_URI "data:image/gif;base64,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"

BEGIN_EXTERN_C()
PHP_FUNCTION(phpversion);
PHP_FUNCTION(phpinfo);
PHP_FUNCTION(phpcredits);
PHP_FUNCTION(php_sapi_name);
PHP_FUNCTION(php_uname);
PHP_FUNCTION(php_ini_scanned_files);
PHP_FUNCTION(php_ini_loaded_file);
PHPAPI char *php_info_html_esc(char *string TSRMLS_DC);
PHPAPI void php_info_html_esc_write(char *string, int str_len TSRMLS_DC);
PHPAPI void php_print_info_htmlhead(TSRMLS_D);
PHPAPI void php_print_info(int flag TSRMLS_DC);
PHPAPI void php_print_style(void);
PHPAPI void php_info_print_style(TSRMLS_D);
PHPAPI void php_info_print_table_colspan_header(int num_cols, char *header);
PHPAPI void php_info_print_table_header(int num_cols, ...);
PHPAPI void php_info_print_table_row(int num_cols, ...);
PHPAPI void php_info_print_table_row_ex(int num_cols, const char *, ...);
PHPAPI void php_info_print_table_start(void);
PHPAPI void php_info_print_table_end(void);
PHPAPI void php_info_print_box_start(int bg);
PHPAPI void php_info_print_box_end(void);
PHPAPI void php_info_print_hr(void);
PHPAPI void php_info_print_module(zend_module_entry *module TSRMLS_DC);
PHPAPI char *php_get_uname(char mode);

void register_phpinfo_constants(INIT_FUNC_ARGS);
END_EXTERN_C()

#endif /* INFO_H */