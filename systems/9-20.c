#include <stdio.h>
#include <stdlib.h>

int main() {
  int var1;
  int var2[5];
  short ref*;
  printf("%d\n%d\n%d\n",sizeof(var1),sizeof(var2),sizeof(ref));

  short s = 83;
  double darr[4];
  short *sp = &s;

  darr[0] = 19;
  darr[1] = 6.45;

  prinf("size of darr: %lu\n",sizeof(darr));
  printf("value of darr: %p\n", darr);
  printf("darr[0]: %f\n",darr[0]);
  printf("*darr: %f\n",*darr);
  dp++;
  printf("*dp: %f\n",*dp)
  
  printf("size of s: %lu\n",sizeof(s));
  printf("value of s: %p\n",s);
  
  printf("size of sp: %lu\n",sizeof(sp));
  printf("value of sp: %p\n",sp);
  return 0;
}
