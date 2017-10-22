// z value header
#ifndef Z_VALUE_H
#define Z_VALUE_H

#include <stdint.h>
#include "z.h"

typedef enum {
  // value types
  Z_T_INT,
  Z_T_FLOAT,
  Z_T_BOOL,
  Z_T_CHAR,
  // object types
  Z_T_TABLE,
  Z_T_FUNC,
  Z_T_LIST,
} z_type_t;

typedef int32_t z_int_t;
typedef double z_float_t;
typedef int8_t z_bool_t;
typedef char z_char_t;
typedef struct z_value z_value_t;
typedef struct z_value *z_ref_t;

struct z_value {
  union {
    z_ref_t ref;
  } v;
  z_type_t t;
};


#endif