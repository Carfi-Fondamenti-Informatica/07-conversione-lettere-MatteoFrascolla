
#include "lib.h"
bool convert (char & a){
  if (a>065 && a<=90){
    a +=32;
    return true;
  } else if (a>=97 && a<=122){
    a -=32;
    return true;
  }
  return false;
}
