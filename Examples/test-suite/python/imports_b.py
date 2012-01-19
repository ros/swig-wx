# This file was created automatically by SWIG.
# Don't modify this file, modify the SWIG interface instead.
# This file is compatible with both classic and new-style classes.

import _imports_b

def _swig_setattr_nondynamic(self,class_type,name,value,static=1):
    if (name == "this"):
        if isinstance(value, class_type):
            self.__dict__[name] = value.this
            if hasattr(value,"thisown"): self.__dict__["thisown"] = value.thisown
            del value.thisown
            return
    method = class_type.__swig_setmethods__.get(name,None)
    if method: return method(self,value)
    if (not static) or hasattr(self,name) or (name == "thisown"):
        self.__dict__[name] = value
    else:
        raise AttributeError("You cannot add attributes to %s" % self)

def _swig_setattr(self,class_type,name,value):
    return _swig_setattr_nondynamic(self,class_type,name,value,0)

def _swig_getattr(self,class_type,name):
    method = class_type.__swig_getmethods__.get(name,None)
    if method: return method(self)
    raise AttributeError,name

import types
try:
    _object = types.ObjectType
    _newclass = 1
except AttributeError:
    class _object : pass
    _newclass = 0
del types


import imports_a
class B(imports_a.A):
    """Proxy of C++ B class"""
    __swig_setmethods__ = {}
    for _s in [imports_a.A]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, B, name, value)
    __swig_getmethods__ = {}
    for _s in [imports_a.A]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, B, name)
    def __repr__(self):
        return "<%s.%s; proxy of C++ B instance at %s>" % (self.__class__.__module__, self.__class__.__name__, self.this,)
    def __init__(self, *args):
        """__init__(self) -> B"""
        _swig_setattr(self, B, 'this', _imports_b.new_B(*args))
        _swig_setattr(self, B, 'thisown', 1)
    def bye(*args):
        """bye(self)"""
        return _imports_b.B_bye(*args)

    def member_virtual_test(*args):
        """member_virtual_test(self, MemberEnum e) -> int"""
        return _imports_b.B_member_virtual_test(*args)

    def global_virtual_test(*args):
        """global_virtual_test(self, GlobalEnum e) -> int"""
        return _imports_b.B_global_virtual_test(*args)

    def __del__(self, destroy=_imports_b.delete_B):
        """__del__(self)"""
        try:
            if self.thisown: destroy(self)
        except: pass


class BPtr(B):
    def __init__(self, this):
        _swig_setattr(self, B, 'this', this)
        if not hasattr(self,"thisown"): _swig_setattr(self, B, 'thisown', 0)
        _swig_setattr(self, B,self.__class__,B)
_imports_b.B_swigregister(BPtr)

class C(imports_a.A):
    """Proxy of C++ C class"""
    __swig_setmethods__ = {}
    for _s in [imports_a.A]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, C, name, value)
    __swig_getmethods__ = {}
    for _s in [imports_a.A]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, C, name)
    def __repr__(self):
        return "<%s.%s; proxy of C++ C instance at %s>" % (self.__class__.__module__, self.__class__.__name__, self.this,)
    def get_a(*args):
        """get_a(self, A a) -> A"""
        return _imports_b.C_get_a(*args)

    def get_a_type(*args):
        """get_a_type(self, a_type a) -> a_type"""
        return _imports_b.C_get_a_type(*args)

    def __init__(self, *args):
        """__init__(self) -> C"""
        _swig_setattr(self, C, 'this', _imports_b.new_C(*args))
        _swig_setattr(self, C, 'thisown', 1)
    def __del__(self, destroy=_imports_b.delete_C):
        """__del__(self)"""
        try:
            if self.thisown: destroy(self)
        except: pass


class CPtr(C):
    def __init__(self, this):
        _swig_setattr(self, C, 'this', this)
        if not hasattr(self,"thisown"): _swig_setattr(self, C, 'thisown', 0)
        _swig_setattr(self, C,self.__class__,C)
_imports_b.C_swigregister(CPtr)

def global_test(*args):
    """
    global_test(GlobalEnum e) -> int
    global_test(MemberEnum e) -> int
    """
    return _imports_b.global_test(*args)


