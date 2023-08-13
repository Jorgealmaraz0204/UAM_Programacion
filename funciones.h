
#include <stdio.h>

void ALGORITMOBASICO();
void LOOPS();
void VECTORES();
void CALCULADORA();

void LOOPS(){
  
}
void VECTORES(int arr[], int length){
  int arr[] = {1,2,3,4,5,}, arr2[5];
  int arr_length =sizeof(arr) / sizeof (int), arr2_length = sizeof(arr2) / sizeof(int);
  VECTORES(arr,arr_length);
  int i,j;
  for (i=arr_length-1,j=0;, i>=0 && j< arr2_length; i--, j++){
    arr[j] = arr[i];
    printf("%d",arr2[j]);
  }
  return 0;
}
void VECTORES(int arr[], int length){
  int i;
  for (i =0; i <length; i++){
    printf("%d",arr[i]);
  }
}


void CALCULADORA(){
int main() {
    int opcion = 0;
    int num1;
    int num2;
    int suma;
    int resta;
    int division;
    int multiplicacion;
    
    
    do{
        printf("MENU\n");
        printf("1. Suma \n");
        printf("2. Resta \n");
        printf("3. División \n");
        printf("4. Multiplicación\n");
        
        printf("Seleccione una opcion: ");
	scanf("%d", &opcion);
	
	switch (opcion)
       {
       		case 1: 
       			printf("Ingresa un numero: \n");
    			scanf("%d", &num1);
    
			printf("Ingresa un numero: \n");
			scanf("%d", &num2);
			
			suma = (num1 + num2);
       			printf("El resultado de la suma es: %d \n", suma);
       			break;
case 2: 
       			printf("Ingresa un numero: \n");
    			scanf("%d", &num1);
    
			printf("Ingresa un numero: \n");
			scanf("%d", &num2);
			
			resta = (num1 - num2);
       			printf("El resultado de la resta es: %d \n", resta);
       			break;
       			
       		case 3: 
       			printf("Ingresa un numero: \n");
    			scanf("%d", &num1);
    
			printf("Ingresa un numero: \n");
			scanf("%d", &num2);
			
			division = (num1 / num2);
       			printf("El resultado de la division es: %d \n", division);
       			break;
       			
       		case 4: 
       			printf("Ingresa un numero: \n");
    			scanf("%d", &num1);
    
			printf("Ingresa un numero: \n");
			scanf("%d", &num2);
			multiplicacion = (num1 * num2);
       			printf("El resultado de la multiplicacion es: %d \n", multiplicacion);
       			break;
       			
       		default:
			printf("Opción invalida \n");
			break;
       }
    }while(opcion != 5);

    return 0;
}



