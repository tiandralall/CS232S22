#include <stdio.h>
#include <stdlib.h>

void flip_bits(unsigned * x,
              unsigned start,
              unsigned end) {
    for(int i =start;i<=end;++i){
      (*x) ^= (1 << i);
    }
}