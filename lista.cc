#include "lista.h"

lista tail(lista l) {
    return (l->next);
}

tipo_inf head(lista l) {
    return (l->inf);
}