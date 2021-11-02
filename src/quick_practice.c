#include "header.h"

void print_alphabet(int i, int limit) {
  for (; i < limit; i++)
    putchar(i);
  putchar('\n');
}

void print_alphabet_recursion(int i, int limit) {
  if (i >= limit) {
    putchar('\n');
    return;
  } else {
    putchar(i);
    print_alphabet_recursion(i+1, limit);
  }
}

void smallest_combination_of_two_numbers(void) {
  int first_number = 0;
  int second_number;

  for (; first_number < 10; first_number++) {
    for (second_number = first_number + 1; second_number < 10; second_number++) {
      putchar(first_number%10 + '0');
      putchar(second_number%10 + '0');
      putchar(',');
      putchar(' ');
    }
  }
  putchar('\n');
}

void smallest_combination_of_three_numbers(void) {
  int first_number = 0;
  int second_number;
  int third_number;

  for (; first_number < 10; first_number++) {
    for (second_number = first_number + 1; second_number < 10; second_number++) {
      for (third_number = second_number + 1; third_number < 10; third_number++) {
        putchar(first_number%10 + '0');
        putchar(second_number%10 + '0');
        putchar(third_number%10 + '0');
        putchar(',');
        putchar(' ');
      }
    }
  }
  putchar('\n');
}

void times_table(int num) {
  int out_loop = 0;
  int in_loop = 0;

  while (out_loop != (num + 1)) {
    while (in_loop != (num + 1)) {
      if ((in_loop * out_loop) < 10 && in_loop != 0)
        putchar(' ');
      printf("%d", in_loop * out_loop);
      if (in_loop != 9) {
        putchar(',');
        putchar(' ');
      }
      in_loop++;
    }
    putchar('\n');
    in_loop = 0;
    out_loop++;
  }
}

void print_diagonal(int n) {
  int i;
  int b;
  if (n <= 0)
    putchar('\n');
  for (i = 0; i < n; i++) {
    for (b = 0; b < i; b++) {
      putchar(' ');
    }
    putchar('\\');
    putchar('\n');
  }
}

void print_triangle(int size) {
  int i;
  int b;

  for (i = 0; i < size; i++) {
    for (b = 0; b < size; b++) {
      if (b < ((size - 1) - i))
        putchar(' ');
      else
        putchar('#');
    }
    putchar('\n');
  }
}
