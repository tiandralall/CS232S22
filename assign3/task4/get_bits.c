#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
unsigned * get_bits(unsigned x,
                 unsigned start,
                 unsigned end) {
    
   unsigned * arr = (unsigned *) malloc(sizeof(unsigned) * (end - start + 1));
   int len = end - start + 1;
   for(int i =0;i<=len;++i){
     arr[i] = (x &(1 << (start + i )))?1:0;
   }
   return arr;
    
}



