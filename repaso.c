#include <stdio.h>
#include "funciones.h"

int main(void) 
{

  

  cargarfunciones();

  imprimirpeliculas();

  imprimirAsientos(5);

              //(viaje)
  imprimirAsientos(5);

         //(viaje, asiento)
  venderAsiento(5, 17);

              //(viaje)
  imprimirAsientos(5);
  
  guardarpeliculas();

  return 0;
