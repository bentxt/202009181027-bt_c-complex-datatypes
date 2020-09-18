#include <stdio.h>

struct date {
  int day;
  char month[10];
  int year;
} birthday, holiday;

struct date specialday;

struct date mybirthday = {13, "June", 2000};

struct date *summerday;

struct date *bday = &mybirthday;


struct date *winterday;

int main(int argc, char** argv) {
  printf("size : %lu\n", (unsigned long)sizeof(mybirthday));
  printf("day: %i\n", bday->day);
   //puts("Hello, world!");
  return 0;
}
