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
  return 0;
}
