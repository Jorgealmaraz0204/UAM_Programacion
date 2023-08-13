#include <stdio.h>
 #include <stdlib.h>
int main(void) 
{
  int caliA,caliB,Calic,CaliD,CaliE,promedio;
  
  printf("Dame tu primer calificacion\n\n");
scanf("%d caliA");
printf("Dame tu segunda calificacion\n\n");
scanf("%d caliB");
  printf("Dame tu tercer calificacion\n\n");
scanf("%d calic");
  printf("Dame tu cuarta calificacion\n\n");
scanf("%d caliD");
  printf("Dame tu quinta calificacion\n\n");
scanf("%d caliE");
  promedio=caliA+caliB+Calic+CaliD+CaliE/5;
  
  if (promedio>=9)
  {
  printf("tu calificacion es A");
  }
  else {
    if (promedio>=8)
    {
   printf("tu calificacion es B"); 
    }
    else{
  if (promedio>=7)
  {
   printf("tu calificacion es C");} 
      else{
  if (promedio>=6){
   printf("tu calificacion es D"); }
  else {
    (promedio<6);
   printf("tu calificacion es E"); 
    }}}
  }
  return 0;
}
