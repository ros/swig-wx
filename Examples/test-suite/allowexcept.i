// Test allowexcept feature

%module allowexcept

// First make sure %exception is not used by default for variable wrappers

%nodefaultctor;
%nodefaultdtor;
%exception {
   This will not compile
}

%inline %{
struct UVW {};
UVW uvw_global_variable;
struct Bar {
  UVW member_variable;
  static UVW static_member_variable;
};
UVW Bar::static_member_variable;
%}


// Now test the allowexcept feature by making the usual $action uncompileable and ensuring the %exception is picked up

struct XYZ {
};

%{
struct XYZ {
  void foo() {}
private:
  XYZ& operator=(const XYZ& other); // prevent assignment used in normally generated set method
  XYZ* operator&(); // prevent dereferencing used in normally generated  get method
};
%}
#if defined(SWIGUTL)
%exception {
  /* 
   $action
  */
  SWIG_fail;
}
#else
%exception {
  /* 
   $action
  */
}
#endif
%allowexception;

%inline %{
XYZ global_variable;
struct Foo {
  XYZ member_variable;
  static XYZ static_member_variable;
};
XYZ Foo::static_member_variable;
%}

