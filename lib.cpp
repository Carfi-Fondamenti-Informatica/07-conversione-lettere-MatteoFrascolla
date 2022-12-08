#include "lib.h"
bool convert (char & a) {
    if ((a>=65 && a <= 90) || (a>=97 && a<=122)) {
        if (a>=65 && a<=90) {
            a+=32;
        } else {
            a-=32; 
        } return 1;
    } else {
        return 0;
    }
}
