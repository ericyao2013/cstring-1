#ifndef MY_STRING
#define MY_STRING

#include<stdlib.h>

#define STR_LEN 80 //Includes null terminator

typedef struct String String;

struct String {
  char* str;

  // Methods
  String* (*substr)   (String self, int head, int tail);
  int     (*findchar) (String self, char character, int index);
  int     (*contains) (String self, String str, int index);
  char*   (*toString) (String self);
  void    (*destroy)  (String self);
  void    (*append)   (String self, String str);
};

String* String_new      (String proto, char* val);
void    String_init     (String* self, char* val);
void    String_destroy  (String self);

String* String_substr   (String self, int head, int tail);
void    String_append   (String self, String str);
int     String_findchar (String self, char character, int index);
int     String_contains (String self, String sub, int index);

#endif
