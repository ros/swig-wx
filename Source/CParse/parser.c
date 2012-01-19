/* A Bison parser, made by GNU Bison 2.0.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     HBLOCK = 259,
     POUND = 260,
     STRING = 261,
     INCLUDE = 262,
     IMPORT = 263,
     INSERT = 264,
     CHARCONST = 265,
     NUM_INT = 266,
     NUM_FLOAT = 267,
     NUM_UNSIGNED = 268,
     NUM_LONG = 269,
     NUM_ULONG = 270,
     NUM_LONGLONG = 271,
     NUM_ULONGLONG = 272,
     TYPEDEF = 273,
     TYPE_INT = 274,
     TYPE_UNSIGNED = 275,
     TYPE_SHORT = 276,
     TYPE_LONG = 277,
     TYPE_FLOAT = 278,
     TYPE_DOUBLE = 279,
     TYPE_CHAR = 280,
     TYPE_WCHAR = 281,
     TYPE_VOID = 282,
     TYPE_SIGNED = 283,
     TYPE_BOOL = 284,
     TYPE_COMPLEX = 285,
     TYPE_TYPEDEF = 286,
     TYPE_RAW = 287,
     TYPE_NON_ISO_INT8 = 288,
     TYPE_NON_ISO_INT16 = 289,
     TYPE_NON_ISO_INT32 = 290,
     TYPE_NON_ISO_INT64 = 291,
     LPAREN = 292,
     RPAREN = 293,
     COMMA = 294,
     SEMI = 295,
     EXTERN = 296,
     INIT = 297,
     LBRACE = 298,
     RBRACE = 299,
     PERIOD = 300,
     CONST_QUAL = 301,
     VOLATILE = 302,
     REGISTER = 303,
     STRUCT = 304,
     UNION = 305,
     EQUAL = 306,
     SIZEOF = 307,
     MODULE = 308,
     LBRACKET = 309,
     RBRACKET = 310,
     ILLEGAL = 311,
     CONSTANT = 312,
     NAME = 313,
     RENAME = 314,
     NAMEWARN = 315,
     EXTEND = 316,
     PRAGMA = 317,
     FEATURE = 318,
     VARARGS = 319,
     ENUM = 320,
     CLASS = 321,
     TYPENAME = 322,
     PRIVATE = 323,
     PUBLIC = 324,
     PROTECTED = 325,
     COLON = 326,
     STATIC = 327,
     VIRTUAL = 328,
     FRIEND = 329,
     THROW = 330,
     CATCH = 331,
     EXPLICIT = 332,
     USING = 333,
     NAMESPACE = 334,
     NATIVE = 335,
     INLINE = 336,
     TYPEMAP = 337,
     EXCEPT = 338,
     ECHO = 339,
     APPLY = 340,
     CLEAR = 341,
     SWIGTEMPLATE = 342,
     FRAGMENT = 343,
     WARN = 344,
     LESSTHAN = 345,
     GREATERTHAN = 346,
     MODULO = 347,
     DELETE_KW = 348,
     TYPES = 349,
     PARMS = 350,
     NONID = 351,
     DSTAR = 352,
     DCNOT = 353,
     TEMPLATE = 354,
     OPERATOR = 355,
     COPERATOR = 356,
     PARSETYPE = 357,
     PARSEPARM = 358,
     PARSEPARMS = 359,
     CAST = 360,
     LOR = 361,
     LAND = 362,
     OR = 363,
     XOR = 364,
     AND = 365,
     RSHIFT = 366,
     LSHIFT = 367,
     MINUS = 368,
     PLUS = 369,
     SLASH = 370,
     STAR = 371,
     LNOT = 372,
     NOT = 373,
     UMINUS = 374,
     DCOLON = 375
   };
#endif
#define ID 258
#define HBLOCK 259
#define POUND 260
#define STRING 261
#define INCLUDE 262
#define IMPORT 263
#define INSERT 264
#define CHARCONST 265
#define NUM_INT 266
#define NUM_FLOAT 267
#define NUM_UNSIGNED 268
#define NUM_LONG 269
#define NUM_ULONG 270
#define NUM_LONGLONG 271
#define NUM_ULONGLONG 272
#define TYPEDEF 273
#define TYPE_INT 274
#define TYPE_UNSIGNED 275
#define TYPE_SHORT 276
#define TYPE_LONG 277
#define TYPE_FLOAT 278
#define TYPE_DOUBLE 279
#define TYPE_CHAR 280
#define TYPE_WCHAR 281
#define TYPE_VOID 282
#define TYPE_SIGNED 283
#define TYPE_BOOL 284
#define TYPE_COMPLEX 285
#define TYPE_TYPEDEF 286
#define TYPE_RAW 287
#define TYPE_NON_ISO_INT8 288
#define TYPE_NON_ISO_INT16 289
#define TYPE_NON_ISO_INT32 290
#define TYPE_NON_ISO_INT64 291
#define LPAREN 292
#define RPAREN 293
#define COMMA 294
#define SEMI 295
#define EXTERN 296
#define INIT 297
#define LBRACE 298
#define RBRACE 299
#define PERIOD 300
#define CONST_QUAL 301
#define VOLATILE 302
#define REGISTER 303
#define STRUCT 304
#define UNION 305
#define EQUAL 306
#define SIZEOF 307
#define MODULE 308
#define LBRACKET 309
#define RBRACKET 310
#define ILLEGAL 311
#define CONSTANT 312
#define NAME 313
#define RENAME 314
#define NAMEWARN 315
#define EXTEND 316
#define PRAGMA 317
#define FEATURE 318
#define VARARGS 319
#define ENUM 320
#define CLASS 321
#define TYPENAME 322
#define PRIVATE 323
#define PUBLIC 324
#define PROTECTED 325
#define COLON 326
#define STATIC 327
#define VIRTUAL 328
#define FRIEND 329
#define THROW 330
#define CATCH 331
#define EXPLICIT 332
#define USING 333
#define NAMESPACE 334
#define NATIVE 335
#define INLINE 336
#define TYPEMAP 337
#define EXCEPT 338
#define ECHO 339
#define APPLY 340
#define CLEAR 341
#define SWIGTEMPLATE 342
#define FRAGMENT 343
#define WARN 344
#define LESSTHAN 345
#define GREATERTHAN 346
#define MODULO 347
#define DELETE_KW 348
#define TYPES 349
#define PARMS 350
#define NONID 351
#define DSTAR 352
#define DCNOT 353
#define TEMPLATE 354
#define OPERATOR 355
#define COPERATOR 356
#define PARSETYPE 357
#define PARSEPARM 358
#define PARSEPARMS 359
#define CAST 360
#define LOR 361
#define LAND 362
#define OR 363
#define XOR 364
#define AND 365
#define RSHIFT 366
#define LSHIFT 367
#define MINUS 368
#define PLUS 369
#define SLASH 370
#define STAR 371
#define LNOT 372
#define NOT 373
#define UMINUS 374
#define DCOLON 375




/* Copy the first part of user declarations.  */
#line 12 "CParse/parser.y"


#define yylex yylex

char cvsroot_parser_y[] = "$Header: /cvsroot/swig/SWIG/Source/CParse/parser.y,v 1.183 2006/03/06 22:50:56 wsfulton Exp $";

#include "swig.h"
#include "swigkeys.h"
#include "cparse.h"
#include "preprocessor.h"
#include <ctype.h>

/* We do this for portability */
#undef alloca
#define alloca malloc

/* -----------------------------------------------------------------------------
 *                               Externals
 * ----------------------------------------------------------------------------- */

int  yyparse();

/* NEW Variables */

static Node    *top = 0;      /* Top of the generated parse tree */
static int      unnamed = 0;  /* Unnamed datatype counter */
static Hash    *extendhash = 0;     /* Hash table of added methods */
static Hash    *classes = 0;        /* Hash table of classes */
static Symtab  *prev_symtab = 0;
static Node    *current_class = 0;
String  *ModuleName = 0;
static Node    *module_node = 0;
static String  *Classprefix = 0;  
static String  *Namespaceprefix = 0;
static int      inclass = 0;
static char    *last_cpptype = 0;
static int      inherit_list = 0;
static Parm    *template_parameters = 0;
static int      extendmode   = 0;
static int      compact_default_args = 0;
static int      template_reduce = 0;
static int      cparse_externc = 0;

static int      class_level = 0;
static Node    *class_decl[16];

/* -----------------------------------------------------------------------------
 *                            Assist Functions
 * ----------------------------------------------------------------------------- */


 
/* Called by the parser (yyparse) when an error is found.*/
static void yyerror (const char *e) {
  (void)e;
}

static Node *new_node(const String_or_char *tag) {
  Node *n = NewHash();
  set_nodeType(n,tag);
  Setfile(n,cparse_file);
  Setline(n,cparse_line);
  return n;
}

/* Copies a node.  Does not copy tree links or symbol table data (except for
   sym:name) */

static Node *copy_node(Node *n) {
  Node *nn;
  Iterator k;
  nn = NewHash();
  Setfile(nn,Getfile(n));
  Setline(nn,Getline(n));
  for (k = First(n); k.key; k = Next(k)) {
    String *ci;
    String *key = k.key;
    char *ckey = Char(key);
    if ((strcmp(ckey,"nextSibling") == 0) ||
	(strcmp(ckey,"previousSibling") == 0) ||
	(strcmp(ckey,"parentNode") == 0) ||
	(strcmp(ckey,"lastChild") == 0)) {
      continue;
    }
    if (Strncmp(key,"csym:",5) == 0) continue;
    /* We do copy sym:name.  For templates */
    if ((strcmp(ckey,"sym:name") == 0) || 
	(strcmp(ckey,"sym:weak") == 0) ||
	(strcmp(ckey,"sym:typename") == 0)) {
      String *ci = Copy(k.item);
      Setattr(nn,key, ci);
      Delete(ci);
      continue;
    }
    if (strcmp(ckey,"sym:symtab") == 0) {
      Setattr(nn,"sym:needs_symtab", "1");
    }
    /* We don't copy any other symbol table attributes */
    if (strncmp(ckey,"sym:",4) == 0) {
      continue;
    }
    /* If children.  We copy them recursively using this function */
    if (strcmp(ckey,"firstChild") == 0) {
      /* Copy children */
      Node *cn = k.item;
      while (cn) {
	Node *copy = copy_node(cn);
	appendChild(nn,copy);
	Delete(copy);
	cn = nextSibling(cn);
      }
      continue;
    }
    /* We don't copy the symbol table.  But we drop an attribute 
       requires_symtab so that functions know it needs to be built */

    if (strcmp(ckey,"symtab") == 0) {
      /* Node defined a symbol table. */
      Setattr(nn,"requires_symtab","1");
      continue;
    }
    /* Can't copy nodes */
    if (strcmp(ckey,"node") == 0) {
      continue;
    }
    if ((strcmp(ckey,"parms") == 0) || (strcmp(ckey,"pattern") == 0) || (strcmp(ckey,"throws") == 0)
	|| (strcmp(ckey,"kwargs") == 0)) {
      ParmList *pl = CopyParmList(k.item);
      Setattr(nn,key,pl);
      Delete(pl);
      continue;
    }
    /* Looks okay.  Just copy the data using Copy */
    ci = Copy(k.item);
    Setattr(nn, key, ci);
    Delete(ci);
  }
  return nn;
}

/* -----------------------------------------------------------------------------
 *                              Variables
 * ----------------------------------------------------------------------------- */

static char  *typemap_lang = 0;    /* Current language setting */

static int cplus_mode  = 0;
static String  *class_rename = 0;

/* C++ modes */

#define  CPLUS_PUBLIC    1
#define  CPLUS_PRIVATE   2
#define  CPLUS_PROTECTED 3

/* include types */
static int   import_mode = 0;

void SWIG_typemap_lang(const char *tm_lang) {
  typemap_lang = Swig_copy_string(tm_lang);
}

void SWIG_cparse_set_compact_default_args(int defargs) {
  compact_default_args = defargs;
}

int SWIG_cparse_template_reduce(int treduce) {
  template_reduce = treduce;
  return treduce;  
}

/* -----------------------------------------------------------------------------
 *                           Assist functions
 * ----------------------------------------------------------------------------- */

/* Perform type-promotion for binary operators */
static int promote(int t1, int t2) {
  return t1 > t2 ? t1 : t2;
}

static String *yyrename = 0;

/* Forward renaming operator */

static String *resolve_node_scope(String *cname);


Hash *Swig_cparse_features() {
  static Hash   *features_hash = 0;
  if (!features_hash) features_hash = NewHash();
  return features_hash;
}

static String *feature_identifier_fix(String *s) {
  if (SwigType_istemplate(s)) {
    String *tp, *ts, *ta, *tq;
    tp = SwigType_templateprefix(s);
    ts = SwigType_templatesuffix(s);
    ta = SwigType_templateargs(s);
    tq = Swig_symbol_type_qualify(ta,0);
    Append(tp,tq);
    Append(tp,ts);
    Delete(ts);
    Delete(ta);
    Delete(tq);
    return tp;
  } else {
    return NewString(s);
  }
}

/* Generate the symbol table name for an object */
/* This is a bit of a mess. Need to clean up */
static String *add_oldname = 0;



static String *make_name(Node *n, String *name,SwigType *decl) {
  int destructor = name && (*(Char(name)) == '~');

  if (yyrename) {
    String *s = NewString(yyrename);
    Delete(yyrename);
    yyrename = 0;
    if (destructor  && (*(Char(s)) != '~')) {
      Insert(s,0,"~");
    }
    return s;
  }

  if (!name) return 0;
  return Swig_name_make(n,Namespaceprefix,name,decl,add_oldname);
}

/* Generate an unnamed identifier */
static String *make_unnamed() {
  unnamed++;
  return NewStringf("$unnamed%d$",unnamed);
}

/* Return if the node is a friend declaration */
static int is_friend(Node *n) {
  return Cmp(Getattr(n,k_storage),"friend") == 0;
}

static int is_operator(String *name) {
  return Strncmp(name,"operator ", 9) == 0;
}


/* Add declaration list to symbol table */
static int  add_only_one = 0;

static void add_symbols(Node *n) {
  String *decl;
  String *wrn = 0;
  if (inclass && n) {
    cparse_normalize_void(n);
  }
  while (n) {
    String *symname = 0;
    /* for friends, we need to pop the scope once */
    String *old_prefix = 0;
    Symtab *old_scope = 0;
    int isfriend = inclass && is_friend(n);
    int iscdecl = Cmp(nodeType(n),"cdecl") == 0;
    if (extendmode) {
      Setattr(n,"isextension","1");
    }
    
    if (inclass) {
      String *name = Getattr(n, k_name);
      if (isfriend) {
	/* for friends, we need to add the scopename if needed */
	String *prefix = name ? Swig_scopename_prefix(name) : 0;
	old_prefix = Namespaceprefix;
	old_scope = Swig_symbol_popscope();
	Namespaceprefix = Swig_symbol_qualifiedscopename(0);
	if (!prefix) {
	  if (name && !is_operator(name) && Namespaceprefix) {
	    String *nname = NewStringf("%s::%s", Namespaceprefix, name);
	    Setattr(n,k_name,nname);
	    Delete(nname);
	  }
	} else {
	  Symtab *st = Swig_symbol_getscope(prefix);
	  String *ns = st ? Getattr(st,k_name) : prefix;
	  String *base  = Swig_scopename_last(name);
	  String *nname = NewStringf("%s::%s", ns, base);
	  Setattr(n,k_name,nname);
	  Delete(nname);
	  Delete(base);
	  Delete(prefix);
	}
	Namespaceprefix = 0;
      } else {
	/* for member functions, we need to remove the redundant
	   class scope if provided, as in
	   
	   struct Foo {
	   int Foo::method(int a);
	   };
	   
	*/
	String *prefix = name ? Swig_scopename_prefix(name) : 0;
	if (prefix) {
	  if (Classprefix && (StringEqual(prefix,Classprefix))) {
	    String *base = Swig_scopename_last(name);
	    Setattr(n,k_name,base);
	    Delete(base);
	  }
	  Delete(prefix);
	}

	if (0 && !Getattr(n,k_parentnode) && class_level) set_parentNode(n,class_decl[class_level - 1]);
	Setattr(n,"ismember","1");
      }
    }
    if (!isfriend && inclass) {
      if ((cplus_mode != CPLUS_PUBLIC)) {
	int only_csymbol = 1;
	if (cplus_mode == CPLUS_PROTECTED) {
	  Setattr(n,k_access, "protected");
	  only_csymbol = !Swig_need_protected(n);
	} else {
	  /* private are needed only when they are pure virtuals */
	  Setattr(n,k_access, "private");
	if ((Cmp(Getattr(n,k_storage),"virtual") == 0) 
	    && (Cmp(Getattr(n,k_value),"0") == 0)) {
	  only_csymbol = !Swig_need_protected(n);
	}    
	}
	if (only_csymbol) {
	  /* Only add to C symbol table and continue */
	  Swig_symbol_add(0, n); 
	  if (add_only_one) break;
	  n = nextSibling(n);
	  continue;
	}
      } else {
	  Setattr(n,k_access, "public");
      }
    }
    if (Getattr(n,k_symname)) {
      n = nextSibling(n);
      continue;
    }
    decl = Getattr(n,k_decl);
    if (!SwigType_isfunction(decl)) {
      String *name = Getattr(n,k_name);
      String *makename = Getattr(n,"parser:makename");
      if (iscdecl) {	
	String *storage = Getattr(n, k_storage);
	if (Cmp(storage,"typedef") == 0) {
	  Setattr(n,k_kind,"typedef");
	} else {
	  SwigType *type = Getattr(n,"type");
	  String *value = Getattr(n,k_value);
	  Setattr(n,k_kind,"variable");
	  if (value && Len(value)) {
	    Setattr(n,"hasvalue","1");
	  }
	  if (type) {
	    SwigType *ty;
	    SwigType *tmp = 0;
	    if (decl) {
	      ty = tmp = Copy(type);
	      SwigType_push(ty,decl);
	    } else {
	      ty = type;
	    }
	    if (!SwigType_ismutable(ty)) {
	      SetFlag(n,"hasconsttype");
	      SetFlag(n,"feature:immutable");
	    }
	    if (tmp) Delete(tmp);
	  }
	  if (!type) {
	    Printf(stderr,"notype name %s\n", name);
	  }
	}
      }
      Swig_features_get(Swig_cparse_features(), Namespaceprefix, name, 0, n);
      if (makename) {
	symname = make_name(n, makename,0);
        Delattr(n,"parser:makename"); /* temporary information, don't leave it hanging around */
      } else {
        makename = name;
	symname = make_name(n, makename,0);
      }
      
      if (!symname) {
	symname = Copy(Getattr(n,k_unnamed));
      }
      if (symname) {
	wrn = Swig_name_warning(n, Namespaceprefix, symname,0);
      }
    } else {
      String *name = Getattr(n,k_name);
      SwigType *fdecl = Copy(decl);
      SwigType *fun = SwigType_pop_function(fdecl);
      if (iscdecl) {	
	Setattr(n,k_kind,"function");
      }
      
      Swig_features_get(Swig_cparse_features(),Namespaceprefix,name,fun,n);

      symname = make_name(n, name,fun);
      wrn = Swig_name_warning(n, Namespaceprefix,symname,fun);
      
      Delete(fdecl);
      Delete(fun);
      
    }
    if (!symname) {
      n = nextSibling(n);
      continue;
    }
    if (GetFlag(n,"feature:ignore")) {
      Swig_symbol_add(0, n);
    } else if (strncmp(Char(symname),"$ignore",7) == 0) {
      char *c = Char(symname)+7;
      SetFlag(n,"feature:ignore");
      if (strlen(c)) {
	SWIG_WARN_NODE_BEGIN(n);
	Swig_warning(0,Getfile(n), Getline(n), "%s\n",c+1);
	SWIG_WARN_NODE_END(n);
      }
      Swig_symbol_add(0, n);
    } else {
      Node *c;
      if ((wrn) && (Len(wrn))) {
	String *metaname = symname;
	if (!Getmeta(metaname,"already_warned")) {
	  SWIG_WARN_NODE_BEGIN(n);
	  Swig_warning(0,Getfile(n),Getline(n), "%s\n", wrn);
	  SWIG_WARN_NODE_END(n);
	  Setmeta(metaname,"already_warned","1");
	}
      }
      c = Swig_symbol_add(symname,n);

      if (c != n) {
        /* symbol conflict attempting to add in the new symbol */
        if (Getattr(n,k_symweak)) {
          Setattr(n,k_symname,symname);
        } else {
          String *e = NewStringEmpty();
          String *en = NewStringEmpty();
          String *ec = NewStringEmpty();
          int redefined = Swig_need_redefined_warn(n,c,inclass);
          if (redefined) {
            Printf(en,"Identifier '%s' redefined (ignored)",symname);
            Printf(ec,"previous definition of '%s'",symname);
          } else {
            Printf(en,"Redundant redeclaration of '%s'",symname);
            Printf(ec,"previous declaration of '%s'",symname);
          }
          if (Cmp(symname,Getattr(n,k_name))) {
            Printf(en," (Renamed from '%s')", SwigType_namestr(Getattr(n,k_name)));
          }
          Printf(en,",");
          if (Cmp(symname,Getattr(c,k_name))) {
            Printf(ec," (Renamed from '%s')", SwigType_namestr(Getattr(c,k_name)));
          }
          Printf(ec,".");
	  SWIG_WARN_NODE_BEGIN(n);
          if (redefined) {
            Swig_warning(WARN_PARSE_REDEFINED,Getfile(n),Getline(n),"%s\n",en);
            Swig_warning(WARN_PARSE_REDEFINED,Getfile(c),Getline(c),"%s\n",ec);
          } else if (!is_friend(n) && !is_friend(c)) {
            Swig_warning(WARN_PARSE_REDUNDANT,Getfile(n),Getline(n),"%s\n",en);
            Swig_warning(WARN_PARSE_REDUNDANT,Getfile(c),Getline(c),"%s\n",ec);
          }
	  SWIG_WARN_NODE_END(n);
          Printf(e,"%s:%d:%s\n%s:%d:%s\n",Getfile(n),Getline(n),en,
                 Getfile(c),Getline(c),ec);
          Setattr(n,k_error,e);
	  Delete(e);
          Delete(en);
          Delete(ec);
        }
      }
    }
    /* restore the class scope if needed */
    if (isfriend) {
      Swig_symbol_setscope(old_scope);
      if (old_prefix) {
	Delete(Namespaceprefix);
	Namespaceprefix = old_prefix;
      }
    }
    Delete(symname);

    if (add_only_one) return;
    n = nextSibling(n);
  }
}


/* add symbols a parse tree node copy */

static void add_symbols_copy(Node *n) {
  String *name;
  int    emode = 0;
  while (n) {
    char *cnodeType = Char(nodeType(n));

    if (strcmp(cnodeType,"access") == 0) {
      String *kind = Getattr(n,k_kind);
      if (Strcmp(kind,"public") == 0) {
	cplus_mode = CPLUS_PUBLIC;
      } else if (Strcmp(kind,"private") == 0) {
	cplus_mode = CPLUS_PRIVATE;
      } else if (Strcmp(kind,"protected") == 0) {
	cplus_mode = CPLUS_PROTECTED;
      }
      n = nextSibling(n);
      continue;
    }

    add_oldname = Getattr(n,k_symname);
    if ((add_oldname) || (Getattr(n,"sym:needs_symtab"))) {
      if (add_oldname) {
	DohIncref(add_oldname);
	/*  Disable this, it prevents %rename to work with templates */
	/* If already renamed, we used that name  */
	/*
	if (Strcmp(add_oldname, Getattr(n,k_name)) != 0) {
	  Delete(yyrename);
	  yyrename = Copy(add_oldname);
	}
	*/
      }
      Delattr(n,"sym:needs_symtab");
      Delattr(n,k_symname);

      add_only_one = 1;
      add_symbols(n);

      if (Getattr(n,k_partialargs)) {
	Swig_symbol_cadd(Getattr(n,k_partialargs),n);
      }
      add_only_one = 0;
      name = Getattr(n,k_name);
      if (Getattr(n,"requires_symtab")) {
	Swig_symbol_newscope();
	Swig_symbol_setscopename(name);
	Delete(Namespaceprefix);
	Namespaceprefix = Swig_symbol_qualifiedscopename(0);
      }
      if (strcmp(cnodeType,"class") == 0) {
	inclass = 1;
	current_class = n;
	if (Strcmp(Getattr(n,k_kind),"class") == 0) {
	  cplus_mode = CPLUS_PRIVATE;
	} else {
	  cplus_mode = CPLUS_PUBLIC;
	}
      }
      if (strcmp(cnodeType,"extend") == 0) {
	emode = cplus_mode;
	cplus_mode = CPLUS_PUBLIC;
      }
      add_symbols_copy(firstChild(n));
      if (strcmp(cnodeType,"extend") == 0) {
	cplus_mode = emode;
      }
      if (Getattr(n,"requires_symtab")) {
	Setattr(n,k_symtab, Swig_symbol_popscope());
	Delattr(n,"requires_symtab");
	Delete(Namespaceprefix);
	Namespaceprefix = Swig_symbol_qualifiedscopename(0);
      }
      if (add_oldname) {
	Delete(add_oldname);
	add_oldname = 0;
      }
      if (strcmp(cnodeType,"class") == 0) {
	inclass = 0;
	current_class = 0;
      }
    } else {
      if (strcmp(cnodeType,"extend") == 0) {
	emode = cplus_mode;
	cplus_mode = CPLUS_PUBLIC;
      }
      add_symbols_copy(firstChild(n));
      if (strcmp(cnodeType,"extend") == 0) {
	cplus_mode = emode;
      }
    }
    n = nextSibling(n);
  }
}

/* Extension merge.  This function is used to handle the %extend directive
   when it appears before a class definition.   To handle this, the %extend
   actually needs to take precedence.  Therefore, we will selectively nuke symbols
   from the current symbol table, replacing them with the added methods */

static void merge_extensions(Node *cls, Node *am) {
  Node *n;
  Node *csym;

  n = firstChild(am);
  while (n) {
    String *symname;
    if (Strcmp(nodeType(n),"constructor") == 0) {
      symname = Getattr(n,k_symname);
      if (symname) {
	if (Strcmp(symname,Getattr(n,k_name)) == 0) {
	  /* If the name and the sym:name of a constructor are the same,
             then it hasn't been renamed.  However---the name of the class
             itself might have been renamed so we need to do a consistency
             check here */
	  if (Getattr(cls,k_symname)) {
	    Setattr(n,k_symname, Getattr(cls,k_symname));
	  }
	}
      } 
    }

    symname = Getattr(n,k_symname);
    DohIncref(symname);
    if ((symname) && (!Getattr(n,k_error))) {
      /* Remove node from its symbol table */
      Swig_symbol_remove(n);
      csym = Swig_symbol_add(symname,n);
      if (csym != n) {
	/* Conflict with previous definition.  Nuke previous definition */
	String *e = NewStringEmpty();
	String *en = NewStringEmpty();
	String *ec = NewStringEmpty();
	Printf(ec,"Identifier '%s' redefined by %%extend (ignored),",symname);
	Printf(en,"%%extend definition of '%s'.",symname);
	SWIG_WARN_NODE_BEGIN(n);
	Swig_warning(WARN_PARSE_REDEFINED,Getfile(csym),Getline(csym),"%s\n",ec);
	Swig_warning(WARN_PARSE_REDEFINED,Getfile(n),Getline(n),"%s\n",en);
	SWIG_WARN_NODE_END(n);
	Printf(e,"%s:%d:%s\n%s:%d:%s\n",Getfile(csym),Getline(csym),ec, 
	       Getfile(n),Getline(n),en);
	Setattr(csym,k_error,e);
	Delete(e);
	Delete(en);
	Delete(ec);
	Swig_symbol_remove(csym);              /* Remove class definition */
	Swig_symbol_add(symname,n);            /* Insert extend definition */
      }
    }
    n = nextSibling(n);
  }
}

static void append_previous_extension(Node *cls, Node *am) {
  Node *n, *ne;
  Node *pe = 0;
  Node *ae = 0;

  if (!am) return;
  
  n = firstChild(am);
  while (n) {
    ne = nextSibling(n);
    set_nextSibling(n,0);
    /* typemaps and fragments need to be preppended */
    if (((Cmp(nodeType(n),"typemap") == 0) || (Cmp(nodeType(n),"fragment") == 0)))  {
      if (!pe) pe = new_node("extend");
      appendChild(pe, n);
    } else {
      if (!ae) ae = new_node("extend");
      appendChild(ae, n);
    }    
    n = ne;
  }
  if (pe) preppendChild(cls,pe);
  if (ae) appendChild(cls,ae);
}
 

/* Check for unused %extend.  Special case, don't report unused
   extensions for templates */
 
static void check_extensions() {
  Iterator ki;

  if (!extendhash) return;
  for (ki = First(extendhash); ki.key; ki = Next(ki)) {
    if (!Strstr(ki.key,"<")) {
      SWIG_WARN_NODE_BEGIN(ki.item);
      Swig_warning(WARN_PARSE_EXTEND_UNDEF,Getfile(ki.item), Getline(ki.item), "%%extend defined for an undeclared class %s.\n", ki.key);
      SWIG_WARN_NODE_END(ki.item);
    }
  }
}

/* Check a set of declarations to see if any are pure-abstract */

static List *pure_abstract(Node *n) {
  List *abs = 0;
  while (n) {
    if (Cmp(nodeType(n),"cdecl") == 0) {
      String *decl = Getattr(n,k_decl);
      if (SwigType_isfunction(decl)) {
	String *init = Getattr(n,k_value);
	if (Cmp(init,"0") == 0) {
	  if (!abs) {
	    abs = NewList();
	  }
	  Append(abs,n);
	  Setattr(n,k_abstract,"1");
	}
      }
    } else if (Cmp(nodeType(n),"destructor") == 0) {
      if (Cmp(Getattr(n,k_value),"0") == 0) {
	if (!abs) {
	  abs = NewList();
	}
	Append(abs,n);
	Setattr(n,k_abstract,"1");
      }
    }
    n = nextSibling(n);
  }
  return abs;
}

/* Make a classname */

static String *make_class_name(String *name) {
  String *nname = 0;
  if (Namespaceprefix) {
    nname= NewStringf("%s::%s", Namespaceprefix, name);
  } else {
    nname = NewString(name);
  }
  if (SwigType_istemplate(nname)) {
    String *prefix, *args, *qargs;
    prefix = SwigType_templateprefix(nname);
    args   = SwigType_templateargs(nname);
    qargs  = Swig_symbol_type_qualify(args,0);
    Append(prefix,qargs);
    Delete(nname);
    Delete(args);
    Delete(qargs);
    nname = prefix;
  }
  return nname;
}

static List *make_inherit_list(String *clsname, List *names) {
  int i, ilen;
  String *derived;
  List *bases = NewList();

  if (Namespaceprefix) derived = NewStringf("%s::%s", Namespaceprefix,clsname);
  else derived = NewString(clsname);

  ilen = Len(names);
  for (i = 0; i < ilen; i++) {
    Node *s;
    String *base;
    String *n = Getitem(names,i);
    /* Try to figure out where this symbol is */
    s = Swig_symbol_clookup(n,0);
    if (s) {
      while (s && (Strcmp(nodeType(s),"class") != 0)) {
	/* Not a class.  Could be a typedef though. */
	String *storage = Getattr(s,k_storage);
	if (storage && (Strcmp(storage,"typedef") == 0)) {
	  String *nn = Getattr(s,k_type);
	  s = Swig_symbol_clookup(nn,Getattr(s,k_symsymtab));
	} else {
	  break;
	}
      }
      if (s && ((Strcmp(nodeType(s),"class") == 0) || (Strcmp(nodeType(s),"template") == 0))) {
	String *q = Swig_symbol_qualified(s);
	Append(bases,s);
	if (q) {
	  base = NewStringf("%s::%s", q, Getattr(s,k_name));
	  Delete(q);
	} else {
	  base = NewString(Getattr(s,k_name));
	}
      } else {
	base = NewString(n);
      }
    } else {
      base = NewString(n);
    }
    if (base) {
      Swig_name_inherit(base,derived);
      Delete(base);
    }
  }
  return bases;
}

/* If the class name is qualified.  We need to create or lookup namespace entries */

static Symtab *get_global_scope() {
  Symtab *symtab = Swig_symbol_current();
  Node   *pn = parentNode(symtab);
  while (pn) {
    symtab = pn;
    pn = parentNode(symtab);
    if (!pn) break;
  }
  Swig_symbol_setscope(symtab);
  return symtab;
}
 

static Node *nscope = 0;
static Node *nscope_inner = 0;
static String *resolve_node_scope(String *cname) {
  Symtab *gscope = 0;
  nscope = 0;
  nscope_inner = 0;  
  if (Swig_scopename_check(cname)) {
    Node   *ns;
    String *prefix = Swig_scopename_prefix(cname);
    String *base = Swig_scopename_last(cname);
    if (prefix && (Strncmp(prefix,"::",2) == 0)) {
      /* Use the global scope */
      String *nprefix = NewString(Char(prefix)+2);
      Delete(prefix);
      prefix= nprefix;
      gscope = get_global_scope();
    }    
    if (!prefix || (Len(prefix) == 0)) {
      /* Use the global scope, but we need to add a 'global' namespace.  */
      if (!gscope) gscope = get_global_scope();
      /* note that this namespace is not the k_unnamed one,
	 and we don't use Setattr(nscope,k_name, ""),
	 because the unnamed namespace is private */
      nscope = new_node(k_namespace);
      Setattr(nscope,k_symtab, gscope);;
      nscope_inner = nscope;
      return base;
    }
    /* Try to locate the scope */
    ns = Swig_symbol_clookup(prefix,0);
    if (!ns) {
      Swig_error(cparse_file,cparse_line,"Undefined scope '%s'\n", prefix);
    } else {
      Symtab *nstab = Getattr(ns,k_symtab);
      if (!nstab) {
	Swig_error(cparse_file,cparse_line,
		   "'%s' is not defined as a valid scope.\n", prefix);
	ns = 0;
      } else {
	/* Check if the node scope is the current scope */
	String *tname = Swig_symbol_qualifiedscopename(0);
	String *nname = Swig_symbol_qualifiedscopename(nstab);
	if (tname && (Strcmp(tname,nname) == 0)) {
	  ns = 0;
	  cname = base;
	}
	Delete(tname);
	Delete(nname);
      }
      if (ns) {
	/* we will try to create a new node using the namespaces we
	   can find in the scope name */
	List *scopes;
	String *sname;
	Iterator si;
	String *name = NewString(prefix);
	scopes = NewList();
	while (name) {
	  String *base = Swig_scopename_last(name);
	  String *tprefix = Swig_scopename_prefix(name);
	  Insert(scopes,0,base);
	  Delete(base);
	  Delete(name);
	  name = tprefix;
	}
	for (si = First(scopes); si.item; si = Next(si)) {
	  Node *ns1,*ns2;
	  sname = si.item;
	  ns1 = Swig_symbol_clookup(sname,0);
	  assert(ns1);
	  if (Strcmp(nodeType(ns1),"namespace") == 0) {
	    if (Getattr(ns1,k_alias)) {
	      ns1 = Getattr(ns1,k_namespace);
	    }
	  } else {
	    /* now this last part is a class */
	    si = Next(si);
	    ns1 = Swig_symbol_clookup(sname,0);
	    /*  or a nested class tree, which is unrolled here */
	    for (; si.item; si = Next(si)) {
	      if (si.item) {
		Printf(sname,"::%s",si.item);
	      }
	    }
	    /* we get the 'inner' class */
	    nscope_inner = Swig_symbol_clookup(sname,0);
	    /* set the scope to the inner class */
	    Swig_symbol_setscope(Getattr(nscope_inner,k_symtab));
	    /* save the last namespace prefix */
	    Delete(Namespaceprefix);
	    Namespaceprefix = Swig_symbol_qualifiedscopename(0);
	    /* and return the node name, including the inner class prefix */
	    break;
	  }
	  /* here we just populate the namespace tree as usual */
	  ns2 = new_node("namespace");
	  Setattr(ns2,k_name,sname);
	  Setattr(ns2,k_symtab, Getattr(ns1,k_symtab));
	  add_symbols(ns2);
	  Swig_symbol_setscope(Getattr(ns1,k_symtab));
	  Delete(Namespaceprefix);
	  Namespaceprefix = Swig_symbol_qualifiedscopename(0);
	  if (nscope_inner) {
	    if (Getattr(nscope_inner,k_symtab) != Getattr(ns2,k_symtab)) {
	      appendChild(nscope_inner,ns2);
	      Delete(ns2);
	    }
	  }
	  nscope_inner = ns2;
	  if (!nscope) nscope = ns2;
	}
	cname = base;
	Delete(scopes);
      }
    }
    Delete(prefix);
  }
  return cname;
}
 




/* Structures for handling code fragments built for nested classes */

typedef struct Nested {
  String   *code;        /* Associated code fragment */
  int      line;         /* line number where it starts */
  char     *name;        /* Name associated with this nested class */
  char     *kind;        /* Kind of class */
  int      unnamed;      /* unnamed class */
  SwigType *type;        /* Datatype associated with the name */
  struct Nested   *next;        /* Next code fragment in list */
} Nested;

/* Some internal variables for saving nested class information */

static Nested      *nested_list = 0;

/* Add a function to the nested list */

static void add_nested(Nested *n) {
  Nested *n1;
  if (!nested_list) nested_list = n;
  else {
    n1 = nested_list;
    while (n1->next) n1 = n1->next;
    n1->next = n;
  }
}

/* Dump all of the nested class declarations to the inline processor
 * However.  We need to do a few name replacements and other munging
 * first.  This function must be called before closing a class! */

static Node *dump_nested(const char *parent) {
  Nested *n,*n1;
  Node *ret = 0;
  n = nested_list;
  if (!parent) {
    nested_list = 0;
    return 0;
  }
  while (n) {
    char temp[256];
    Node *retx;
    SwigType *nt;
    /* Token replace the name of the parent class */
    Replace(n->code, "$classname", parent, DOH_REPLACE_ANY);
    /* Fix up the name of the datatype (for building typedefs and other stuff) */
    sprintf(temp,"%s_%s", parent,n->name);

    Append(n->type,parent);
    Append(n->type,"_");
    Append(n->type,n->name);

    /* Add the appropriate declaration to the C++ processor */
    retx = new_node("cdecl");
    Setattr(retx,k_name,n->name);
    nt = Copy(n->type);
    Setattr(retx,k_type,nt);
    Delete(nt);
    Setattr(retx,"nested",parent);
    if (n->unnamed) {
      Setattr(retx,k_unnamed,"1");
    }
    
    add_symbols(retx);
    if (ret) {
      set_nextSibling(retx,ret);
      Delete(ret);
    }
    ret = retx;

    /* Insert a forward class declaration */
    /* Disabled: [ 597599 ] union in class: incorrect scope 
       retx = new_node("classforward");
       Setattr(retx,k_kind,n->kind);
       Setattr(retx,k_name,Copy(n->type));
       Setattr(retx,"sym:name", make_name(n->type,0));
       set_nextSibling(retx,ret);
       ret = retx; 
    */

    /* Make all SWIG created typedef structs/unions/classes unnamed else 
       redefinition errors occur - nasty hack alert.*/

    {
      const char* types_array[3] = {"struct", "union", "class"};
      int i;
      for (i=0; i<3; i++) {
	char* code_ptr = Char(n->code);
	while (code_ptr) {
	  /* Replace struct name (as in 'struct name {' ) with whitespace
	     name will be between struct and { */
	
	  code_ptr = strstr(code_ptr, types_array[i]);
	  if (code_ptr) {
	    char *open_bracket_pos;
	    code_ptr += strlen(types_array[i]);
	    open_bracket_pos = strstr(code_ptr, "{");
	    if (open_bracket_pos) { 
	      /* Make sure we don't have something like struct A a; */
	      char* semi_colon_pos = strstr(code_ptr, ";");
	      if (!(semi_colon_pos && (semi_colon_pos < open_bracket_pos)))
		while (code_ptr < open_bracket_pos)
		  *code_ptr++ = ' ';
	    }
	  }
	}
      }
    }
    
    {
      /* Remove SWIG directive %constant which may be left in the SWIG created typedefs */
      char* code_ptr = Char(n->code);
      while (code_ptr) {
	code_ptr = strstr(code_ptr, "%constant");
	if (code_ptr) {
	  char* directive_end_pos = strstr(code_ptr, ";");
	  if (directive_end_pos) { 
            while (code_ptr <= directive_end_pos)
              *code_ptr++ = ' ';
	  }
	}
      }
    }
    {
      Node *head = new_node("insert");
      String *code = NewStringf("\n%s\n",n->code);
      Setattr(head,k_code, code);
      Delete(code);
      set_nextSibling(head,ret);
      Delete(ret);      
      ret = head;
    }
      
    /* Dump the code to the scanner */
    start_inline(Char(n->code),n->line);

    n1 = n->next;
    Delete(n->code);
    free(n);
    n = n1;
  }
  nested_list = 0;
  return ret;
}

