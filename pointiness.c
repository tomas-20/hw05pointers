#include <stdio.h>
int main() {
  char charizard = 'e';
  int inti = 42;
  long long_er = 2187;
  printf("our char's address is %p which is %lu in decimal\n", &charizard, &charizard);
  printf("our intt's address is %p which is %lu in decimal\n", &inti, &inti);
  printf("our long's address is %p which is %lu in decimal\n", &long_er, &long_er);
  char *kanto = &charizard;
  int *tawantinsuyu = &inti;
  long *china = &long_er;
  printf("the value of our char's pointer's value is %p\n", kanto);
  printf("the value of our intt's pointer's value is %p\n", tawantinsuyu);
  printf("the value of our long's pointer's value is %p\n", china);
  *kanto = 'E';
  *tawantinsuyu = 54;
  *china = 24601;
  printf("the new value of our char is %c\n", charizard);
  printf("the new value of our intt is %d\n", inti);
  printf("the new value of our long is %ld\n", long_er);
  unsigned int n = 126;
  int *al_andalus = &n;
  char *spain = &n;
  printf("the value of our intt pointer is %p where %d resides\n", al_andalus, *al_andalus);
  printf("the value of our char pointer is %p where %c resides\n", spain, *spain);
  printf("the value of our unsigned int is %u which is %x in hexidecimal\n", n, n);
  for (int i = 0; i < 4; i ++) {
    printf("the value of our unsigned int's number %d bite is %hhu\n", i, *(spain + i));
  }
  return 0;
}
