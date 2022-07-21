#include "tipo.h"

struct elem
{
    tipo_inf inf;
    elem* next;  
};

typedef elem* lista;

lista tail(lista l);
tipo_inf head(lista l);