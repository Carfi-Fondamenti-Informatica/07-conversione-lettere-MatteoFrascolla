
#include "lib.h"
bool checkinput (int x){
  if((x>=65 && x<=90) || (x>=97 && x<=122))
    return true;
  else
    return false;
}
char conversion (char x){
  char res;
  if (x >='A' && x <= 'Z')
    res = x + 32;
  else if (x >= 'a' && <= 'z')
    res = x - 32;
  return res;
}
