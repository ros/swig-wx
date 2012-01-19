#!/bin/bash
#----------------------------------------------------------------------

set -o errexit

##DO=echo

$DO make $*

if [ "$1" == "install" ]; then
    LIBDIR=`./swig -swiglib`
    VER=`basename $LIBDIR`
    $DO mv /opt/swig/bin/swig /opt/swig/bin/swig-$VER
    $DO ln -s /opt/swig/bin/swig-$VER /opt/swig/bin/swig
fi
