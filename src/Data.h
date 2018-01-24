#pragma once
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define INT 0
#define FLOAT 1
#define BYTE 2
#define CHAR 3
#define STRING 4
#define DATE 5
#define TIME 6

typedef struct field {
  uint8_t* fieldData; // an array of bytes for the actual data in the field
  size_t size; // the amount of bytes in the field
  int size; // may or may not use this to denote the data type being stored
  char* name;
};

typedef struct data {
  field_t* fields; // array of the fields this piece of data has
  int numFilds;
  char* name;
};
