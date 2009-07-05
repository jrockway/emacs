#include <config.h>
#include <stdio.h>

#include "lisp.h"


DEFUN ("hello-world", Fhello_world, Shello_world, 0, 0, "",
       doc: /* Test C function  */)
  ()
{
  return Feval( Fread( make_string("(message \"Hello, world!\")", 1024)));
}

void
syms_of_llvm ()
{
  defsubr(&Shello_world);
}
