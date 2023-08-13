
 #include <stdlib.h>

void ALGORITMOBASICO()
{
int Primo(int numero);

int main(void) {
  int numero;
  printf("Dime un número para saber si es un mumero primo o no: \n");
  scanf("%d", &numero);
  if (Primo(numero)) {
    printf("es primo");
  } else {
    printf("no es primo");
  }
  return 0;
}

int Primo(int numero) {
  if (numero == 0 || numero == 1) return 0;
 
  if (numero == 4) return 0;
  for (int x = 2; x < numero / 2; x++) {
    
    if (numero % x == 0) return 0;
  }
  return 1;
}
