/* -----------------------------------------------------------------------------
 * See the LICENSE file for information on copyright, usage and redistribution
 * of SWIG, and the README file for authors - http://www.swig.org/release.html.
 *
 * const.i
 *
 * Typemaps for constants
 * ----------------------------------------------------------------------------- */

%typemap(consttab) int,
                   unsigned int,
                   short,
                   unsigned short,
                   long,
                   unsigned long,
                   unsigned char,
                   signed char,
                   bool,
                   enum SWIGTYPE
  "REGISTER_LONG_CONSTANT( \"$symname\", $value, CONST_CS | CONST_PERSISTENT);";

%typemap(consttab) float,
                   double
  "REGISTER_DOUBLE_CONSTANT(\"$symname\", $value, CONST_CS | CONST_PERSISTENT);";

%typemap(consttab) char
  "REGISTER_STRING_CONSTANT(\"$symname\", \"$value\", CONST_CS | CONST_PERSISTENT );";

%typemap(consttab) char *,
                    const char *,
                    char [],
                    const char []
  "REGISTER_STRING_CONSTANT(\"$symname\", $value, CONST_CS | CONST_PERSISTENT);";

%typemap(consttab) SWIGTYPE *,
                   SWIGTYPE &,
                   SWIGTYPE [] {
  // This actually registers it as a global variable and constant.  I don't like it, but I can't figure out
  // the zend_constant code...
  zval *z_var;
  MAKE_STD_ZVAL(z_var);
  SWIG_SetPointerZval(z_var, (void*)$value, $1_descriptor, 0);
  //zend_hash_add(&EG(symbol_table), "$1", strlen("$1")+1, (void *)&z_var,sizeof(zval *), NULL);
  zend_constant c;
  c.value = *z_var;
  zval_copy_ctor(&c.value);
  size_t len = strlen("$1");
  c.name = zend_strndup( "$1", len );
  c.name_len = len+1;
  c.flags = CONST_CS | CONST_PERSISTENT;
  c.module_number = module_number;
  zend_register_constant( &c TSRMLS_CC );
}