Node *Swig_cparse(File *f) {
  scanner_file(f);
  top = 0;
  yyparse();
  return top;
}

static void single_new_feature(const char *featurename, String *val, Hash *featureattribs, char *declaratorid, SwigType *type, ParmList *declaratorparms, String *qualifier) {
  String *fname;
  String *name;
  String *fixname;
  SwigType *t = Copy(type);

  /* Printf(stdout, "single_new_feature: [%s] [%s] [%s] [%s] [%s] [%s]\n", featurename, val, declaratorid, t, ParmList_str_defaultargs(declaratorparms), qualifier); */

  fname = NewStringf("feature:%s",featurename);
  if (declaratorid) {
    fixname = feature_identifier_fix(declaratorid);
  } else {
    fixname = NewStringEmpty();
  }
  if (Namespaceprefix) {
    name = NewStringf("%s::%s",Namespaceprefix, fixname);
  } else {
    name = fixname;
  }

  if (declaratorparms) Setmeta(val,k_parms,declaratorparms);
  if (!Len(t)) t = 0;
  if (t) {
    if (qualifier) SwigType_push(t,qualifier);
    if (SwigType_isfunction(t)) {
      SwigType *decl = SwigType_pop_function(t);
      if (SwigType_ispointer(t)) {
	String *nname = NewStringf("*%s",name);
	Swig_feature_set(Swig_cparse_features(), nname, decl, fname, val, featureattribs);
	Delete(nname);
      } else {
	Swig_feature_set(Swig_cparse_features(), name, decl, fname, val, featureattribs);
      }
      Delete(decl);
    } else if (SwigType_ispointer(t)) {
      String *nname = NewStringf("*%s",name);
      Swig_feature_set(Swig_cparse_features(),nname,0,fname,val, featureattribs);
      Delete(nname);
    }
  } else {
    /* Global feature, that is, feature not associated with any particular symbol */
    Swig_feature_set(Swig_cparse_features(),name,0,fname,val, featureattribs);
  }
  Delete(fname);
  Delete(name);
}

/* Add a new feature to the Hash. Additional features are added if the feature has a parameter list (declaratorparms)
 * and one or more of the parameters have a default argument. An extra feature is added for each defaulted parameter,
 * simulating the equivalent overloaded method. */
static void new_feature(const char *featurename, String *val, Hash *featureattribs, char *declaratorid, SwigType *type, ParmList *declaratorparms, String *qualifier) {

  ParmList *declparms = declaratorparms;

  /* Add the feature */
  single_new_feature(featurename, val, featureattribs, declaratorid, type, declaratorparms, qualifier);

  /* Add extra features if there are default parameters in the parameter list */
  if (type) {
    while (declparms) {
      if (ParmList_has_defaultargs(declparms)) {

        /* Create a parameter list for the new feature by copying all
           but the last (defaulted) parameter */
        ParmList* newparms = ParmList_copy_all_except_last_parm(declparms);

        /* Create new declaration - with the last parameter removed */
        SwigType *newtype = Copy(type);
        Delete(SwigType_pop_function(newtype)); /* remove the old parameter list from newtype */
        SwigType_add_function(newtype,newparms);

        single_new_feature(featurename, Copy(val), featureattribs, declaratorid, newtype, newparms, qualifier);
        declparms = newparms;
      } else {
        declparms = 0;
      }
    }
  }
}

/* check if a function declaration is a plain C object */
static int is_cfunction(Node *n) {
  if (!cparse_cplusplus || cparse_externc) return 1;
  if (Cmp(Getattr(n,k_storage),"externc") == 0) {
    return 1;
  }
  return 0;
}

/* If the Node is a function with parameters, check to see if any of the parameters
 * have default arguments. If so create a new function for each defaulted argument. 
 * The additional functions form a linked list of nodes with the head being the original Node n. */
static void default_arguments(Node *n) {
  Node *function = n;

  if (function) {
    ParmList *varargs = Getattr(function,"feature:varargs");
    if (varargs) {
      /* Handles the %varargs directive by looking for "feature:varargs" and 
       * substituting ... with an alternative set of arguments.  */
      Parm     *p = Getattr(function,k_parms);
      Parm     *pp = 0;
      while (p) {
	SwigType *t = Getattr(p,k_type);
	if (Strcmp(t,"v(...)") == 0) {
	  if (pp) {
	    ParmList *cv = Copy(varargs);
	    set_nextSibling(pp,cv);
	    Delete(cv);
	  } else {
	    ParmList *cv =  Copy(varargs);
	    Setattr(function,k_parms, cv);
	    Delete(cv);
	  }
	  break;
	}
	pp = p;
	p = nextSibling(p);
      }
    }

    /* Do not add in functions if kwargs is being used or if user wants old default argument wrapping
       (one wrapped method per function irrespective of number of default arguments) */
    if (compact_default_args 
	|| is_cfunction(function) 
	|| GetFlag(function,"feature:compactdefaultargs") 
	|| GetFlag(function,"feature:kwargs")) {
      ParmList *p = Getattr(function,k_parms);
      if (p) 
        Setattr(p,k_compactdefargs, "1"); /* mark parameters for special handling */
      function = 0; /* don't add in extra methods */
    }
  }

  while (function) {
    ParmList *parms = Getattr(function,k_parms);
    if (ParmList_has_defaultargs(parms)) {

      /* Create a parameter list for the new function by copying all
         but the last (defaulted) parameter */
      ParmList* newparms = ParmList_copy_all_except_last_parm(parms);

      /* Create new function and add to symbol table */
      {
	SwigType *ntype = Copy(nodeType(function));
	char *cntype = Char(ntype);
        Node *new_function = new_node(ntype);
        SwigType *decl = Copy(Getattr(function,k_decl));
        int constqualifier = SwigType_isconst(decl);
	String *ccode = Copy(Getattr(function,k_code));
	String *cstorage = Copy(Getattr(function,k_storage));
	SwigType *ctype = Copy(Getattr(function,k_type));
	String *cthrow = Copy(Getattr(function,k_throw));

        Delete(SwigType_pop_function(decl)); /* remove the old parameter list from decl */
        SwigType_add_function(decl,newparms);
        if (constqualifier)
          SwigType_add_qualifier(decl,"const");

        Setattr(new_function,k_name, Getattr(function,k_name));
        Setattr(new_function,k_code, ccode);
        Setattr(new_function,k_decl, decl);
        Setattr(new_function,k_parms, newparms);
        Setattr(new_function,k_storage, cstorage);
        Setattr(new_function,k_type, ctype);
        Setattr(new_function,k_throw, cthrow);

	Delete(ccode);
	Delete(cstorage);
	Delete(ctype);
	Delete(cthrow);
	Delete(decl);

        {
          Node *throws = Getattr(function,k_throws);
	  ParmList *pl = CopyParmList(throws);
          if (throws) Setattr(new_function,k_throws,pl);
	  Delete(pl);
        }

        /* copy specific attributes for global (or in a namespace) template functions - these are not templated class methods */
        if (strcmp(cntype,"template") == 0) {
          Node *templatetype = Getattr(function,k_templatetype);
          Node *symtypename = Getattr(function,k_symtypename);
          Parm *templateparms = Getattr(function,k_templateparms);
          if (templatetype) {
	    Node *tmp = Copy(templatetype);
	    Setattr(new_function,k_templatetype,tmp);
	    Delete(tmp);
	  }
          if (symtypename) {
	    Node *tmp = Copy(symtypename);
	    Setattr(new_function,k_symtypename,tmp);
	    Delete(tmp);
	  }
          if (templateparms) {
	    Parm *tmp = CopyParmList(templateparms);
	    Setattr(new_function,k_templateparms,tmp);
	    Delete(tmp);
	  }
        } else if (strcmp(cntype,"constructor") == 0) {
          /* only copied for constructors as this is not a user defined feature - it is hard coded in the parser */
          if (GetFlag(function,"feature:new")) SetFlag(new_function,"feature:new");
        }

        add_symbols(new_function);
        /* mark added functions as ones with overloaded parameters and point to the parsed method */
        Setattr(new_function,"defaultargs", n);

        /* Point to the new function, extending the linked list */
        set_nextSibling(function, new_function);
	Delete(new_function);
        function = new_function;
	
	Delete(ntype);
      }
    } else {
      function = 0;
    }
  }
}

