#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int s21_format(char specifier, va_list ap) {
  int count;

  count = 0;
  switch (specifier) {
    case 'c':
      count += s21_printchar(va_arg(ap, int));
      break;
    case 's':
      count += s21_print_string(va_arg(ap, char *));
      break;
    case 'p':
      count += s21_print_ptr(va_arg(ap, unsigned long long));
      break;
    case 'd':
    case 'i':
      count += s21_print_int(va_arg(ap, int));
      break;
    case 'e':
      count += s21_print_e(va_arg(ap, double));
      break;
    case 'E':
      count += s21_print_E(va_arg(ap, double));
      break;
    case 'f':
      count += s21_print_float(va_arg(ap, float));
      break;
    case 'g':
    case 'G':
      count += s21_print_shortestdouble(va_arg(ap, double));
      break;
    case 'o':
      count += s21_print_octal(va_arg(ap, unsigned int));
      break;
    case 'u':
      count += s21_print_unsigned(va_arg(ap, double));
      break;
    case 'x':
      count += s21_print_hex(va_arg(ap, unsigned int), specifier);
      break;
    case '%':
      count += s21_print_precent(va_arg(ap, char));
      break;
    default:
      exit(1);
  }

  return (count);
}

int s21_sprintf(const char *format, ...) {
  va_list ap;
  int count;

  va_start(ap, format);

  count = 0;
  while (*format != '\0') {
    if (*format == '%')
      count += s21_format(*(++format), ap);
    else
      count += write(1, format, 1);
    ++format;
  }

  va_end(ap);
  return count;
}
