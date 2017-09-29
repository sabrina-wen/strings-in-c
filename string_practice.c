#include <stdio.h>
#include <string.h>

// using strcat (string concatenation!)
// strcat(dest, src); --> appends src to the end of dest, (char * dest, const char * src)
void add_exclamation_pt(char * str) { // must pass pointer char array
  char ept[] = "!";
  strcat(str, ept);
  // assuming str = "hi", it becomes "hi!"
  // replaces null char at end of hi with ! and then the null char
}

// uses strncat
// same as strcat except you can specify the # of chars from src you want to add to the end of dest
void add_greeting(char * str) {
  char greeting[] = "hey how's it going"; // length = 18 (not including null char)
  strncat(str, greeting, 3); // nothing happens if you go over string length, if you go < 0, you get the entire char greeting
}

int main() {
  char s[15] = "Hello, world";
  add_exclamation_pt(s);
  printf("Adding exclamation point to end of statement: \n%s\n",s); // this produces an abort trap 6 error if  char length of s ! >=  og str + src str
  char t[] = "hey";
  add_greeting(t);
  printf("Adding greeting to end of statement: \n%s\n",t);
  return 0;
}
