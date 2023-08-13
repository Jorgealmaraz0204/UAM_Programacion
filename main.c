#include <stdio.h>
 #include <stdlib.h>
#include "LOOP.h"
#include "calificaciones.h"
#include "numeroprimo.h"
#include "vector.h"
int main(void) 
{

  



  return 0;
  do{
        printf("MENU\n");
        printf("1. loops \n");
        printf("2. calculadora\n");
        printf("3. numero primo \n");
        printf("4. calificaciones\n");
        printf("5. vectores\n");
        
        printf("Seleccione una opcion: ");
	scanf("%d", &opcion);
	
	switch (opcion)
       {
       		case 1: 
         void LOOPS();
       			break;
case 2: 
       void CALCULADORA();
       			break;
       			
       		case 3: 
       			void numeroprimo();
       			break;
       			
       		case 4: 
      void calificaciones();
       			break;

        		case 4: 
      void vectores();
       			break;
       		default:
			printf("Opción invalida \n");
			break;
       }
    }while(opcion != 6);

    return 0;
}
}
