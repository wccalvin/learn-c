#include <stdio.h>

// another legal signature of main
int main(int argc, char **argv) {
  // argc is an automatically calculated value -> represents total number of
  // arguments stored in argv
  if (argc == 1)
    printf("Usage: helloArgs <arg1 arg2 ...>\n");
  else {
    // `char **argv` is same as `char *argv[]`
    // it represents array of pointers to a string
    // in other words, each element of array is a pointer which points to a
    // string
    printf("argc=%d\n", argc);
    for (int i = 0; i < argc; ++i)
      printf("argument: %d and value: %s\n", i, argv[i]);
  }
  return 0;
}

// execute:
// ❯ gcc -o a 02-helloArgs.c
// ❯ ./a this is fun
// argument: 0 and value: ./a
// argument: 1 and value: this
// argument: 2 and value: is
// argument: 3 and value: fun
