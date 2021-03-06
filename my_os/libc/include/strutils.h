#ifndef STRING_UTIL_H
#define STRING_UTIL_H

int isUpper(char c);
int isLower(char c);
int isAlpha(char c);
int isDigit(char c);
int isSpace(char c);
char *leftTrim(char *c);
char *rightTrim(char *c);
char *trim(char *c);
void append(char s[], char n);
void backspace(char s[]);

#endif