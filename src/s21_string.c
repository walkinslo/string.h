#include "s21_string.h"
#include <string.h>

char *s21_strncpy(char *dest, const char *src, size_t n) {
    return strncpy(dest, src, n);
}

size_t s21_strlen(const char *str) {
    return strlen(str);
}

void *s21_memchr(const void *str, int c, size_t n) {
    return memchr(str, c, n);
}

int s21_memcmp(const void *str1, const void *str2, size_t n) {
    return memcmp(str1, str2, n);
}

void *s21_memcpy(void *dest, const void *src, size_t n) {
    return memcpy(dest, src, n);
}

void *s21_memset(void *str, int c, size_t n) {
    return memset(str, c, n);
}

char *s21_strncat(char *dest, const char *src, size_t n) {
    return strncat(dest, src, n);
}

char *s21_strchr(const char *str, int c) {
    return strchr(str, c);
}

int s21_strncmp(const char *str1, const char *str2, size_t n) {
    return strncmp(str1, str2, n);
}

char *s21_strncpy(char *dest, const char *src, size_t n) {
    return strncpy(dest, src, n);
}

size_t s21_strcspn(const char *str1, const char *str2) {
    return strcspn(str1, str2);
}

char *s21_strerror(int errnum) {
    #ifdef __linux__
        // Linux-specific error messages
        // Implement error messages for Linux
        return "Linux error message";
    #elif __APPLE__
        // macOS-specific error messages
        // Implement error messages for macOS
        return "macOS error message";
    #endif
    // Default error message if platform not recognized
    return "Unknown error";
}

size_t s21_strspn(const char *str1, const char *str2) {
    return strspn(str1, str2);
}

char *s21_strpbrk(const char *str1, const char *str2) {
    return strpbrk(str1, str2);
}

char *s21_strrchr(const char *str, int c) {
    return strrchr(str, c);
}

char *s21_strstr(const char *haystack, const char *needle) {
    return strstr(haystack, needle);
}

char *s21_strtok(char *str, const char *delim) {
    return strtok(str, delim);
}

