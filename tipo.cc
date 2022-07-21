#include "tipo.h"

int compare(tipo_inf t1, tipo_inf t2) {
    if(t1 < t2) return 1;
    if(t1 > t2) return -1;
    return 0;
}