# This file was created automatically by SWIG.
# Don't modify this file, modify the SWIG interface instead.
# This file is compatible with both classic and new-style classes.

import _clientdata_prop_b

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


import clientdata_prop_a
class B(clientdata_prop_a.A):
    """Proxy of C++ B class"""
    __swig_setmethods__ = {}
    for _s in [clientdata_prop_a.A]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, B, name, value)
    __swig_getmethods__ = {}
    for _s in [clientdata_prop_a.A]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, B, name)
    def __repr__(self):
        return "<%s.%s; proxy of C++ B instance at %s>" % (self.__class__.__module__, self.__class__.__name__, self.this,)
    def fB(*args):
        """fB(self)"""
        return _clientdata_prop_b.B_fB(*args)

    def __init__(self, *args):
        """__init__(self) -> B"""
        _swig_setattr(self, B, 'this', _clientdata_prop_b.new_B(*args))
        _swig_setattr(self, B, 'thisown', 1)
    def __del__(self, destroy=_clientdata_prop_b.delete_B):
        """__del__(self)"""
        try:
            if self.thisown: destroy(self)
        except: pass


class BPtr(B):
    def __init__(self, this):
        _swig_setattr(self, B, 'this', this)
        if not hasattr(self,"thisown"): _swig_setattr(self, B, 'thisown', 0)
        _swig_setattr(self, B,self.__class__,B)
_clientdata_prop_b.B_swigregister(BPtr)

class C(clientdata_prop_a.A):
    """Proxy of C++ C class"""
    __swig_setmethods__ = {}
    for _s in [clientdata_prop_a.A]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, C, name, value)
    __swig_getmethods__ = {}
    for _s in [clientdata_prop_a.A]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, C, name)
    def __repr__(self):
        return "<%s.%s; proxy of C++ C instance at %s>" % (self.__class__.__module__, self.__class__.__name__, self.this,)
    def fC(*args):
        """fC(self)"""
        return _clientdata_prop_b.C_fC(*args)

    def __init__(self, *args):
        """__init__(self) -> C"""
        _swig_setattr(self, C, 'this', _clientdata_prop_b.new_C(*args))
        _swig_setattr(self, C, 'thisown', 1)
    def __del__(self, destroy=_clientdata_prop_b.delete_C):
        """__del__(self)"""
        try:
            if self.thisown: destroy(self)
        except: pass


class CPtr(C):
    def __init__(self, this):
        _swig_setattr(self, C, 'this', this)
        if not hasattr(self,"thisown"): _swig_setattr(self, C, 'thisown', 0)
        _swig_setattr(self, C,self.__class__,C)
_clientdata_prop_b.C_swigregister(CPtr)

class D(clientdata_prop_a.A):
    """Proxy of C++ D class"""
    __swig_setmethods__ = {}
    for _s in [clientdata_prop_a.A]: __swig_setmethods__.update(_s.__swig_setmethods__)
    __setattr__ = lambda self, name, value: _swig_setattr(self, D, name, value)
    __swig_getmethods__ = {}
    for _s in [clientdata_prop_a.A]: __swig_getmethods__.update(_s.__swig_getmethods__)
    __getattr__ = lambda self, name: _swig_getattr(self, D, name)
    def __repr__(self):
        return "<%s.%s; proxy of C++ D instance at %s>" % (self.__class__.__module__, self.__class__.__name__, self.this,)
    def fD(*args):
        """fD(self)"""
        return _clientdata_prop_b.D_fD(*args)

    def __init__(self, *args):
        """__init__(self) -> D"""
        _swig_setattr(self, D, 'this', _clientdata_prop_b.new_D(*args))
        _swig_setattr(self, D, 'thisown', 1)
    def __del__(self, destroy=_clientdata_prop_b.delete_D):
        """__del__(self)"""
        try:
            if self.thisown: destroy(self)
        except: pass


class DPtr(D):
    def __init__(self, this):
        _swig_setattr(self, D, 'this', this)
        if not hasattr(self,"thisown"): _swig_setattr(self, D, 'thisown', 0)
        _swig_setattr(self, D,self.__class__,D)
_clientdata_prop_b.D_swigregister(DPtr)


def test_t2A(*args):
    """test_t2A(t2A a)"""
    return _clientdata_prop_b.test_t2A(*args)

def test_t3A(*args):
    """test_t3A(t3A a)"""
    return _clientdata_prop_b.test_t3A(*args)

def test_B(*args):
    """test_B(B b)"""
    return _clientdata_prop_b.test_B(*args)

def test_C(*args):
    """test_C(C c)"""
    return _clientdata_prop_b.test_C(*args)

def test_D(*args):
    """test_D(D d)"""
    return _clientdata_prop_b.test_D(*args)

def test_tD(*args):
    """test_tD(tD d)"""
    return _clientdata_prop_b.test_tD(*args)

def test_t2D(*args):
    """test_t2D(t2D d)"""
    return _clientdata_prop_b.test_t2D(*args)

def new_t2A(*args):
    """new_t2A() -> t2A"""
    return _clientdata_prop_b.new_t2A(*args)

def new_t3A(*args):
    """new_t3A() -> t3A"""
    return _clientdata_prop_b.new_t3A(*args)

def new_tD(*args):
    """new_tD() -> tD"""
    return _clientdata_prop_b.new_tD(*args)

def new_t2D(*args):
    """new_t2D() -> t2D"""
    return _clientdata_prop_b.new_t2D(*args)

