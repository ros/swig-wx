# This file was created automatically by SWIG.
# Don't modify this file, modify the SWIG interface instead.
# This file is compatible with both classic and new-style classes.

import _clientdata_prop_a

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


class A(_object):
    """Proxy of C++ A class"""
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, A, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, A, name)
    def __repr__(self):
        return "<%s.%s; proxy of C++ A instance at %s>" % (self.__class__.__module__, self.__class__.__name__, self.this,)
    def fA(*args):
        """fA(self)"""
        return _clientdata_prop_a.A_fA(*args)

    def __init__(self, *args):
        """__init__(self) -> A"""
        _swig_setattr(self, A, 'this', _clientdata_prop_a.new_A(*args))
        _swig_setattr(self, A, 'thisown', 1)
    def __del__(self, destroy=_clientdata_prop_a.delete_A):
        """__del__(self)"""
        try:
            if self.thisown: destroy(self)
        except: pass


class APtr(A):
    def __init__(self, this):
        _swig_setattr(self, A, 'this', this)
        if not hasattr(self,"thisown"): _swig_setattr(self, A, 'thisown', 0)
        _swig_setattr(self, A,self.__class__,A)
_clientdata_prop_a.A_swigregister(APtr)


def test_A(*args):
    """test_A(A a)"""
    return _clientdata_prop_a.test_A(*args)

def test_tA(*args):
    """test_tA(tA a)"""
    return _clientdata_prop_a.test_tA(*args)

def new_tA(*args):
    """new_tA() -> tA"""
    return _clientdata_prop_a.new_tA(*args)

