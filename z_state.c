#include <stdlib.h>
#include "z.h"
#include "z_state.h"

z_t *z_new() {
  z_t *Z = malloc(sizeof(struct z));
  return Z;
}

void z_destroy(z_t *Z) {
  free(Z);
}