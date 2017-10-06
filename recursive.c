#include "clz.h"

static inline __attribute((always_inline))
unsigned clz2(uint32_t x, int div, int n)
{
    if (div == 0) return n;
    if (x < ((uint32_t)1<<(div-1))) return clz2(x, div/2, n);
    else return clz2(x>>div, div/2, n-div);
}