#if 0
{ /* cc-mode */
#endif


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 1330 "CParse/parser.y"
typedef union YYSTYPE {
  char  *id;
  List  *bases;
  struct Define {
    String *val;
    String *rawval;
    int     type;
    String *qualifier;
    String *bitfield;
    Parm   *throws;
    String *throwf;
  } dtype;
  struct {
    char *type;
    char *filename;
    int   line;
  } loc;
  struct {
    char      *id;
    SwigType  *type;
    String    *defarg;
    ParmList  *parms;
    short      have_parms;
    ParmList  *throws;
    String    *throwf;
  } decl;
  Parm         *tparms;
  struct {
    String     *op;
    Hash       *kwargs;
  } tmap;
  struct {
    String     *type;
    String     *us;
  } ptype;
  SwigType     *type;
  String       *str;
  Parm         *p;
  ParmList     *pl;
  int           ivalue;
  Node         *node;
} YYSTYPE;
/* Line 190 of yacc.c.  */
#line 1677 "CParse/parser.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 213 of yacc.c.  */
#line 1689 "CParse/parser.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

# ifndef YYFREE
#  define YYFREE free
# endif
# ifndef YYMALLOC
#  define YYMALLOC malloc
# endif

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  54
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3748

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  121
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  143
/* YYNRULES -- Number of rules. */
#define YYNRULES  452
/* YYNRULES -- Number of states. */
#define YYNSTATES  875

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   375

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     5,     9,    12,    16,    19,    25,    29,
      32,    34,    36,    38,    40,    42,    44,    46,    49,    51,
      53,    55,    57,    59,    61,    63,    65,    67,    69,    71,
      73,    75,    77,    79,    81,    83,    85,    87,    89,    91,
      92,   100,   106,   110,   116,   122,   126,   129,   132,   138,
     141,   147,   150,   155,   157,   159,   167,   175,   181,   182,
     190,   192,   194,   197,   200,   202,   208,   214,   220,   224,
     229,   233,   241,   250,   256,   260,   262,   264,   268,   270,
     275,   283,   290,   292,   294,   302,   312,   321,   332,   338,
     346,   353,   362,   364,   366,   372,   377,   383,   391,   393,
     397,   404,   411,   420,   422,   425,   429,   431,   434,   438,
     445,   451,   461,   464,   466,   468,   470,   471,   478,   484,
     486,   491,   493,   495,   498,   504,   511,   516,   524,   533,
     540,   542,   544,   546,   548,   550,   552,   553,   563,   564,
     573,   575,   578,   583,   584,   591,   595,   597,   599,   601,
     603,   605,   607,   609,   613,   618,   619,   626,   627,   633,
     639,   642,   643,   650,   652,   653,   657,   659,   661,   663,
     665,   667,   669,   671,   673,   677,   679,   681,   683,   685,
     687,   689,   691,   693,   695,   702,   709,   717,   726,   735,
     743,   749,   752,   755,   758,   759,   767,   768,   775,   776,
     785,   787,   789,   791,   793,   795,   797,   799,   801,   803,
     805,   807,   809,   811,   814,   817,   820,   825,   828,   834,
     836,   839,   841,   843,   845,   847,   849,   851,   853,   856,
     858,   862,   864,   867,   874,   878,   880,   883,   885,   889,
     891,   893,   895,   897,   900,   906,   909,   912,   914,   917,
     920,   922,   924,   926,   928,   931,   935,   937,   940,   944,
     949,   955,   960,   962,   965,   969,   974,   980,   984,   989,
     994,   996,   999,  1004,  1009,  1015,  1019,  1024,  1029,  1031,
    1034,  1037,  1041,  1043,  1046,  1048,  1051,  1055,  1060,  1064,
    1069,  1072,  1076,  1080,  1085,  1089,  1093,  1096,  1099,  1101,
    1103,  1106,  1108,  1110,  1112,  1114,  1117,  1119,  1121,  1123,
    1125,  1128,  1131,  1133,  1136,  1138,  1141,  1143,  1145,  1148,
    1150,  1152,  1154,  1156,  1158,  1160,  1162,  1164,  1166,  1168,
    1170,  1172,  1174,  1176,  1177,  1180,  1182,  1184,  1188,  1190,
    1192,  1196,  1198,  1200,  1202,  1204,  1210,  1212,  1214,  1216,
    1220,  1225,  1231,  1237,  1244,  1247,  1250,  1252,  1254,  1256,
    1258,  1260,  1262,  1264,  1268,  1272,  1276,  1280,  1284,  1288,
    1292,  1296,  1300,  1304,  1308,  1311,  1314,  1317,  1320,  1323,
    1325,  1326,  1330,  1332,  1334,  1338,  1341,  1346,  1348,  1350,
    1352,  1354,  1356,  1358,  1360,  1362,  1364,  1366,  1371,  1377,
    1379,  1383,  1387,  1392,  1397,  1401,  1404,  1406,  1408,  1412,
    1415,  1419,  1421,  1423,  1425,  1427,  1429,  1432,  1437,  1439,
    1443,  1445,  1449,  1453,  1456,  1459,  1462,  1465,  1468,  1473,
    1475,  1479,  1481,  1485,  1489,  1492,  1495,  1498,  1501,  1503,
    1505,  1507,  1509,  1513,  1515,  1519,  1525,  1527,  1531,  1535,
    1541,  1543,  1545
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     122,     0,    -1,   123,    -1,   102,   206,    40,    -1,   102,
       1,    -1,   103,   206,    40,    -1,   103,     1,    -1,   104,
      37,   203,    38,    40,    -1,   104,     1,    40,    -1,   123,
     124,    -1,   263,    -1,   125,    -1,   162,    -1,   170,    -1,
      40,    -1,     1,    -1,   169,    -1,     1,   101,    -1,   126,
      -1,   128,    -1,   129,    -1,   130,    -1,   131,    -1,   132,
      -1,   135,    -1,   136,    -1,   139,    -1,   140,    -1,   141,
      -1,   142,    -1,   143,    -1,   144,    -1,   147,    -1,   149,
      -1,   152,    -1,   154,    -1,   159,    -1,   160,    -1,   161,
      -1,    -1,    61,   260,   253,    43,   127,   184,    44,    -1,
      85,   158,    43,   156,    44,    -1,    86,   156,    40,    -1,
      57,     3,    51,   228,    40,    -1,    57,   222,   214,   211,
      40,    -1,    57,     1,    40,    -1,    84,     4,    -1,    84,
     258,    -1,    83,    37,     3,    38,    43,    -1,    83,    43,
      -1,    83,    37,     3,    38,    40,    -1,    83,    40,    -1,
     258,    43,   206,    44,    -1,   258,    -1,   133,    -1,    88,
      37,   134,    39,   261,    38,     4,    -1,    88,    37,   134,
      39,   261,    38,    43,    -1,    88,    37,   134,    38,    40,
      -1,    -1,   138,   260,   258,    54,   137,   123,    55,    -1,
       7,    -1,     8,    -1,    81,     4,    -1,    81,    43,    -1,
       4,    -1,     9,    37,   251,    38,   258,    -1,     9,    37,
     251,    38,     4,    -1,     9,    37,   251,    38,    43,    -1,
      53,   260,   251,    -1,    58,    37,   251,    38,    -1,    58,
      37,    38,    -1,    80,    37,     3,    38,   202,     3,    40,
      -1,    80,    37,     3,    38,   202,   222,   214,    40,    -1,
      62,   146,     3,    51,   145,    -1,    62,   146,     3,    -1,
     258,    -1,     4,    -1,    37,     3,    38,    -1,   263,    -1,
     148,   214,   251,    40,    -1,   148,    37,   261,    38,   214,
     245,    40,    -1,   148,    37,   261,    38,   258,    40,    -1,
      59,    -1,    60,    -1,    63,    37,   251,    38,   214,   245,
     150,    -1,    63,    37,   251,    39,   262,    38,   214,   245,
      40,    -1,    63,    37,   251,   151,    38,   214,   245,   150,
      -1,    63,    37,   251,    39,   262,   151,    38,   214,   245,
      40,    -1,    63,    37,   251,    38,   150,    -1,    63,    37,
     251,    39,   262,    38,    40,    -1,    63,    37,   251,   151,
      38,   150,    -1,    63,    37,   251,    39,   262,   151,    38,
      40,    -1,   259,    -1,    40,    -1,    95,    37,   203,    38,
      40,    -1,    39,   251,    51,   262,    -1,    39,   251,    51,
     262,   151,    -1,    64,    37,   153,    38,   214,   245,    40,
      -1,   203,    -1,    11,    39,   206,    -1,    82,    37,   155,
      38,   156,   259,    -1,    82,    37,   155,    38,   156,    40,
      -1,    82,    37,   155,    38,   156,    51,   158,    40,    -1,
     261,    -1,   158,   157,    -1,    39,   158,   157,    -1,   263,
      -1,   222,   213,    -1,    37,   203,    38,    -1,    37,   203,
      38,    37,   203,    38,    -1,    94,    37,   203,    38,    40,
      -1,    87,    37,   252,    38,   256,    90,   207,    91,    40,
      -1,    89,   258,    -1,   164,    -1,   168,    -1,   167,    -1,
      -1,    41,   258,    43,   163,   123,    44,    -1,   202,   222,
     214,   166,   165,    -1,    40,    -1,    39,   214,   166,   165,
      -1,    43,    -1,   211,    -1,   220,   211,    -1,    75,    37,
     203,    38,   211,    -1,   220,    75,    37,   203,    38,   211,
      -1,   202,    65,     3,    40,    -1,   202,    65,   230,    43,
     231,    44,    40,    -1,   202,    65,   230,    43,   231,    44,
     214,   165,    -1,   202,   222,    37,   203,    38,   246,    -1,
     171,    -1,   175,    -1,   176,    -1,   180,    -1,   181,    -1,
     191,    -1,    -1,   202,   243,   253,   237,    43,   172,   184,
      44,   174,    -1,    -1,   202,   243,    43,   173,   184,    44,
     214,   165,    -1,    40,    -1,   214,   165,    -1,   202,   243,
     253,    40,    -1,    -1,    99,    90,   179,    91,   177,   178,
      -1,    99,   243,   253,    -1,   164,    -1,   171,    -1,   188,
      -1,   176,    -1,   175,    -1,   190,    -1,   204,    -1,    78,
     253,    40,    -1,    78,    79,   253,    40,    -1,    -1,    79,
     253,    43,   182,   123,    44,    -1,    -1,    79,    43,   183,
     123,    44,    -1,    79,     3,    51,   253,    40,    -1,   187,
     184,    -1,    -1,    61,    43,   185,   184,    44,   184,    -1,
     263,    -1,    -1,     1,   186,   184,    -1,   162,    -1,   188,
      -1,   189,    -1,   192,    -1,   198,    -1,   190,    -1,   175,
      -1,   193,    -1,   202,   253,    40,    -1,   180,    -1,   176,
      -1,   191,    -1,   160,    -1,   161,    -1,   201,    -1,   135,
      -1,   159,    -1,    40,    -1,   202,   222,    37,   203,    38,
     246,    -1,   118,   255,    37,   203,    38,   199,    -1,    73,
     118,   255,    37,   203,    38,   200,    -1,   202,   101,   222,
     219,    37,   203,    38,   200,    -1,   202,   101,   222,   110,
      37,   203,    38,   200,    -1,   202,   101,   222,    37,   203,
      38,   200,    -1,    76,    37,   203,    38,    43,    -1,    69,
      71,    -1,    68,    71,    -1,    70,    71,    -1,    -1,   202,
     243,     3,    43,   194,   197,    40,    -1,    -1,   202,   243,
      43,   195,   197,    40,    -1,    -1,   202,   243,   253,    71,
     240,    43,   196,    40,    -1,   214,    -1,   263,    -1,   144,
      -1,   130,    -1,   142,    -1,   147,    -1,   149,    -1,   152,
      -1,   140,    -1,   154,    -1,   128,    -1,   129,    -1,   131,
      -1,   245,    40,    -1,   245,    43,    -1,   245,    40,    -1,
     245,    51,   228,    40,    -1,   245,    43,    -1,   202,   222,
      71,   234,    40,    -1,    41,    -1,    41,   258,    -1,    72,
      -1,    18,    -1,    73,    -1,    74,    -1,    77,    -1,   263,
      -1,   204,    -1,   206,   205,    -1,   263,    -1,    39,   206,
     205,    -1,   263,    -1,   223,   212,    -1,    99,    90,   243,
      91,   243,   253,    -1,    45,    45,    45,    -1,   208,    -1,
     210,   209,    -1,   263,    -1,    39,   210,   209,    -1,   263,
      -1,   206,    -1,   235,    -1,     6,    -1,    51,   228,    -1,
      51,   228,    54,   234,    55,    -1,    51,    43,    -1,    71,
     234,    -1,   263,    -1,   214,   211,    -1,   217,   211,    -1,
     211,    -1,   214,    -1,   217,    -1,   263,    -1,   219,   215,
      -1,   219,   110,   215,    -1,   216,    -1,   110,   215,    -1,
     253,    97,   215,    -1,   219,   253,    97,   215,    -1,   219,
     253,    97,   110,   215,    -1,   253,    97,   110,   215,    -1,
     253,    -1,   118,   253,    -1,    37,   253,    38,    -1,    37,
     219,   215,    38,    -1,    37,   253,    97,   215,    38,    -1,
     215,    54,    55,    -1,   215,    54,   234,    55,    -1,   215,
      37,   203,    38,    -1,   253,    -1,   118,   253,    -1,    37,
     219,   216,    38,    -1,    37,   110,   216,    38,    -1,    37,
     253,    97,   216,    38,    -1,   216,    54,    55,    -1,   216,
      54,   234,    55,    -1,   216,    37,   203,    38,    -1,   219,
      -1,   219,   218,    -1,   219,   110,    -1,   219,   110,   218,
      -1,   218,    -1,   110,   218,    -1,   110,    -1,   253,    97,
      -1,   219,   253,    97,    -1,   219,   253,    97,   218,    -1,
     218,    54,    55,    -1,   218,    54,   234,    55,    -1,    54,
      55,    -1,    54,   234,    55,    -1,    37,   217,    38,    -1,
     218,    37,   203,    38,    -1,    37,   203,    38,    -1,   116,
     220,   219,    -1,   116,   219,    -1,   116,   220,    -1,   116,
      -1,   221,    -1,   221,   220,    -1,    46,    -1,    47,    -1,
      48,    -1,   223,    -1,   220,   224,    -1,   224,    -1,   225,
      -1,    29,    -1,    27,    -1,    31,   250,    -1,    65,   253,
      -1,    32,    -1,   224,   220,    -1,   253,    -1,   243,   253,
      -1,   226,    -1,   227,    -1,   227,   226,    -1,    19,    -1,
      21,    -1,    22,    -1,    25,    -1,    26,    -1,    23,    -1,
      24,    -1,    28,    -1,    20,    -1,    30,    -1,    33,    -1,
      34,    -1,    35,    -1,    36,    -1,    -1,   229,   234,    -1,
       3,    -1,   263,    -1,   231,    39,   232,    -1,   232,    -1,
       3,    -1,     3,    51,   233,    -1,   263,    -1,   234,    -1,
     235,    -1,   258,    -1,    52,    37,   222,   212,    38,    -1,
     236,    -1,    10,    -1,   222,    -1,    37,   234,    38,    -1,
      37,   234,    38,   234,    -1,    37,   234,   219,    38,   234,
      -1,    37,   234,   110,    38,   234,    -1,    37,   234,   219,
     110,    38,   234,    -1,   110,   234,    -1,   116,   234,    -1,
      11,    -1,    12,    -1,    13,    -1,    14,    -1,    15,    -1,
      16,    -1,    17,    -1,   234,   114,   234,    -1,   234,   113,
     234,    -1,   234,   116,   234,    -1,   234,   115,   234,    -1,
     234,   110,   234,    -1,   234,   108,   234,    -1,   234,   109,
     234,    -1,   234,   112,   234,    -1,   234,   111,   234,    -1,
     234,   107,   234,    -1,   234,   106,   234,    -1,   113,   234,
      -1,   114,   234,    -1,   118,   234,    -1,   117,   234,    -1,
     222,    37,    -1,   238,    -1,    -1,    71,   239,   240,    -1,
     263,    -1,   241,    -1,   240,    39,   241,    -1,   244,   253,
      -1,   244,   242,   244,   253,    -1,    69,    -1,    68,    -1,
      70,    -1,    66,    -1,    49,    -1,    50,    -1,    67,    -1,
      73,    -1,   263,    -1,   220,    -1,    75,    37,   203,    38,
      -1,   220,    75,    37,   203,    38,    -1,   263,    -1,   245,
     247,    40,    -1,   245,   247,    43,    -1,    37,   203,    38,
      40,    -1,    37,   203,    38,    43,    -1,    51,   228,    40,
      -1,    71,   248,    -1,   263,    -1,   249,    -1,   248,    39,
     249,    -1,   253,    37,    -1,    90,   207,    91,    -1,   263,
      -1,     3,    -1,   258,    -1,   251,    -1,   263,    -1,   255,
     254,    -1,    96,   120,   255,   254,    -1,   255,    -1,    96,
     120,   255,    -1,   100,    -1,    96,   120,   100,    -1,   120,
     255,   254,    -1,   120,   255,    -1,   120,   100,    -1,    98,
     255,    -1,     3,   250,    -1,     3,   257,    -1,    96,   120,
       3,   257,    -1,     3,    -1,    96,   120,     3,    -1,   100,
      -1,    96,   120,   100,    -1,   120,     3,   257,    -1,   120,
       3,    -1,   120,   100,    -1,    98,     3,    -1,   258,     6,
      -1,     6,    -1,   258,    -1,    43,    -1,     4,    -1,    37,
     261,    38,    -1,   263,    -1,   251,    51,   262,    -1,   251,
      51,   262,    39,   261,    -1,   251,    -1,   251,    39,   261,
      -1,   251,    51,   133,    -1,   251,    51,   133,    39,   261,
      -1,   258,    -1,   235,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,  1476,  1476,  1489,  1493,  1496,  1499,  1502,  1505,  1510,
    1515,  1520,  1521,  1522,  1523,  1524,  1531,  1547,  1557,  1558,
    1559,  1560,  1561,  1562,  1563,  1564,  1565,  1566,  1567,  1568,
    1569,  1570,  1571,  1572,  1573,  1574,  1575,  1576,  1577,  1584,
    1584,  1656,  1666,  1677,  1698,  1720,  1731,  1740,  1759,  1765,
    1771,  1776,  1787,  1794,  1798,  1803,  1812,  1827,  1840,  1840,
    1892,  1893,  1900,  1920,  1951,  1955,  1965,  1970,  1988,  2022,
    2028,  2041,  2047,  2073,  2079,  2086,  2087,  2090,  2091,  2099,
    2145,  2191,  2202,  2205,  2232,  2237,  2242,  2247,  2254,  2259,
    2264,  2269,  2276,  2277,  2278,  2281,  2286,  2296,  2332,  2333,
    2363,  2397,  2405,  2418,  2443,  2449,  2453,  2456,  2467,  2472,
    2484,  2494,  2761,  2771,  2778,  2779,  2783,  2783,  2814,  2875,
    2879,  2901,  2907,  2913,  2919,  2925,  2938,  2953,  2963,  3041,
    3093,  3094,  3095,  3096,  3097,  3098,  3104,  3104,  3325,  3325,
    3436,  3437,  3449,  3469,  3469,  3704,  3710,  3713,  3716,  3719,
    3722,  3725,  3730,  3762,  3772,  3803,  3803,  3832,  3832,  3854,
    3881,  3896,  3896,  3906,  3907,  3907,  3924,  3925,  3942,  3943,
    3944,  3945,  3946,  3947,  3948,  3949,  3950,  3951,  3952,  3953,
    3954,  3955,  3956,  3957,  3966,  3991,  4015,  4055,  4069,  4086,
    4104,  4111,  4118,  4126,  4149,  4149,  4178,  4178,  4209,  4209,
    4227,  4228,  4234,  4237,  4241,  4244,  4245,  4246,  4247,  4248,
    4249,  4250,  4251,  4254,  4259,  4266,  4274,  4282,  4293,  4299,
    4300,  4308,  4309,  4310,  4311,  4312,  4313,  4320,  4331,  4339,
    4342,  4346,  4350,  4360,  4365,  4373,  4386,  4394,  4397,  4401,
    4405,  4433,  4439,  4449,  4460,  4474,  4483,  4491,  4501,  4505,
    4509,  4516,  4533,  4550,  4558,  4566,  4575,  4579,  4588,  4599,
    4611,  4621,  4634,  4641,  4649,  4665,  4673,  4684,  4695,  4706,
    4725,  4733,  4750,  4758,  4765,  4776,  4787,  4798,  4817,  4823,
    4829,  4836,  4845,  4848,  4857,  4864,  4871,  4881,  4892,  4903,
    4914,  4921,  4928,  4931,  4948,  4958,  4965,  4971,  4976,  4982,
    4986,  4992,  4993,  4994,  5000,  5006,  5010,  5013,  5016,  5017,
    5018,  5019,  5020,  5021,  5026,  5029,  5034,  5059,  5062,  5116,
    5120,  5124,  5128,  5132,  5136,  5140,  5144,  5148,  5152,  5156,
    5160,  5164,  5168,  5174,  5174,  5200,  5201,  5204,  5217,  5225,
    5233,  5250,  5253,  5269,  5270,  5274,  5279,  5280,  5292,  5311,
    5318,  5324,  5331,  5338,  5346,  5350,  5356,  5357,  5358,  5359,
    5360,  5361,  5362,  5365,  5369,  5373,  5377,  5381,  5385,  5389,
    5393,  5397,  5401,  5405,  5409,  5413,  5417,  5421,  5425,  5441,
    5446,  5446,  5447,  5450,  5467,  5476,  5489,  5502,  5503,  5504,
    5508,  5512,  5516,  5520,  5526,  5527,  5530,  5535,  5540,  5545,
    5552,  5559,  5566,  5574,  5582,  5590,  5591,  5594,  5595,  5598,
    5604,  5610,  5613,  5614,  5617,  5618,  5621,  5626,  5630,  5633,
    5636,  5639,  5644,  5648,  5651,  5658,  5664,  5673,  5678,  5682,
    5685,  5688,  5691,  5696,  5700,  5703,  5706,  5712,  5717,  5720,
    5723,  5727,  5732,  5745,  5749,  5754,  5760,  5764,  5769,  5773,
    5780,  5783,  5788
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "HBLOCK", "POUND", "STRING",
  "INCLUDE", "IMPORT", "INSERT", "CHARCONST", "NUM_INT", "NUM_FLOAT",
  "NUM_UNSIGNED", "NUM_LONG", "NUM_ULONG", "NUM_LONGLONG", "NUM_ULONGLONG",
  "TYPEDEF", "TYPE_INT", "TYPE_UNSIGNED", "TYPE_SHORT", "TYPE_LONG",
  "TYPE_FLOAT", "TYPE_DOUBLE", "TYPE_CHAR", "TYPE_WCHAR", "TYPE_VOID",
  "TYPE_SIGNED", "TYPE_BOOL", "TYPE_COMPLEX", "TYPE_TYPEDEF", "TYPE_RAW",
  "TYPE_NON_ISO_INT8", "TYPE_NON_ISO_INT16", "TYPE_NON_ISO_INT32",
  "TYPE_NON_ISO_INT64", "LPAREN", "RPAREN", "COMMA", "SEMI", "EXTERN",
  "INIT", "LBRACE", "RBRACE", "PERIOD", "CONST_QUAL", "VOLATILE",
  "REGISTER", "STRUCT", "UNION", "EQUAL", "SIZEOF", "MODULE", "LBRACKET",
  "RBRACKET", "ILLEGAL", "CONSTANT", "NAME", "RENAME", "NAMEWARN",
  "EXTEND", "PRAGMA", "FEATURE", "VARARGS", "ENUM", "CLASS", "TYPENAME",
  "PRIVATE", "PUBLIC", "PROTECTED", "COLON", "STATIC", "VIRTUAL", "FRIEND",
  "THROW", "CATCH", "EXPLICIT", "USING", "NAMESPACE", "NATIVE", "INLINE",
  "TYPEMAP", "EXCEPT", "ECHO", "APPLY", "CLEAR", "SWIGTEMPLATE",
  "FRAGMENT", "WARN", "LESSTHAN", "GREATERTHAN", "MODULO", "DELETE_KW",
  "TYPES", "PARMS", "NONID", "DSTAR", "DCNOT", "TEMPLATE", "OPERATOR",
  "COPERATOR", "PARSETYPE", "PARSEPARM", "PARSEPARMS", "CAST", "LOR",
  "LAND", "OR", "XOR", "AND", "RSHIFT", "LSHIFT", "MINUS", "PLUS", "SLASH",
  "STAR", "LNOT", "NOT", "UMINUS", "DCOLON", "$accept", "program",
  "interface", "declaration", "swig_directive", "extend_directive", "@1",
  "apply_directive", "clear_directive", "constant_directive",
  "echo_directive", "except_directive", "stringtype", "fname",
  "fragment_directive", "include_directive", "@2", "includetype",
  "inline_directive", "insert_directive", "module_directive",
  "name_directive", "native_directive", "pragma_directive", "pragma_arg",
  "pragma_lang", "rename_directive", "rename_namewarn",
  "feature_directive", "stringbracesemi", "featattr", "varargs_directive",
  "varargs_parms", "typemap_directive", "typemap_type", "tm_list",
  "tm_tail", "typemap_parm", "types_directive", "template_directive",
  "warn_directive", "c_declaration", "@3", "c_decl", "c_decl_tail",
  "initializer", "c_enum_forward_decl", "c_enum_decl",
  "c_constructor_decl", "cpp_declaration", "cpp_class_decl", "@4", "@5",
  "cpp_opt_declarators", "cpp_forward_class_decl", "cpp_template_decl",
  "@6", "cpp_temp_possible", "template_parms", "cpp_using_decl",
  "cpp_namespace_decl", "@7", "@8", "cpp_members", "@9", "@10",
  "cpp_member", "cpp_constructor_decl", "cpp_destructor_decl",
  "cpp_conversion_operator", "cpp_catch_decl", "cpp_protection_decl",
  "cpp_nested", "@11", "@12", "@13", "nested_decl", "cpp_swig_directive",
  "cpp_end", "cpp_vend", "anonymous_bitfield", "storage_class", "parms",
  "rawparms", "ptail", "parm", "valparms", "rawvalparms", "valptail",
  "valparm", "def_args", "parameter_declarator",
  "typemap_parameter_declarator", "declarator", "notso_direct_declarator",
  "direct_declarator", "abstract_declarator", "direct_abstract_declarator",
  "pointer", "type_qualifier", "type_qualifier_raw", "type", "rawtype",
  "type_right", "primitive_type", "primitive_type_list", "type_specifier",
  "definetype", "@14", "ename", "enumlist", "edecl", "etype", "expr",
  "exprnum", "exprcompound", "inherit", "raw_inherit", "@15", "base_list",
  "base_specifier", "access_specifier", "cpptype", "opt_virtual",
  "cpp_const", "ctor_end", "ctor_initializer", "mem_initializer_list",
  "mem_initializer", "template_decl", "idstring", "idstringopt", "idcolon",
  "idcolontail", "idtemplate", "idcolonnt", "idcolontailnt", "string",
  "stringbrace", "options", "kwargs", "stringnum", "empty", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   121,   122,   122,   122,   122,   122,   122,   122,   123,
     123,   124,   124,   124,   124,   124,   124,   124,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   127,
     126,   128,   129,   130,   130,   130,   131,   131,   132,   132,
     132,   132,   133,   134,   134,   135,   135,   135,   137,   136,
     138,   138,   139,   139,   140,   140,   140,   140,   141,   142,
     142,   143,   143,   144,   144,   145,   145,   146,   146,   147,
     147,   147,   148,   148,   149,   149,   149,   149,   149,   149,
     149,   149,   150,   150,   150,   151,   151,   152,   153,   153,
     154,   154,   154,   155,   156,   157,   157,   158,   158,   158,
     159,   160,   161,   162,   162,   162,   163,   162,   164,   165,
     165,   165,   166,   166,   166,   166,   167,   168,   168,   169,
     170,   170,   170,   170,   170,   170,   172,   171,   173,   171,
     174,   174,   175,   177,   176,   176,   178,   178,   178,   178,
     178,   178,   179,   180,   180,   182,   181,   183,   181,   181,
     184,   185,   184,   184,   186,   184,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   188,   189,   189,   190,   190,   190,
     191,   192,   192,   192,   194,   193,   195,   193,   196,   193,
     197,   197,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   199,   199,   200,   200,   200,   201,   202,
     202,   202,   202,   202,   202,   202,   202,   203,   204,   204,
     205,   205,   206,   206,   206,   207,   208,   208,   209,   209,
     210,   210,   210,   211,   211,   211,   211,   211,   212,   212,
     212,   213,   213,   213,   214,   214,   214,   214,   214,   214,
     214,   214,   215,   215,   215,   215,   215,   215,   215,   215,
     216,   216,   216,   216,   216,   216,   216,   216,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   218,   218,
     218,   218,   218,   218,   218,   219,   219,   219,   219,   220,
     220,   221,   221,   221,   222,   223,   223,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   225,   226,   226,   227,
     227,   227,   227,   227,   227,   227,   227,   227,   227,   227,
     227,   227,   227,   229,   228,   230,   230,   231,   231,   232,
     232,   232,   233,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   235,   235,   235,   235,
     235,   235,   235,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   237,
     239,   238,   238,   240,   240,   241,   241,   242,   242,   242,
     243,   243,   243,   243,   244,   244,   245,   245,   245,   245,
     246,   246,   246,   246,   246,   247,   247,   248,   248,   249,
     250,   250,   251,   251,   252,   252,   253,   253,   253,   253,
     253,   253,   254,   254,   254,   254,   255,   256,   256,   256,
     256,   256,   256,   257,   257,   257,   257,   258,   258,   259,
     259,   259,   260,   260,   261,   261,   261,   261,   261,   261,
     262,   262,   263
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     3,     2,     3,     2,     5,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       7,     5,     3,     5,     5,     3,     2,     2,     5,     2,
       5,     2,     4,     1,     1,     7,     7,     5,     0,     7,
       1,     1,     2,     2,     1,     5,     5,     5,     3,     4,
       3,     7,     8,     5,     3,     1,     1,     3,     1,     4,
       7,     6,     1,     1,     7,     9,     8,    10,     5,     7,
       6,     8,     1,     1,     5,     4,     5,     7,     1,     3,
       6,     6,     8,     1,     2,     3,     1,     2,     3,     6,
       5,     9,     2,     1,     1,     1,     0,     6,     5,     1,
       4,     1,     1,     2,     5,     6,     4,     7,     8,     6,
       1,     1,     1,     1,     1,     1,     0,     9,     0,     8,
       1,     2,     4,     0,     6,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     0,     6,     0,     5,     5,
       2,     0,     6,     1,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     6,     6,     7,     8,     8,     7,
       5,     2,     2,     2,     0,     7,     0,     6,     0,     8,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     4,     2,     5,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     1,     2,     6,     3,     1,     2,     1,     3,     1,
       1,     1,     1,     2,     5,     2,     2,     1,     2,     2,
       1,     1,     1,     1,     2,     3,     1,     2,     3,     4,
       5,     4,     1,     2,     3,     4,     5,     3,     4,     4,
       1,     2,     4,     4,     5,     3,     4,     4,     1,     2,
       2,     3,     1,     2,     1,     2,     3,     4,     3,     4,
       2,     3,     3,     4,     3,     3,     2,     2,     1,     1,
       2,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       2,     2,     1,     2,     1,     2,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     1,     1,     3,     1,     1,
       3,     1,     1,     1,     1,     5,     1,     1,     1,     3,
       4,     5,     5,     6,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     2,     1,
       0,     3,     1,     1,     3,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     5,     1,
       3,     3,     4,     4,     3,     2,     1,     1,     3,     2,
       3,     1,     1,     1,     1,     1,     2,     4,     1,     3,
       1,     3,     3,     2,     2,     2,     2,     2,     4,     1,
       3,     1,     3,     3,     2,     2,     2,     2,     1,     1,
       1,     1,     3,     1,     3,     5,     1,     3,     3,     5,
       1,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
     452,     0,     0,     0,     0,     0,    10,     4,   452,   319,
     327,   320,   321,   324,   325,   322,   323,   309,   326,   308,
     328,   452,   312,   329,   330,   331,   332,     0,   301,   302,
     303,   391,   392,     0,   390,   393,     0,     0,   420,     0,
       0,   299,   452,   306,   307,   316,   317,     0,   314,   418,
       6,     0,     0,   452,     1,    15,    64,    60,    61,     0,
     222,    14,   219,   452,     0,     0,    82,    83,   452,   452,
       0,     0,   221,   223,   224,     0,   225,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    11,    18,    19,    20,    21,    22,    23,    24,
      25,   452,    26,    27,    28,    29,    30,    31,    32,     0,
      33,    34,    35,    36,    37,    38,    12,   113,   115,   114,
      16,    13,   130,   131,   132,   133,   134,   135,     0,   226,
     452,   426,   411,   310,     0,   311,     0,     0,     3,   305,
     300,   452,   333,     0,     0,   284,   298,     0,   250,   232,
     452,   256,   452,   282,   278,   270,   247,   313,   318,   315,
       0,     0,   416,     5,     8,     0,   227,   452,   229,    17,
       0,   438,   220,     0,     0,   443,     0,   452,     0,   304,
       0,     0,     0,     0,    78,     0,   452,   452,     0,     0,
     452,   157,     0,     0,    62,    63,     0,     0,    51,    49,
      46,    47,   452,     0,   452,     0,   452,   452,     0,   112,
     452,   452,     0,     0,     0,     0,     0,     0,   270,   452,
       0,     0,   242,   356,   357,   358,   359,   360,   361,   362,
     240,     0,   235,   452,   241,   237,   234,   421,   419,     0,
     452,   284,     0,     0,   278,   314,   245,   243,     0,   347,
       0,     0,   290,     0,     0,     0,     0,     0,     0,   348,
       0,   343,   346,   344,   246,   452,     0,   257,   283,   262,
     296,   297,   271,   248,   452,     0,   249,   452,     0,   280,
     254,   279,   262,   285,   425,   424,   423,     0,     0,   228,
     231,   412,     0,   413,   437,   116,   446,     0,    68,    45,
     333,     0,   452,    70,     0,     0,     0,    74,     0,     0,
       0,    98,     0,     0,   153,     0,   452,   155,     0,     0,
     103,     0,     0,     0,   107,   251,   252,   253,    42,     0,
     104,   106,   414,     0,   415,    54,     0,    53,     0,     0,
     152,   145,     0,   412,     0,     0,     0,     0,     0,     0,
       0,   262,     0,   452,     0,   336,   452,   452,   138,   315,
     410,     0,   236,   239,   417,     0,   284,   278,   314,     0,
     270,   294,   292,   280,     0,   270,   285,     0,   334,     0,
       0,   354,   374,   375,   355,   377,   376,   378,   291,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     278,   314,   263,   452,     0,   295,     0,   275,     0,     0,
     288,     0,   255,   281,   286,     0,   258,   422,     7,   452,
       0,   452,     0,     0,   442,     0,     0,    69,    39,    77,
       0,     0,     0,     0,     0,     0,     0,   154,     0,     0,
     452,   452,     0,     0,   108,     0,   452,     0,     0,     0,
       0,     0,   143,    58,     0,     0,     0,     0,    79,     0,
     126,   452,     0,   314,     0,     0,   122,   452,     0,   142,
     380,     0,   379,   382,   452,     0,     0,   285,   273,   272,
     286,     0,     0,   349,     0,   298,     0,   452,   373,   372,
     368,   369,   367,   371,   370,   364,   363,   366,   365,     0,
     262,   264,   285,     0,   267,     0,   277,   276,   293,   289,
       0,   259,   287,   261,   230,    66,    67,    65,     0,   447,
     448,   451,   450,   444,    43,    44,     0,    76,    73,    75,
     441,    93,   440,     0,    88,   452,   439,    92,     0,   450,
       0,     0,    99,   452,   190,   159,   158,     0,   219,     0,
       0,    50,    48,   452,    41,   105,   429,     0,   431,     0,
      57,     0,     0,   110,   452,   452,   452,     0,     0,   339,
       0,   338,   341,   452,   452,     0,   119,   121,   118,     0,
     123,   164,   183,     0,     0,     0,     0,   223,     0,   210,
     211,   203,   212,   181,   208,   204,   202,   205,   206,   207,
     209,   182,   178,   179,   166,   172,   176,   175,     0,     0,
     167,   168,   171,   177,   169,   173,   170,   180,     0,   226,
     452,   136,   238,   233,   274,   244,   350,     0,   298,   297,
       0,     0,     0,   265,     0,   269,   268,   260,   117,     0,
       0,     0,   452,     0,   396,     0,   399,     0,     0,     0,
       0,    90,   452,     0,   156,   220,   452,     0,   101,     0,
     100,     0,     0,     0,   427,     0,   452,     0,    52,   146,
     147,   150,   149,   144,   148,   151,     0,     0,     0,    81,
       0,   452,     0,   452,   333,   452,   129,     0,   452,   452,
       0,   161,   192,   191,   193,     0,     0,     0,   160,     0,
       0,     0,   314,   394,   381,   383,     0,   395,     0,   352,
     351,     0,   345,   266,   449,   445,    40,     0,   452,     0,
      84,   450,    95,    89,   452,     0,     0,    97,    71,     0,
       0,   109,   436,   434,   435,   430,   432,     0,    55,    56,
       0,    59,    80,   340,   342,   337,   127,     0,     0,     0,
       0,     0,   406,   452,     0,     0,   165,     0,     0,   452,
       0,     0,   452,     0,   452,   196,   315,   174,   452,   388,
     387,   389,   452,   385,     0,   353,     0,     0,   452,    96,
       0,    91,   452,    86,    72,   102,   433,   428,     0,   128,
       0,   404,   405,   407,     0,   400,   401,   124,   120,   452,
       0,   452,     0,   139,   452,     0,     0,     0,     0,   194,
     452,   452,   384,     0,     0,    94,   397,     0,    85,     0,
     111,   402,   403,     0,   409,   125,     0,     0,   452,     0,
     452,   452,   452,   218,   452,     0,   200,   201,     0,   386,
     140,   137,     0,   398,    87,   408,   162,   452,   185,     0,
     452,     0,     0,   184,     0,   197,   198,   141,   186,     0,
     213,   214,   189,   452,   452,   195,     0,   215,   217,   333,
     188,   187,   199,     0,   216
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     4,     5,    91,    92,    93,   526,   589,   590,   591,
     592,    98,   335,   336,   593,   100,   565,   101,   102,   594,
     104,   595,   106,   596,   528,   183,   597,   109,   598,   534,
     433,   599,   310,   600,   319,   205,   330,   206,   601,   602,
     603,   604,   421,   117,   578,   465,   118,   119,   120,   121,
     122,   708,   468,   841,   605,   606,   564,   673,   339,   607,
     126,   440,   316,   608,   757,   690,   609,   610,   611,   612,
     613,   614,   615,   834,   810,   866,   835,   616,   848,   858,
     617,   618,   242,   166,   289,   167,   231,   232,   362,   233,
     148,   149,   324,   357,   267,   151,   243,   153,   217,    40,
      41,   259,   179,    43,    44,    45,    46,   247,   248,   354,
     570,   571,   743,   384,   261,   262,   471,   472,   620,   704,
     705,   772,    47,   706,   859,   686,   751,   792,   793,   131,
     296,   333,    48,   162,    49,   559,   664,   263,   537,   174,
     297,   523,   168
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -667
static const short int yypact[] =
{
     623,  2987,  3043,    60,    52,  2522,  -667,  -667,    54,  -667,
    -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,
    -667,    54,  -667,  -667,  -667,  -667,  -667,    80,  -667,  -667,
    -667,  -667,  -667,    62,  -667,  -667,    49,    98,  -667,   161,
    3648,   694,   803,   694,  -667,  -667,  1390,    62,  -667,   129,
    -667,   180,   201,  3379,  -667,   173,  -667,  -667,  -667,   189,
    -667,  -667,   260,   261,  3098,   276,  -667,  -667,   261,   299,
     309,   321,  -667,  -667,  -667,   330,  -667,    26,   142,   335,
      35,   367,   336,   467,  3434,  3434,   379,   391,   260,   407,
      23,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,
    -667,   261,  -667,  -667,  -667,  -667,  -667,  -667,  -667,   549,
    -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,
    -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  3489,  -667,
    3266,  -667,  -667,  -667,   413,  -667,    19,   316,  -667,   694,
    -667,  2215,   421,  1614,  2050,    55,   585,    62,  -667,  -667,
     183,   285,   183,   291,   284,   415,  -667,  -667,  -667,  -667,
     507,    40,  -667,  -667,  -667,   478,  -667,   495,  -667,  -667,
     419,  -667,   187,   419,   419,  -667,   497,    73,   976,  -667,
     262,    62,   537,   538,  -667,   419,  3323,  3379,    62,   504,
     120,  -667,   506,   547,  -667,  -667,   419,   555,  -667,  -667,
    -667,   557,  3379,   529,   281,   534,   542,   419,   260,   557,
    3379,  3379,    62,   260,   175,    96,   419,   186,   499,   117,
     989,   234,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,
    -667,   503,  -667,   558,  -667,  -667,  -667,  -667,   129,   510,
    2313,   838,   567,   569,   324,   505,  -667,   560,  2050,  -667,
    2050,   574,  -667,  2050,  2050,  2050,  2050,  2050,  2050,   575,
    1112,  -667,  -667,   557,  1353,  2313,    62,   377,   291,  -667,
    -667,   502,  -667,  -667,  3379,  1723,  -667,  3379,  1832,    55,
     377,   291,   525,   922,  -667,  -667,   129,   583,  3379,  -667,
    -667,  -667,   589,   557,  -667,  -667,   221,   604,  -667,  -667,
    -667,   244,   183,  -667,   609,   605,   613,   602,   242,   616,
     620,  -667,   634,   638,  -667,    62,  -667,  -667,   649,   659,
    -667,   668,   691,  3434,  -667,  -667,  -667,  -667,  -667,  3434,
    -667,  -667,  -667,   692,  -667,  -667,   269,   245,   710,   641,
    -667,  -667,    39,   564,   275,   275,   653,   718,   307,   719,
      96,   663,   922,   375,   720,  -667,  2369,  1066,  -667,   280,
    -667,  3266,  -667,  -667,  -667,   316,   401,   389,   665,   373,
    -667,  -667,  -667,   401,   603,   669,   275,  2050,  1353,  1037,
    3544,  1059,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  2050,
    2050,  2050,  2050,  2050,  2050,  2050,  2050,  2050,  2050,  2050,
     835,    -1,  -667,  3379,  1941,  -667,   727,  -667,  1247,   729,
    -667,  1268,   377,   291,   951,    96,   377,  -667,  -667,   495,
     168,  -667,   419,  1325,  -667,   733,   735,  -667,  -667,  -667,
     498,   252,  1305,   743,  3379,   976,   741,  -667,   745,  2616,
    -667,   125,  3434,   416,   749,   746,   542,   241,   747,   419,
    3379,   755,  -667,  -667,   275,   215,    96,    32,  -667,   991,
    -667,   786,   760,   653,   764,   443,  -667,   426,  1514,  -667,
    -667,   759,  -667,  -667,   558,    62,   669,  -667,  -667,  -667,
     401,   679,  1330,  2050,  1234,  2159,    -3,   803,  1384,  1394,
    1415,  1163,  1059,   664,   664,   334,   334,  -667,  -667,   683,
     669,  -667,    96,   765,  -667,  1342,  -667,  -667,  -667,  -667,
      96,   377,   291,   377,  -667,  -667,  -667,   557,  2710,  -667,
     766,  -667,   245,   788,  -667,  -667,  1514,  -667,  -667,   557,
    -667,  -667,  -667,   794,  -667,   627,   557,  -667,   774,    34,
     483,   252,  -667,   627,  -667,  -667,  -667,  2804,   260,  3599,
     474,  -667,  -667,  3379,  -667,  -667,   163,   717,  -667,   752,
    -667,   813,   814,  -667,  1056,  -667,   627,    43,    96,   802,
     206,  -667,  -667,   819,  3379,   976,  -667,  -667,  -667,   824,
    -667,  -667,  -667,   825,   791,   798,   820,   767,   507,  -667,
    -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,
    -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,   829,  1514,
    -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  3153,   833,
     822,  -667,  -667,  -667,  -667,  -667,  1353,  2050,  2159,  2421,
    2050,   855,   859,  -667,   685,  -667,  -667,   377,  -667,   419,
     419,   856,  3379,   864,   830,   809,  -667,  1325,   780,   419,
     871,  -667,   627,   870,  -667,   557,    20,   976,  -667,  3434,
    -667,   876,   915,    56,  -667,    64,  3266,    44,  -667,  -667,
    -667,  -667,  -667,  -667,  -667,  -667,  3209,  2898,   887,  -667,
    2050,   786,   806,  3379,  -667,   849,  -667,   890,  1066,  3379,
    1514,  -667,  -667,  -667,  -667,   507,   900,   976,  -667,  3544,
     880,   366,   899,  -667,   901,  -667,   635,  -667,  1514,  1353,
    1353,  2050,  -667,  -667,  -667,  -667,  -667,   904,  3379,   906,
    -667,   557,   905,  -667,   627,   875,   809,  -667,  -667,   907,
     918,  -667,  -667,   163,  -667,   163,  -667,   874,  -667,  -667,
    1000,  -667,  -667,  -667,  1353,  -667,  -667,   443,   917,   921,
      62,   448,  -667,   183,   443,   924,  -667,  1514,   929,  3379,
     443,     7,  2369,  2050,    10,  -667,   165,  -667,   822,  -667,
    -667,  -667,   822,  -667,   923,  1353,   933,   936,  3379,  -667,
     937,  -667,   627,  -667,  -667,  -667,  -667,  -667,   938,  -667,
     466,  -667,   942,  -667,   946,  -667,  -667,  -667,  -667,   183,
     940,  3379,   948,  -667,  3379,   950,   952,   957,  1050,  -667,
     976,   822,  -667,    62,   920,  -667,  -667,   959,  -667,   960,
    -667,  -667,  -667,    62,  -667,  -667,  1514,   961,   627,   963,
    3379,  3379,   819,  -667,   976,   962,  -667,  -667,    92,  -667,
    -667,  -667,   443,  -667,  -667,  -667,  -667,   627,  -667,   488,
     627,   966,   968,  -667,   967,  -667,  -667,  -667,  -667,   355,
    -667,  -667,  -667,   627,   627,  -667,   969,  -667,  -667,  -667,
    -667,  -667,  -667,   970,  -667
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -667,  -667,  -306,  -667,  -667,  -667,  -667,     9,    15,    21,
      33,  -667,   591,  -667,    36,  -667,  -667,  -667,  -667,    42,
    -667,    51,  -667,    57,  -667,  -667,    59,  -667,    61,  -518,
    -513,    66,  -667,    69,  -667,  -295,   562,   -66,    72,    74,
      81,    97,  -667,   457,  -666,   337,  -667,  -667,  -667,  -667,
     460,  -667,  -667,  -667,    12,    14,  -667,  -667,  -667,   116,
    -667,  -667,  -667,  -525,  -667,  -667,  -667,   463,  -667,   465,
     152,  -667,  -667,  -667,  -667,  -667,   197,  -667,  -667,  -170,
    -667,     6,    -7,   828,   614,     2,   369,  -667,   568,   680,
     -38,   559,  -667,   -18,   -26,  -208,   -17,  -138,     8,   -28,
    -667,   -30,    29,   -34,  -667,   998,  -667,  -298,  -667,  -667,
    -667,   364,  -667,   805,  -118,  -667,  -667,  -667,  -667,   237,
     282,  -667,   -33,   277,  -427,   220,  -667,  -667,   231,  1035,
     -32,  -667,   667,  -206,   -85,  -667,  -241,   756,   514,    93,
     -14,  -423,     0
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -453
static const short int yytable[] =
{
       6,   641,   425,    39,    51,   129,   139,   268,   132,   540,
     439,   128,   234,   140,    94,   157,   281,   123,   203,   124,
      95,   132,     8,   651,   150,   152,    96,   650,   445,     8,
      42,    42,   364,   369,   178,   630,   374,   501,    97,   194,
     294,    99,   156,     8,   804,   294,   165,   103,   738,   294,
     154,   238,    54,   809,   204,   204,   105,   212,     8,   733,
     728,    52,   107,   175,   108,     8,   110,   735,   175,   184,
     501,   111,    31,    32,   112,   284,   286,   113,   195,   114,
     417,   789,    42,   679,   698,  -413,   115,   739,   798,    34,
      35,   216,   265,   453,   803,   221,   502,    53,   220,     8,
     130,   175,   116,   268,   239,   188,   281,   631,   645,   143,
     130,   157,   273,   211,   276,   518,   653,   805,   271,   237,
     353,   125,    36,   146,   300,   134,    38,   720,   280,   568,
     235,   768,   230,   348,   547,   856,   369,   374,   292,   678,
     285,   413,   298,    60,   130,   190,   685,   550,   304,   244,
     156,    36,   156,   308,   270,    38,   734,   127,    36,    42,
     302,   181,    38,   130,   736,   756,   548,   290,   481,   136,
      42,   315,   515,   266,   171,   332,   857,   132,   343,   311,
     312,   171,   320,   774,   349,   191,   325,   326,   137,     8,
     132,   280,    36,   294,   213,   322,    38,    72,    73,    74,
     347,   138,    76,   338,   327,   469,   331,   334,   783,   779,
     130,   516,   154,    36,   266,    42,    42,    38,     8,   355,
     163,   171,   345,   348,   722,   726,   170,   160,   268,   281,
     295,    42,   800,   363,   142,   413,   811,     8,    36,    42,
      42,   164,    38,   234,   556,   681,   481,     8,   367,   161,
     682,   294,   301,   412,   144,     8,   530,   416,   171,   677,
     422,   662,   281,   446,   426,   291,   171,   406,   171,    42,
     409,    36,   423,   400,   169,    38,   512,   358,     8,   405,
     431,   432,    36,   663,     8,   344,    38,     8,   450,   301,
     419,   146,   531,   204,    42,   532,   350,   780,   173,   204,
     303,   846,   156,    42,   266,   521,    42,   448,   449,   345,
       8,    36,   301,   180,   521,    38,     6,    42,   141,   466,
     469,   265,   274,  -452,   412,   215,   416,     8,   277,   467,
      36,   146,   475,   147,    38,   143,   182,   557,   143,   275,
      36,   558,   512,   132,    38,   278,   185,   533,    36,   462,
     487,   470,    38,   132,   344,   819,   456,   156,   186,   473,
     146,   141,   215,   230,   345,    31,    32,   187,   146,   764,
     147,    36,   193,   197,   499,    38,   198,    36,   143,   199,
      36,    38,    34,    35,    38,    42,   749,   486,   511,   513,
      42,   145,     8,   147,   279,   867,   503,   146,   868,   147,
     538,   849,   266,    36,   196,   685,   869,    38,   519,   765,
     274,   478,   204,   535,   403,   460,   207,   543,  -335,   290,
      36,     6,   291,   146,    38,   171,   240,   275,   208,   580,
     499,   404,    42,   511,   373,   561,   542,   566,   240,   129,
       6,   129,   147,   143,   210,   128,   331,   549,    94,   398,
     399,   123,   562,   124,    95,   143,   551,   629,   236,   552,
      96,   572,    36,    42,   246,   130,    38,   156,   619,   150,
     152,   200,    97,   171,   363,    99,   634,   142,   530,    42,
     171,   103,   575,   576,   637,    36,   577,   156,   795,    38,
     105,   796,   786,   270,   787,   154,   107,   144,   108,   373,
     110,   579,   527,   696,   171,   111,   821,   644,   112,   822,
       8,   113,   283,   114,   658,   644,   287,   532,   129,   657,
     115,   648,   649,   652,   128,   659,   619,    94,   860,   521,
     123,   861,   124,    95,   288,   646,   116,   299,   644,    96,
     306,   307,   634,   646,   314,   644,   661,   129,   234,   317,
     318,    97,     8,   128,    99,   125,    94,   688,   321,   123,
     103,   124,    95,   294,   129,     6,   646,   687,    96,   105,
     676,   873,   323,   646,   328,   107,   671,   108,   672,   110,
      97,   329,    42,    99,   111,   701,   214,   112,   700,   103,
     113,   127,   114,   730,   360,   139,   352,   361,   105,   115,
     629,   365,   376,    42,   107,   371,   108,   372,   110,   619,
     758,   380,   387,   111,   377,   116,   112,   538,   146,   113,
     707,   114,   414,   418,   644,   714,   715,   420,   115,   204,
     724,    28,    29,    30,   125,   717,   270,   405,     8,   729,
     274,   479,   424,   221,   116,    36,   740,   427,   428,    38,
     466,   429,   646,   430,   130,   434,   132,   275,   435,   215,
     467,  -452,  -452,   125,   747,   146,   235,   147,   230,   761,
     127,    42,   436,    28,    29,    30,   748,   129,   437,   760,
     862,   572,   755,   128,  -452,   752,    94,   441,   156,   123,
     619,   124,    95,   870,   871,    42,   644,   442,    96,   127,
     135,   146,   643,   769,   770,   771,   443,   782,   619,   155,
      97,   777,    42,    99,   159,   797,   274,   624,    42,   103,
     403,   633,   403,   713,   646,     1,     2,     3,   105,   444,
     447,    36,   452,   275,   107,    38,   108,   404,   110,   404,
      28,    29,    30,   111,   189,   192,   112,    42,   451,   113,
     454,   114,   802,   156,   644,   807,   455,   619,   115,   458,
     459,   825,   477,   461,   132,   506,   480,   508,   707,   806,
     345,   817,   707,   524,   116,   525,   218,   396,   397,   398,
     399,   541,   646,     8,   544,   545,   553,   560,    42,   569,
     554,    42,   836,   125,   827,   563,   842,   829,   573,   156,
     644,   574,   621,   635,   644,   639,     8,    42,   245,     8,
     837,   707,   269,   530,   272,   171,   836,   301,   172,   644,
     723,   282,   644,   851,   852,   647,   619,   640,   646,   127,
      42,   642,   646,    42,   837,   644,   644,   665,     8,   201,
     141,     8,   666,   301,   209,   218,   746,   646,   305,   531,
     646,   667,   532,   680,   142,   313,   683,   143,   668,    42,
      42,   689,   692,   646,   646,    28,    29,    30,   691,   693,
     684,   155,   265,   697,   144,   141,    36,  -163,     8,   341,
      38,   346,   269,     8,   351,   695,   135,   218,   359,   143,
     215,   694,   143,   711,   643,   703,   146,   712,   147,    36,
     716,   718,    36,    38,   533,   719,    38,   368,   370,   725,
     727,   375,   301,   145,   731,   781,   215,   762,   732,   146,
     750,   147,   146,     8,   147,     8,   293,   742,   753,   293,
     293,    36,   401,   402,    36,    38,   293,   759,    38,   767,
     768,   293,   776,   778,   649,   373,   269,   784,   260,   264,
     269,   763,   293,   266,     8,   790,   147,   301,   785,   348,
     840,   791,   799,   293,   337,   788,   801,   814,   346,   342,
     293,    36,   293,   815,   816,    38,    36,   818,   820,     8,
      38,   823,   438,   824,   826,   215,   828,   830,   265,   831,
     215,   146,     8,   147,     8,   832,   146,   843,   147,   847,
     844,   850,   855,     8,   863,   143,   864,   865,   555,   872,
     874,   370,   370,   301,   520,   457,    36,   269,    36,   269,
      38,   669,    38,   463,   670,   754,   356,   674,   348,   675,
     215,   854,   415,   514,   476,   737,   146,   762,   147,   340,
     266,   474,   622,   370,   158,   745,   632,    36,   838,   813,
     812,    38,   853,   378,   845,   379,   133,     0,   381,   382,
     383,   510,   385,   386,   660,     0,     0,   500,     0,   266,
       0,     0,    36,     0,    60,   483,    38,     0,     0,     0,
     408,   269,   269,   411,     0,    36,   215,    36,     0,    38,
     833,    38,   146,     0,   147,     0,    36,   548,   218,   215,
      38,   510,   218,     0,     0,   146,     0,   147,     0,   266,
     215,     0,    28,    29,    30,     0,   146,   142,   147,     0,
       0,   370,   218,   269,     0,     0,   269,     0,    72,    73,
      74,     0,     0,    76,     0,     0,     0,   144,     0,     0,
       0,   464,   623,   389,   390,   391,   392,   484,   394,   395,
     396,   397,   398,   485,   155,    90,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   388,     0,   269,
     394,   395,   396,   397,   398,   399,   517,   269,   293,   522,
       0,     0,   482,     0,     0,     0,   529,   536,   539,     0,
       0,     0,     0,     0,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   293,     0,     0,   218,   505,
       0,   567,     0,     0,     0,     0,     0,     0,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,     0,
       0,     0,     0,     0,     0,   269,     0,     8,     0,     0,
     171,     0,   218,     0,   249,   223,   224,   225,   226,   227,
     228,   229,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   250,   627,   393,   394,   395,   396,   397,   398,   399,
      28,    29,    30,    31,    32,   702,   251,     0,   626,   492,
     498,     0,     0,     0,     0,     0,     0,   536,     0,    33,
      34,    35,   507,     0,   655,     0,   536,     0,   291,     0,
       0,   171,     0,     0,     0,   218,   223,   224,   225,   226,
     227,   228,   229,   509,   218,     0,     0,     0,     0,     0,
      36,   171,     0,     0,    38,     0,   223,   224,   225,   226,
     227,   228,   229,     0,   253,     0,     0,   254,   255,   218,
     256,   257,   258,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   218,     0,     0,   218,   766,     0,
       0,     0,     0,   773,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   625,     0,     0,     0,     0,
       0,     0,   218,     0,     0,   293,   293,   636,     0,     0,
       0,   536,     0,   721,     0,   293,     0,   218,     0,     9,
      10,    11,    12,    13,    14,    15,    16,   794,    18,     0,
      20,     0,     0,    23,    24,    25,    26,     0,     0,   463,
       0,     0,   709,     0,     0,   710,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,     0,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
       0,     0,     0,     0,     0,     0,     0,   218,     0,     0,
     839,   218,   536,     0,     0,   744,     0,     0,     0,     0,
     794,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   218,   391,   392,   393,   394,   395,   396,   397,   398,
     399,     0,     0,     0,     0,   581,   775,  -452,    56,     0,
       0,     0,     0,    59,   392,   393,   394,   395,   396,   397,
     398,   399,    60,  -452,  -452,  -452,  -452,  -452,  -452,  -452,
    -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,
    -452,     0,     0,     0,   582,    62,     0,     0,  -452,     0,
    -452,  -452,  -452,  -452,  -452,     0,     0,     0,   808,     0,
       0,    64,    65,    66,    67,   583,    69,    70,    71,  -452,
    -452,  -452,   584,   585,   586,     0,    72,   587,    74,     0,
      75,    76,    77,     0,     0,     0,    81,     0,    83,    84,
      85,    86,    87,    88,     0,     0,     0,     0,    89,     0,
    -452,     0,     0,    90,  -452,  -452,     0,     8,     0,     0,
     171,     0,     0,     0,   249,   223,   224,   225,   226,   227,
     228,   229,   588,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   250,     0,     0,     0,     0,     0,     0,     0,     0,
      28,    29,    30,    31,    32,     0,   251,     0,     0,   252,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      34,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      36,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   253,     0,     8,   254,   255,   171,
     256,   257,   258,   249,   223,   224,   225,   226,   227,   228,
     229,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     250,     0,     0,     0,     0,     0,     0,     0,     0,    28,
      29,    30,    31,    32,     0,   251,     0,     0,   407,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,    34,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   253,     0,     8,   254,   255,   171,   256,
     257,   258,   249,   223,   224,   225,   226,   227,   228,   229,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   250,
       0,     0,     0,     0,     0,     0,     0,     0,    28,    29,
      30,    31,    32,     0,   251,     0,     0,   410,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,    34,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   253,     0,     8,   254,   255,   171,   256,   257,
     258,   249,   223,   224,   225,   226,   227,   228,   229,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   250,     0,
       0,     0,     0,     0,     0,     0,     0,    28,    29,    30,
      31,    32,     0,   251,     0,     0,   504,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   253,     0,     8,   254,   255,   171,   256,   257,   258,
     249,   223,   224,   225,   226,   227,   228,   229,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   250,     0,     0,
       0,     0,     0,     0,     0,     0,    28,    29,    30,    31,
      32,     0,   251,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    36,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     253,     0,     8,   254,   255,   171,   256,   257,   258,   249,
     223,   224,   225,   226,   227,   228,   229,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   250,     0,     0,     0,
       0,     0,     0,     0,     0,    28,    29,    30,    31,    32,
       0,   251,     0,     0,     0,     0,     0,     0,     8,     0,
       0,     0,     0,     0,    33,    34,    35,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   240,     0,     0,    36,     0,     0,     0,    38,
      27,    28,    29,    30,    31,    32,     0,     0,     0,   143,
       0,     0,   254,   255,     0,   628,   257,   258,     0,     0,
      33,    34,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,     0,     0,    37,    38,     8,     0,     0,     0,
       0,     0,     0,     0,     0,   241,     0,     0,     0,     0,
       0,   146,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     240,     0,     0,     0,     0,     0,     0,     0,    27,    28,
      29,    30,    31,    32,     0,     0,     0,   143,     0,     0,
       0,     0,     8,     0,     0,     0,     0,     0,    33,    34,
      35,     0,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,    36,
       0,     0,    37,    38,    27,    28,    29,    30,    31,    32,
       0,     0,     0,   366,     8,     0,     0,     0,     0,   146,
       0,     0,     0,     0,    33,    34,    35,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,    36,     0,     0,    37,    38,
      31,    32,     0,     0,     0,     0,     0,     0,     0,   344,
       0,     0,     0,     0,     0,   146,    33,    34,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,     0,     0,
       0,    38,    -2,    55,     0,  -452,    56,     0,     0,    57,
      58,    59,     0,     0,     0,     0,     0,   146,     0,     0,
      60,  -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,
    -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,     0,
       0,     0,    61,    62,     0,     0,     0,     0,  -452,  -452,
    -452,  -452,  -452,     0,     0,    63,     0,     0,     0,    64,
      65,    66,    67,    68,    69,    70,    71,  -452,  -452,  -452,
       0,     0,     0,     0,    72,    73,    74,     0,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     0,     0,     0,    89,    55,  -452,  -452,
      56,    90,  -452,    57,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    60,  -452,  -452,  -452,  -452,  -452,
    -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,
    -452,  -452,  -452,     0,     0,     0,    61,    62,     0,     0,
     546,     0,  -452,  -452,  -452,  -452,  -452,     0,     0,    63,
       0,     0,     0,    64,    65,    66,    67,    68,    69,    70,
      71,  -452,  -452,  -452,     0,     0,     0,     0,    72,    73,
      74,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,     0,     0,     0,
      89,    55,  -452,  -452,    56,    90,  -452,    57,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    60,  -452,
    -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,
    -452,  -452,  -452,  -452,  -452,  -452,  -452,     0,     0,     0,
      61,    62,     0,     0,   638,     0,  -452,  -452,  -452,  -452,
    -452,     0,     0,    63,     0,     0,     0,    64,    65,    66,
      67,    68,    69,    70,    71,  -452,  -452,  -452,     0,     0,
       0,     0,    72,    73,    74,     0,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
       0,     0,     0,     0,    89,    55,  -452,  -452,    56,    90,
    -452,    57,    58,    59,     0,     0,     0,     0,     0,     0,
       0,     0,    60,  -452,  -452,  -452,  -452,  -452,  -452,  -452,
    -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,
    -452,     0,     0,     0,    61,    62,     0,     0,   654,     0,
    -452,  -452,  -452,  -452,  -452,     0,     0,    63,     0,     0,
       0,    64,    65,    66,    67,    68,    69,    70,    71,  -452,
    -452,  -452,     0,     0,     0,     0,    72,    73,    74,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,     0,     0,     0,     0,    89,    55,
    -452,  -452,    56,    90,  -452,    57,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    60,  -452,  -452,  -452,
    -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,
    -452,  -452,  -452,  -452,  -452,     0,     0,     0,    61,    62,
       0,     0,     0,     0,  -452,  -452,  -452,  -452,  -452,     0,
       0,    63,     0,   741,     0,    64,    65,    66,    67,    68,
      69,    70,    71,  -452,  -452,  -452,     0,     0,     0,     0,
      72,    73,    74,     0,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,     7,     0,
       8,     0,    89,     0,  -452,     0,     0,    90,  -452,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,    29,    30,    31,    32,     0,     0,
       0,     0,     0,     0,    50,     0,     8,     0,     0,     0,
       0,     0,    33,    34,    35,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,    36,     0,     0,    37,    38,    27,    28,
      29,    30,    31,    32,     0,     0,     0,     0,     0,   176,
       0,   177,     0,     0,     0,     0,     0,     0,    33,    34,
      35,     0,     0,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,    36,
       0,     0,    37,    38,    28,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,     8,     0,     0,     0,
       0,     0,     0,    33,    34,    35,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,    36,     0,     0,     0,    38,    28,
      29,    30,    31,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     0,     0,     0,     0,     0,   219,    34,
      35,     0,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,    36,
       0,     0,     0,    38,   699,    28,    29,    30,    31,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       0,     0,   222,     0,    33,    34,    35,   223,   224,   225,
     226,   227,   228,   229,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,    36,     0,     0,     0,    38,
     699,    27,    28,    29,    30,    31,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     0,     0,     0,
       0,    33,    34,    35,   309,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,    36,     0,     0,    37,    38,     0,    27,    28,
      29,    30,    31,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     0,     0,     0,     0,     0,    33,    34,
      35,     0,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,    36,
       0,     0,    37,    38,    27,    28,    29,    30,    31,    32,
       0,     0,     0,     0,     0,     0,     0,     8,     0,     0,
       0,     0,     0,     0,    33,    34,    35,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   202,     0,     0,     0,    36,     0,     0,    37,    38,
      28,    29,    30,    31,    32,     0,     0,     0,     0,     0,
       0,     0,     8,     0,     0,     0,     0,     0,     0,    33,
      34,    35,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
      36,     0,     0,     0,    38,    28,    29,    30,    31,    32,
       0,     0,     0,     0,     0,     0,     0,     8,     0,     0,
       0,     0,     0,     0,   219,    34,    35,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,    36,     0,     0,     0,    38,
      28,    29,    30,    31,    32,     0,     0,     0,     0,     0,
       0,     0,   656,     0,     0,     0,     0,     0,     0,    33,
      34,    35,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
      36,     0,     0,     0,    38,    28,    29,    30,    31,    32,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,    34,    35,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    36,     0,    31,    32,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    36,     0,     0,     0,    38
};

static const short int yycheck[] =
{
       0,   526,   300,     1,     2,     5,    40,   145,     8,   432,
     316,     5,   130,    41,     5,    43,   154,     5,    84,     5,
       5,    21,     3,   541,    42,    42,     5,   540,   323,     3,
       1,     2,   238,   241,    64,    38,   244,    38,     5,     4,
       6,     5,    42,     3,    37,     6,    53,     5,     4,     6,
      42,   136,     0,    43,    84,    85,     5,    90,     3,     3,
      40,     1,     5,    63,     5,     3,     5,     3,    68,    69,
      38,     5,    49,    50,     5,   160,   161,     5,    43,     5,
     286,   747,    53,    40,   609,    51,     5,    43,   754,    66,
      67,   109,    37,    54,   760,   128,    97,    37,   128,     3,
      90,   101,     5,   241,   137,    79,   244,   110,   535,    54,
      90,   139,   150,    90,   152,   421,   543,   110,   146,   100,
       3,     5,    96,   116,    51,    45,   100,   645,   154,    97,
     130,    39,   130,    37,   440,    43,   344,   345,   170,   566,
     100,   279,   174,    18,    90,     3,   573,   442,   180,   141,
     150,    96,   152,   185,   146,   100,   100,     5,    96,   130,
     178,    68,   100,    90,   100,   690,    41,   167,   376,   120,
     141,    51,     4,   118,     6,   207,   842,   177,     3,   186,
     187,     6,   196,   708,   216,    43,   204,   204,    90,     3,
     190,   217,    96,     6,   101,   202,   100,    72,    73,    74,
     214,    40,    77,   210,   204,    40,   206,   207,   726,   722,
      90,    43,   204,    96,   118,   186,   187,   100,     3,   219,
      40,     6,   214,    37,   647,   652,    37,    98,   366,   367,
      43,   202,   757,   233,    51,   373,    71,     3,    96,   210,
     211,    40,   100,   361,     3,    39,   454,     3,   240,   120,
      44,     6,    37,   279,    71,     3,     4,   283,     6,   565,
      39,    98,   400,   329,   302,     3,     6,   274,     6,   240,
     277,    96,    51,   265,   101,   100,   414,    43,     3,   271,
      38,    39,    96,   120,     3,   110,   100,     3,    43,    37,
     288,   116,    40,   323,   265,    43,   110,   724,    37,   329,
      38,   826,   302,   274,   118,   423,   277,    38,    39,   301,
       3,    96,    37,    37,   432,   100,   316,   288,    37,   357,
      40,    37,    37,    43,   350,   110,   352,     3,    37,   357,
      96,   116,   365,   118,   100,    54,    37,    96,    54,    54,
      96,   100,   480,   343,   100,    54,    37,    95,    96,   356,
     380,    71,   100,   353,   110,   782,   348,   357,    37,   359,
     116,    37,   110,   361,   356,    49,    50,    37,   116,     3,
     118,    96,    37,    37,   400,   100,    40,    96,    54,    43,
      96,   100,    66,    67,   100,   356,   684,   379,   414,   415,
     361,   110,     3,   118,   110,    40,   403,   116,    43,   118,
     432,   828,   118,    96,    37,   832,    51,   100,   422,    43,
      37,    38,   442,   431,    37,    40,    37,   435,    43,   419,
      96,   421,     3,   116,   100,     6,    37,    54,    37,   467,
     456,    54,   403,   459,   110,   449,   434,   455,    37,   439,
     440,   441,   118,    54,    37,   439,   446,   441,   439,   115,
     116,   439,   450,   439,   439,    54,    40,   485,    45,    43,
     439,   461,    96,   434,    43,    90,   100,   467,   468,   487,
     487,     4,   439,     6,   474,   439,   502,    51,     4,   450,
       6,   439,    39,    40,   510,    96,    43,   487,    40,   100,
     439,    43,   733,   485,   735,   487,   439,    71,   439,   110,
     439,    75,     4,   588,     6,   439,    40,   535,   439,    43,
       3,   439,    97,   439,    40,   543,    38,    43,   518,   549,
     439,    38,    39,   541,   518,    51,   526,   518,    40,   647,
     518,    43,   518,   518,    39,   535,   439,    40,   566,   518,
       3,     3,   568,   543,    40,   573,   553,   547,   666,    43,
       3,   518,     3,   547,   518,   439,   547,   575,     3,   547,
     518,   547,   547,     6,   564,   565,   566,   574,   547,   518,
     564,   869,    43,   573,    40,   518,   564,   518,   564,   518,
     547,    39,   553,   547,   518,   618,    37,   518,   618,   547,
     518,   439,   518,   659,    91,   629,    97,    39,   547,   518,
     628,    91,    97,   574,   547,    38,   547,    38,   547,   609,
     695,    37,    37,   547,    54,   518,   547,   649,   116,   547,
     620,   547,    97,    40,   652,   639,   640,    38,   547,   659,
     648,    46,    47,    48,   518,   642,   628,   629,     3,   657,
      37,    38,    38,   676,   547,    96,   676,    38,    43,   100,
     688,    38,   652,    51,    90,    39,   656,    54,    38,   110,
     688,    97,    98,   547,   682,   116,   666,   118,   666,   699,
     518,   642,    38,    46,    47,    48,   683,   677,    40,   697,
     850,   681,   689,   677,   120,   685,   677,    38,   688,   677,
     690,   677,   677,   863,   864,   666,   724,    38,   677,   547,
      33,   116,    75,    68,    69,    70,    38,   725,   708,    42,
     677,   718,   683,   677,    47,   753,    37,    38,   689,   677,
      37,    38,    37,    38,   724,   102,   103,   104,   677,    38,
      38,    96,    91,    54,   677,   100,   677,    54,   677,    54,
      46,    47,    48,   677,    77,    78,   677,   718,    38,   677,
      97,   677,   759,   753,   782,   762,    38,   757,   677,    40,
      97,   799,    97,    43,   764,    38,    97,    38,   768,   761,
     762,   778,   772,    40,   677,    40,   109,   113,   114,   115,
     116,    38,   782,     3,    43,    40,    37,    40,   759,     3,
      44,   762,   810,   677,   801,    40,   814,   804,    38,   799,
     828,    37,    43,    38,   832,    39,     3,   778,   141,     3,
     810,   811,   145,     4,   147,     6,   834,    37,    62,   847,
      40,   154,   850,   830,   831,    51,   826,    39,   828,   677,
     801,    37,   832,   804,   834,   863,   864,   120,     3,    83,
      37,     3,    90,    37,    88,   178,    40,   847,   181,    40,
     850,    38,    43,    51,    51,   188,    37,    54,    44,   830,
     831,    37,    71,   863,   864,    46,    47,    48,    43,    71,
      51,   204,    37,    44,    71,    37,    96,    44,     3,   212,
     100,   214,   215,     3,   217,   118,   219,   220,   221,    54,
     110,    71,    54,    38,    75,    73,   116,    38,   118,    96,
      44,    37,    96,   100,    95,    75,   100,   240,   241,    38,
      40,   244,    37,   110,    38,    40,   110,    37,     3,   116,
      71,   118,   116,     3,   118,     3,   170,    40,    38,   173,
     174,    96,   265,   266,    96,   100,   180,    37,   100,    40,
      39,   185,    38,    37,    39,   110,   279,    40,   143,   144,
     283,    71,   196,   118,     3,    38,   118,    37,    40,    37,
      40,    40,    38,   207,   208,    91,    37,    44,   301,   213,
     214,    96,   216,    40,    38,   100,    96,    40,    40,     3,
     100,    39,   315,    37,    44,   110,    38,    37,    37,    37,
     110,   116,     3,   118,     3,    38,   116,    38,   118,    38,
      40,    38,    40,     3,    38,    54,    38,    40,   446,    40,
      40,   344,   345,    37,   423,   348,    96,   350,    96,   352,
     100,   564,   100,   356,   564,   688,    37,   564,    37,   564,
     110,   834,   110,   419,   367,   666,   116,    37,   118,   211,
     118,   361,   474,   376,    46,   681,   487,    96,   811,   772,
     768,   100,   832,   248,   823,   250,    21,    -1,   253,   254,
     255,   110,   257,   258,   550,    -1,    -1,   400,    -1,   118,
      -1,    -1,    96,    -1,    18,    38,   100,    -1,    -1,    -1,
     275,   414,   415,   278,    -1,    96,   110,    96,    -1,   100,
      40,   100,   116,    -1,   118,    -1,    96,    41,   431,   110,
     100,   110,   435,    -1,    -1,   116,    -1,   118,    -1,   118,
     110,    -1,    46,    47,    48,    -1,   116,    51,   118,    -1,
      -1,   454,   455,   456,    -1,    -1,   459,    -1,    72,    73,
      74,    -1,    -1,    77,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    75,   475,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   487,    99,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    55,    -1,   502,
     111,   112,   113,   114,   115,   116,   420,   510,   422,   423,
      -1,    -1,   377,    -1,    -1,    -1,   430,   431,   432,    -1,
      -1,    -1,    -1,    -1,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   449,    -1,    -1,   541,   404,
      -1,   455,    -1,    -1,    -1,    -1,    -1,    -1,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    -1,
      -1,    -1,    -1,    -1,    -1,   568,    -1,     3,    -1,    -1,
       6,    -1,   575,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,   110,   111,   112,   113,   114,   115,   116,
      46,    47,    48,    49,    50,   618,    52,    -1,   483,   484,
     485,    -1,    -1,    -1,    -1,    -1,    -1,   541,    -1,    65,
      66,    67,    55,    -1,   548,    -1,   550,    -1,     3,    -1,
      -1,     6,    -1,    -1,    -1,   648,    11,    12,    13,    14,
      15,    16,    17,    55,   657,    -1,    -1,    -1,    -1,    -1,
      96,     6,    -1,    -1,   100,    -1,    11,    12,    13,    14,
      15,    16,    17,    -1,   110,    -1,    -1,   113,   114,   682,
     116,   117,   118,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   697,    -1,    -1,   700,   701,    -1,
      -1,    -1,    -1,   706,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,    55,    -1,    -1,    -1,    -1,
      -1,    -1,   725,    -1,    -1,   639,   640,    55,    -1,    -1,
      -1,   645,    -1,   647,    -1,   649,    -1,   740,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,   750,    28,    -1,
      30,    -1,    -1,    33,    34,    35,    36,    -1,    -1,   762,
      -1,    -1,   627,    -1,    -1,   630,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   810,    -1,    -1,
     813,   814,   726,    -1,    -1,   680,    -1,    -1,    -1,    -1,
     823,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   834,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,    -1,    -1,    -1,     1,   711,     3,     4,    -1,
      -1,    -1,    -1,     9,   109,   110,   111,   112,   113,   114,
     115,   116,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    40,    41,    -1,    -1,    44,    -1,
      46,    47,    48,    49,    50,    -1,    -1,    -1,   763,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    73,    74,    -1,
      76,    77,    78,    -1,    -1,    -1,    82,    -1,    84,    85,
      86,    87,    88,    89,    -1,    -1,    -1,    -1,    94,    -1,
      96,    -1,    -1,    99,   100,   101,    -1,     3,    -1,    -1,
       6,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,   118,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   110,    -1,     3,   113,   114,     6,
     116,   117,   118,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    -1,    52,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,    -1,     3,   113,   114,     6,   116,
     117,   118,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    -1,    52,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,     3,   113,   114,     6,   116,   117,
     118,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,     3,   113,   114,     6,   116,   117,   118,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     110,    -1,     3,   113,   114,     6,   116,   117,   118,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    96,    -1,    -1,    -1,   100,
      45,    46,    47,    48,    49,    50,    -1,    -1,    -1,    54,
      -1,    -1,   113,   114,    -1,   116,   117,   118,    -1,    -1,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    99,   100,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,
      -1,   116,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    96,
      -1,    -1,    99,   100,    45,    46,    47,    48,    49,    50,
      -1,    -1,    -1,   110,     3,    -1,    -1,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    99,   100,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
      -1,    -1,    -1,    -1,    -1,   116,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,   100,     0,     1,    -1,     3,     4,    -1,    -1,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    -1,    -1,    53,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    72,    73,    74,    -1,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    -1,    -1,    -1,    -1,    94,     1,    96,     3,
       4,    99,   100,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    40,    41,    -1,    -1,
      44,    -1,    46,    47,    48,    49,    50,    -1,    -1,    53,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    72,    73,
      74,    -1,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    -1,    -1,    -1,
      94,     1,    96,     3,     4,    99,   100,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      40,    41,    -1,    -1,    44,    -1,    46,    47,    48,    49,
      50,    -1,    -1,    53,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    72,    73,    74,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    94,     1,    96,     3,     4,    99,
     100,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    40,    41,    -1,    -1,    44,    -1,
      46,    47,    48,    49,    50,    -1,    -1,    53,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    -1,    -1,    -1,    94,     1,
      96,     3,     4,    99,   100,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    40,    41,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    -1,
      -1,    53,    -1,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      72,    73,    74,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,     1,    -1,
       3,    -1,    94,    -1,    96,    -1,    -1,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    96,    -1,    -1,    99,   100,    45,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    99,   100,    46,    47,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,   100,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    96,
      -1,    -1,    -1,   100,   101,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,     6,    -1,    65,    66,    67,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    96,    -1,    -1,    -1,   100,
     101,    45,    46,    47,    48,    49,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    65,    66,    67,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    96,    -1,    -1,    99,   100,    -1,    45,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    96,
      -1,    -1,    99,   100,    45,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    96,    -1,    -1,    99,   100,
      46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,   100,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,   100,
      46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,   100,    46,    47,    48,    49,    50,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    49,    50,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,   100
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   102,   103,   104,   122,   123,   263,     1,     3,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    45,    46,    47,
      48,    49,    50,    65,    66,    67,    96,    99,   100,   206,
     220,   221,   223,   224,   225,   226,   227,   243,   253,   255,
       1,   206,     1,    37,     0,     1,     4,     7,     8,     9,
      18,    40,    41,    53,    57,    58,    59,    60,    61,    62,
      63,    64,    72,    73,    74,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    94,
      99,   124,   125,   126,   128,   129,   130,   131,   132,   135,
     136,   138,   139,   140,   141,   142,   143,   144,   147,   148,
     149,   152,   154,   159,   160,   161,   162,   164,   167,   168,
     169,   170,   171,   175,   176,   180,   181,   191,   202,   263,
      90,   250,   263,   250,    45,   253,   120,    90,    40,   224,
     220,    37,    51,    54,    71,   110,   116,   118,   211,   212,
     214,   216,   217,   218,   219,   253,   263,   220,   226,   253,
      98,   120,   254,    40,    40,   203,   204,   206,   263,   101,
      37,     6,   258,    37,   260,   263,     1,     3,   222,   223,
      37,   260,    37,   146,   263,    37,    37,    37,    79,   253,
       3,    43,   253,    37,     4,    43,    37,    37,    40,    43,
       4,   258,    37,   158,   222,   156,   158,    37,    37,   258,
      37,    90,   243,   260,    37,   110,   214,   219,   253,    65,
     222,   243,     6,    11,    12,    13,    14,    15,    16,    17,
     206,   207,   208,   210,   235,   263,    45,   100,   255,   243,
      37,   110,   203,   217,   219,   253,    43,   228,   229,    10,
      37,    52,    55,   110,   113,   114,   116,   117,   118,   222,
     234,   235,   236,   258,   234,    37,   118,   215,   218,   253,
     219,   220,   253,   211,    37,    54,   211,    37,    54,   110,
     215,   218,   253,    97,   255,   100,   255,    38,    39,   205,
     263,     3,   251,   258,     6,    43,   251,   261,   251,    40,
      51,    37,   214,    38,   251,   253,     3,     3,   251,    11,
     153,   203,   203,   253,    40,    51,   183,    43,     3,   155,
     261,     3,   203,    43,   213,   214,   217,   263,    40,    39,
     157,   263,   251,   252,   263,   133,   134,   258,   203,   179,
     204,   253,   258,     3,   110,   219,   253,   261,    37,   251,
     110,   253,    97,     3,   230,   263,    37,   214,    43,   253,
      91,    39,   209,   263,   254,    91,   110,   219,   253,   216,
     253,    38,    38,   110,   216,   253,    97,    54,   234,   234,
      37,   234,   234,   234,   234,   234,   234,    37,    55,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     219,   253,   253,    37,    54,   219,   203,    55,   234,   203,
      55,   234,   215,   218,    97,   110,   215,   254,    40,   206,
      38,   163,    39,    51,    38,   228,   211,    38,    43,    38,
      51,    38,    39,   151,    39,    38,    38,    40,   253,   123,
     182,    38,    38,    38,    38,   156,   158,    38,    38,    39,
      43,    38,    91,    54,    97,    38,   219,   253,    40,    97,
      40,    43,   203,   253,    75,   166,   211,   220,   173,    40,
      71,   237,   238,   263,   210,   243,   253,    97,    38,    38,
      97,   216,   234,    38,   110,   116,   219,   222,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   215,
     253,    38,    97,   203,    55,   234,    38,    55,    38,    55,
     110,   215,   218,   215,   205,     4,    43,   258,   123,   261,
     133,   235,   258,   262,    40,    40,   127,     4,   145,   258,
       4,    40,    43,    95,   150,   214,   258,   259,   251,   258,
     262,    38,   206,   214,    43,    40,    44,   123,    41,   202,
     156,    40,    43,    37,    44,   157,     3,    96,   100,   256,
      40,   261,   206,    40,   177,   137,   214,   258,    97,     3,
     231,   232,   263,    38,    37,    39,    40,    43,   165,    75,
     211,     1,    40,    61,    68,    69,    70,    73,   118,   128,
     129,   130,   131,   135,   140,   142,   144,   147,   149,   152,
     154,   159,   160,   161,   162,   175,   176,   180,   184,   187,
     188,   189,   190,   191,   192,   193,   198,   201,   202,   263,
     239,    43,   209,   253,    38,    55,   234,    38,   116,   220,
      38,   110,   212,    38,   215,    38,    55,   215,    44,    39,
      39,   184,    37,    75,   220,   245,   263,    51,    38,    39,
     151,   150,   214,   245,    44,   258,     3,   222,    40,    51,
     259,   203,    98,   120,   257,   120,    90,    38,    44,   164,
     171,   175,   176,   178,   188,   190,   202,   123,   245,    40,
      51,    39,    44,    37,    51,   245,   246,   203,   214,    37,
     186,    43,    71,    71,    71,   118,   255,    44,   184,   101,
     222,   243,   253,    73,   240,   241,   244,   263,   172,   234,
     234,    38,    38,    38,   261,   261,    44,   203,    37,    75,
     150,   258,   262,    40,   214,    38,   245,    40,    40,   214,
     158,    38,     3,     3,   100,     3,   100,   207,     4,    43,
     222,    55,    40,   233,   234,   232,    40,   214,   203,   228,
      71,   247,   263,    38,   166,   203,   184,   185,   255,    37,
     214,   222,    37,    71,     3,    43,   253,    40,    39,    68,
      69,    70,   242,   253,   184,   234,    38,   203,    37,   151,
     245,    40,   214,   150,    40,    40,   257,   257,    91,   165,
      38,    40,   248,   249,   253,    40,    43,   211,   165,    38,
     184,    37,   203,   165,    37,   110,   219,   203,   234,    43,
     195,    71,   241,   244,    44,    40,    38,   203,    40,   245,
      40,    40,    43,    39,    37,   211,    44,   203,    38,   203,
      37,    37,    38,    40,   194,   197,   214,   263,   240,   253,
      40,   174,   214,    38,    40,   249,   184,    38,   199,   245,
      38,   203,   203,   246,   197,    40,    43,   165,   200,   245,
      40,    43,   200,    38,    38,    40,   196,    40,    43,    51,
     200,   200,    40,   228,    40
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (0)
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
              (Loc).first_line, (Loc).first_column,	\
              (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  register short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;


  yyvsp[0] = yylval;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short int *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to look-ahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 1476 "CParse/parser.y"
    {
                   if (!classes) classes = NewHash();
		   Setattr((yyvsp[0].node),"classes",classes); 
		   Setattr((yyvsp[0].node),k_name,ModuleName);
		   
		   if ((!module_node) && ModuleName) {
		     module_node = new_node("module");
		     Setattr(module_node,k_name,ModuleName);
		   }
		   Setattr((yyvsp[0].node),"module",module_node);
		   check_extensions();
	           top = (yyvsp[0].node);
               }
    break;

  case 3:
#line 1489 "CParse/parser.y"
    {
                 top = Copy(Getattr((yyvsp[-1].p),k_type));
		 Delete((yyvsp[-1].p));
               }
    break;

  case 4:
#line 1493 "CParse/parser.y"
    {
                 top = 0;
               }
    break;

  case 5:
#line 1496 "CParse/parser.y"
    {
                 top = (yyvsp[-1].p);
               }
    break;

  case 6:
#line 1499 "CParse/parser.y"
    {
                 top = 0;
               }
    break;

  case 7:
#line 1502 "CParse/parser.y"
    {
                 top = (yyvsp[-2].pl);
               }
    break;

  case 8:
#line 1505 "CParse/parser.y"
    {
                 top = 0;
               }
    break;

  case 9:
#line 1510 "CParse/parser.y"
    {  
                   /* add declaration to end of linked list (the declaration isn't always a single declaration, sometimes it is a linked list itself) */
                   appendChild((yyvsp[-1].node),(yyvsp[0].node));
                   (yyval.node) = (yyvsp[-1].node);
               }
    break;

  case 10:
#line 1515 "CParse/parser.y"
    {
                   (yyval.node) = new_node("top");
               }
    break;

  case 11:
#line 1520 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 12:
#line 1521 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 13:
#line 1522 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 14:
#line 1523 "CParse/parser.y"
    { (yyval.node) = 0; }
    break;

  case 15:
#line 1524 "CParse/parser.y"
    {
                  (yyval.node) = 0;
		  if (!Swig_error_count()) {
		    Swig_error(cparse_file, cparse_line,"Syntax error in input(1).\n");
		  }
               }
    break;

  case 16:
#line 1531 "CParse/parser.y"
    { 
                  if ((yyval.node)) {
   		      add_symbols((yyval.node));
                  }
                  (yyval.node) = (yyvsp[0].node); 
	       }
    break;

  case 17:
#line 1547 "CParse/parser.y"
    {
                  (yyval.node) = 0;
                  skip_decl();
               }
    break;

  case 18:
#line 1557 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 19:
#line 1558 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 20:
#line 1559 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 21:
#line 1560 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 22:
#line 1561 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 23:
#line 1562 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 24:
#line 1563 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 25:
#line 1564 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 26:
#line 1565 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 27:
#line 1566 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 28:
#line 1567 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 29:
#line 1568 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 30:
#line 1569 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 31:
#line 1570 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 32:
#line 1571 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 33:
#line 1572 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 34:
#line 1573 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 35:
#line 1574 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 36:
#line 1575 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 37:
#line 1576 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 38:
#line 1577 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 39:
#line 1584 "CParse/parser.y"
    {
               Node *cls;
	       String *clsname;
	       cplus_mode = CPLUS_PUBLIC;
	       if (!classes) classes = NewHash();
	       if (!extendhash) extendhash = NewHash();
	       clsname = make_class_name((yyvsp[-1].str));
	       cls = Getattr(classes,clsname);
	       if (!cls) {
		 /* No previous definition. Create a new scope */
		 Node *am = Getattr(extendhash,clsname);
		 if (!am) {
		   Swig_symbol_newscope();
		   Swig_symbol_setscopename((yyvsp[-1].str));
		   prev_symtab = 0;
		 } else {
		   prev_symtab = Swig_symbol_setscope(Getattr(am,k_symtab));
		 }
		 current_class = 0;
	       } else {
		 /* Previous class definition.  Use its symbol table */
		 prev_symtab = Swig_symbol_setscope(Getattr(cls,k_symtab));
		 current_class = cls;
		 extendmode = 1;
	       }
	       Classprefix = NewString((yyvsp[-1].str));
	       Namespaceprefix= Swig_symbol_qualifiedscopename(0);
	       Delete(clsname);
	     }
    break;

  case 40:
#line 1612 "CParse/parser.y"
    {
               String *clsname;
	       extendmode = 0;
               (yyval.node) = new_node("extend");
	       Setattr((yyval.node),k_symtab,Swig_symbol_popscope());
	       if (prev_symtab) {
		 Swig_symbol_setscope(prev_symtab);
	       }
	       Namespaceprefix = Swig_symbol_qualifiedscopename(0);
               clsname = make_class_name((yyvsp[-4].str));
	       Setattr((yyval.node),k_name,clsname);

	       /* Mark members as extend */

	       Swig_tag_nodes((yyvsp[-1].node),"feature:extend",(char*) "1");
	       if (current_class) {
		 /* We add the extension to the previously defined class */
		 appendChild((yyval.node),(yyvsp[-1].node));
		 appendChild(current_class,(yyval.node));
	       } else {
		 /* We store the extensions in the extensions hash */
		 Node *am = Getattr(extendhash,clsname);
		 if (am) {
		   /* Append the members to the previous extend methods */
		   appendChild(am,(yyvsp[-1].node));
		 } else {
		   appendChild((yyval.node),(yyvsp[-1].node));
		   Setattr(extendhash,clsname,(yyval.node));
		 }
	       }
	       current_class = 0;
	       Delete(Classprefix);
	       Delete(clsname);
	       Classprefix = 0;
	       prev_symtab = 0;
	       (yyval.node) = 0;

	     }
    break;

  case 41:
#line 1656 "CParse/parser.y"
    {
                    (yyval.node) = new_node("apply");
                    Setattr((yyval.node),k_pattern,Getattr((yyvsp[-3].p),k_pattern));
		    appendChild((yyval.node),(yyvsp[-1].p));
               }
    break;

  case 42:
#line 1666 "CParse/parser.y"
    {
		 (yyval.node) = new_node("clear");
		 appendChild((yyval.node),(yyvsp[-1].p));
               }
    break;

  case 43:
#line 1677 "CParse/parser.y"
    {
		   if (((yyvsp[-1].dtype).type != T_ERROR) && ((yyvsp[-1].dtype).type != T_SYMBOL)) {
		     SwigType *type = NewSwigType((yyvsp[-1].dtype).type);
		     (yyval.node) = new_node("constant");
		     Setattr((yyval.node),k_name,(yyvsp[-3].id));
		     Setattr((yyval.node),k_type,type);
		     Setattr((yyval.node),k_value,(yyvsp[-1].dtype).val);
		     if ((yyvsp[-1].dtype).rawval) Setattr((yyval.node),"rawval", (yyvsp[-1].dtype).rawval);
		     Setattr((yyval.node),k_storage,"%constant");
		     SetFlag((yyval.node),"feature:immutable");
		     add_symbols((yyval.node));
		     Delete(type);
		   } else {
		     if ((yyvsp[-1].dtype).type == T_ERROR) {
		       Swig_warning(WARN_PARSE_UNSUPPORTED_VALUE,cparse_file,cparse_line,"Unsupported constant value (ignored)\n");
		     }
		     (yyval.node) = 0;
		   }

	       }
    break;

  case 44:
#line 1698 "CParse/parser.y"
    {
		 if (((yyvsp[-1].dtype).type != T_ERROR) && ((yyvsp[-1].dtype).type != T_SYMBOL)) {
		   SwigType_push((yyvsp[-3].type),(yyvsp[-2].decl).type);
		   /* Sneaky callback function trick */
		   if (SwigType_isfunction((yyvsp[-3].type))) {
		     SwigType_add_pointer((yyvsp[-3].type));
		   }
		   (yyval.node) = new_node("constant");
		   Setattr((yyval.node),k_name,(yyvsp[-2].decl).id);
		   Setattr((yyval.node),k_type,(yyvsp[-3].type));
		   Setattr((yyval.node),k_value,(yyvsp[-1].dtype).val);
		   if ((yyvsp[-1].dtype).rawval) Setattr((yyval.node),"rawval", (yyvsp[-1].dtype).rawval);
		   Setattr((yyval.node),k_storage,"%constant");
		   SetFlag((yyval.node),"feature:immutable");
		   add_symbols((yyval.node));
		 } else {
		     if ((yyvsp[-1].dtype).type == T_ERROR) {
		       Swig_warning(WARN_PARSE_UNSUPPORTED_VALUE,cparse_file,cparse_line,"Unsupported constant value\n");
		     }
		   (yyval.node) = 0;
		 }
               }
    break;

  case 45:
#line 1720 "CParse/parser.y"
    {
		 Swig_warning(WARN_PARSE_BAD_VALUE,cparse_file,cparse_line,"Bad constant value (ignored).\n");
		 (yyval.node) = 0;
	       }
    break;

  case 46:
#line 1731 "CParse/parser.y"
    {
		 char temp[64];
		 Replace((yyvsp[0].str),"$file",cparse_file, DOH_REPLACE_ANY);
		 sprintf(temp,"%d", cparse_line);
		 Replace((yyvsp[0].str),"$line",temp,DOH_REPLACE_ANY);
		 Printf(stderr,"%s\n", (yyvsp[0].str));
		 Delete((yyvsp[0].str));
                 (yyval.node) = 0;
	       }
    break;

  case 47:
#line 1740 "CParse/parser.y"
    {
		 char temp[64];
		 String *s = NewString((yyvsp[0].id));
		 Replace(s,"$file",cparse_file, DOH_REPLACE_ANY);
		 sprintf(temp,"%d", cparse_line);
		 Replace(s,"$line",temp,DOH_REPLACE_ANY);
		 Printf(stderr,"%s\n", s);
		 Delete(s);
                 (yyval.node) = 0;
               }
    break;

  case 48:
#line 1759 "CParse/parser.y"
    {
                    skip_balanced('{','}');
		    (yyval.node) = 0;
		    Swig_warning(WARN_DEPRECATED_EXCEPT,cparse_file, cparse_line, "%%except is deprecated.  Use %%exception instead.\n");
	       }
    break;

  case 49:
#line 1765 "CParse/parser.y"
    {
                    skip_balanced('{','}');
		    (yyval.node) = 0;
		    Swig_warning(WARN_DEPRECATED_EXCEPT,cparse_file, cparse_line, "%%except is deprecated.  Use %%exception instead.\n");
               }
    break;

  case 50:
#line 1771 "CParse/parser.y"
    {
		 (yyval.node) = 0;
		 Swig_warning(WARN_DEPRECATED_EXCEPT,cparse_file, cparse_line, "%%except is deprecated.  Use %%exception instead.\n");
               }
    break;

  case 51:
#line 1776 "CParse/parser.y"
    {
		 (yyval.node) = 0;
		 Swig_warning(WARN_DEPRECATED_EXCEPT,cparse_file, cparse_line, "%%except is deprecated.  Use %%exception instead.\n");
	       }
    break;

  case 52:
#line 1787 "CParse/parser.y"
    {		 
                 (yyval.node) = NewHash();
                 Setattr((yyval.node),k_value,(yyvsp[-3].id));
		 Setattr((yyval.node),k_type,Getattr((yyvsp[-1].p),k_type));
               }
    break;

  case 53:
#line 1794 "CParse/parser.y"
    {
                 (yyval.node) = NewHash();
                 Setattr((yyval.node),k_value,(yyvsp[0].id));
              }
    break;

  case 54:
#line 1798 "CParse/parser.y"
    {
                (yyval.node) = (yyvsp[0].node);
              }
    break;

  case 55:
#line 1803 "CParse/parser.y"
    {
                   Hash *p = (yyvsp[-2].node);
		   (yyval.node) = new_node("fragment");
		   Setattr((yyval.node),k_value,Getattr((yyvsp[-4].node),k_value));
		   Setattr((yyval.node),k_type,Getattr((yyvsp[-4].node),k_type));
		   Setattr((yyval.node),k_section,Getattr(p,k_name));
		   Setattr((yyval.node),k_kwargs,nextSibling(p));
		   Setattr((yyval.node),k_code,(yyvsp[0].str));
                 }
    break;

  case 56:
#line 1812 "CParse/parser.y"
    {
		   Hash *p = (yyvsp[-2].node);
		   String *code;
                   skip_balanced('{','}');
		   (yyval.node) = new_node("fragment");
		   Setattr((yyval.node),k_value,Getattr((yyvsp[-4].node),k_value));
		   Setattr((yyval.node),k_type,Getattr((yyvsp[-4].node),k_type));
		   Setattr((yyval.node),k_section,Getattr(p,k_name));
		   Setattr((yyval.node),k_kwargs,nextSibling(p));
		   Delitem(scanner_ccode,0);
		   Delitem(scanner_ccode,DOH_END);
		   code = Copy(scanner_ccode);
		   Setattr((yyval.node),k_code,code);
		   Delete(code);
                 }
    break;

  case 57:
#line 1827 "CParse/parser.y"
    {
		   (yyval.node) = new_node("fragment");
		   Setattr((yyval.node),k_value,Getattr((yyvsp[-2].node),k_value));
		   Setattr((yyval.node),k_type,Getattr((yyvsp[-2].node),k_type));
		   Setattr((yyval.node),"emitonly","1");
		 }
    break;

  case 58:
#line 1840 "CParse/parser.y"
    {
                     (yyvsp[-3].loc).filename = Swig_copy_string(cparse_file);
		     (yyvsp[-3].loc).line = cparse_line;
		     cparse_file = Swig_copy_string((yyvsp[-1].id));
		     cparse_line = 0;
               }
    break;

  case 59:
#line 1845 "CParse/parser.y"
    {
                     String *mname = 0;
                     (yyval.node) = (yyvsp[-1].node);
		     cparse_file = (yyvsp[-6].loc).filename;
		     cparse_line = (yyvsp[-6].loc).line;
		     if (strcmp((yyvsp[-6].loc).type,"include") == 0) set_nodeType((yyval.node),"include");
		     if (strcmp((yyvsp[-6].loc).type,"import") == 0) {
		       mname = (yyvsp[-5].node) ? Getattr((yyvsp[-5].node),"module") : 0;
		       set_nodeType((yyval.node),"import");
		       if (import_mode) --import_mode;
		     }
		     
		     Setattr((yyval.node),k_name,(yyvsp[-4].id));
		     /* Search for the module (if any) */
		     {
			 Node *n = firstChild((yyval.node));
			 while (n) {
			     if (Strcmp(nodeType(n),"module") == 0) {
			         if (mname) {
				   Setattr(n,k_name, mname);
				   mname = 0;
				 }
				 Setattr((yyval.node),"module",Getattr(n,k_name));
				 break;
			     }
			     n = nextSibling(n);
			 }
			 if (mname) {
			   /* There is no module node in the import
			      node, ie, you imported a .h file
			      directly.  We are forced then to create
			      a new import node with a module node.
			   */			      
			   Node *nint = new_node("import");
			   Node *mnode = new_node("module");
			   Setattr(mnode,k_name, mname);
			   appendChild(nint,mnode);
			   Delete(mnode);
			   appendChild(nint,firstChild((yyval.node)));
			   (yyval.node) = nint;
			   Setattr((yyval.node),"module",mname);
			 }
		     }
		     Setattr((yyval.node),"options",(yyvsp[-5].node));
               }
    break;

  case 60:
#line 1892 "CParse/parser.y"
    { (yyval.loc).type = (char *) "include"; }
    break;

  case 61:
#line 1893 "CParse/parser.y"
    { (yyval.loc).type = (char *) "import"; ++import_mode;}
    break;

  case 62:
#line 1900 "CParse/parser.y"
    {
                 String *cpps;
		 if (Namespaceprefix) {
		   Swig_error(cparse_file, cparse_start_line, "%%inline directive inside a namespace is disallowed.\n");

		   (yyval.node) = 0;
		 } else {
		   (yyval.node) = new_node("insert");
		   Setattr((yyval.node),k_code,(yyvsp[0].str));
		   /* Need to run through the preprocessor */
		   Setline((yyvsp[0].str),cparse_start_line);
		   Setfile((yyvsp[0].str),cparse_file);
		   Seek((yyvsp[0].str),0,SEEK_SET);
		   cpps = Preprocessor_parse((yyvsp[0].str));
		   start_inline(Char(cpps), cparse_start_line);
		   Delete((yyvsp[0].str));
		   Delete(cpps);
		 }
		 
	       }
    break;

  case 63:
#line 1920 "CParse/parser.y"
    {
                 String *cpps;
		 int start_line = cparse_line;
		 skip_balanced('{','}');
		 if (Namespaceprefix) {
		   Swig_error(cparse_file, cparse_start_line, "%%inline directive inside a namespace is disallowed.\n");
		   
		   (yyval.node) = 0;
		 } else {
		   String *code;
                   (yyval.node) = new_node("insert");
		   Delitem(scanner_ccode,0);
		   Delitem(scanner_ccode,DOH_END);
		   code = Copy(scanner_ccode);
		   Setattr((yyval.node),k_code, code);
		   Delete(code);		   
		   cpps=Copy(scanner_ccode);
		   start_inline(Char(cpps), start_line);
		   Delete(cpps);
		 }
               }
    break;

  case 64:
#line 1951 "CParse/parser.y"
    {
                 (yyval.node) = new_node("insert");
		 Setattr((yyval.node),k_code,(yyvsp[0].str));
	       }
    break;

  case 65:
#line 1955 "CParse/parser.y"
    {
		 String *code = NewStringEmpty();
		 (yyval.node) = new_node("insert");
		 Setattr((yyval.node),k_section,(yyvsp[-2].id));
		 Setattr((yyval.node),k_code,code);
		 if (Swig_insert_file((yyvsp[0].id),code) < 0) {
		   Swig_error(cparse_file, cparse_line, "Couldn't find '%s'.\n", (yyvsp[0].id));
		   (yyval.node) = 0;
		 } 
               }
    break;

  case 66:
#line 1965 "CParse/parser.y"
    {
		 (yyval.node) = new_node("insert");
		 Setattr((yyval.node),k_section,(yyvsp[-2].id));
		 Setattr((yyval.node),k_code,(yyvsp[0].str));
               }
    break;

  case 67:
#line 1970 "CParse/parser.y"
    {
		 String *code;
                 skip_balanced('{','}');
		 (yyval.node) = new_node("insert");
		 Setattr((yyval.node),k_section,(yyvsp[-2].id));
		 Delitem(scanner_ccode,0);
		 Delitem(scanner_ccode,DOH_END);
		 code = Copy(scanner_ccode);
		 Setattr((yyval.node),k_code, code);
		 Delete(code);
	       }
    break;

  case 68:
#line 1988 "CParse/parser.y"
    {
                 (yyval.node) = new_node("module");
		 if ((yyvsp[-1].node)) {
		   Setattr((yyval.node),"options",(yyvsp[-1].node));
		   if (Getattr((yyvsp[-1].node),"directors")) {
		     Wrapper_director_mode_set(1);
		   } 
		   if (Getattr((yyvsp[-1].node),"templatereduce")) {
		     template_reduce = 1;
		   }
		   if (Getattr((yyvsp[-1].node),"notemplatereduce")) {
		     template_reduce = 0;
		   }
		 }
		 if (!ModuleName) ModuleName = NewString((yyvsp[0].id));
		 if (!import_mode) {
		   /* first module included, we apply global
		      ModuleName, which can be modify by -module */
		   String *mname = Copy(ModuleName);
		   Setattr((yyval.node),k_name,mname);
		   Delete(mname);
		 } else { 
		   /* import mode, we just pass the idstring */
		   Setattr((yyval.node),k_name,(yyvsp[0].id));   
		 }		 
		 if (!module_node) module_node = (yyval.node);
	       }
    break;

  case 69:
#line 2022 "CParse/parser.y"
    {
                 Swig_warning(WARN_DEPRECATED_NAME,cparse_file,cparse_line, "%%name is deprecated.  Use %%rename instead.\n");
		 Delete(yyrename);
                 yyrename = NewString((yyvsp[-1].id));
		 (yyval.node) = 0;
               }
    break;

  case 70:
#line 2028 "CParse/parser.y"
    {
		 Swig_warning(WARN_DEPRECATED_NAME,cparse_file,cparse_line, "%%name is deprecated.  Use %%rename instead.\n");
		 (yyval.node) = 0;
		 Swig_error(cparse_file,cparse_line,"Missing argument to %%name directive.\n");
	       }
    break;

  case 71:
#line 2041 "CParse/parser.y"
    {
                 (yyval.node) = new_node("native");
		 Setattr((yyval.node),k_name,(yyvsp[-4].id));
		 Setattr((yyval.node),"wrap:name",(yyvsp[-1].id));
	         add_symbols((yyval.node));
	       }
    break;

  case 72:
#line 2047 "CParse/parser.y"
    {
		 if (!SwigType_isfunction((yyvsp[-1].decl).type)) {
		   Swig_error(cparse_file,cparse_line,"%%native declaration '%s' is not a function.\n", (yyvsp[-1].decl).id);
		   (yyval.node) = 0;
		 } else {
		     Delete(SwigType_pop_function((yyvsp[-1].decl).type));
		     /* Need check for function here */
		     SwigType_push((yyvsp[-2].type),(yyvsp[-1].decl).type);
		     (yyval.node) = new_node("native");
	             Setattr((yyval.node),k_name,(yyvsp[-5].id));
		     Setattr((yyval.node),"wrap:name",(yyvsp[-1].decl).id);
		     Setattr((yyval.node),k_type,(yyvsp[-2].type));
		     Setattr((yyval.node),k_parms,(yyvsp[-1].decl).parms);
		     Setattr((yyval.node),k_decl,(yyvsp[-1].decl).type);
		 }
	         add_symbols((yyval.node));
	       }
    break;

  case 73:
#line 2073 "CParse/parser.y"
    {
                 (yyval.node) = new_node("pragma");
		 Setattr((yyval.node),"lang",(yyvsp[-3].id));
		 Setattr((yyval.node),k_name,(yyvsp[-2].id));
		 Setattr((yyval.node),k_value,(yyvsp[0].str));
	       }
    break;

  case 74:
#line 2079 "CParse/parser.y"
    {
		(yyval.node) = new_node("pragma");
		Setattr((yyval.node),"lang",(yyvsp[-1].id));
		Setattr((yyval.node),k_name,(yyvsp[0].id));
	      }
    break;

  case 75:
#line 2086 "CParse/parser.y"
    { (yyval.str) = NewString((yyvsp[0].id)); }
    break;

  case 76:
#line 2087 "CParse/parser.y"
    { (yyval.str) = (yyvsp[0].str); }
    break;

  case 77:
#line 2090 "CParse/parser.y"
    { (yyval.id) = (yyvsp[-1].id); }
    break;

  case 78:
#line 2091 "CParse/parser.y"
    { (yyval.id) = (char *) "swig"; }
    break;

  case 79:
#line 2099 "CParse/parser.y"
    {
                SwigType *t = (yyvsp[-2].decl).type;
		Hash *kws = NewHash();
		String *fixname;
		fixname = feature_identifier_fix((yyvsp[-2].decl).id);
		Setattr(kws,k_name,(yyvsp[-1].id));
		if (!Len(t)) t = 0;
		/* Special declarator check */
		if (t) {
		  if (SwigType_isfunction(t)) {
		    SwigType *decl = SwigType_pop_function(t);
		    if (SwigType_ispointer(t)) {
		      String *nname = NewStringf("*%s",fixname);
		      if ((yyvsp[-3].ivalue)) {
			Swig_name_rename_add(Namespaceprefix, nname,decl,kws,(yyvsp[-2].decl).parms);
		      } else {
			Swig_name_namewarn_add(Namespaceprefix,nname,decl,kws);
		      }
		      Delete(nname);
		    } else {
		      if ((yyvsp[-3].ivalue)) {
			Swig_name_rename_add(Namespaceprefix,(fixname),decl,kws,(yyvsp[-2].decl).parms);
		      } else {
			Swig_name_namewarn_add(Namespaceprefix,(fixname),decl,kws);
		      }
		    }
		    Delete(decl);
		  } else if (SwigType_ispointer(t)) {
		    String *nname = NewStringf("*%s",fixname);
		    if ((yyvsp[-3].ivalue)) {
		      Swig_name_rename_add(Namespaceprefix,(nname),0,kws,(yyvsp[-2].decl).parms);
		    } else {
		      Swig_name_namewarn_add(Namespaceprefix,(nname),0,kws);
		    }
		    Delete(nname);
		  }
		} else {
		  if ((yyvsp[-3].ivalue)) {
		    Swig_name_rename_add(Namespaceprefix,(fixname),0,kws,(yyvsp[-2].decl).parms);
		  } else {
		    Swig_name_namewarn_add(Namespaceprefix,(fixname),0,kws);
		  }
		}
                (yyval.node) = 0;
		scanner_clear_rename();
              }
    break;

  case 80:
#line 2145 "CParse/parser.y"
    {
		String *fixname;
		Hash *kws = (yyvsp[-4].node);
		SwigType *t = (yyvsp[-2].decl).type;
		fixname = feature_identifier_fix((yyvsp[-2].decl).id);
		if (!Len(t)) t = 0;
		/* Special declarator check */
		if (t) {
		  if ((yyvsp[-1].dtype).qualifier) SwigType_push(t,(yyvsp[-1].dtype).qualifier);
		  if (SwigType_isfunction(t)) {
		    SwigType *decl = SwigType_pop_function(t);
		    if (SwigType_ispointer(t)) {
		      String *nname = NewStringf("*%s",fixname);
		      if ((yyvsp[-6].ivalue)) {
			Swig_name_rename_add(Namespaceprefix, nname,decl,kws,(yyvsp[-2].decl).parms);
		      } else {
			Swig_name_namewarn_add(Namespaceprefix,nname,decl,kws);
		      }
		      Delete(nname);
		    } else {
		      if ((yyvsp[-6].ivalue)) {
			Swig_name_rename_add(Namespaceprefix,(fixname),decl,kws,(yyvsp[-2].decl).parms);
		      } else {
			Swig_name_namewarn_add(Namespaceprefix,(fixname),decl,kws);
		      }
		    }
		    Delete(decl);
		  } else if (SwigType_ispointer(t)) {
		    String *nname = NewStringf("*%s",fixname);
		    if ((yyvsp[-6].ivalue)) {
		      Swig_name_rename_add(Namespaceprefix,(nname),0,kws,(yyvsp[-2].decl).parms);
		    } else {
		      Swig_name_namewarn_add(Namespaceprefix,(nname),0,kws);
		    }
		    Delete(nname);
		  }
		} else {
		  if ((yyvsp[-6].ivalue)) {
		    Swig_name_rename_add(Namespaceprefix,(fixname),0,kws,(yyvsp[-2].decl).parms);
		  } else {
		    Swig_name_namewarn_add(Namespaceprefix,(fixname),0,kws);
		  }
		}
                (yyval.node) = 0;
		scanner_clear_rename();
              }
    break;

  case 81:
#line 2191 "CParse/parser.y"
    {
		if ((yyvsp[-5].ivalue)) {
		  Swig_name_rename_add(Namespaceprefix,(yyvsp[-1].id),0,(yyvsp[-3].node),0);
		} else {
		  Swig_name_namewarn_add(Namespaceprefix,(yyvsp[-1].id),0,(yyvsp[-3].node));
		}
		(yyval.node) = 0;
		scanner_clear_rename();
              }
    break;

  case 82:
#line 2202 "CParse/parser.y"
    {
		    (yyval.ivalue) = 1;
                }
    break;

  case 83:
#line 2205 "CParse/parser.y"
    {
                    (yyval.ivalue) = 0;
                }
    break;

  case 84:
#line 2232 "CParse/parser.y"
    {
                    String *val = (yyvsp[0].str) ? NewString((yyvsp[0].str)) : NewString("1");
                    new_feature((yyvsp[-4].id), val, 0, (yyvsp[-2].decl).id, (yyvsp[-2].decl).type, (yyvsp[-2].decl).parms, (yyvsp[-1].dtype).qualifier);
                    (yyval.node) = 0;
                  }
    break;

  case 85:
#line 2237 "CParse/parser.y"
    {
                    String *val = Len((yyvsp[-4].id)) ? NewString((yyvsp[-4].id)) : 0;
                    new_feature((yyvsp[-6].id), val, 0, (yyvsp[-2].decl).id, (yyvsp[-2].decl).type, (yyvsp[-2].decl).parms, (yyvsp[-1].dtype).qualifier);
                    (yyval.node) = 0;
                  }
    break;

  case 86:
#line 2242 "CParse/parser.y"
    {
                    String *val = (yyvsp[0].str) ? NewString((yyvsp[0].str)) : NewString("1");
                    new_feature((yyvsp[-5].id), val, (yyvsp[-4].node), (yyvsp[-2].decl).id, (yyvsp[-2].decl).type, (yyvsp[-2].decl).parms, (yyvsp[-1].dtype).qualifier);
                    (yyval.node) = 0;
                  }
    break;

  case 87:
#line 2247 "CParse/parser.y"
    {
                    String *val = Len((yyvsp[-5].id)) ? NewString((yyvsp[-5].id)) : 0;
                    new_feature((yyvsp[-7].id), val, (yyvsp[-4].node), (yyvsp[-2].decl).id, (yyvsp[-2].decl).type, (yyvsp[-2].decl).parms, (yyvsp[-1].dtype).qualifier);
                    (yyval.node) = 0;
                  }
    break;

  case 88:
#line 2254 "CParse/parser.y"
    {
                    String *val = (yyvsp[0].str) ? NewString((yyvsp[0].str)) : NewString("1");
                    new_feature((yyvsp[-2].id), val, 0, 0, 0, 0, 0);
                    (yyval.node) = 0;
                  }
    break;

  case 89:
#line 2259 "CParse/parser.y"
    {
                    String *val = Len((yyvsp[-2].id)) ? NewString((yyvsp[-2].id)) : 0;
                    new_feature((yyvsp[-4].id), val, 0, 0, 0, 0, 0);
                    (yyval.node) = 0;
                  }
    break;

  case 90:
#line 2264 "CParse/parser.y"
    {
                    String *val = (yyvsp[0].str) ? NewString((yyvsp[0].str)) : NewString("1");
                    new_feature((yyvsp[-3].id), val, (yyvsp[-2].node), 0, 0, 0, 0);
                    (yyval.node) = 0;
                  }
    break;

  case 91:
#line 2269 "CParse/parser.y"
    {
                    String *val = Len((yyvsp[-3].id)) ? NewString((yyvsp[-3].id)) : 0;
                    new_feature((yyvsp[-5].id), val, (yyvsp[-2].node), 0, 0, 0, 0);
                    (yyval.node) = 0;
                  }
    break;

  case 92:
#line 2276 "CParse/parser.y"
    { (yyval.str) = (yyvsp[0].str); }
    break;

  case 93:
#line 2277 "CParse/parser.y"
    { (yyval.str) = 0; }
    break;

  case 94:
#line 2278 "CParse/parser.y"
    { (yyval.str) = (yyvsp[-2].pl); }
    break;

  case 95:
#line 2281 "CParse/parser.y"
    {
		  (yyval.node) = NewHash();
		  Setattr((yyval.node),k_name,(yyvsp[-2].id));
		  Setattr((yyval.node),k_value,(yyvsp[0].id));
                }
    break;

  case 96:
#line 2286 "CParse/parser.y"
    {
		  (yyval.node) = NewHash();
		  Setattr((yyval.node),k_name,(yyvsp[-3].id));
		  Setattr((yyval.node),k_value,(yyvsp[-1].id));
                  set_nextSibling((yyval.node),(yyvsp[0].node));
                }
    break;

  case 97:
#line 2296 "CParse/parser.y"
    {
                 Parm *val;
		 String *name;
		 SwigType *t;
		 if (Namespaceprefix) name = NewStringf("%s::%s", Namespaceprefix, (yyvsp[-2].decl).id);
		 else name = NewString((yyvsp[-2].decl).id);
		 val = (yyvsp[-4].pl);
		 if ((yyvsp[-2].decl).parms) {
		   Setmeta(val,k_parms,(yyvsp[-2].decl).parms);
		 }
		 t = (yyvsp[-2].decl).type;
		 if (!Len(t)) t = 0;
		 if (t) {
		   if ((yyvsp[-1].dtype).qualifier) SwigType_push(t,(yyvsp[-1].dtype).qualifier);
		   if (SwigType_isfunction(t)) {
		     SwigType *decl = SwigType_pop_function(t);
		     if (SwigType_ispointer(t)) {
		       String *nname = NewStringf("*%s",name);
		       Swig_feature_set(Swig_cparse_features(), nname, decl, "feature:varargs", val, 0);
		       Delete(nname);
		     } else {
		       Swig_feature_set(Swig_cparse_features(), name, decl, "feature:varargs", val, 0);
		     }
		     Delete(decl);
		   } else if (SwigType_ispointer(t)) {
		     String *nname = NewStringf("*%s",name);
		     Swig_feature_set(Swig_cparse_features(),nname,0,"feature:varargs",val, 0);
		     Delete(nname);
		   }
		 } else {
		   Swig_feature_set(Swig_cparse_features(),name,0,"feature:varargs",val, 0);
		 }
		 Delete(name);
		 (yyval.node) = 0;
              }
    break;

  case 98:
#line 2332 "CParse/parser.y"
    { (yyval.pl) = (yyvsp[0].pl); }
    break;

  case 99:
#line 2333 "CParse/parser.y"
    { 
		  int i;
		  int n;
		  Parm *p;
		  n = atoi(Char((yyvsp[-2].dtype).val));
		  if (n <= 0) {
		    Swig_error(cparse_file, cparse_line,"Argument count in %%varargs must be positive.\n");
		    (yyval.pl) = 0;
		  } else {
		    (yyval.pl) = Copy((yyvsp[0].p));
		    Setattr((yyval.pl),k_name,"VARARGS_SENTINEL");
		    for (i = 0; i < n; i++) {
		      p = Copy((yyvsp[0].p));
		      set_nextSibling(p,(yyval.pl));
		      Delete((yyval.pl));
		      (yyval.pl) = p;
		    }
		  }
                }
    break;

  case 100:
#line 2363 "CParse/parser.y"
    {
		   (yyval.node) = 0;
		   if ((yyvsp[-3].tmap).op) {
		     String *code = 0;
		     (yyval.node) = new_node("typemap");
		     Setattr((yyval.node),"method",(yyvsp[-3].tmap).op);
		     if ((yyvsp[-3].tmap).kwargs) {
		       Parm *kw = (yyvsp[-3].tmap).kwargs;
		       /* check for 'noblock' option, which remove the block braces */
		       while (kw) {
			 String *name = Getattr(kw,k_name);
			 if (name && (Cmp(name,"noblock") == 0)) {
			   char *cstr = Char((yyvsp[0].str));
			   size_t len = Len((yyvsp[0].str));
			   if (len && cstr[0] == '{') {
			     --len; ++cstr; 
			     if (len && cstr[len - 1] == '}') { --len; }
			     /* we now remove the extra spaces */
			     while (len && isspace((int)cstr[0])) { --len; ++cstr; }
			     while (len && isspace((int)cstr[len - 1])) { --len; }
			     code = NewStringWithSize(cstr, len);
			     break;
			   }
			 }
			 kw = nextSibling(kw);
		       }
		       Setattr((yyval.node),k_kwargs, (yyvsp[-3].tmap).kwargs);
		     }
		     code = code ? code : NewString((yyvsp[0].str));
		     Setattr((yyval.node),k_code, code);
		     Delete(code);
		     appendChild((yyval.node),(yyvsp[-1].p));
		   }
	       }
    break;

  case 101:
#line 2397 "CParse/parser.y"
    {
		 (yyval.node) = 0;
		 if ((yyvsp[-3].tmap).op) {
		   (yyval.node) = new_node("typemap");
		   Setattr((yyval.node),"method",(yyvsp[-3].tmap).op);
		   appendChild((yyval.node),(yyvsp[-1].p));
		 }
	       }
    break;

  case 102:
#line 2405 "CParse/parser.y"
    {
		   (yyval.node) = 0;
		   if ((yyvsp[-5].tmap).op) {
		     (yyval.node) = new_node("typemapcopy");
		     Setattr((yyval.node),"method",(yyvsp[-5].tmap).op);
		     Setattr((yyval.node),k_pattern, Getattr((yyvsp[-1].p),k_pattern));
		     appendChild((yyval.node),(yyvsp[-3].p));
		   }
	       }
    break;

  case 103:
#line 2418 "CParse/parser.y"
    {
		 Hash *p;
		 String *name;
		 p = nextSibling((yyvsp[0].node));
		 if (p && (!Getattr(p,k_value))) {
 		   /* this is the deprecated two argument typemap form */
 		   Swig_warning(WARN_DEPRECATED_TYPEMAP_LANG,cparse_file, cparse_line,
				"Specifying the language name in %%typemap is deprecated - use #ifdef SWIG<LANG> instead.\n");
		   /* two argument typemap form */
		   name = Getattr((yyvsp[0].node),k_name);
		   if (!name || (Strcmp(name,typemap_lang))) {
		     (yyval.tmap).op = 0;
		     (yyval.tmap).kwargs = 0;
		   } else {
		     (yyval.tmap).op = Getattr(p,k_name);
		     (yyval.tmap).kwargs = nextSibling(p);
		   }
		 } else {
		   /* one-argument typemap-form */
		   (yyval.tmap).op = Getattr((yyvsp[0].node),k_name);
		   (yyval.tmap).kwargs = p;
		 }
                }
    break;

  case 104:
#line 2443 "CParse/parser.y"
    {
                 (yyval.p) = (yyvsp[-1].p);
		 set_nextSibling((yyval.p),(yyvsp[0].p));
		}
    break;

  case 105:
#line 2449 "CParse/parser.y"
    {
                 (yyval.p) = (yyvsp[-1].p);
		 set_nextSibling((yyval.p),(yyvsp[0].p));
                }
    break;

  case 106:
#line 2453 "CParse/parser.y"
    { (yyval.p) = 0;}
    break;

  case 107:
#line 2456 "CParse/parser.y"
    {
                  Parm *parm;
		  SwigType_push((yyvsp[-1].type),(yyvsp[0].decl).type);
		  (yyval.p) = new_node("typemapitem");
		  parm = NewParm((yyvsp[-1].type),(yyvsp[0].decl).id);
		  Setattr((yyval.p),k_pattern,parm);
		  Setattr((yyval.p),k_parms, (yyvsp[0].decl).parms);
		  Delete(parm);
		  /*		  $$ = NewParm($1,$2.id);
				  Setattr($$,"parms",$2.parms); */
                }
    break;

  case 108:
#line 2467 "CParse/parser.y"
    {
                  (yyval.p) = new_node("typemapitem");
		  Setattr((yyval.p),k_pattern,(yyvsp[-1].pl));
		  /*		  Setattr($$,"multitype",$2); */
               }
    break;

  case 109:
#line 2472 "CParse/parser.y"
    {
		 (yyval.p) = new_node("typemapitem");
		 Setattr((yyval.p),k_pattern, (yyvsp[-4].pl));
		 /*                 Setattr($$,"multitype",$2); */
		 Setattr((yyval.p),k_parms,(yyvsp[-1].pl));
               }
    break;

  case 110:
#line 2484 "CParse/parser.y"
    {
                   (yyval.node) = new_node("types");
		   Setattr((yyval.node),k_parms,(yyvsp[-2].pl));
               }
    break;

  case 111:
#line 2494 "CParse/parser.y"
    {
                  Parm *p, *tp;
		  Node *n;
		  Node *tnode = 0;
		  Symtab *tscope = 0;
		  int     specialized = 0;
		  
		  (yyval.node) = 0;

		  tscope = Swig_symbol_current();          /* Get the current scope */

		  /* If the class name is qualified.  We need to create or lookup namespace entries */
		  if (!inclass) {
		    (yyvsp[-4].str) = resolve_node_scope((yyvsp[-4].str));
		  }

		  /*
		    we use the new namespace entry 'nscope' only to
		    emit the template node. The template parameters are
		    resolved in the current 'tscope'.
		    
		    this is closer to the C++ (typedef) behavior.
		  */
		  n = Swig_cparse_template_locate((yyvsp[-4].str),(yyvsp[-2].p),tscope);

		  /* Patch the argument types to respect namespaces */
		  p = (yyvsp[-2].p);
		  while (p) {
		    SwigType *value = Getattr(p,k_value);
		    if (!value) {
		      SwigType *ty = Getattr(p,k_type);
		      if (ty) {
			SwigType *rty = 0;
			int reduce = template_reduce;
			if (reduce || !SwigType_ispointer(ty)) {
			  rty = Swig_symbol_typedef_reduce(ty,tscope);
			  if (!reduce) reduce = SwigType_ispointer(rty);
			}
			ty = reduce ? Swig_symbol_type_qualify(rty,tscope) : Swig_symbol_type_qualify(ty,tscope);
			Setattr(p,k_type,ty);
			Delete(ty);
			Delete(rty);
		      }
		    } else {
		      value = Swig_symbol_type_qualify(value,tscope);
		      Setattr(p,k_value,value);
		      Delete(value);
		    }
		    
		    p = nextSibling(p);
		  }

		  /* Look for the template */
		  {
                    Node *nn = n;
                    Node *linklistend = 0;
                    while (nn) {
                      Node *templnode = 0;
                      if (Strcmp(nodeType(nn),"template") == 0) {
                        int nnisclass = (Strcmp(Getattr(nn,k_templatetype),"class") == 0); /* if not a templated class it is a templated function */
                        Parm *tparms = Getattr(nn,k_templateparms);
                        if (!tparms) {
                          specialized = 1;
                        }
                        if (nnisclass && !specialized && ((ParmList_len((yyvsp[-2].p)) > ParmList_len(tparms)))) {
                          Swig_error(cparse_file, cparse_line, "Too many template parameters. Maximum of %d.\n", ParmList_len(tparms));
                        } else if (nnisclass && !specialized && ((ParmList_len((yyvsp[-2].p)) < ParmList_numrequired(tparms)))) {
                          Swig_error(cparse_file, cparse_line, "Not enough template parameters specified. %d required.\n", ParmList_numrequired(tparms));
                        } else if (!nnisclass && ((ParmList_len((yyvsp[-2].p)) != ParmList_len(tparms)))) {
                          /* must be an overloaded templated method - ignore it as it is overloaded with a different number of template parameters */
                          nn = Getattr(nn,"sym:nextSibling"); /* repeat for overloaded templated functions */
                          continue;
                        } else {
			  String *tname = Copy((yyvsp[-4].str));
                          int  def_supplied = 0;
                          /* Expand the template */
			  Node *templ = Swig_symbol_clookup((yyvsp[-4].str),0);
			  Parm *targs = templ ? Getattr(templ,k_templateparms) : 0;

                          ParmList *temparms;
                          if (specialized) temparms = CopyParmList((yyvsp[-2].p));
                          else temparms = CopyParmList(tparms);

                          /* Create typedef's and arguments */
                          p = (yyvsp[-2].p);
                          tp = temparms;
                          while (p) {
                            String *value = Getattr(p,k_value);
                            if (def_supplied) {
                              Setattr(p,"default","1");
                            }
                            if (value) {
                              Setattr(tp,k_value,value);
                            } else {
                              SwigType *ty = Getattr(p,k_type);
                              if (ty) {
                                Setattr(tp,k_type,ty);
                              }
                              Delattr(tp,k_value);
                            }
			    /* fix default arg values */
			    if (targs) {
			      Parm *pi = temparms;
			      Parm *ti = targs;
			      String *tv = Getattr(tp,k_value);
			      if (!tv) tv = Getattr(tp,k_type);
			      while(pi != tp) {
				String *name = Getattr(ti,k_name);
				String *value = Getattr(pi,k_value);
				if (!value) value = Getattr(pi,k_type);
				Replaceid(tv, name, value);
				pi = nextSibling(pi);
				ti = nextSibling(ti);
			      }
			    }
                            p = nextSibling(p);
                            tp = nextSibling(tp);
                            if (!p && tp) {
                              p = tp;
                              def_supplied = 1;
                            }
                          }

                          templnode = copy_node(nn);
                          /* We need to set the node name based on name used to instantiate */
                          Setattr(templnode,k_name,tname);
			  Delete(tname);
                          if (!specialized) {
                            Delattr(templnode,k_symtypename);
                          } else {
                            Setattr(templnode,k_symtypename,"1");
                          }
                          if ((yyvsp[-6].id)) {
			    /* 
			       Comment this out for 1.3.28. We need to
			       renable it later but first we need to
			       move %ignore from using %rename to use
			       %feature(ignore).
			  
			       String *symname = Swig_name_make(templnode,0,$3,0,0);
			    */
			    String *symname = (yyvsp[-6].id);
                            Swig_cparse_template_expand(templnode,symname,temparms,tscope);
                            Setattr(templnode,k_symname,symname);
                          } else {
                            static int cnt = 0;
                            String *nname = NewStringf("__dummy_%d__", cnt++);
                            Swig_cparse_template_expand(templnode,nname,temparms,tscope);
                            Setattr(templnode,k_symname,nname);
			    Delete(nname);
                            Setattr(templnode,"feature:onlychildren",
                                    "typemap,typemapitem,typemapcopy,typedef,types,fragment");
                          }
                          Delattr(templnode,k_templatetype);
                          Setattr(templnode,k_template,nn);
                          tnode = templnode;
                          Setfile(templnode,cparse_file);
                          Setline(templnode,cparse_line);
                          Delete(temparms);
                          
                          add_symbols_copy(templnode);

                          if (Strcmp(nodeType(templnode),"class") == 0) {

                            /* Identify pure abstract methods */
                            Setattr(templnode,k_abstract, pure_abstract(firstChild(templnode)));
                            
                            /* Set up inheritance in symbol table */
                            {
                              Symtab  *csyms;
                              List *baselist = Getattr(templnode,k_baselist);
                              csyms = Swig_symbol_current();
                              Swig_symbol_setscope(Getattr(templnode,k_symtab));
                              if (baselist) {
                                List *bases = make_inherit_list(Getattr(templnode,k_name),baselist);
                                if (bases) {
                                  Iterator s;
                                  for (s = First(bases); s.item; s = Next(s)) {
                                    Symtab *st = Getattr(s.item,k_symtab);
                                    if (st) {
				      Setfile(st,Getfile(s.item));
				      Setline(st,Getline(s.item));				      
                                      Swig_symbol_inherit(st);
                                    }
                                  }
				  Delete(bases);
                                }
                              }
                              Swig_symbol_setscope(csyms);
                            }

                            /* Merge in addmethods for this class */
                            
                            /* !!! This may be broken.  We may have to  add the addmethods at the beginning of
                               the class */
                            
                            if (extendhash) {
                              String *stmp = 0;
                              String *clsname;
                              Node *am;
                              if (Namespaceprefix) {
                                clsname = stmp = NewStringf("%s::%s", Namespaceprefix, Getattr(templnode,k_name));
                              } else {
                                clsname = Getattr(templnode,k_name);
                              }
                              am = Getattr(extendhash,clsname);
                              if (am) {
                                Symtab *st = Swig_symbol_current();
                                Swig_symbol_setscope(Getattr(templnode,k_symtab));
                                /*			    Printf(stdout,"%s: %s %x %x\n", Getattr(templnode,k_name), clsname, Swig_symbol_current(), Getattr(templnode,"symtab")); */
                                merge_extensions(templnode,am);
                                Swig_symbol_setscope(st);
				append_previous_extension(templnode,am);
                                Delattr(extendhash,clsname);
                              }
			      if (stmp) Delete(stmp);
                            }
                            /* Add to classes hash */
                            if (!classes) classes = NewHash();

                            {
                              if (Namespaceprefix) {
                                String *temp = NewStringf("%s::%s", Namespaceprefix, Getattr(templnode,k_name));
                                Setattr(classes,temp,templnode);
				Delete(temp);
                              } else {
				String *qs = Swig_symbol_qualifiedscopename(templnode);
                                Setattr(classes, qs,templnode);
				Delete(qs);
                              }
                            }
                          }
                        }

                        /* all the overloaded templated functions are added into a linked list */
                        if (nscope_inner) {
                          /* non-global namespace */
                          if (templnode) {
                            appendChild(nscope_inner,templnode);
			    Delete(templnode);
                            if (nscope) (yyval.node) = nscope;
                          }
                        } else {
                          /* global namespace */
                          if (!linklistend) {
                            (yyval.node) = templnode;
                          } else {
                            set_nextSibling(linklistend,templnode);
			    Delete(templnode);
                          }
                          linklistend = templnode;
                        }
                      }
                      nn = Getattr(nn,"sym:nextSibling"); /* repeat for overloaded templated functions. If a templated class there will never be a sibling. */
                    }
		  }
   	          Swig_symbol_setscope(tscope);
		  Delete(Namespaceprefix);
		  Namespaceprefix = Swig_symbol_qualifiedscopename(0);
                }
    break;

  case 112:
#line 2761 "CParse/parser.y"
    {
		  Swig_warning(0,cparse_file, cparse_line,"%s\n", (yyvsp[0].id));
		  (yyval.node) = 0;
               }
    break;

  case 113:
#line 2771 "CParse/parser.y"
    {
                    (yyval.node) = (yyvsp[0].node); 
                    if ((yyval.node)) {
   		      add_symbols((yyval.node));
                      default_arguments((yyval.node));
   	            }
                }
    break;

  case 114:
#line 2778 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 115:
#line 2779 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 116:
#line 2783 "CParse/parser.y"
    {
		  if (Strcmp((yyvsp[-1].id),"C") == 0) {
		    cparse_externc = 1;
		  }
		}
    break;

  case 117:
#line 2787 "CParse/parser.y"
    {
		  cparse_externc = 0;
		  if (Strcmp((yyvsp[-4].id),"C") == 0) {
		    Node *n = firstChild((yyvsp[-1].node));
		    (yyval.node) = new_node("extern");
		    Setattr((yyval.node),k_name,(yyvsp[-4].id));
		    appendChild((yyval.node),n);
		    while (n) {
		      SwigType *decl = Getattr(n,k_decl);
		      if (SwigType_isfunction(decl)) {
			Setattr(n,k_storage,"externc");
		      }
		      n = nextSibling(n);
		    }
		  } else {
		     Swig_warning(WARN_PARSE_UNDEFINED_EXTERN,cparse_file, cparse_line,"Unrecognized extern type \"%s\".\n", (yyvsp[-4].id));
		    (yyval.node) = new_node("extern");
		    Setattr((yyval.node),k_name,(yyvsp[-4].id));
		    appendChild((yyval.node),firstChild((yyvsp[-1].node)));
		  }
                }
    break;

  case 118:
#line 2814 "CParse/parser.y"
    {
              (yyval.node) = new_node("cdecl");
	      if ((yyvsp[-1].dtype).qualifier) SwigType_push((yyvsp[-2].decl).type,(yyvsp[-1].dtype).qualifier);
	      Setattr((yyval.node),k_type,(yyvsp[-3].type));
	      Setattr((yyval.node),k_storage,(yyvsp[-4].id));
	      Setattr((yyval.node),k_name,(yyvsp[-2].decl).id);
	      Setattr((yyval.node),k_decl,(yyvsp[-2].decl).type);
	      Setattr((yyval.node),k_parms,(yyvsp[-2].decl).parms);
	      Setattr((yyval.node),k_value,(yyvsp[-1].dtype).val);
	      Setattr((yyval.node),k_throws,(yyvsp[-1].dtype).throws);
	      Setattr((yyval.node),k_throw,(yyvsp[-1].dtype).throwf);
	      if (!(yyvsp[0].node)) {
		if (Len(scanner_ccode)) {
		  String *code = Copy(scanner_ccode);
		  Setattr((yyval.node),k_code,code);
		  Delete(code);
		}
	      } else {
		Node *n = (yyvsp[0].node);
		/* Inherit attributes */
		while (n) {
		  String *type = Copy((yyvsp[-3].type));
		  Setattr(n,k_type,type);
		  Setattr(n,k_storage,(yyvsp[-4].id));
		  n = nextSibling(n);
		  Delete(type);
		}
	      }
	      if ((yyvsp[-1].dtype).bitfield) {
		Setattr((yyval.node),"bitfield", (yyvsp[-1].dtype).bitfield);
	      }

	      /* Look for "::" declarations (ignored) */
	      if (Strstr((yyvsp[-2].decl).id,"::")) {
                /* This is a special case. If the scope name of the declaration exactly
                   matches that of the declaration, then we will allow it. Otherwise, delete. */
                String *p = Swig_scopename_prefix((yyvsp[-2].decl).id);
		if (p) {
		  if ((Namespaceprefix && Strcmp(p,Namespaceprefix) == 0) ||
		      (inclass && Strcmp(p,Classprefix) == 0)) {
		    String *lstr = Swig_scopename_last((yyvsp[-2].decl).id);
		    Setattr((yyval.node),k_name,lstr);
		    Delete(lstr);
		    set_nextSibling((yyval.node),(yyvsp[0].node));
		  } else {
		    Delete((yyval.node));
		    (yyval.node) = (yyvsp[0].node);
		  }
		  Delete(p);
		} else {
		  Delete((yyval.node));
		  (yyval.node) = (yyvsp[0].node);
		}
	      } else {
		set_nextSibling((yyval.node),(yyvsp[0].node));
	      }
           }
    break;

  case 119:
#line 2875 "CParse/parser.y"
    { 
                   (yyval.node) = 0;
                   Clear(scanner_ccode); 
               }
    break;

  case 120:
#line 2879 "CParse/parser.y"
    {
		 (yyval.node) = new_node("cdecl");
		 if ((yyvsp[-1].dtype).qualifier) SwigType_push((yyvsp[-2].decl).type,(yyvsp[-1].dtype).qualifier);
		 Setattr((yyval.node),k_name,(yyvsp[-2].decl).id);
		 Setattr((yyval.node),k_decl,(yyvsp[-2].decl).type);
		 Setattr((yyval.node),k_parms,(yyvsp[-2].decl).parms);
		 Setattr((yyval.node),k_value,(yyvsp[-1].dtype).val);
		 Setattr((yyval.node),k_throws,(yyvsp[-1].dtype).throws);
		 Setattr((yyval.node),k_throw,(yyvsp[-1].dtype).throwf);
		 if ((yyvsp[-1].dtype).bitfield) {
		   Setattr((yyval.node),"bitfield", (yyvsp[-1].dtype).bitfield);
		 }
		 if (!(yyvsp[0].node)) {
		   if (Len(scanner_ccode)) {
		     String *code = Copy(scanner_ccode);
		     Setattr((yyval.node),k_code,code);
		     Delete(code);
		   }
		 } else {
		   set_nextSibling((yyval.node),(yyvsp[0].node));
		 }
	       }
    break;

  case 121:
#line 2901 "CParse/parser.y"
    { 
                   skip_balanced('{','}');
                   (yyval.node) = 0;
               }
    break;

  case 122:
#line 2907 "CParse/parser.y"
    { 
                   (yyval.dtype) = (yyvsp[0].dtype); 
                   (yyval.dtype).qualifier = 0;
		   (yyval.dtype).throws = 0;
		   (yyval.dtype).throwf = 0;
              }
    break;

  case 123:
#line 2913 "CParse/parser.y"
    { 
                   (yyval.dtype) = (yyvsp[0].dtype); 
		   (yyval.dtype).qualifier = (yyvsp[-1].str);
		   (yyval.dtype).throws = 0;
		   (yyval.dtype).throwf = 0;
	      }
    break;

  case 124:
#line 2919 "CParse/parser.y"
    { 
		   (yyval.dtype) = (yyvsp[0].dtype); 
                   (yyval.dtype).qualifier = 0;
		   (yyval.dtype).throws = (yyvsp[-2].pl);
		   (yyval.dtype).throwf = NewString("1");
              }
    break;

  case 125:
#line 2925 "CParse/parser.y"
    { 
                   (yyval.dtype) = (yyvsp[0].dtype); 
                   (yyval.dtype).qualifier = (yyvsp[-5].str);
		   (yyval.dtype).throws = (yyvsp[-2].pl);
		   (yyval.dtype).throwf = NewString("1");
              }
    break;

  case 126:
#line 2938 "CParse/parser.y"
    {
		   SwigType *ty = 0;
		   (yyval.node) = new_node("enumforward");
		   ty = NewStringf("enum %s", (yyvsp[-1].id));
		   Setattr((yyval.node),k_name,(yyvsp[-1].id));
		   Setattr((yyval.node),k_type,ty);
		   Setattr((yyval.node),k_symweak, "1");
		   add_symbols((yyval.node));
	      }
    break;

  case 127:
#line 2953 "CParse/parser.y"
    {
		  SwigType *ty = 0;
                  (yyval.node) = new_node("enum");
		  ty = NewStringf("enum %s", (yyvsp[-4].id));
		  Setattr((yyval.node),k_name,(yyvsp[-4].id));
		  Setattr((yyval.node),k_type,ty);
		  appendChild((yyval.node),(yyvsp[-2].node));
		  add_symbols((yyval.node));       /* Add to tag space */
		  add_symbols((yyvsp[-2].node));       /* Add enum values to id space */
               }
    break;

  case 128:
#line 2963 "CParse/parser.y"
    {
		 Node *n;
		 SwigType *ty = 0;
		 String   *unnamed = 0;
		 int       unnamedinstance = 0;

		 (yyval.node) = new_node("enum");
		 if ((yyvsp[-5].id)) {
		   Setattr((yyval.node),k_name,(yyvsp[-5].id));
		   ty = NewStringf("enum %s", (yyvsp[-5].id));
		 } else if ((yyvsp[-1].decl).id) {
		   unnamed = make_unnamed();
		   ty = NewStringf("enum %s", unnamed);
		   Setattr((yyval.node),k_unnamed,unnamed);
                   /* name is not set for unnamed enum instances, e.g. enum { foo } Instance; */
		   if ((yyvsp[-7].id) && Cmp((yyvsp[-7].id),"typedef") == 0) {
		     Setattr((yyval.node),k_name,(yyvsp[-1].decl).id);
                   } else {
                     unnamedinstance = 1;
                   }
		   Setattr((yyval.node),k_storage,(yyvsp[-7].id));
		 }
		 if ((yyvsp[-1].decl).id && Cmp((yyvsp[-7].id),"typedef") == 0) {
		   Setattr((yyval.node),"tdname",(yyvsp[-1].decl).id);
                   Setattr((yyval.node),"allows_typedef","1");
                 }
		 appendChild((yyval.node),(yyvsp[-3].node));
		 n = new_node("cdecl");
		 Setattr(n,k_type,ty);
		 Setattr(n,k_name,(yyvsp[-1].decl).id);
		 Setattr(n,k_storage,(yyvsp[-7].id));
		 Setattr(n,k_decl,(yyvsp[-1].decl).type);
		 Setattr(n,k_parms,(yyvsp[-1].decl).parms);
		 Setattr(n,k_unnamed,unnamed);

                 if (unnamedinstance) {
		   SwigType *cty = NewString("enum ");
		   Setattr((yyval.node),k_type,cty);
		   Setattr((yyval.node),"unnamedinstance","1");
		   Setattr(n,"unnamedinstance","1");
		   Delete(cty);
                 }
		 if ((yyvsp[0].node)) {
		   Node *p = (yyvsp[0].node);
		   set_nextSibling(n,p);
		   while (p) {
		     SwigType *cty = Copy(ty);
		     Setattr(p,k_type,cty);
		     Setattr(p,k_unnamed,unnamed);
		     Setattr(p,k_storage,(yyvsp[-7].id));
		     Delete(cty);
		     p = nextSibling(p);
		   }
		 } else {
		   if (Len(scanner_ccode)) {
		     String *code = Copy(scanner_ccode);
		     Setattr(n,k_code,code);
		     Delete(code);
		   }
		 }

                 /* Ensure that typedef enum ABC {foo} XYZ; uses XYZ for sym:name, like structs.
                  * Note that class_rename/yyrename are bit of a mess so used this simple approach to change the name. */
                 if ((yyvsp[-1].decl).id && (yyvsp[-5].id) && Cmp((yyvsp[-7].id),"typedef") == 0) {
		   String *name = NewString((yyvsp[-1].decl).id);
                   Setattr((yyval.node), "parser:makename", name);
		   Delete(name);
                 }

		 add_symbols((yyval.node));       /* Add enum to tag space */
		 set_nextSibling((yyval.node),n);
		 Delete(n);
		 add_symbols((yyvsp[-3].node));       /* Add enum values to id space */
	         add_symbols(n);
		 Delete(unnamed);
	       }
    break;

  case 129:
#line 3041 "CParse/parser.y"
    {
                   /* This is a sick hack.  If the ctor_end has parameters,
                      and the parms paremeter only has 1 parameter, this
                      could be a declaration of the form:

                         type (id)(parms)

			 Otherwise it's an error. */
                    int err = 0;
                    (yyval.node) = 0;

		    if ((ParmList_len((yyvsp[-2].pl)) == 1) && (!Swig_scopename_check((yyvsp[-4].type)))) {
		      SwigType *ty = Getattr((yyvsp[-2].pl),k_type);
		      String *name = Getattr((yyvsp[-2].pl),k_name);
		      err = 1;
		      if (!name) {
			(yyval.node) = new_node("cdecl");
			Setattr((yyval.node),k_type,(yyvsp[-4].type));
			Setattr((yyval.node),k_storage,(yyvsp[-5].id));
			Setattr((yyval.node),k_name,ty);

			if ((yyvsp[0].decl).have_parms) {
			  SwigType *decl = NewStringEmpty();
			  SwigType_add_function(decl,(yyvsp[0].decl).parms);
			  Setattr((yyval.node),k_decl,decl);
			  Setattr((yyval.node),k_parms,(yyvsp[0].decl).parms);
			  if (Len(scanner_ccode)) {
			    String *code = Copy(scanner_ccode);
			    Setattr((yyval.node),k_code,code);
			    Delete(code);
			  }
			}
			if ((yyvsp[0].decl).defarg) {
			  Setattr((yyval.node),k_value,(yyvsp[0].decl).defarg);
			}
			Setattr((yyval.node),k_throws,(yyvsp[0].decl).throws);
			Setattr((yyval.node),k_throw,(yyvsp[0].decl).throwf);
			err = 0;
		      }
		    }
		    if (err) {
		      if (!Swig_error_count()) {
			Swig_error(cparse_file,cparse_line,"Syntax error in input(2).\n");
		      }
		    }
                }
    break;

  case 130:
#line 3093 "CParse/parser.y"
    {  (yyval.node) = (yyvsp[0].node); }
    break;

  case 131:
#line 3094 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 132:
#line 3095 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 133:
#line 3096 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 134:
#line 3097 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 135:
#line 3098 "CParse/parser.y"
    { (yyval.node) = 0; }
    break;

  case 136:
#line 3104 "CParse/parser.y"
    {
                   List *bases = 0;
		   Node *scope = 0;
		   (yyval.node) = new_node("class");
		   Setline((yyval.node),cparse_start_line);
		   Setattr((yyval.node),k_kind,(yyvsp[-3].id));
		   if ((yyvsp[-1].bases)) {
		     Setattr((yyval.node),k_baselist, Getattr((yyvsp[-1].bases),"public"));
		     Setattr((yyval.node),"protectedbaselist", Getattr((yyvsp[-1].bases),"protected"));
		     Setattr((yyval.node),"privatebaselist", Getattr((yyvsp[-1].bases),"private"));
		   }
		   Setattr((yyval.node),"allows_typedef","1");

		   /* preserve the current scope */
		   prev_symtab = Swig_symbol_current();
		  
		   /* If the class name is qualified.  We need to create or lookup namespace/scope entries */
		   scope = resolve_node_scope((yyvsp[-2].str));
		   Setfile(scope,cparse_file);
		   Setline(scope,cparse_line);
		   (yyvsp[-2].str) = scope;
		   
		   /* support for old nested classes "pseudo" support, such as:

		         %rename(Ala__Ola) Ala::Ola;
			class Ala::Ola {
			public:
			    Ola() {}
		         };

		      this should dissapear with a proper implementation is added.
		   */
		   if (nscope_inner && Strcmp(nodeType(nscope_inner),"namespace") != 0) {
		     if (Namespaceprefix) {
		       String *name = NewStringf("%s::%s", Namespaceprefix, (yyvsp[-2].str));		       
		       (yyvsp[-2].str) = name;
		       Namespaceprefix = 0;
		       nscope_inner = 0;
		     }
		   }
		   Setattr((yyval.node),k_name,(yyvsp[-2].str));

		   Delete(class_rename);
                   class_rename = make_name((yyval.node),(yyvsp[-2].str),0);
		   Classprefix = NewString((yyvsp[-2].str));
		   /* Deal with inheritance  */
		   if ((yyvsp[-1].bases)) {
		     bases = make_inherit_list((yyvsp[-2].str),Getattr((yyvsp[-1].bases),"public"));
		   }
		   if (SwigType_istemplate((yyvsp[-2].str))) {
		     String *fbase, *tbase, *prefix;
		     prefix = SwigType_templateprefix((yyvsp[-2].str));
		     if (Namespaceprefix) {
		       fbase = NewStringf("%s::%s", Namespaceprefix,(yyvsp[-2].str));
		       tbase = NewStringf("%s::%s", Namespaceprefix, prefix);
		     } else {
		       fbase = Copy((yyvsp[-2].str));
		       tbase = Copy(prefix);
		     }
		     Swig_name_inherit(tbase,fbase);
		     Delete(fbase);
		     Delete(tbase);
		     Delete(prefix);
		   }
                   if (strcmp((yyvsp[-3].id),"class") == 0) {
		     cplus_mode = CPLUS_PRIVATE;
		   } else {
		     cplus_mode = CPLUS_PUBLIC;
		   }
		   Swig_symbol_newscope();
		   Swig_symbol_setscopename((yyvsp[-2].str));
		   if (bases) {
		     Iterator s;
		     for (s = First(bases); s.item; s = Next(s)) {
		       Symtab *st = Getattr(s.item,k_symtab);
		       if (st) {
			 Setfile(st,Getfile(s.item));
			 Setline(st,Getline(s.item));
			 Swig_symbol_inherit(st); 
		       }
		     }
		     Delete(bases);
		   }
		   Delete(Namespaceprefix);
		   Namespaceprefix = Swig_symbol_qualifiedscopename(0);
		   cparse_start_line = cparse_line;

		   /* If there are active template parameters, we need to make sure they are
                      placed in the class symbol table so we can catch shadows */

		   if (template_parameters) {
		     Parm *tp = template_parameters;
		     while(tp) {
		       String *tpname = Copy(Getattr(tp,k_name));
		       Node *tn = new_node("templateparm");
		       Setattr(tn,k_name,tpname);
		       Swig_symbol_cadd(tpname,tn);
		       tp = nextSibling(tp);
		       Delete(tpname);
		     }
		   }
		   class_decl[class_level++] = (yyval.node);
		   inclass = 1;
               }
    break;

  case 137:
#line 3207 "CParse/parser.y"
    {
		 Node *p;
		 SwigType *ty;
		 Symtab *cscope = prev_symtab;
		 Node *am = 0;
		 String *scpname = 0;
		 (yyval.node) = class_decl[--class_level];
		 inclass = 0;
		 
		 /* Check for pure-abstract class */
		 Setattr((yyval.node),k_abstract, pure_abstract((yyvsp[-2].node)));
		 
		 /* This bit of code merges in a previously defined %extend directive (if any) */
		 
		 if (extendhash) {
		   String *clsname = Swig_symbol_qualifiedscopename(0);
		   am = Getattr(extendhash,clsname);
		   if (am) {
		     merge_extensions((yyval.node),am);
		     Delattr(extendhash,clsname);
		   }
		   Delete(clsname);
		 }
		 if (!classes) classes = NewHash();
		 scpname = Swig_symbol_qualifiedscopename(0);
		 Setattr(classes,scpname,(yyval.node));
		 Delete(scpname);

		 appendChild((yyval.node),(yyvsp[-2].node));
		 
		 if (am) append_previous_extension((yyval.node),am);

		 p = (yyvsp[0].node);
		 if (p) {
		   set_nextSibling((yyval.node),p);
		 }
		 
		 if (cparse_cplusplus && !cparse_externc) {
		   ty = NewString((yyvsp[-6].str));
		 } else {
		   ty = NewStringf("%s %s", (yyvsp[-7].id),(yyvsp[-6].str));
		 }
		 while (p) {
		   Setattr(p,k_storage,(yyvsp[-8].id));
		   Setattr(p,k_type,ty);
		   p = nextSibling(p);
		 }
		 /* Dump nested classes */
		 {
		   String *name = (yyvsp[-6].str);
		   if ((yyvsp[0].node)) {
		     SwigType *decltype = Getattr((yyvsp[0].node),k_decl);
		     if (Cmp((yyvsp[-8].id),"typedef") == 0) {
		       if (!decltype || !Len(decltype)) {
			 String *cname;
			 name = Getattr((yyvsp[0].node),k_name);
			 cname = Copy(name);
			 Setattr((yyval.node),"tdname",cname);
			 Delete(cname);

			 /* Use typedef name as class name */
			 if (class_rename && (Strcmp(class_rename,(yyvsp[-6].str)) == 0)) {
			   Delete(class_rename);
			   class_rename = NewString(name);
			 }
			 if (!Getattr(classes,name)) {
			   Setattr(classes,name,(yyval.node));
			 }
			 Setattr((yyval.node),k_decl,decltype);
		       }
		     }
		   }
		   appendChild((yyval.node),dump_nested(Char(name)));
		 }

		 if (cplus_mode != CPLUS_PUBLIC) {
		 /* we 'open' the class at the end, to allow %template
		    to add new members */
		   Node *pa = new_node("access");
		   Setattr(pa,k_kind,"public");
		   cplus_mode = CPLUS_PUBLIC;
		   appendChild((yyval.node),pa);
		   Delete(pa);
		 }

		 Setattr((yyval.node),k_symtab,Swig_symbol_popscope());

		 Classprefix = 0;
		 if (nscope_inner) {
		   /* this is tricky */
		   /* we add the declaration in the original namespace */
		   appendChild(nscope_inner,(yyval.node));
		   Swig_symbol_setscope(Getattr(nscope_inner,k_symtab));
		   Delete(Namespaceprefix);
		   Namespaceprefix = Swig_symbol_qualifiedscopename(0);
		   add_symbols((yyval.node));
		   if (nscope) (yyval.node) = nscope;
		   /* but the variable definition in the current scope */
		   Swig_symbol_setscope(cscope);
		   Delete(Namespaceprefix);
		   Namespaceprefix = Swig_symbol_qualifiedscopename(0);
		   add_symbols((yyvsp[0].node));
		 } else {
		   Delete(yyrename);
		   yyrename = Copy(class_rename);
		   Delete(Namespaceprefix);
		   Namespaceprefix = Swig_symbol_qualifiedscopename(0);

		   add_symbols((yyval.node));
		   add_symbols((yyvsp[0].node));
		 }
		 Swig_symbol_setscope(cscope);
		 Delete(Namespaceprefix);
		 Namespaceprefix = Swig_symbol_qualifiedscopename(0);
	       }
    break;

  case 138:
#line 3325 "CParse/parser.y"
    {
	       String *unnamed;
	       unnamed = make_unnamed();
	       (yyval.node) = new_node("class");
	       Setline((yyval.node),cparse_start_line);
	       Setattr((yyval.node),k_kind,(yyvsp[-1].id));
	       Setattr((yyval.node),k_storage,(yyvsp[-2].id));
	       Setattr((yyval.node),k_unnamed,unnamed);
	       Setattr((yyval.node),"allows_typedef","1");
	       Delete(class_rename);
	       class_rename = make_name((yyval.node),0,0);
	       if (strcmp((yyvsp[-1].id),"class") == 0) {
		 cplus_mode = CPLUS_PRIVATE;
	       } else {
		 cplus_mode = CPLUS_PUBLIC;
	       }
	       Swig_symbol_newscope();
	       cparse_start_line = cparse_line;
	       class_decl[class_level++] = (yyval.node);
	       inclass = 1;
	       Classprefix = NewStringEmpty();
	       Delete(Namespaceprefix);
	       Namespaceprefix = Swig_symbol_qualifiedscopename(0);
             }
    break;

  case 139:
#line 3348 "CParse/parser.y"
    {
	       String *unnamed;
	       Node *n;
	       Classprefix = 0;
	       (yyval.node) = class_decl[--class_level];
	       inclass = 0;
	       unnamed = Getattr((yyval.node),k_unnamed);

	       /* Check for pure-abstract class */
	       Setattr((yyval.node),k_abstract, pure_abstract((yyvsp[-3].node)));

	       n = new_node("cdecl");
	       Setattr(n,k_name,(yyvsp[-1].decl).id);
	       Setattr(n,k_unnamed,unnamed);
	       Setattr(n,k_type,unnamed);
	       Setattr(n,k_decl,(yyvsp[-1].decl).type);
	       Setattr(n,k_parms,(yyvsp[-1].decl).parms);
	       Setattr(n,k_storage,(yyvsp[-7].id));
	       if ((yyvsp[0].node)) {
		 Node *p = (yyvsp[0].node);
		 set_nextSibling(n,p);
		 while (p) {
		   String *type = Copy(unnamed);
		   Setattr(p,k_name,(yyvsp[-1].decl).id);
		   Setattr(p,k_unnamed,unnamed);
		   Setattr(p,k_type,type);
		   Delete(type);
		   Setattr(p,k_storage,(yyvsp[-7].id));
		   p = nextSibling(p);
		 }
	       }
	       set_nextSibling((yyval.node),n);
	       Delete(n);
	       {
		 /* If a proper typedef name was given, we'll use it to set the scope name */
		 String *name = 0;
		 if ((yyvsp[-7].id) && (strcmp((yyvsp[-7].id),"typedef") == 0)) {
		   if (!Len((yyvsp[-1].decl).type)) {	
		     String *scpname = 0;
		     name = (yyvsp[-1].decl).id;
		     Setattr((yyval.node),"tdname",name);
		     Setattr((yyval.node),k_name,name);
		     Swig_symbol_setscopename(name);

		     /* If a proper name given, we use that as the typedef, not unnamed */
		     Clear(unnamed);
		     Append(unnamed, name);
		     
		     n = nextSibling(n);
		     set_nextSibling((yyval.node),n);

		     /* Check for previous extensions */
		     if (extendhash) {
		       String *clsname = Swig_symbol_qualifiedscopename(0);
		       Node *am = Getattr(extendhash,clsname);
		       if (am) {
			 /* Merge the extension into the symbol table */
			 merge_extensions((yyval.node),am);
			 append_previous_extension((yyval.node),am);
			 Delattr(extendhash,clsname);
		       }
		       Delete(clsname);
		     }
		     if (!classes) classes = NewHash();
		     scpname = Swig_symbol_qualifiedscopename(0);
		     Setattr(classes,scpname,(yyval.node));
		     Delete(scpname);
		   } else {
		     Swig_symbol_setscopename((char*)"<unnamed>");
		   }
		 }
		 appendChild((yyval.node),(yyvsp[-3].node));
		 appendChild((yyval.node),dump_nested(Char(name)));
	       }
	       /* Pop the scope */
	       Setattr((yyval.node),k_symtab,Swig_symbol_popscope());
	       if (class_rename) {
		 Delete(yyrename);
		 yyrename = NewString(class_rename);
	       }
	       Delete(Namespaceprefix);
	       Namespaceprefix = Swig_symbol_qualifiedscopename(0);
	       add_symbols((yyval.node));
	       add_symbols(n);
	       Delete(unnamed);
              }
    break;

  case 140:
#line 3436 "CParse/parser.y"
    { (yyval.node) = 0; }
    break;

  case 141:
#line 3437 "CParse/parser.y"
    {
                        (yyval.node) = new_node("cdecl");
                        Setattr((yyval.node),k_name,(yyvsp[-1].decl).id);
                        Setattr((yyval.node),k_decl,(yyvsp[-1].decl).type);
                        Setattr((yyval.node),k_parms,(yyvsp[-1].decl).parms);
			set_nextSibling((yyval.node),(yyvsp[0].node));
                    }
    break;

  case 142:
#line 3449 "CParse/parser.y"
    {
              if ((yyvsp[-3].id) && (Strcmp((yyvsp[-3].id),"friend") == 0)) {
		/* Ignore */
                (yyval.node) = 0; 
	      } else {
		(yyval.node) = new_node("classforward");
		Setfile((yyval.node),cparse_file);
		Setline((yyval.node),cparse_line);
		Setattr((yyval.node),k_kind,(yyvsp[-2].id));
		Setattr((yyval.node),k_name,(yyvsp[-1].str));
		Setattr((yyval.node),k_symweak, "1");
		add_symbols((yyval.node));
	      }
             }
    break;

  case 143:
#line 3469 "CParse/parser.y"
    { template_parameters = (yyvsp[-1].tparms); }
    break;

  case 144:
#line 3469 "CParse/parser.y"
    {
		      String *tname = 0;
		      int     error = 0;

		      /* check if we get a namespace node with a class declaration, and retrieve the class */
		      Symtab *cscope = Swig_symbol_current();
		      Symtab *sti = 0;
		      Node *ntop = (yyvsp[0].node);
		      Node *ni = ntop;
		      SwigType *ntype = ni ? nodeType(ni) : 0;
		      while (ni && Strcmp(ntype,"namespace") == 0) {
			sti = Getattr(ni,k_symtab);
			ni = firstChild(ni);
			ntype = nodeType(ni);
		      }
		      if (sti) {
			Swig_symbol_setscope(sti);
			Delete(Namespaceprefix);
			Namespaceprefix = Swig_symbol_qualifiedscopename(0);
			(yyvsp[0].node) = ni;
		      }

                      template_parameters = 0;
                      (yyval.node) = (yyvsp[0].node);
		      if ((yyval.node)) tname = Getattr((yyval.node),k_name);
		      
		      /* Check if the class is a template specialization */
		      if (((yyval.node)) && (Strstr(tname,"<")) && (!is_operator(tname))) {
			/* If a specialization.  Check if defined. */
			Node *tempn = 0;
			{
			  String *tbase = SwigType_templateprefix(tname);
			  tempn = Swig_symbol_clookup_local(tbase,0);
			  if (!tempn || (Strcmp(nodeType(tempn),"template") != 0)) {
			    SWIG_WARN_NODE_BEGIN(tempn);
			    Swig_warning(WARN_PARSE_TEMPLATE_SP_UNDEF, Getfile((yyval.node)),Getline((yyval.node)),"Specialization of non-template '%s'.\n", tbase);
			    SWIG_WARN_NODE_END(tempn);
			    tempn = 0;
			    error = 1;
			  }
			  Delete(tbase);
			}
			Setattr((yyval.node),"specialization","1");
			Setattr((yyval.node),k_templatetype,nodeType((yyval.node)));
			set_nodeType((yyval.node),"template");
			/* Template partial specialization */
			if (tempn && ((yyvsp[-3].tparms)) && ((yyvsp[0].node))) {
			  List   *tlist;
			  String *targs = SwigType_templateargs(tname);
			  tlist = SwigType_parmlist(targs);
			  /*			  Printf(stdout,"targs = '%s' %s\n", targs, tlist); */
			  if (!Getattr((yyval.node),k_symweak)) {
			    Setattr((yyval.node),k_symtypename,"1");
			  }
			  
			  if (Len(tlist) != ParmList_len(Getattr(tempn,k_templateparms))) {
			    Swig_error(Getfile((yyval.node)),Getline((yyval.node)),"Inconsistent argument count in template partial specialization. %d %d\n", Len(tlist), ParmList_len(Getattr(tempn,k_templateparms)));
			    
			  } else {

			  /* This code builds the argument list for the partial template
                             specialization.  This is a little hairy, but the idea is as
                             follows:

                             $3 contains a list of arguments supplied for the template.
                             For example template<class T>.

                             tlist is a list of the specialization arguments--which may be
                             different.  For example class<int,T>.

                             tp is a copy of the arguments in the original template definition.
     
                             The patching algorithm walks through the list of supplied
                             arguments ($3), finds the position in the specialization arguments
                             (tlist), and then patches the name in the argument list of the
                             original template.
			  */

			  {
			    String *pn;
			    Parm *p, *p1;
			    int i, nargs;
			    Parm *tp = CopyParmList(Getattr(tempn,k_templateparms));
			    nargs = Len(tlist);
			    p = (yyvsp[-3].tparms);
			    while (p) {
			      for (i = 0; i < nargs; i++){
				pn = Getattr(p,k_name);
				if (Strcmp(pn,SwigType_base(Getitem(tlist,i))) == 0) {
				  int j;
				  Parm *p1 = tp;
				  for (j = 0; j < i; j++) {
				    p1 = nextSibling(p1);
				  }
				  Setattr(p1,k_name,pn);
				  Setattr(p1,k_partialarg,"1");
				}
			      }
			      p = nextSibling(p);
			    }
			    p1 = tp;
			    i = 0;
			    while (p1) {
			      if (!Getattr(p1,k_partialarg)) {
				Delattr(p1,k_name);
				Setattr(p1,k_type, Getitem(tlist,i));
			      } 
			      i++;
			      p1 = nextSibling(p1);
			    }
			    Setattr((yyval.node),k_templateparms,tp);
			    Delete(tp);
			  }
#if 0
			  /* Patch the parameter list */
			  if (tempn) {
			    Parm *p,*p1;
			    ParmList *tp = CopyParmList(Getattr(tempn,k_templateparms));
			    p = (yyvsp[-3].tparms);
			    p1 = tp;
			    while (p && p1) {
			      String *pn = Getattr(p,k_name);
			      Printf(stdout,"pn = '%s'\n", pn);
			      if (pn) Setattr(p1,k_name,pn);
			      else Delattr(p1,k_name);
			      pn = Getattr(p,k_type);
			      if (pn) Setattr(p1,k_type,pn);
			      p = nextSibling(p);
			      p1 = nextSibling(p1);
			    }
			    Setattr((yyval.node),k_templateparms,tp);
			    Delete(tp);
			  } else {
			    Setattr((yyval.node),k_templateparms,(yyvsp[-3].tparms));
			  }
#endif
			  Delattr((yyval.node),"specialization");
			  Setattr((yyval.node),"partialspecialization","1");
			  /* Create a specialized name for matching */
			  {
			    Parm *p = (yyvsp[-3].tparms);
			    String *fname = NewString(Getattr((yyval.node),k_name));
			    String *ffname = 0;

			    char   tmp[32];
			    int    i, ilen;
			    while (p) {
			      String *n = Getattr(p,k_name);
			      if (!n) {
				p = nextSibling(p);
				continue;
			      }
			      ilen = Len(tlist);
			      for (i = 0; i < ilen; i++) {
				if (Strstr(Getitem(tlist,i),n)) {
				  sprintf(tmp,"$%d",i+1);
				  Replaceid(fname,n,tmp);
				}
			      }
			      p = nextSibling(p);
			    }
			    /* Patch argument names with typedef */
			    {
			      Iterator tt;
			      List *tparms = SwigType_parmlist(fname);
			      ffname = SwigType_templateprefix(fname);
			      Append(ffname,"<(");
			      for (tt = First(tparms); tt.item; ) {
				SwigType *rtt = Swig_symbol_typedef_reduce(tt.item,0);
				SwigType *ttr = Swig_symbol_type_qualify(rtt,0);
				Append(ffname,ttr);
				tt = Next(tt);
				if (tt.item) Putc(',',ffname);
				Delete(rtt);
				Delete(ttr);
			      }
			      Delete(tparms);
			      Append(ffname,")>");
			    }
			    {
			      String *partials = Getattr(tempn,k_partials);
			      if (!partials) {
				partials = NewList();
				Setattr(tempn,k_partials,partials);
				Delete(partials);
			      }
			      /*			      Printf(stdout,"partial: fname = '%s', '%s'\n", fname, Swig_symbol_typedef_reduce(fname,0)); */
			      Append(partials,ffname);
			    }
			    Setattr((yyval.node),k_partialargs,ffname);
			    Swig_symbol_cadd(ffname,(yyval.node));
			  }
			  }
			  Delete(tlist);
			  Delete(targs);
			} else {
			  /* Need to resolve exact specialization name */
			  /* add default args from generic template */
			  String *ty = Swig_symbol_template_deftype(tname,0);
			  String *fname = Swig_symbol_type_qualify(ty,0);
			  Swig_symbol_cadd(fname,(yyval.node));
			  Delete(ty);
			  Delete(fname);
			}
		      }  else if ((yyval.node)) {
			Setattr((yyval.node),k_templatetype,nodeType((yyvsp[0].node)));
			set_nodeType((yyval.node),"template");
			Setattr((yyval.node),k_templateparms, (yyvsp[-3].tparms));
			if (!Getattr((yyval.node),k_symweak)) {
			  Setattr((yyval.node),k_symtypename,"1");
			}
			add_symbols((yyval.node));
                        default_arguments((yyval.node));
			/* We also place a fully parameterized version in the symbol table */
			{
			  Parm *p;
			  String *fname = NewStringf("%s<(", Getattr((yyval.node),k_name));
			  p = (yyvsp[-3].tparms);
			  while (p) {
			    String *n = Getattr(p,k_name);
			    if (!n) n = Getattr(p,k_type);
			    Append(fname,n);
			    p = nextSibling(p);
			    if (p) Putc(',',fname);
			  }
			  Append(fname,")>");
			  Swig_symbol_cadd(fname,(yyval.node));
			}
		      }
		      (yyval.node) = ntop;
		      Swig_symbol_setscope(cscope);
		      Delete(Namespaceprefix);
		      Namespaceprefix = Swig_symbol_qualifiedscopename(0);
		      if (error) (yyval.node) = 0;
                  }
    break;

  case 145:
#line 3704 "CParse/parser.y"
    {
		  Swig_warning(WARN_PARSE_EXPLICIT_TEMPLATE, cparse_file, cparse_line, "Explicit template instantiation ignored.\n");
                   (yyval.node) = 0; 
                }
    break;

  case 146:
#line 3710 "CParse/parser.y"
    {
		  (yyval.node) = (yyvsp[0].node);
                }
    break;

  case 147:
#line 3713 "CParse/parser.y"
    {
                   (yyval.node) = (yyvsp[0].node);
                }
    break;

  case 148:
#line 3716 "CParse/parser.y"
    {
                   (yyval.node) = (yyvsp[0].node);
                }
    break;

  case 149:
#line 3719 "CParse/parser.y"
    {
		  (yyval.node) = 0;
                }
    break;

  case 150:
#line 3722 "CParse/parser.y"
    {
                  (yyval.node) = (yyvsp[0].node);
                }
    break;

  case 151:
#line 3725 "CParse/parser.y"
    {
                  (yyval.node) = (yyvsp[0].node);
                }
    break;

  case 152:
#line 3730 "CParse/parser.y"
    {
		   /* Rip out the parameter names */
		  Parm *p = (yyvsp[0].pl);
		  (yyval.tparms) = (yyvsp[0].pl);

		  while (p) {
		    String *name = Getattr(p,k_name);
		    if (!name) {
		      /* Hmmm. Maybe it's a 'class T' parameter */
		      char *type = Char(Getattr(p,k_type));
		      /* Template template parameter */
		      if (strncmp(type,"template<class> ",16) == 0) {
			type += 16;
		      }
		      if ((strncmp(type,"class ",6) == 0) || (strncmp(type,"typename ", 9) == 0)) {
			char *t = strchr(type,' ');
			Setattr(p,k_name, t+1);
		      } else {
			/*
			 Swig_error(cparse_file, cparse_line, "Missing template parameter name\n");
			 $$.rparms = 0;
			 $$.parms = 0;
			 break; */
		      }
		    }
		    p = nextSibling(p);
		  }
                 }
    break;

  case 153:
#line 3762 "CParse/parser.y"
    {
                  String *uname = Swig_symbol_type_qualify((yyvsp[-1].str),0);
		  String *name = Swig_scopename_last((yyvsp[-1].str));
                  (yyval.node) = new_node("using");
		  Setattr((yyval.node),k_uname,uname);
		  Setattr((yyval.node),k_name, name);
		  Delete(uname);
		  Delete(name);
		  add_symbols((yyval.node));
             }
    break;

  case 154:
#line 3772 "CParse/parser.y"
    {
	       Node *n = Swig_symbol_clookup((yyvsp[-1].str),0);
	       if (!n) {
		 Swig_error(cparse_file, cparse_line, "Nothing known about namespace '%s'\n", (yyvsp[-1].str));
		 (yyval.node) = 0;
	       } else {

		 while (Strcmp(nodeType(n),"using") == 0) {
		   n = Getattr(n,"node");
		 }
		 if (n) {
		   if (Strcmp(nodeType(n),"namespace") == 0) {
		     Symtab *current = Swig_symbol_current();
		     Symtab *symtab = Getattr(n,k_symtab);
		     (yyval.node) = new_node("using");
		     Setattr((yyval.node),"node",n);
		     Setattr((yyval.node),k_namespace, (yyvsp[-1].str));
		     if (current != symtab) {
		       Swig_symbol_inherit(symtab);
		     }
		   } else {
		     Swig_error(cparse_file, cparse_line, "'%s' is not a namespace.\n", (yyvsp[-1].str));
		     (yyval.node) = 0;
		   }
		 } else {
		   (yyval.node) = 0;
		 }
	       }
             }
    break;

  case 155:
#line 3803 "CParse/parser.y"
    { 
                Hash *h;
                (yyvsp[-2].node) = Swig_symbol_current();
		h = Swig_symbol_clookup((yyvsp[-1].str),0);
		if (h && ((yyvsp[-2].node) == Getattr(h,k_symsymtab)) && (Strcmp(nodeType(h),"namespace") == 0)) {
		  if (Getattr(h,k_alias)) {
		    h = Getattr(h,k_namespace);
		    Swig_warning(WARN_PARSE_NAMESPACE_ALIAS, cparse_file, cparse_line, "Namespace alias '%s' not allowed here. Assuming '%s'\n",
				 (yyvsp[-1].str), Getattr(h,k_name));
		    (yyvsp[-1].str) = Getattr(h,k_name);
		  }
		  Swig_symbol_setscope(Getattr(h,k_symtab));
		} else {
		  Swig_symbol_newscope();
		  Swig_symbol_setscopename((yyvsp[-1].str));
		}
		Delete(Namespaceprefix);
		Namespaceprefix = Swig_symbol_qualifiedscopename(0);
             }
    break;

  case 156:
#line 3821 "CParse/parser.y"
    {
                Node *n = (yyvsp[-1].node);
		set_nodeType(n,"namespace");
		Setattr(n,k_name,(yyvsp[-4].str));
                Setattr(n,k_symtab, Swig_symbol_popscope());
		Swig_symbol_setscope((yyvsp[-5].node));
		(yyval.node) = n;
		Delete(Namespaceprefix);
		Namespaceprefix = Swig_symbol_qualifiedscopename(0);
		add_symbols((yyval.node));
             }
    break;

  case 157:
#line 3832 "CParse/parser.y"
    {
	       Hash *h;
	       (yyvsp[-1].node) = Swig_symbol_current();
	       h = Swig_symbol_clookup((char *)"    ",0);
	       if (h && (Strcmp(nodeType(h),"namespace") == 0)) {
		 Swig_symbol_setscope(Getattr(h,k_symtab));
	       } else {
		 Swig_symbol_newscope();
		 /* we don't use "__unnamed__", but a long 'empty' name */
		 Swig_symbol_setscopename("    ");
	       }
	       Namespaceprefix = 0;
             }
    break;

  case 158:
#line 3844 "CParse/parser.y"
    {
	       (yyval.node) = (yyvsp[-1].node);
	       set_nodeType((yyval.node),"namespace");
	       Setattr((yyval.node),k_unnamed,"1");
	       Setattr((yyval.node),k_symtab, Swig_symbol_popscope());
	       Swig_symbol_setscope((yyvsp[-4].node));
	       Delete(Namespaceprefix);
	       Namespaceprefix = Swig_symbol_qualifiedscopename(0);
	       add_symbols((yyval.node));
             }
    break;

  case 159:
#line 3854 "CParse/parser.y"
    {
	       /* Namespace alias */
	       Node *n;
	       (yyval.node) = new_node("namespace");
	       Setattr((yyval.node),k_name,(yyvsp[-3].id));
	       Setattr((yyval.node),k_alias,(yyvsp[-1].str));
	       n = Swig_symbol_clookup((yyvsp[-1].str),0);
	       if (!n) {
		 Swig_error(cparse_file, cparse_line, "Unknown namespace '%s'\n", (yyvsp[-1].str));
		 (yyval.node) = 0;
	       } else {
		 if (Strcmp(nodeType(n),"namespace") != 0) {
		   Swig_error(cparse_file, cparse_line, "'%s' is not a namespace\n",(yyvsp[-1].str));
		   (yyval.node) = 0;
		 } else {
		   while (Getattr(n,k_alias)) {
		     n = Getattr(n,k_namespace);
		   }
		   Setattr((yyval.node),k_namespace,n);
		   add_symbols((yyval.node));
		   /* Set up a scope alias */
		   Swig_symbol_alias((yyvsp[-3].id),Getattr(n,k_symtab));
		 }
	       }
             }
    break;

  case 160:
#line 3881 "CParse/parser.y"
    {
                   (yyval.node) = (yyvsp[-1].node);
                   /* Insert cpp_member (including any siblings) to the front of the cpp_members linked list */
		   if ((yyval.node)) {
		     Node *p = (yyval.node);
		     Node *pp =0;
		     while (p) {
		       pp = p;
		       p = nextSibling(p);
		     }
		     set_nextSibling(pp,(yyvsp[0].node));
		   } else {
		     (yyval.node) = (yyvsp[0].node);
		   }
             }
    break;

  case 161:
#line 3896 "CParse/parser.y"
    { 
                  if (cplus_mode != CPLUS_PUBLIC) {
		     Swig_error(cparse_file,cparse_line,"%%extend can only be used in a public section\n");
		  }
             }
    break;

  case 162:
#line 3900 "CParse/parser.y"
    {
	       (yyval.node) = new_node("extend");
	       Swig_tag_nodes((yyvsp[-2].node),"feature:extend",(char*) "1");
	       appendChild((yyval.node),(yyvsp[-2].node));
	       set_nextSibling((yyval.node),(yyvsp[0].node));
	     }
    break;

  case 163:
#line 3906 "CParse/parser.y"
    { (yyval.node) = 0;}
    break;

  case 164:
#line 3907 "CParse/parser.y"
    {
	       int start_line = cparse_line;
	       skip_decl();
	       if (!Swig_error_count()) {
		 Swig_error(cparse_file,start_line,"Syntax error in input(3).\n");
	       }
	     }
    break;

  case 165:
#line 3913 "CParse/parser.y"
    { 
                (yyval.node) = (yyvsp[0].node);
             }
    break;

  case 166:
#line 3924 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 167:
#line 3925 "CParse/parser.y"
    { 
                 (yyval.node) = (yyvsp[0].node); 
		 if (extendmode) {
		   String *symname;
		   symname= make_name((yyval.node),Getattr((yyval.node),k_name), Getattr((yyval.node),k_decl));
		   if (Strcmp(symname,Getattr((yyval.node),k_name)) == 0) {
		     /* No renaming operation.  Set name to class name */
		     Delete(yyrename);
		     yyrename = NewString(Getattr(current_class,k_symname));
		   } else {
		     Delete(yyrename);
		     yyrename = symname;
		   }
		 }
		 add_symbols((yyval.node));
                 default_arguments((yyval.node));
             }
    break;

  case 168:
#line 3942 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 169:
#line 3943 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 170:
#line 3944 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 171:
#line 3945 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 172:
#line 3946 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 173:
#line 3947 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 174:
#line 3948 "CParse/parser.y"
    { (yyval.node) = 0; }
    break;

  case 175:
#line 3949 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 176:
#line 3950 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 177:
#line 3951 "CParse/parser.y"
    { (yyval.node) = 0; }
    break;

  case 178:
#line 3952 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 179:
#line 3953 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 180:
#line 3954 "CParse/parser.y"
    { (yyval.node) = 0; }
    break;

  case 181:
#line 3955 "CParse/parser.y"
    {(yyval.node) = (yyvsp[0].node); }
    break;

  case 182:
#line 3956 "CParse/parser.y"
    {(yyval.node) = (yyvsp[0].node); }
    break;

  case 183:
#line 3957 "CParse/parser.y"
    { (yyval.node) = 0; }
    break;

  case 184:
#line 3966 "CParse/parser.y"
    {
              if (Classprefix) {
		 SwigType *decl = NewStringEmpty();
		 (yyval.node) = new_node("constructor");
		 Setattr((yyval.node),k_storage,(yyvsp[-5].id));
		 Setattr((yyval.node),k_name,(yyvsp[-4].type));
		 Setattr((yyval.node),k_parms,(yyvsp[-2].pl));
		 SwigType_add_function(decl,(yyvsp[-2].pl));
		 Setattr((yyval.node),k_decl,decl);
		 Setattr((yyval.node),k_throws,(yyvsp[0].decl).throws);
		 Setattr((yyval.node),k_throw,(yyvsp[0].decl).throwf);
		 if (Len(scanner_ccode)) {
		   String *code = Copy(scanner_ccode);
		   Setattr((yyval.node),k_code,code);
		   Delete(code);
		 }
		 SetFlag((yyval.node),"feature:new");
	      } else {
		(yyval.node) = 0;
              }
              }
    break;

  case 185:
#line 3991 "CParse/parser.y"
    {
               String *name = NewStringf("%s",(yyvsp[-4].str));
	       if (*(Char(name)) != '~') Insert(name,0,"~");
               (yyval.node) = new_node("destructor");
	       Setattr((yyval.node),k_name,name);
	       Delete(name);
	       if (Len(scanner_ccode)) {
		 String *code = Copy(scanner_ccode);
		 Setattr((yyval.node),k_code,code);
		 Delete(code);
	       }
	       {
		 String *decl = NewStringEmpty();
		 SwigType_add_function(decl,(yyvsp[-2].pl));
		 Setattr((yyval.node),k_decl,decl);
		 Delete(decl);
	       }
	       Setattr((yyval.node),k_throws,(yyvsp[0].dtype).throws);
	       Setattr((yyval.node),k_throw,(yyvsp[0].dtype).throwf);
	       add_symbols((yyval.node));
	      }
    break;

  case 186:
#line 4015 "CParse/parser.y"
    {
		String *name;
		char *c;
		(yyval.node) = new_node("destructor");
	       /* Check for template names.  If the class is a template
		  and the constructor is missing the template part, we
		  add it */
	        if ((c = strstr(Char(Classprefix),"<"))) {
		  if (!Strstr((yyvsp[-4].str),"<")) {
		    (yyvsp[-4].str) = NewStringf("%s%s",(yyvsp[-4].str),c);
		  }
		}
		Setattr((yyval.node),k_storage,"virtual");
	        name = NewStringf("%s",(yyvsp[-4].str));
		if (*(Char(name)) != '~') Insert(name,0,"~");
		Setattr((yyval.node),k_name,name);
		Delete(name);
		Setattr((yyval.node),k_throws,(yyvsp[0].dtype).throws);
		Setattr((yyval.node),k_throw,(yyvsp[0].dtype).throwf);
		if ((yyvsp[0].dtype).val) {
		  Setattr((yyval.node),k_value,"0");
		}
		if (Len(scanner_ccode)) {
		  String *code = Copy(scanner_ccode);
		  Setattr((yyval.node),k_code,code);
		  Delete(code);
		}
		{
		  String *decl = NewStringEmpty();
		  SwigType_add_function(decl,(yyvsp[-2].pl));
		  Setattr((yyval.node),k_decl,decl);
		  Delete(decl);
		}

		add_symbols((yyval.node));
	      }
    break;

  case 187:
#line 4055 "CParse/parser.y"
    {
                 (yyval.node) = new_node("cdecl");
                 Setattr((yyval.node),k_type,(yyvsp[-5].type));
		 Setattr((yyval.node),k_name,(yyvsp[-6].str));

		 SwigType_add_function((yyvsp[-4].type),(yyvsp[-2].pl));
		 if ((yyvsp[0].dtype).qualifier) {
		   SwigType_push((yyvsp[-4].type),(yyvsp[0].dtype).qualifier);
		 }
		 Setattr((yyval.node),k_decl,(yyvsp[-4].type));
		 Setattr((yyval.node),k_parms,(yyvsp[-2].pl));
		 Setattr((yyval.node),k_conversionoperator,"1");
		 add_symbols((yyval.node));
              }
    break;

  case 188:
#line 4069 "CParse/parser.y"
    {
		 SwigType *decl;
                 (yyval.node) = new_node("cdecl");
                 Setattr((yyval.node),k_type,(yyvsp[-5].type));
		 Setattr((yyval.node),k_name,(yyvsp[-6].str));
		 decl = NewStringEmpty();
		 SwigType_add_reference(decl);
		 SwigType_add_function(decl,(yyvsp[-2].pl));
		 if ((yyvsp[0].dtype).qualifier) {
		   SwigType_push(decl,(yyvsp[0].dtype).qualifier);
		 }
		 Setattr((yyval.node),k_decl,decl);
		 Setattr((yyval.node),k_parms,(yyvsp[-2].pl));
		 Setattr((yyval.node),k_conversionoperator,"1");
		 add_symbols((yyval.node));
	       }
    break;

  case 189:
#line 4086 "CParse/parser.y"
    {
		String *t = NewStringEmpty();
		(yyval.node) = new_node("cdecl");
		Setattr((yyval.node),k_type,(yyvsp[-4].type));
		Setattr((yyval.node),k_name,(yyvsp[-5].str));
		SwigType_add_function(t,(yyvsp[-2].pl));
		if ((yyvsp[0].dtype).qualifier) {
		  SwigType_push(t,(yyvsp[0].dtype).qualifier);
		}
		Setattr((yyval.node),k_decl,t);
		Setattr((yyval.node),k_parms,(yyvsp[-2].pl));
		Setattr((yyval.node),k_conversionoperator,"1");
		add_symbols((yyval.node));
              }
    break;

  case 190:
#line 4104 "CParse/parser.y"
    {
                 skip_balanced('{','}');
                 (yyval.node) = 0;
               }
    break;

  case 191:
#line 4111 "CParse/parser.y"
    { 
                (yyval.node) = new_node("access");
		Setattr((yyval.node),k_kind,"public");
                cplus_mode = CPLUS_PUBLIC;
              }
    break;

  case 192:
#line 4118 "CParse/parser.y"
    { 
                (yyval.node) = new_node("access");
                Setattr((yyval.node),k_kind,"private");
		cplus_mode = CPLUS_PRIVATE;
	      }
    break;

  case 193:
#line 4126 "CParse/parser.y"
    { 
		(yyval.node) = new_node("access");
		Setattr((yyval.node),k_kind,"protected");
		cplus_mode = CPLUS_PROTECTED;
	      }
    break;

  case 194:
#line 4149 "CParse/parser.y"
    { cparse_start_line = cparse_line; skip_balanced('{','}');
	      }
    break;

  case 195:
#line 4150 "CParse/parser.y"
    {
	        (yyval.node) = 0;
		if (cplus_mode == CPLUS_PUBLIC) {
		  if ((yyvsp[-1].decl).id) {
		    if (strcmp((yyvsp[-5].id),"class") == 0) {
		      Swig_warning(WARN_PARSE_NESTED_CLASS, cparse_file, cparse_line, "Nested classes not currently supported (ignored).\n");
		      /* Generate some code for a new class */
		    } else {
		      Nested *n = (Nested *) malloc(sizeof(Nested));
		      n->code = NewStringEmpty();
		      Printv(n->code, "typedef ", (yyvsp[-5].id), " ",
			     Char(scanner_ccode), " $classname_", (yyvsp[-1].decl).id, ";\n", NIL);

		      n->name = Swig_copy_string((yyvsp[-1].decl).id);
		      n->line = cparse_start_line;
		      n->type = NewStringEmpty();
		      n->kind = (yyvsp[-5].id);
		      n->unnamed = 0;
		      SwigType_push(n->type, (yyvsp[-1].decl).type);
		      n->next = 0;
		      add_nested(n);
		    }
		  } else {
		    Swig_warning(WARN_PARSE_NESTED_CLASS, cparse_file, cparse_line, "Nested %s not currently supported (ignored).\n", (yyvsp[-5].id));
		  }
		}
	      }
    break;

  case 196:
#line 4178 "CParse/parser.y"
    { cparse_start_line = cparse_line; skip_balanced('{','}');
              }
    break;

  case 197:
#line 4179 "CParse/parser.y"
    {
	        (yyval.node) = 0;
		if (cplus_mode == CPLUS_PUBLIC) {
		  if (strcmp((yyvsp[-4].id),"class") == 0) {
		    Swig_warning(WARN_PARSE_NESTED_CLASS,cparse_file, cparse_line,"Nested class not currently supported (ignored)\n");
		    /* Generate some code for a new class */
		  } else if ((yyvsp[-1].decl).id) {
		    /* Generate some code for a new class */
		    Nested *n = (Nested *) malloc(sizeof(Nested));
		    n->code = NewStringEmpty();
		    Printv(n->code, "typedef ", (yyvsp[-4].id), " " ,
			    Char(scanner_ccode), " $classname_", (yyvsp[-1].decl).id, ";\n",NIL);
		    n->name = Swig_copy_string((yyvsp[-1].decl).id);
		    n->line = cparse_start_line;
		    n->type = NewStringEmpty();
		    n->kind = (yyvsp[-4].id);
		    n->unnamed = 1;
		    SwigType_push(n->type,(yyvsp[-1].decl).type);
		    n->next = 0;
		    add_nested(n);
		  } else {
		    Swig_warning(WARN_PARSE_NESTED_CLASS, cparse_file, cparse_line, "Nested %s not currently supported (ignored).\n", (yyvsp[-4].id));
		  }
		}
	      }
    break;

  case 198:
#line 4209 "CParse/parser.y"
    { cparse_start_line = cparse_line; skip_balanced('{','}');
              }
    break;

  case 199:
#line 4210 "CParse/parser.y"
    {
	        (yyval.node) = 0;
		if (cplus_mode == CPLUS_PUBLIC) {
		  Swig_warning(WARN_PARSE_NESTED_CLASS,cparse_file, cparse_line,"Nested class not currently supported (ignored)\n");
		}
	      }
    break;

  case 200:
#line 4227 "CParse/parser.y"
    { (yyval.decl) = (yyvsp[0].decl);}
    break;

  case 201:
#line 4228 "CParse/parser.y"
    { (yyval.decl).id = 0; }
    break;

  case 202:
#line 4234 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 203:
#line 4237 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 204:
#line 4241 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 205:
#line 4244 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 206:
#line 4245 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 207:
#line 4246 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 208:
#line 4247 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 209:
#line 4248 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 210:
#line 4249 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 211:
#line 4250 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 212:
#line 4251 "CParse/parser.y"
    { (yyval.node) = (yyvsp[0].node); }
    break;

  case 213:
#line 4254 "CParse/parser.y"
    {
	            Clear(scanner_ccode);
		    (yyval.dtype).throws = (yyvsp[-1].dtype).throws;
		    (yyval.dtype).throwf = (yyvsp[-1].dtype).throwf;
               }
    break;

  case 214:
#line 4259 "CParse/parser.y"
    { 
		    skip_balanced('{','}'); 
		    (yyval.dtype).throws = (yyvsp[-1].dtype).throws;
		    (yyval.dtype).throwf = (yyvsp[-1].dtype).throwf;
	       }
    break;

  case 215:
#line 4266 "CParse/parser.y"
    { 
                     Clear(scanner_ccode);
                     (yyval.dtype).val = 0;
                     (yyval.dtype).qualifier = (yyvsp[-1].dtype).qualifier;
                     (yyval.dtype).bitfield = 0;
                     (yyval.dtype).throws = (yyvsp[-1].dtype).throws;
                     (yyval.dtype).throwf = (yyvsp[-1].dtype).throwf;
                }
    break;

  case 216:
#line 4274 "CParse/parser.y"
    { 
                     Clear(scanner_ccode);
                     (yyval.dtype).val = (yyvsp[-1].dtype).val;
                     (yyval.dtype).qualifier = (yyvsp[-3].dtype).qualifier;
                     (yyval.dtype).bitfield = 0;
                     (yyval.dtype).throws = (yyvsp[-3].dtype).throws; 
                     (yyval.dtype).throwf = (yyvsp[-3].dtype).throwf; 
               }
    break;

  case 217:
#line 4282 "CParse/parser.y"
    { 
                     skip_balanced('{','}');
                     (yyval.dtype).val = 0;
                     (yyval.dtype).qualifier = (yyvsp[-1].dtype).qualifier;
                     (yyval.dtype).bitfield = 0;
                     (yyval.dtype).throws = (yyvsp[-1].dtype).throws; 
                     (yyval.dtype).throwf = (yyvsp[-1].dtype).throwf; 
               }
    break;

  case 218:
#line 4293 "CParse/parser.y"
    { }
    break;

  case 219:
#line 4299 "CParse/parser.y"
    { (yyval.id) = "extern"; }
    break;

  case 220:
#line 4300 "CParse/parser.y"
    { 
                   if (strcmp((yyvsp[0].id),"C") == 0) {
		     (yyval.id) = "externc";
		   } else {
		     Swig_warning(WARN_PARSE_UNDEFINED_EXTERN,cparse_file, cparse_line,"Unrecognized extern type \"%s\".\n", (yyvsp[0].id));
		     (yyval.id) = 0;
		   }
               }
    break;

  case 221:
#line 4308 "CParse/parser.y"
    { (yyval.id) = "static"; }
    break;

  case 222:
#line 4309 "CParse/parser.y"
    { (yyval.id) = "typedef"; }
    break;

  case 223:
#line 4310 "CParse/parser.y"
    { (yyval.id) = "virtual"; }
    break;

  case 224:
#line 4311 "CParse/parser.y"
    { (yyval.id) = "friend"; }
    break;

  case 225:
#line 4312 "CParse/parser.y"
    { (yyval.id) = "explicit"; }
    break;

  case 226:
#line 4313 "CParse/parser.y"
    { (yyval.id) = 0; }
    break;

  case 227:
#line 4320 "CParse/parser.y"
    {
                 Parm *p;
		 (yyval.pl) = (yyvsp[0].pl);
		 p = (yyvsp[0].pl);
                 while (p) {
		   Replace(Getattr(p,k_type),"typename ", "", DOH_REPLACE_ANY);
		   p = nextSibling(p);
                 }
               }
    break;

  case 228:
#line 4331 "CParse/parser.y"
    {
		  if (1) { 
		    set_nextSibling((yyvsp[-1].p),(yyvsp[0].pl));
		    (yyval.pl) = (yyvsp[-1].p);
		  } else {
		    (yyval.pl) = (yyvsp[0].pl);
		  }
		}
    break;

  case 229:
#line 4339 "CParse/parser.y"
    { (yyval.pl) = 0; }
    break;

  case 230:
#line 4342 "CParse/parser.y"
    {
                 set_nextSibling((yyvsp[-1].p),(yyvsp[0].pl));
		 (yyval.pl) = (yyvsp[-1].p);
                }
    break;

  case 231:
#line 4346 "CParse/parser.y"
    { (yyval.pl) = 0; }
    break;

  case 232:
#line 4350 "CParse/parser.y"
    {
                   SwigType_push((yyvsp[-1].type),(yyvsp[0].decl).type);
		   (yyval.p) = NewParm((yyvsp[-1].type),(yyvsp[0].decl).id);
		   Setfile((yyval.p),cparse_file);
		   Setline((yyval.p),cparse_line);
		   if ((yyvsp[0].decl).defarg) {
		     Setattr((yyval.p),k_value,(yyvsp[0].decl).defarg);
		   }
		}
    break;

  case 233:
#line 4360 "CParse/parser.y"
    {
                  (yyval.p) = NewParm(NewStringf("template<class> %s %s", (yyvsp[-1].id),(yyvsp[0].str)), 0);
		  Setfile((yyval.p),cparse_file);
		  Setline((yyval.p),cparse_line);
                }
    break;

  case 234:
#line 4365 "CParse/parser.y"
    {
		  SwigType *t = NewString("v(...)");
		  (yyval.p) = NewParm(t, 0);
		  Setfile((yyval.p),cparse_file);
		  Setline((yyval.p),cparse_line);
		}
    break;

  case 235:
#line 4373 "CParse/parser.y"
    {
                 Parm *p;
		 (yyval.p) = (yyvsp[0].p);
		 p = (yyvsp[0].p);
                 while (p) {
		   if (Getattr(p,k_type)) {
		     Replace(Getattr(p,k_type),"typename ", "", DOH_REPLACE_ANY);
		   }
		   p = nextSibling(p);
                 }
               }
    break;

  case 236:
#line 4386 "CParse/parser.y"
    {
		  if (1) { 
		    set_nextSibling((yyvsp[-1].p),(yyvsp[0].p));
		    (yyval.p) = (yyvsp[-1].p);
		  } else {
		    (yyval.p) = (yyvsp[0].p);
		  }
		}
    break;

  case 237:
#line 4394 "CParse/parser.y"
    { (yyval.p) = 0; }
    break;

  case 238:
#line 4397 "CParse/parser.y"
    {
                 set_nextSibling((yyvsp[-1].p),(yyvsp[0].p));
		 (yyval.p) = (yyvsp[-1].p);
                }
    break;

  case 239:
#line 4401 "CParse/parser.y"
    { (yyval.p) = 0; }
    break;

  case 240:
#line 4405 "CParse/parser.y"
    {
		  (yyval.p) = (yyvsp[0].p);
		  {
		    /* We need to make a possible adjustment for integer parameters. */
		    SwigType *type;
		    Node     *n = 0;

		    while (!n) {
		      type = Getattr((yyvsp[0].p),k_type);
		      n = Swig_symbol_clookup(type,0);     /* See if we can find a node that matches the typename */
		      if ((n) && (Strcmp(nodeType(n),"cdecl") == 0)) {
			SwigType *decl = Getattr(n,k_decl);
			if (!SwigType_isfunction(decl)) {
			  String *value = Getattr(n,k_value);
			  if (value) {
			    String *v = Copy(value);
			    Setattr((yyvsp[0].p),k_type,v);
			    Delete(v);
			    n = 0;
			  }
			}
		      } else {
			break;
		      }
		    }
		  }
		  
               }
    break;

  case 241:
#line 4433 "CParse/parser.y"
    {
                  (yyval.p) = NewParm(0,0);
                  Setfile((yyval.p),cparse_file);
		  Setline((yyval.p),cparse_line);
		  Setattr((yyval.p),k_value,(yyvsp[0].dtype).val);
               }
    break;

  case 242:
#line 4439 "CParse/parser.y"
    {
		  String *v = NewString((yyvsp[0].id));
                  (yyval.p) = NewParm(0,0);
                  Setfile((yyval.p),cparse_file);
		  Setline((yyval.p),cparse_line);
		  Setattr((yyval.p),k_value,v);
		  Delete(v);
               }
    break;

  case 243:
#line 4449 "CParse/parser.y"
    { 
                  (yyval.dtype) = (yyvsp[0].dtype); 
		  if ((yyvsp[0].dtype).type == T_ERROR) {
		    Swig_warning(WARN_PARSE_BAD_DEFAULT,cparse_file, cparse_line, "Can't set default argument (ignored)\n");
		    (yyval.dtype).val = 0;
		    (yyval.dtype).rawval = 0;
		    (yyval.dtype).bitfield = 0;
		    (yyval.dtype).throws = 0;
		    (yyval.dtype).throwf = 0;
		  }
               }
    break;

  case 244:
#line 4460 "CParse/parser.y"
    { 
		  (yyval.dtype) = (yyvsp[-3].dtype);
		  if ((yyvsp[-3].dtype).type == T_ERROR) {
		    Swig_warning(WARN_PARSE_BAD_DEFAULT,cparse_file, cparse_line, "Can't set default argument (ignored)\n");
		    (yyval.dtype) = (yyvsp[-3].dtype);
		    (yyval.dtype).val = 0;
		    (yyval.dtype).rawval = 0;
		    (yyval.dtype).bitfield = 0;
		    (yyval.dtype).throws = 0;
		    (yyval.dtype).throwf = 0;
		  } else {
		    (yyval.dtype).val = NewStringf("%s[%s]",(yyvsp[-3].dtype).val,(yyvsp[-1].dtype).val); 
		  }		  
               }
    break;

  case 245:
#line 4474 "CParse/parser.y"
    {
		 skip_balanced('{','}');
		 (yyval.dtype).val = 0;
		 (yyval.dtype).rawval = 0;
                 (yyval.dtype).type = T_INT;
		 (yyval.dtype).bitfield = 0;
		 (yyval.dtype).throws = 0;
		 (yyval.dtype).throwf = 0;
	       }
    break;

  case 246:
#line 4483 "CParse/parser.y"
    { 
		 (yyval.dtype).val = 0;
		 (yyval.dtype).rawval = 0;
		 (yyval.dtype).type = 0;
		 (yyval.dtype).bitfield = (yyvsp[0].dtype).val;
		 (yyval.dtype).throws = 0;
		 (yyval.dtype).throwf = 0;
	       }
    break;

  case 247:
#line 4491 "CParse/parser.y"
    {
                 (yyval.dtype).val = 0;
                 (yyval.dtype).rawval = 0;
                 (yyval.dtype).type = T_INT;
		 (yyval.dtype).bitfield = 0;
		 (yyval.dtype).throws = 0;
		 (yyval.dtype).throwf = 0;
               }
    break;

  case 248:
#line 4501 "CParse/parser.y"
    {
                 (yyval.decl) = (yyvsp[-1].decl);
		 (yyval.decl).defarg = (yyvsp[0].dtype).rawval ? (yyvsp[0].dtype).rawval : (yyvsp[0].dtype).val;
            }
    break;

  case 249:
#line 4505 "CParse/parser.y"
    {
              (yyval.decl) = (yyvsp[-1].decl);
	      (yyval.decl).defarg = (yyvsp[0].dtype).rawval ? (yyvsp[0].dtype).rawval : (yyvsp[0].dtype).val;
            }
    break;

  case 250:
#line 4509 "CParse/parser.y"
    {
   	      (yyval.decl).type = 0;
              (yyval.decl).id = 0;
	      (yyval.decl).defarg = (yyvsp[0].dtype).rawval ? (yyvsp[0].dtype).rawval : (yyvsp[0].dtype).val;
            }
    break;

  case 251:
#line 4516 "CParse/parser.y"
    {
                 (yyval.decl) = (yyvsp[0].decl);
		 if (SwigType_isfunction((yyvsp[0].decl).type)) {
		   Delete(SwigType_pop_function((yyvsp[0].decl).type));
		 } else if (SwigType_isarray((yyvsp[0].decl).type)) {
		   SwigType *ta = SwigType_pop_arrays((yyvsp[0].decl).type);
		   if (SwigType_isfunction((yyvsp[0].decl).type)) {
		     Delete(SwigType_pop_function((yyvsp[0].decl).type));
		   } else {
		     (yyval.decl).parms = 0;
		   }
		   SwigType_push((yyvsp[0].decl).type,ta);
		   Delete(ta);
		 } else {
		   (yyval.decl).parms = 0;
		 }
            }
    break;

  case 252:
#line 4533 "CParse/parser.y"
    {
              (yyval.decl) = (yyvsp[0].decl);
	      if (SwigType_isfunction((yyvsp[0].decl).type)) {
		Delete(SwigType_pop_function((yyvsp[0].decl).type));
	      } else if (SwigType_isarray((yyvsp[0].decl).type)) {
		SwigType *ta = SwigType_pop_arrays((yyvsp[0].decl).type);
		if (SwigType_isfunction((yyvsp[0].decl).type)) {
		  Delete(SwigType_pop_function((yyvsp[0].decl).type));
		} else {
		  (yyval.decl).parms = 0;
		}
		SwigType_push((yyvsp[0].decl).type,ta);
		Delete(ta);
	      } else {
		(yyval.decl).parms = 0;
	      }
            }
    break;

  case 253:
#line 4550 "CParse/parser.y"
    {
   	      (yyval.decl).type = 0;
              (yyval.decl).id = 0;
	      (yyval.decl).parms = 0;
	      }
    break;

  case 254:
#line 4558 "CParse/parser.y"
    {
              (yyval.decl) = (yyvsp[0].decl);
	      if ((yyval.decl).type) {
		SwigType_push((yyvsp[-1].type),(yyval.decl).type);
		Delete((yyval.decl).type);
	      }
	      (yyval.decl).type = (yyvsp[-1].type);
           }
    break;

  case 255:
#line 4566 "CParse/parser.y"
    {
              (yyval.decl) = (yyvsp[0].decl);
	      SwigType_add_reference((yyvsp[-2].type));
              if ((yyval.decl).type) {
		SwigType_push((yyvsp[-2].type),(yyval.decl).type);
		Delete((yyval.decl).type);
	      }
	      (yyval.decl).type = (yyvsp[-2].type);
           }
    break;

  case 256:
#line 4575 "CParse/parser.y"
    {
              (yyval.decl) = (yyvsp[0].decl);
	      if (!(yyval.decl).type) (yyval.decl).type = NewStringEmpty();
           }
    break;

  case 257:
#line 4579 "CParse/parser.y"
    { 
	     (yyval.decl) = (yyvsp[0].decl);
	     (yyval.decl).type = NewStringEmpty();
	     SwigType_add_reference((yyval.decl).type);
	     if ((yyvsp[0].decl).type) {
	       SwigType_push((yyval.decl).type,(yyvsp[0].decl).type);
	       Delete((yyvsp[0].decl).type);
	     }
           }
    break;

  case 258:
#line 4588 "CParse/parser.y"
    { 
	     SwigType *t = NewStringEmpty();

	     (yyval.decl) = (yyvsp[0].decl);
	     SwigType_add_memberpointer(t,(yyvsp[-2].str));
	     if ((yyval.decl).type) {
	       SwigType_push(t,(yyval.decl).type);
	       Delete((yyval.decl).type);
	     }
	     (yyval.decl).type = t;
	     }
    break;

  case 259:
#line 4599 "CParse/parser.y"
    { 
	     SwigType *t = NewStringEmpty();
	     (yyval.decl) = (yyvsp[0].decl);
	     SwigType_add_memberpointer(t,(yyvsp[-2].str));
	     SwigType_push((yyvsp[-3].type),t);
	     if ((yyval.decl).type) {
	       SwigType_push((yyvsp[-3].type),(yyval.decl).type);
	       Delete((yyval.decl).type);
	     }
	     (yyval.decl).type = (yyvsp[-3].type);
	     Delete(t);
	   }
    break;

  case 260:
#line 4611 "CParse/parser.y"
    { 
	     (yyval.decl) = (yyvsp[0].decl);
	     SwigType_add_memberpointer((yyvsp[-4].type),(yyvsp[-3].str));
	     SwigType_add_reference((yyvsp[-4].type));
	     if ((yyval.decl).type) {
	       SwigType_push((yyvsp[-4].type),(yyval.decl).type);
	       Delete((yyval.decl).type);
	     }
	     (yyval.decl).type = (yyvsp[-4].type);
	   }
    break;

  case 261:
#line 4621 "CParse/parser.y"
    { 
	     SwigType *t = NewStringEmpty();
	     (yyval.decl) = (yyvsp[0].decl);
	     SwigType_add_memberpointer(t,(yyvsp[-3].str));
	     SwigType_add_reference(t);
	     if ((yyval.decl).type) {
	       SwigType_push(t,(yyval.decl).type);
	       Delete((yyval.decl).type);
	     } 
	     (yyval.decl).type = t;
	   }
    break;

  case 262:
#line 4634 "CParse/parser.y"
    {
                /* Note: This is non-standard C.  Template declarator is allowed to follow an identifier */
                 (yyval.decl).id = Char((yyvsp[0].str));
		 (yyval.decl).type = 0;
		 (yyval.decl).parms = 0;
		 (yyval.decl).have_parms = 0;
                  }
    break;

  case 263:
#line 4641 "CParse/parser.y"
    {
                  (yyval.decl).id = Char(NewStringf("~%s",(yyvsp[0].str)));
                  (yyval.decl).type = 0;
                  (yyval.decl).parms = 0;
                  (yyval.decl).have_parms = 0;
                  }
    break;

  case 264:
#line 4649 "CParse/parser.y"
    {
                  (yyval.decl).id = Char((yyvsp[-1].str));
                  (yyval.decl).type = 0;
                  (yyval.decl).parms = 0;
                  (yyval.decl).have_parms = 0;
                  }
    break;

  case 265:
#line 4665 "CParse/parser.y"
    {
		    (yyval.decl) = (yyvsp[-1].decl);
		    if ((yyval.decl).type) {
		      SwigType_push((yyvsp[-2].type),(yyval.decl).type);
		      Delete((yyval.decl).type);
		    }
		    (yyval.decl).type = (yyvsp[-2].type);
                  }
    break;

  case 266:
#line 4673 "CParse/parser.y"
    {
		    SwigType *t;
		    (yyval.decl) = (yyvsp[-1].decl);
		    t = NewStringEmpty();
		    SwigType_add_memberpointer(t,(yyvsp[-3].str));
		    if ((yyval.decl).type) {
		      SwigType_push(t,(yyval.decl).type);
		      Delete((yyval.decl).type);
		    }
		    (yyval.decl).type = t;
		    }
    break;

  case 267:
#line 4684 "CParse/parser.y"
    { 
		    SwigType *t;
		    (yyval.decl) = (yyvsp[-2].decl);
		    t = NewStringEmpty();
		    SwigType_add_array(t,(char*)"");
		    if ((yyval.decl).type) {
		      SwigType_push(t,(yyval.decl).type);
		      Delete((yyval.decl).type);
		    }
		    (yyval.decl).type = t;
                  }
    break;

  case 268:
#line 4695 "CParse/parser.y"
    { 
		    SwigType *t;
		    (yyval.decl) = (yyvsp[-3].decl);
		    t = NewStringEmpty();
		    SwigType_add_array(t,(yyvsp[-1].dtype).val);
		    if ((yyval.decl).type) {
		      SwigType_push(t,(yyval.decl).type);
		      Delete((yyval.decl).type);
		    }
		    (yyval.decl).type = t;
                  }
    break;

  case 269:
#line 4706 "CParse/parser.y"
    {
		    SwigType *t;
                    (yyval.decl) = (yyvsp[-3].decl);
		    t = NewStringEmpty();
		    SwigType_add_function(t,(yyvsp[-1].pl));
		    if (!(yyval.decl).have_parms) {
		      (yyval.decl).parms = (yyvsp[-1].pl);
		      (yyval.decl).have_parms = 1;
		    }
		    if (!(yyval.decl).type) {
		      (yyval.decl).type = t;
		    } else {
		      SwigType_push(t, (yyval.decl).type);
		      Delete((yyval.decl).type);
		      (yyval.decl).type = t;
		    }
		  }
    break;

  case 270:
#line 4725 "CParse/parser.y"
    {
                /* Note: This is non-standard C.  Template declarator is allowed to follow an identifier */
                 (yyval.decl).id = Char((yyvsp[0].str));
		 (yyval.decl).type = 0;
		 (yyval.decl).parms = 0;
		 (yyval.decl).have_parms = 0;
                  }
    break;

  case 271:
#line 4733 "CParse/parser.y"
    {
                  (yyval.decl).id = Char(NewStringf("~%s",(yyvsp[0].str)));
                  (yyval.decl).type = 0;
                  (yyval.decl).parms = 0;
                  (yyval.decl).have_parms = 0;
                  }
    break;

  case 272:
#line 4750 "CParse/parser.y"
    {
		    (yyval.decl) = (yyvsp[-1].decl);
		    if ((yyval.decl).type) {
		      SwigType_push((yyvsp[-2].type),(yyval.decl).type);
		      Delete((yyval.decl).type);
		    }
		    (yyval.decl).type = (yyvsp[-2].type);
                  }
    break;

  case 273:
#line 4758 "CParse/parser.y"
    {
                    (yyval.decl) = (yyvsp[-1].decl);
		    if (!(yyval.decl).type) {
		      (yyval.decl).type = NewStringEmpty();
		    }
		    SwigType_add_reference((yyval.decl).type);
                  }
    break;

  case 274:
#line 4765 "CParse/parser.y"
    {
		    SwigType *t;
		    (yyval.decl) = (yyvsp[-1].decl);
		    t = NewStringEmpty();
		    SwigType_add_memberpointer(t,(yyvsp[-3].str));
		    if ((yyval.decl).type) {
		      SwigType_push(t,(yyval.decl).type);
		      Delete((yyval.decl).type);
		    }
		    (yyval.decl).type = t;
		    }
    break;

  case 275:
#line 4776 "CParse/parser.y"
    { 
		    SwigType *t;
		    (yyval.decl) = (yyvsp[-2].decl);
		    t = NewStringEmpty();
		    SwigType_add_array(t,(char*)"");
		    if ((yyval.decl).type) {
		      SwigType_push(t,(yyval.decl).type);
		      Delete((yyval.decl).type);
		    }
		    (yyval.decl).type = t;
                  }
    break;

  case 276:
#line 4787 "CParse/parser.y"
    { 
		    SwigType *t;
		    (yyval.decl) = (yyvsp[-3].decl);
		    t = NewStringEmpty();
		    SwigType_add_array(t,(yyvsp[-1].dtype).val);
		    if ((yyval.decl).type) {
		      SwigType_push(t,(yyval.decl).type);
		      Delete((yyval.decl).type);
		    }
		    (yyval.decl).type = t;
                  }
    break;

  case 277:
#line 4798 "CParse/parser.y"
    {
		    SwigType *t;
                    (yyval.decl) = (yyvsp[-3].decl);
		    t = NewStringEmpty();
		    SwigType_add_function(t,(yyvsp[-1].pl));
		    if (!(yyval.decl).have_parms) {
		      (yyval.decl).parms = (yyvsp[-1].pl);
		      (yyval.decl).have_parms = 1;
		    }
		    if (!(yyval.decl).type) {
		      (yyval.decl).type = t;
		    } else {
		      SwigType_push(t, (yyval.decl).type);
		      Delete((yyval.decl).type);
		      (yyval.decl).type = t;
		    }
		  }
    break;

  case 278:
#line 4817 "CParse/parser.y"
    {
		    (yyval.decl).type = (yyvsp[0].type);
                    (yyval.decl).id = 0;
		    (yyval.decl).parms = 0;
		    (yyval.decl).have_parms = 0;
                  }
    break;

  case 279:
#line 4823 "CParse/parser.y"
    { 
                     (yyval.decl) = (yyvsp[0].decl);
                     SwigType_push((yyvsp[-1].type),(yyvsp[0].decl).type);
		     (yyval.decl).type = (yyvsp[-1].type);
		     Delete((yyvsp[0].decl).type);
                  }
    break;

  case 280:
#line 4829 "CParse/parser.y"
    {
		    (yyval.decl).type = (yyvsp[-1].type);
		    SwigType_add_reference((yyval.decl).type);
		    (yyval.decl).id = 0;
		    (yyval.decl).parms = 0;
		    (yyval.decl).have_parms = 0;
		  }
    break;

  case 281:
#line 4836 "CParse/parser.y"
    {
		    (yyval.decl) = (yyvsp[0].decl);
		    SwigType_add_reference((yyvsp[-2].type));
		    if ((yyval.decl).type) {
		      SwigType_push((yyvsp[-2].type),(yyval.decl).type);
		      Delete((yyval.decl).type);
		    }
		    (yyval.decl).type = (yyvsp[-2].type);
                  }
    break;

  case 282:
#line 4845 "CParse/parser.y"
    {
		    (yyval.decl) = (yyvsp[0].decl);
                  }
    break;

  case 283:
#line 4848 "CParse/parser.y"
    {
		    (yyval.decl) = (yyvsp[0].decl);
		    (yyval.decl).type = NewStringEmpty();
		    SwigType_add_reference((yyval.decl).type);
		    if ((yyvsp[0].decl).type) {
		      SwigType_push((yyval.decl).type,(yyvsp[0].decl).type);
		      Delete((yyvsp[0].decl).type);
		    }
                  }
    break;

  case 284:
#line 4857 "CParse/parser.y"
    { 
                    (yyval.decl).id = 0;
                    (yyval.decl).parms = 0;
		    (yyval.decl).have_parms = 0;
                    (yyval.decl).type = NewStringEmpty();
		    SwigType_add_reference((yyval.decl).type);
                  }
    break;

  case 285:
#line 4864 "CParse/parser.y"
    { 
		    (yyval.decl).type = NewStringEmpty();
                    SwigType_add_memberpointer((yyval.decl).type,(yyvsp[-1].str));
                    (yyval.decl).id = 0;
                    (yyval.decl).parms = 0;
		    (yyval.decl).have_parms = 0;
      	          }
    break;

  case 286:
#line 4871 "CParse/parser.y"
    { 
		    SwigType *t = NewStringEmpty();
                    (yyval.decl).type = (yyvsp[-2].type);
		    (yyval.decl).id = 0;
		    (yyval.decl).parms = 0;
		    (yyval.decl).have_parms = 0;
		    SwigType_add_memberpointer(t,(yyvsp[-1].str));
		    SwigType_push((yyval.decl).type,t);
		    Delete(t);
                  }
    break;

  case 287:
#line 4881 "CParse/parser.y"
    { 
		    (yyval.decl) = (yyvsp[0].decl);
		    SwigType_add_memberpointer((yyvsp[-3].type),(yyvsp[-2].str));
		    if ((yyval.decl).type) {
		      SwigType_push((yyvsp[-3].type),(yyval.decl).type);
		      Delete((yyval.decl).type);
		    }
		    (yyval.decl).type = (yyvsp[-3].type);
                  }
    break;

  case 288:
#line 4892 "CParse/parser.y"
    { 
		    SwigType *t;
		    (yyval.decl) = (yyvsp[-2].decl);
		    t = NewStringEmpty();
		    SwigType_add_array(t,(char*)"");
		    if ((yyval.decl).type) {
		      SwigType_push(t,(yyval.decl).type);
		      Delete((yyval.decl).type);
		    }
		    (yyval.decl).type = t;
                  }
    break;

  case 289:
#line 4903 "CParse/parser.y"
    { 
		    SwigType *t;
		    (yyval.decl) = (yyvsp[-3].decl);
		    t = NewStringEmpty();
		    SwigType_add_array(t,(yyvsp[-1].dtype).val);
		    if ((yyval.decl).type) {
		      SwigType_push(t,(yyval.decl).type);
		      Delete((yyval.decl).type);
		    }
		    (yyval.decl).type = t;
                  }
    break;

  case 290:
#line 4914 "CParse/parser.y"
    { 
		    (yyval.decl).type = NewStringEmpty();
		    (yyval.decl).id = 0;
		    (yyval.decl).parms = 0;
		    (yyval.decl).have_parms = 0;
		    SwigType_add_array((yyval.decl).type,(char*)"");
                  }
    break;

  case 291:
#line 4921 "CParse/parser.y"
    { 
		    (yyval.decl).type = NewStringEmpty();
		    (yyval.decl).id = 0;
		    (yyval.decl).parms = 0;
		    (yyval.decl).have_parms = 0;
		    SwigType_add_array((yyval.decl).type,(yyvsp[-1].dtype).val);
		  }
    break;

  case 292:
#line 4928 "CParse/parser.y"
    {
                    (yyval.decl) = (yyvsp[-1].decl);
		  }
    break;

  case 293:
#line 4931 "CParse/parser.y"
    {
		    SwigType *t;
                    (yyval.decl) = (yyvsp[-3].decl);
		    t = NewStringEmpty();
                    SwigType_add_function(t,(yyvsp[-1].pl));
		    if (!(yyval.decl).type) {
		      (yyval.decl).type = t;
		    } else {
		      SwigType_push(t,(yyval.decl).type);
		      Delete((yyval.decl).type);
		      (yyval.decl).type = t;
		    }
		    if (!(yyval.decl).have_parms) {
		      (yyval.decl).parms = (yyvsp[-1].pl);
		      (yyval.decl).have_parms = 1;
		    }
		  }
    break;

  case 294:
#line 4948 "CParse/parser.y"
    {
                    (yyval.decl).type = NewStringEmpty();
                    SwigType_add_function((yyval.decl).type,(yyvsp[-1].pl));
		    (yyval.decl).parms = (yyvsp[-1].pl);
		    (yyval.decl).have_parms = 1;
		    (yyval.decl).id = 0;
                  }
    break;

  case 295:
#line 4958 "CParse/parser.y"
    { 
               (yyval.type) = NewStringEmpty();
               SwigType_add_pointer((yyval.type));
	       SwigType_push((yyval.type),(yyvsp[-1].str));
	       SwigType_push((yyval.type),(yyvsp[0].type));
	       Delete((yyvsp[0].type));
           }
    break;

  case 296:
#line 4965 "CParse/parser.y"
    {
	     (yyval.type) = NewStringEmpty();
	     SwigType_add_pointer((yyval.type));
	     SwigType_push((yyval.type),(yyvsp[0].type));
	     Delete((yyvsp[0].type));
	     }
    break;

  case 297:
#line 4971 "CParse/parser.y"
    { 
	     	(yyval.type) = NewStringEmpty();	
		SwigType_add_pointer((yyval.type));
	        SwigType_push((yyval.type),(yyvsp[0].str));
           }
    break;

  case 298:
#line 4976 "CParse/parser.y"
    {
	      (yyval.type) = NewStringEmpty();
	      SwigType_add_pointer((yyval.type));
           }
    break;

  case 299:
#line 4982 "CParse/parser.y"
    { 
	          (yyval.str) = NewStringEmpty();
	          if ((yyvsp[0].id)) SwigType_add_qualifier((yyval.str),(yyvsp[0].id));
               }
    break;

  case 300:
#line 4986 "CParse/parser.y"
    { 
		  (yyval.str) = (yyvsp[0].str); 
	          if ((yyvsp[-1].id)) SwigType_add_qualifier((yyval.str),(yyvsp[-1].id));
               }
    break;

  case 301:
#line 4992 "CParse/parser.y"
    { (yyval.id) = "const"; }
    break;

  case 302:
#line 4993 "CParse/parser.y"
    { (yyval.id) = "volatile"; }
    break;

  case 303:
#line 4994 "CParse/parser.y"
    { (yyval.id) = 0; }
    break;

  case 304:
#line 5000 "CParse/parser.y"
    {
                   (yyval.type) = (yyvsp[0].type);
                   Replace((yyval.type),"typename ","", DOH_REPLACE_ANY);
                }
    break;

  case 305:
#line 5006 "CParse/parser.y"
    {
                   (yyval.type) = (yyvsp[0].type);
	           SwigType_push((yyval.type),(yyvsp[-1].str));
               }
    break;

  case 306:
#line 5010 "CParse/parser.y"
    { (yyval.type) = (yyvsp[0].type); }
    break;

  case 307:
#line 5013 "CParse/parser.y"
    { (yyval.type) = (yyvsp[0].type);
                  /* Printf(stdout,"primitive = '%s'\n", $$);*/
                }
    break;

  case 308:
#line 5016 "CParse/parser.y"
    { (yyval.type) = (yyvsp[0].type); }
    break;

  case 309:
#line 5017 "CParse/parser.y"
    { (yyval.type) = (yyvsp[0].type); }
    break;

  case 310:
#line 5018 "CParse/parser.y"
    { (yyval.type) = NewStringf("%s%s",(yyvsp[-1].type),(yyvsp[0].id)); }
    break;

  case 311:
#line 5019 "CParse/parser.y"
    { (yyval.type) = NewStringf("enum %s", (yyvsp[0].str)); }
    break;

  case 312:
#line 5020 "CParse/parser.y"
    { (yyval.type) = (yyvsp[0].type); }
    break;

  case 313:
#line 5021 "CParse/parser.y"
    {
		  (yyval.type) = (yyvsp[-1].type);
	          SwigType_push((yyval.type),(yyvsp[0].str));
     	       }
    break;

  case 314:
#line 5026 "CParse/parser.y"
    {
		  (yyval.type) = (yyvsp[0].str);
               }
    break;

  case 315:
#line 5029 "CParse/parser.y"
    { 
		 (yyval.type) = NewStringf("%s %s", (yyvsp[-1].id), (yyvsp[0].str));
               }
    break;

  case 316:
#line 5034 "CParse/parser.y"
    {
		 if (!(yyvsp[0].ptype).type) (yyvsp[0].ptype).type = NewString("int");
		 if ((yyvsp[0].ptype).us) {
		   (yyval.type) = NewStringf("%s %s", (yyvsp[0].ptype).us, (yyvsp[0].ptype).type);
		   Delete((yyvsp[0].ptype).us);
                   Delete((yyvsp[0].ptype).type);
		 } else {
                   (yyval.type) = (yyvsp[0].ptype).type;
		 }
		 if (Cmp((yyval.type),"signed int") == 0) {
		   Delete((yyval.type));
		   (yyval.type) = NewString("int");
                 } else if (Cmp((yyval.type),"signed long") == 0) {
		   Delete((yyval.type));
                   (yyval.type) = NewString("long");
                 } else if (Cmp((yyval.type),"signed short") == 0) {
		   Delete((yyval.type));
		   (yyval.type) = NewString("short");
		 } else if (Cmp((yyval.type),"signed long long") == 0) {
		   Delete((yyval.type));
		   (yyval.type) = NewString("long long");
		 }
               }
    break;

  case 317:
#line 5059 "CParse/parser.y"
    { 
                 (yyval.ptype) = (yyvsp[0].ptype);
               }
    break;

  case 318:
#line 5062 "CParse/parser.y"
    {
                    if ((yyvsp[-1].ptype).us && (yyvsp[0].ptype).us) {
		      Swig_error(cparse_file, cparse_line, "Extra %s specifier.\n", (yyvsp[0].ptype).us);
		    }
                    (yyval.ptype) = (yyvsp[0].ptype);
                    if ((yyvsp[-1].ptype).us) (yyval.ptype).us = (yyvsp[-1].ptype).us;
		    if ((yyvsp[-1].ptype).type) {
		      if (!(yyvsp[0].ptype).type) (yyval.ptype).type = (yyvsp[-1].ptype).type;
		      else {
			int err = 0;
			if ((Cmp((yyvsp[-1].ptype).type,"long") == 0)) {
			  if ((Cmp((yyvsp[0].ptype).type,"long") == 0) || (Strncmp((yyvsp[0].ptype).type,"double",6) == 0)) {
			    (yyval.ptype).type = NewStringf("long %s", (yyvsp[0].ptype).type);
			  } else if (Cmp((yyvsp[0].ptype).type,"int") == 0) {
			    (yyval.ptype).type = (yyvsp[-1].ptype).type;
			  } else {
			    err = 1;
			  }
			} else if ((Cmp((yyvsp[-1].ptype).type,"short")) == 0) {
			  if (Cmp((yyvsp[0].ptype).type,"int") == 0) {
			    (yyval.ptype).type = (yyvsp[-1].ptype).type;
			  } else {
			    err = 1;
			  }
			} else if (Cmp((yyvsp[-1].ptype).type,"int") == 0) {
			  (yyval.ptype).type = (yyvsp[0].ptype).type;
			} else if (Cmp((yyvsp[-1].ptype).type,"double") == 0) {
			  if (Cmp((yyvsp[0].ptype).type,"long") == 0) {
			    (yyval.ptype).type = NewString("long double");
			  } else if (Cmp((yyvsp[0].ptype).type,"complex") == 0) {
			    (yyval.ptype).type = NewString("double complex");
			  } else {
			    err = 1;
			  }
			} else if (Cmp((yyvsp[-1].ptype).type,"float") == 0) {
			  if (Cmp((yyvsp[0].ptype).type,"complex") == 0) {
			    (yyval.ptype).type = NewString("float complex");
			  } else {
			    err = 1;
			  }
			} else if (Cmp((yyvsp[-1].ptype).type,"complex") == 0) {
			  (yyval.ptype).type = NewStringf("%s complex", (yyvsp[0].ptype).type);
			} else {
			  err = 1;
			}
			if (err) {
			  Swig_error(cparse_file, cparse_line, "Extra %s specifier.\n", (yyvsp[-1].ptype).type);
			}
		      }
		    }
               }
    break;

  case 319:
#line 5116 "CParse/parser.y"
    { 
		    (yyval.ptype).type = NewString("int");
                    (yyval.ptype).us = 0;
               }
    break;

  case 320:
#line 5120 "CParse/parser.y"
    { 
                    (yyval.ptype).type = NewString("short");
                    (yyval.ptype).us = 0;
                }
    break;

  case 321:
#line 5124 "CParse/parser.y"
    { 
                    (yyval.ptype).type = NewString("long");
                    (yyval.ptype).us = 0;
                }
    break;

  case 322:
#line 5128 "CParse/parser.y"
    { 
                    (yyval.ptype).type = NewString("char");
                    (yyval.ptype).us = 0;
                }
    break;

  case 323:
#line 5132 "CParse/parser.y"
    { 
                    (yyval.ptype).type = NewString("wchar_t");
                    (yyval.ptype).us = 0;
                }
    break;

  case 324:
#line 5136 "CParse/parser.y"
    { 
                    (yyval.ptype).type = NewString("float");
                    (yyval.ptype).us = 0;
                }
    break;

  case 325:
#line 5140 "CParse/parser.y"
    { 
                    (yyval.ptype).type = NewString("double");
                    (yyval.ptype).us = 0;
                }
    break;

  case 326:
#line 5144 "CParse/parser.y"
    { 
                    (yyval.ptype).us = NewString("signed");
                    (yyval.ptype).type = 0;
                }
    break;

  case 327:
#line 5148 "CParse/parser.y"
    { 
                    (yyval.ptype).us = NewString("unsigned");
                    (yyval.ptype).type = 0;
                }
    break;

  case 328:
#line 5152 "CParse/parser.y"
    { 
                    (yyval.ptype).type = NewString("complex");
                    (yyval.ptype).us = 0;
                }
    break;

  case 329:
#line 5156 "CParse/parser.y"
    { 
                    (yyval.ptype).type = NewString("__int8");
                    (yyval.ptype).us = 0;
                }
    break;

  case 330:
#line 5160 "CParse/parser.y"
    { 
                    (yyval.ptype).type = NewString("__int16");
                    (yyval.ptype).us = 0;
                }
    break;

  case 331:
#line 5164 "CParse/parser.y"
    { 
                    (yyval.ptype).type = NewString("__int32");
                    (yyval.ptype).us = 0;
                }
    break;

  case 332:
#line 5168 "CParse/parser.y"
    { 
                    (yyval.ptype).type = NewString("__int64");
                    (yyval.ptype).us = 0;
                }
    break;

  case 333:
#line 5174 "CParse/parser.y"
    { /* scanner_check_typedef(); */ }
    break;

  case 334:
#line 5174 "CParse/parser.y"
    {
                   (yyval.dtype) = (yyvsp[0].dtype);
		   if ((yyval.dtype).type == T_STRING) {
		     (yyval.dtype).rawval = NewStringf("\"%(escape)s\"",(yyval.dtype).val);
		   } else if ((yyval.dtype).type != T_CHAR) {
		     (yyval.dtype).rawval = 0;
		   }
		   (yyval.dtype).bitfield = 0;
		   (yyval.dtype).throws = 0;
		   (yyval.dtype).throwf = 0;
		   scanner_ignore_typedef();
                }
    break;

  case 335:
#line 5200 "CParse/parser.y"
    { (yyval.id) = (yyvsp[0].id); }
    break;

  case 336:
#line 5201 "CParse/parser.y"
    { (yyval.id) = (char *) 0;}
    break;

  case 337:
#line 5204 "CParse/parser.y"
    { 

                  /* Ignore if there is a trailing comma in the enum list */
                  if ((yyvsp[0].node)) {
                    Node *leftSibling = Getattr((yyvsp[-2].node),"_last");
                    if (!leftSibling) {
                      leftSibling=(yyvsp[-2].node);
                    }
                    set_nextSibling(leftSibling,(yyvsp[0].node));
                    Setattr((yyvsp[-2].node),"_last",(yyvsp[0].node));
                  }
		  (yyval.node) = (yyvsp[-2].node);
               }
    break;

  case 338:
#line 5217 "CParse/parser.y"
    { 
                   (yyval.node) = (yyvsp[0].node); 
                   if ((yyvsp[0].node)) {
                     Setattr((yyvsp[0].node),"_last",(yyvsp[0].node));
                   }
               }
    break;

  case 339:
#line 5225 "CParse/parser.y"
    {
		   SwigType *type = NewSwigType(T_INT);
		   (yyval.node) = new_node("enumitem");
		   Setattr((yyval.node),k_name,(yyvsp[0].id));
		   Setattr((yyval.node),k_type,type);
		   SetFlag((yyval.node),"feature:immutable");
		   Delete(type);
		 }
    break;

  case 340:
#line 5233 "CParse/parser.y"
    {
		   (yyval.node) = new_node("enumitem");
		   Setattr((yyval.node),k_name,(yyvsp[-2].id));
		   Setattr((yyval.node),"enumvalue", (yyvsp[0].dtype).val);
	           if ((yyvsp[0].dtype).type == T_CHAR) {
		     SwigType *type = NewSwigType(T_CHAR);
		     Setattr((yyval.node),k_value,(yyvsp[0].dtype).val);
		     Setattr((yyval.node),k_type,type);
		     Delete(type);
		   } else {
		     SwigType *type = NewSwigType(T_INT);
		     Setattr((yyval.node),k_value,(yyvsp[-2].id));
		     Setattr((yyval.node),k_type,type);
		     Delete(type);
		   }
		   SetFlag((yyval.node),"feature:immutable");
                 }
    break;

  case 341:
#line 5250 "CParse/parser.y"
    { (yyval.node) = 0; }
    break;

  case 342:
#line 5253 "CParse/parser.y"
    {
                   (yyval.dtype) = (yyvsp[0].dtype);
		   if (((yyval.dtype).type != T_INT) && ((yyval.dtype).type != T_UINT) &&
		       ((yyval.dtype).type != T_LONG) && ((yyval.dtype).type != T_ULONG) &&
		       ((yyval.dtype).type != T_SHORT) && ((yyval.dtype).type != T_USHORT) &&
		       ((yyval.dtype).type != T_SCHAR) && ((yyval.dtype).type != T_UCHAR)) {
		     Swig_error(cparse_file,cparse_line,"Type error. Expecting an int\n");
		   }
                }
    break;

  case 343:
#line 5269 "CParse/parser.y"
    { (yyval.dtype) = (yyvsp[0].dtype); }
    break;

  case 344:
#line 5270 "CParse/parser.y"
    { 
		    (yyval.dtype).val = NewString((yyvsp[0].id)); 
                    (yyval.dtype).type = T_STRING; 
               }
    break;

  case 345:
#line 5274 "CParse/parser.y"
    {
  		  SwigType_push((yyvsp[-2].type),(yyvsp[-1].decl).type);
		  (yyval.dtype).val = NewStringf("sizeof(%s)",SwigType_str((yyvsp[-2].type),0));
		  (yyval.dtype).type = T_INT;
               }
    break;

  case 346:
#line 5279 "CParse/parser.y"
    { (yyval.dtype) = (yyvsp[0].dtype); }
    break;

  case 347:
#line 5280 "CParse/parser.y"
    {
		  (yyval.dtype).val = NewString((yyvsp[0].str));
		  if (Len((yyval.dtype).val)) {
		    (yyval.dtype).rawval = NewStringf("\'%(escape)s\'", (yyval.dtype).val);
		  } else {
		    (yyval.dtype).rawval = NewString("\'\\0'");
		  }
		  (yyval.dtype).type = T_CHAR;
		  (yyval.dtype).bitfield = 0;
		  (yyval.dtype).throws = 0;
		  (yyval.dtype).throwf = 0;
	       }
    break;

  case 348:
#line 5292 "CParse/parser.y"
    {
		 Node *n;
		 (yyval.dtype).val = (yyvsp[0].type);
		 (yyval.dtype).type = T_INT;
		 /* Check if value is in scope */
		 n = Swig_symbol_clookup((yyvsp[0].type),0);
		 if (n) {
                   /* A band-aid for enum values used in expressions. */
                   if (Strcmp(nodeType(n),"enumitem") == 0) {
                     String *q = Swig_symbol_qualified(n);
                     if (q) {
                       (yyval.dtype).val = NewStringf("%s::%s", q, Getattr(n,k_name));
                       Delete(q);
                     }
                   }
		 }
               }
    break;

  case 349:
#line 5311 "CParse/parser.y"
    {
   	            (yyval.dtype).val = NewStringf("(%s)",(yyvsp[-1].dtype).val);
		    (yyval.dtype).type = (yyvsp[-1].dtype).type;
   	       }
    break;

  case 350:
#line 5318 "CParse/parser.y"
    {
                 (yyval.dtype) = (yyvsp[0].dtype);
		 if ((yyvsp[0].dtype).type != T_STRING) {
		   (yyval.dtype).val = NewStringf("(%s) %s", SwigType_str((yyvsp[-2].dtype).val,0), (yyvsp[0].dtype).val);
		 }
 	       }
    break;

  case 351:
#line 5324 "CParse/parser.y"
    {
                 (yyval.dtype) = (yyvsp[0].dtype);
		 if ((yyvsp[0].dtype).type != T_STRING) {
		   SwigType_push((yyvsp[-3].dtype).val,(yyvsp[-2].type));
		   (yyval.dtype).val = NewStringf("(%s) %s", SwigType_str((yyvsp[-3].dtype).val,0), (yyvsp[0].dtype).val);
		 }
 	       }
    break;

  case 352:
#line 5331 "CParse/parser.y"
    {
                 (yyval.dtype) = (yyvsp[0].dtype);
		 if ((yyvsp[0].dtype).type != T_STRING) {
		   SwigType_add_reference((yyvsp[-3].dtype).val);
		   (yyval.dtype).val = NewStringf("(%s) %s", SwigType_str((yyvsp[-3].dtype).val,0), (yyvsp[0].dtype).val);
		 }
 	       }
    break;

  case 353:
#line 5338 "CParse/parser.y"
    {
                 (yyval.dtype) = (yyvsp[0].dtype);
		 if ((yyvsp[0].dtype).type != T_STRING) {
		   SwigType_push((yyvsp[-4].dtype).val,(yyvsp[-3].type));
		   SwigType_add_reference((yyvsp[-4].dtype).val);
		   (yyval.dtype).val = NewStringf("(%s) %s", SwigType_str((yyvsp[-4].dtype).val,0), (yyvsp[0].dtype).val);
		 }
 	       }
    break;

  case 354:
#line 5346 "CParse/parser.y"
    {
		 (yyval.dtype) = (yyvsp[0].dtype);
                 (yyval.dtype).val = NewStringf("&%s",(yyvsp[0].dtype).val);
	       }
    break;

  case 355:
#line 5350 "CParse/parser.y"
    {
		 (yyval.dtype) = (yyvsp[0].dtype);
                 (yyval.dtype).val = NewStringf("*%s",(yyvsp[0].dtype).val);
	       }
    break;

  case 356:
#line 5356 "CParse/parser.y"
    { (yyval.dtype) = (yyvsp[0].dtype); }
    break;

  case 357:
#line 5357 "CParse/parser.y"
    { (yyval.dtype) = (yyvsp[0].dtype); }
    break;

  case 358:
#line 5358 "CParse/parser.y"
    { (yyval.dtype) = (yyvsp[0].dtype); }
    break;

  case 359:
#line 5359 "CParse/parser.y"
    { (yyval.dtype) = (yyvsp[0].dtype); }
    break;

  case 360:
#line 5360 "CParse/parser.y"
    { (yyval.dtype) = (yyvsp[0].dtype); }
    break;

  case 361:
#line 5361 "CParse/parser.y"
    { (yyval.dtype) = (yyvsp[0].dtype); }
    break;

  case 362:
#line 5362 "CParse/parser.y"
    { (yyval.dtype) = (yyvsp[0].dtype); }
    break;

  case 363:
#line 5365 "CParse/parser.y"
    {
		 (yyval.dtype).val = NewStringf("%s+%s",(yyvsp[-2].dtype).val,(yyvsp[0].dtype).val);
		 (yyval.dtype).type = promote((yyvsp[-2].dtype).type,(yyvsp[0].dtype).type);
	       }
    break;

  case 364:
#line 5369 "CParse/parser.y"
    {
		 (yyval.dtype).val = NewStringf("%s-%s",(yyvsp[-2].dtype).val,(yyvsp[0].dtype).val);
		 (yyval.dtype).type = promote((yyvsp[-2].dtype).type,(yyvsp[0].dtype).type);
	       }
    break;

  case 365:
#line 5373 "CParse/parser.y"
    {
		 (yyval.dtype).val = NewStringf("%s*%s",(yyvsp[-2].dtype).val,(yyvsp[0].dtype).val);
		 (yyval.dtype).type = promote((yyvsp[-2].dtype).type,(yyvsp[0].dtype).type);
	       }
    break;

  case 366:
#line 5377 "CParse/parser.y"
    {
		 (yyval.dtype).val = NewStringf("%s/%s",(yyvsp[-2].dtype).val,(yyvsp[0].dtype).val);
		 (yyval.dtype).type = promote((yyvsp[-2].dtype).type,(yyvsp[0].dtype).type);
	       }
    break;

  case 367:
#line 5381 "CParse/parser.y"
    {
		 (yyval.dtype).val = NewStringf("%s&%s",(yyvsp[-2].dtype).val,(yyvsp[0].dtype).val);
		 (yyval.dtype).type = promote((yyvsp[-2].dtype).type,(yyvsp[0].dtype).type);
	       }
    break;

  case 368:
#line 5385 "CParse/parser.y"
    {
		 (yyval.dtype).val = NewStringf("%s|%s",(yyvsp[-2].dtype).val,(yyvsp[0].dtype).val);
		 (yyval.dtype).type = promote((yyvsp[-2].dtype).type,(yyvsp[0].dtype).type);
	       }
    break;

  case 369:
#line 5389 "CParse/parser.y"
    {
		 (yyval.dtype).val = NewStringf("%s^%s",(yyvsp[-2].dtype).val,(yyvsp[0].dtype).val);
		 (yyval.dtype).type = promote((yyvsp[-2].dtype).type,(yyvsp[0].dtype).type);
	       }
    break;

  case 370:
#line 5393 "CParse/parser.y"
    {
		 (yyval.dtype).val = NewStringf("%s << %s",(yyvsp[-2].dtype).val,(yyvsp[0].dtype).val);
		 (yyval.dtype).type = promote((yyvsp[-2].dtype).type,(yyvsp[0].dtype).type);
	       }
    break;

  case 371:
#line 5397 "CParse/parser.y"
    {
		 (yyval.dtype).val = NewStringf("%s >> %s",(yyvsp[-2].dtype).val,(yyvsp[0].dtype).val);
		 (yyval.dtype).type = promote((yyvsp[-2].dtype).type,(yyvsp[0].dtype).type);
	       }
    break;

  case 372:
#line 5401 "CParse/parser.y"
    {
		 (yyval.dtype).val = NewStringf("%s&&%s",(yyvsp[-2].dtype).val,(yyvsp[0].dtype).val);
		 (yyval.dtype).type = T_INT;
	       }
    break;

  case 373:
#line 5405 "CParse/parser.y"
    {
		 (yyval.dtype).val = NewStringf("%s||%s",(yyvsp[-2].dtype).val,(yyvsp[0].dtype).val);
		 (yyval.dtype).type = T_INT;
	       }
    break;

  case 374:
#line 5409 "CParse/parser.y"
    {
		 (yyval.dtype).val = NewStringf("-%s",(yyvsp[0].dtype).val);
		 (yyval.dtype).type = (yyvsp[0].dtype).type;
	       }
    break;

  case 375:
#line 5413 "CParse/parser.y"
    {
                 (yyval.dtype).val = NewStringf("+%s",(yyvsp[0].dtype).val);
		 (yyval.dtype).type = (yyvsp[0].dtype).type;
  	       }
    break;

  case 376:
#line 5417 "CParse/parser.y"
    {
		 (yyval.dtype).val = NewStringf("~%s",(yyvsp[0].dtype).val);
		 (yyval.dtype).type = (yyvsp[0].dtype).type;
	       }
    break;

  case 377:
#line 5421 "CParse/parser.y"
    {
                 (yyval.dtype).val = NewStringf("!%s",(yyvsp[0].dtype).val);
		 (yyval.dtype).type = T_INT;
	       }
    break;

  case 378:
#line 5425 "CParse/parser.y"
    {
		 String *qty;
                 skip_balanced('(',')');
		 qty = Swig_symbol_type_qualify((yyvsp[-1].type),0);
		 if (SwigType_istemplate(qty)) {
		   String *nstr = SwigType_namestr(qty);
		   Delete(qty);
		   qty = nstr;
		 }
		 (yyval.dtype).val = NewStringf("%s%s",qty,scanner_ccode);
		 Clear(scanner_ccode);
		 (yyval.dtype).type = T_INT;
		 Delete(qty);
               }
    break;

  case 379:
#line 5441 "CParse/parser.y"
    {
		 (yyval.bases) = (yyvsp[0].bases);
               }
    break;

  case 380:
#line 5446 "CParse/parser.y"
    { inherit_list = 1; }
    break;

  case 381:
#line 5446 "CParse/parser.y"
    { (yyval.bases) = (yyvsp[0].bases); inherit_list = 0; }
    break;

  case 382:
#line 5447 "CParse/parser.y"
    { (yyval.bases) = 0; }
    break;

  case 383:
#line 5450 "CParse/parser.y"
    {
		   Hash *list = NewHash();
		   Node *base = (yyvsp[0].node);
		   Node *name = Getattr(base,k_name);
		   List *lpublic = NewList();
		   List *lprotected = NewList();
		   List *lprivate = NewList();
		   Setattr(list,"public",lpublic);
		   Setattr(list,"protected",lprotected);
		   Setattr(list,"private",lprivate);
		   Delete(lpublic);
		   Delete(lprotected);
		   Delete(lprivate);
		   Append(Getattr(list,Getattr(base,k_access)),name);
	           (yyval.bases) = list;
               }
    break;

  case 384:
#line 5467 "CParse/parser.y"
    {
		   Hash *list = (yyvsp[-2].bases);
		   Node *base = (yyvsp[0].node);
		   Node *name = Getattr(base,k_name);
		   Append(Getattr(list,Getattr(base,k_access)),name);
                   (yyval.bases) = list;
               }
    break;

  case 385:
#line 5476 "CParse/parser.y"
    {
		 (yyval.node) = NewHash();
		 Setfile((yyval.node),cparse_file);
		 Setline((yyval.node),cparse_line);
		 Setattr((yyval.node),k_name,(yyvsp[0].str));
                 if (last_cpptype && (Strcmp(last_cpptype,"struct") != 0)) {
		   Setattr((yyval.node),k_access,"private");
		   Swig_warning(WARN_PARSE_NO_ACCESS,cparse_file,cparse_line,
				"No access specifier given for base class %s (ignored).\n",(yyvsp[0].str));
                 } else {
		   Setattr((yyval.node),k_access,"public");
		 }
               }
    break;

  case 386:
#line 5489 "CParse/parser.y"
    {
		 (yyval.node) = NewHash();
		 Setfile((yyval.node),cparse_file);
		 Setline((yyval.node),cparse_line);
		 Setattr((yyval.node),k_name,(yyvsp[0].str));
		 Setattr((yyval.node),k_access,(yyvsp[-2].id));
	         if (Strcmp((yyvsp[-2].id),"public") != 0) {
		   Swig_warning(WARN_PARSE_PRIVATE_INHERIT, cparse_file, 
				cparse_line,"%s inheritance ignored.\n", (yyvsp[-2].id));
		 }
               }
    break;

  case 387:
#line 5502 "CParse/parser.y"
    { (yyval.id) = (char*)"public"; }
    break;

  case 388:
#line 5503 "CParse/parser.y"
    { (yyval.id) = (char*)"private"; }
    break;

  case 389:
#line 5504 "CParse/parser.y"
    { (yyval.id) = (char*)"protected"; }
    break;

  case 390:
#line 5508 "CParse/parser.y"
    { 
                   (yyval.id) = (char*)"class"; 
		   if (!inherit_list) last_cpptype = (yyval.id);
               }
    break;

  case 391:
#line 5512 "CParse/parser.y"
    { 
                   (yyval.id) = (char*)"struct"; 
		   if (!inherit_list) last_cpptype = (yyval.id);
               }
    break;

  case 392:
#line 5516 "CParse/parser.y"
    {
                   (yyval.id) = (char*)"union"; 
		   if (!inherit_list) last_cpptype = (yyval.id);
               }
    break;

  case 393:
#line 5520 "CParse/parser.y"
    { 
                   (yyval.id) = (char *)"typename"; 
		   if (!inherit_list) last_cpptype = (yyval.id);
               }
    break;

  case 396:
#line 5530 "CParse/parser.y"
    {
                    (yyval.dtype).qualifier = (yyvsp[0].str);
                    (yyval.dtype).throws = 0;
                    (yyval.dtype).throwf = 0;
               }
    break;

  case 397:
#line 5535 "CParse/parser.y"
    {
                    (yyval.dtype).qualifier = 0;
                    (yyval.dtype).throws = (yyvsp[-1].pl);
                    (yyval.dtype).throwf = NewString("1");
               }
    break;

  case 398:
#line 5540 "CParse/parser.y"
    {
                    (yyval.dtype).qualifier = (yyvsp[-4].str);
                    (yyval.dtype).throws = (yyvsp[-1].pl);
                    (yyval.dtype).throwf = NewString("1");
               }
    break;

  case 399:
#line 5545 "CParse/parser.y"
    { 
                    (yyval.dtype).qualifier = 0; 
                    (yyval.dtype).throws = 0;
                    (yyval.dtype).throwf = 0;
               }
    break;

  case 400:
#line 5552 "CParse/parser.y"
    { 
                    Clear(scanner_ccode); 
                    (yyval.decl).have_parms = 0; 
                    (yyval.decl).defarg = 0; 
		    (yyval.decl).throws = (yyvsp[-2].dtype).throws;
		    (yyval.decl).throwf = (yyvsp[-2].dtype).throwf;
               }
    break;

  case 401:
#line 5559 "CParse/parser.y"
    { 
                    skip_balanced('{','}'); 
                    (yyval.decl).have_parms = 0; 
                    (yyval.decl).defarg = 0; 
                    (yyval.decl).throws = (yyvsp[-2].dtype).throws;
                    (yyval.decl).throwf = (yyvsp[-2].dtype).throwf;
               }
    break;

  case 402:
#line 5566 "CParse/parser.y"
    { 
                    Clear(scanner_ccode); 
                    (yyval.decl).parms = (yyvsp[-2].pl); 
                    (yyval.decl).have_parms = 1; 
                    (yyval.decl).defarg = 0; 
		    (yyval.decl).throws = 0;
		    (yyval.decl).throwf = 0;
               }
    break;

  case 403:
#line 5574 "CParse/parser.y"
    {
                    skip_balanced('{','}'); 
                    (yyval.decl).parms = (yyvsp[-2].pl); 
                    (yyval.decl).have_parms = 1; 
                    (yyval.decl).defarg = 0; 
                    (yyval.decl).throws = 0;
                    (yyval.decl).throwf = 0;
               }
    break;

  case 404:
#line 5582 "CParse/parser.y"
    { 
                    (yyval.decl).have_parms = 0; 
                    (yyval.decl).defarg = (yyvsp[-1].dtype).val; 
                    (yyval.decl).throws = 0;
                    (yyval.decl).throwf = 0;
               }
    break;

  case 409:
#line 5598 "CParse/parser.y"
    {
	            skip_balanced('(',')');
                    Clear(scanner_ccode);
            	}
    break;

  case 410:
#line 5604 "CParse/parser.y"
    { 
                     String *s = NewStringEmpty();
                     SwigType_add_template(s,(yyvsp[-1].p));
                     (yyval.id) = Char(s);
		     scanner_last_id(1);
                 }
    break;

  case 411:
#line 5610 "CParse/parser.y"
    { (yyval.id) = (char*)"";  }
    break;

  case 412:
#line 5613 "CParse/parser.y"
    { (yyval.id) = (yyvsp[0].id); }
    break;

  case 413:
#line 5614 "CParse/parser.y"
    { (yyval.id) = (yyvsp[0].id); }
    break;

  case 414:
#line 5617 "CParse/parser.y"
    { (yyval.id) = (yyvsp[0].id); }
    break;

  case 415:
#line 5618 "CParse/parser.y"
    { (yyval.id) = 0; }
    break;

  case 416:
#line 5621 "CParse/parser.y"
    { 
                  (yyval.str) = 0;
		  if (!(yyval.str)) (yyval.str) = NewStringf("%s%s", (yyvsp[-1].str),(yyvsp[0].str));
      	          Delete((yyvsp[0].str));
               }
    break;

  case 417:
#line 5626 "CParse/parser.y"
    { 
		 (yyval.str) = NewStringf("::%s%s",(yyvsp[-1].str),(yyvsp[0].str));
                 Delete((yyvsp[0].str));
               }
    break;

  case 418:
#line 5630 "CParse/parser.y"
    {
		 (yyval.str) = NewString((yyvsp[0].str));
   	       }
    break;

  case 419:
#line 5633 "CParse/parser.y"
    {
		 (yyval.str) = NewStringf("::%s",(yyvsp[0].str));
               }
    break;

  case 420:
#line 5636 "CParse/parser.y"
    {
                 (yyval.str) = NewString((yyvsp[0].str));
	       }
    break;

  case 421:
#line 5639 "CParse/parser.y"
    {
                 (yyval.str) = NewStringf("::%s",(yyvsp[0].str));
               }
    break;

  case 422:
#line 5644 "CParse/parser.y"
    {
                   (yyval.str) = NewStringf("::%s%s",(yyvsp[-1].str),(yyvsp[0].str));
		   Delete((yyvsp[0].str));
               }
    break;

  case 423:
#line 5648 "CParse/parser.y"
    {
                   (yyval.str) = NewStringf("::%s",(yyvsp[0].str));
               }
    break;

  case 424:
#line 5651 "CParse/parser.y"
    {
                   (yyval.str) = NewStringf("::%s",(yyvsp[0].str));
               }
    break;

  case 425:
#line 5658 "CParse/parser.y"
    {
		 (yyval.str) = NewStringf("::~%s",(yyvsp[0].str));
               }
    break;

  case 426:
#line 5664 "CParse/parser.y"
    {
                  (yyval.str) = NewStringf("%s%s",(yyvsp[-1].id),(yyvsp[0].id));
		  /*		  if (Len($2)) {
		    scanner_last_id(1);
		    } */
              }
    break;

  case 427:
#line 5673 "CParse/parser.y"
    { 
                  (yyval.str) = 0;
		  if (!(yyval.str)) (yyval.str) = NewStringf("%s%s", (yyvsp[-1].id),(yyvsp[0].str));
      	          Delete((yyvsp[0].str));
               }
    break;

  case 428:
#line 5678 "CParse/parser.y"
    { 
		 (yyval.str) = NewStringf("::%s%s",(yyvsp[-1].id),(yyvsp[0].str));
                 Delete((yyvsp[0].str));
               }
    break;

  case 429:
#line 5682 "CParse/parser.y"
    {
		 (yyval.str) = NewString((yyvsp[0].id));
   	       }
    break;

  case 430:
#line 5685 "CParse/parser.y"
    {
		 (yyval.str) = NewStringf("::%s",(yyvsp[0].id));
               }
    break;

  case 431:
#line 5688 "CParse/parser.y"
    {
                 (yyval.str) = NewString((yyvsp[0].str));
	       }
    break;

  case 432:
#line 5691 "CParse/parser.y"
    {
                 (yyval.str) = NewStringf("::%s",(yyvsp[0].str));
               }
    break;

  case 433:
#line 5696 "CParse/parser.y"
    {
                   (yyval.str) = NewStringf("::%s%s",(yyvsp[-1].id),(yyvsp[0].str));
		   Delete((yyvsp[0].str));
               }
    break;

  case 434:
#line 5700 "CParse/parser.y"
    {
                   (yyval.str) = NewStringf("::%s",(yyvsp[0].id));
               }
    break;

  case 435:
#line 5703 "CParse/parser.y"
    {
                   (yyval.str) = NewStringf("::%s",(yyvsp[0].str));
               }
    break;

  case 436:
#line 5706 "CParse/parser.y"
    {
		 (yyval.str) = NewStringf("::~%s",(yyvsp[0].id));
               }
    break;

  case 437:
#line 5712 "CParse/parser.y"
    { 
                   (yyval.id) = (char *) malloc(strlen((yyvsp[-1].id))+strlen((yyvsp[0].id))+1);
                   strcpy((yyval.id),(yyvsp[-1].id));
                   strcat((yyval.id),(yyvsp[0].id));
               }
    break;

  case 438:
#line 5717 "CParse/parser.y"
    { (yyval.id) = (yyvsp[0].id);}
    break;

  case 439:
#line 5720 "CParse/parser.y"
    {
		 (yyval.str) = NewString((yyvsp[0].id));
               }
    break;

  case 440:
#line 5723 "CParse/parser.y"
    {
                  skip_balanced('{','}');
		  (yyval.str) = NewString(scanner_ccode);
               }
    break;

  case 441:
#line 5727 "CParse/parser.y"
    {
		 (yyval.str) = (yyvsp[0].str);
              }
    break;

  case 442:
#line 5732 "CParse/parser.y"
    {
                  Hash *n;
                  (yyval.node) = NewHash();
                  n = (yyvsp[-1].node);
                  while(n) {
                     String *name, *value;
                     name = Getattr(n,k_name);
                     value = Getattr(n,k_value);
		     if (!value) value = (String *) "1";
                     Setattr((yyval.node),name, value);
		     n = nextSibling(n);
		  }
               }
    break;

  case 443:
#line 5745 "CParse/parser.y"
    { (yyval.node) = 0; }
    break;

  case 444:
#line 5749 "CParse/parser.y"
    {
		 (yyval.node) = NewHash();
		 Setattr((yyval.node),k_name,(yyvsp[-2].id));
		 Setattr((yyval.node),k_value,(yyvsp[0].id));
               }
    break;

  case 445:
#line 5754 "CParse/parser.y"
    {
		 (yyval.node) = NewHash();
		 Setattr((yyval.node),k_name,(yyvsp[-4].id));
		 Setattr((yyval.node),k_value,(yyvsp[-2].id));
		 set_nextSibling((yyval.node),(yyvsp[0].node));
               }
    break;

  case 446:
#line 5760 "CParse/parser.y"
    {
                 (yyval.node) = NewHash();
                 Setattr((yyval.node),k_name,(yyvsp[0].id));
	       }
    break;

  case 447:
#line 5764 "CParse/parser.y"
    {
                 (yyval.node) = NewHash();
                 Setattr((yyval.node),k_name,(yyvsp[-2].id));
                 set_nextSibling((yyval.node),(yyvsp[0].node));
               }
    break;

  case 448:
#line 5769 "CParse/parser.y"
    {
                 (yyval.node) = (yyvsp[0].node);
		 Setattr((yyval.node),k_name,(yyvsp[-2].id));
               }
    break;

  case 449:
#line 5773 "CParse/parser.y"
    {
                 (yyval.node) = (yyvsp[-2].node);
		 Setattr((yyval.node),k_name,(yyvsp[-4].id));
		 set_nextSibling((yyval.node),(yyvsp[0].node));
               }
    break;

  case 450:
#line 5780 "CParse/parser.y"
    {
		 (yyval.id) = (yyvsp[0].id);
               }
    break;

  case 451:
#line 5783 "CParse/parser.y"
    {
                 (yyval.id) = Char((yyvsp[0].dtype).val);
               }
    break;


    }

/* Line 1037 of yacc.c.  */
#line 9544 "CParse/parser.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  const char* yyprefix;
	  char *yymsg;
	  int yyx;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 0;

	  yyprefix = ", expecting ";
	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		yysize += yystrlen (yyprefix) + yystrlen (yytname [yyx]);
		yycount += 1;
		if (yycount == 5)
		  {
		    yysize = 0;
		    break;
		  }
	      }
	  yysize += (sizeof ("syntax error, unexpected ")
		     + yystrlen (yytname[yytype]));
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yyprefix = ", expecting ";
		  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			yyp = yystpcpy (yyp, yyprefix);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yyprefix = " or ";
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* If at end of input, pop the error token,
	     then the rest of the stack, then return failure.  */
	  if (yychar == YYEOF)
	     for (;;)
	       {

		 YYPOPSTACK;
		 if (yyssp == yyss)
		   YYABORT;
		 yydestruct ("Error: popping",
                             yystos[*yyssp], yyvsp);
	       }
        }
      else
	{
	  yydestruct ("Error: discarding", yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

#ifdef __GNUC__
  /* Pacify GCC when the user code never invokes YYERROR and the label
     yyerrorlab therefore never appears in user code.  */
  if (0)
     goto yyerrorlab;
#endif

yyvsp -= yylen;
  yyssp -= yylen;
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yydestruct ("Error: discarding lookahead",
              yytoken, &yylval);
  yychar = YYEMPTY;
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 5790 "CParse/parser.y"


SwigType *Swig_cparse_type(String *s) {
   String *ns;
   ns = NewStringf("%s;",s);
   Seek(ns,0,SEEK_SET);
   scanner_file(ns);
   top = 0;
   scanner_next_token(PARSETYPE);
   yyparse();
   /*   Printf(stdout,"typeparse: '%s' ---> '%s'\n", s, top); */
   return top;
}


Parm *Swig_cparse_parm(String *s) {
   String *ns;
   ns = NewStringf("%s;",s);
   Seek(ns,0,SEEK_SET);
   scanner_file(ns);
   top = 0;
   scanner_next_token(PARSEPARM);
   yyparse();
   /*   Printf(stdout,"typeparse: '%s' ---> '%s'\n", s, top); */
   Delete(ns);
   return top;
}


ParmList *Swig_cparse_parms(String *s) {
   String *ns;
   char *cs = Char(s);
   if (cs && cs[0] != '(') {
     ns = NewStringf("(%s);",s);
   } else {
     ns = NewStringf("%s;",s);
   }   
   Seek(ns,0,SEEK_SET);
   scanner_file(ns);
   top = 0;
   scanner_next_token(PARSEPARMS);
   yyparse();
   /*   Printf(stdout,"typeparse: '%s' ---> '%s'\n", s, top); */
   return top;
}


