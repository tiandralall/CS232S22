#include <stdio.h>
#include <stdlib.h>

void set_bits(unsigned * x,
             unsigned start,
             unsigned end,
             unsigned *v) {
    int len = end - start+1;
    for(int i =0;i<len;++i){
      if(v[i] == 1){
        (*x)=(*x) | (1 <<(start+i));
      }
      else{
        (*x)=(*x) & (~(1<<(start + i)));
      }
    }
}



