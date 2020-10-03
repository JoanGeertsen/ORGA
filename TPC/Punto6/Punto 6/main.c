#include <stdio.h>
#include <stdlib.h>

void main()
{
    gestor_alumnos();
}

void imprimir_inf(long libreta[],int calificaciones[],int cant){
    int i=0;

    printf("\nInformacion guardada:\n");
    while(i< cant){
        printf("\nAlumno %lu, Calificacion %d",libreta[i],calificaciones[i]);
        i++;
    }
}





	int gestor_alumnos(){
    long libreta[99];
    int calificaciones[99];
    int calif;
    long lu;
    int n;
  	int i=0;


    printf("Bienvenido al gestor de Alumnos\n");

    printf("\n1: Ingresar, 0: salir\n");

    scanf("%d",&n); fflush(stdin);
    while(n==1 && i<99){
      	printf("\nIngrese una libreta y un promedio de calificacion\n");
        scanf("%lu", &lu);
        libreta[i] = lu;     fflush(stdin);
        scanf("&d", &calif); fflush(stdin);
         calificaciones[i] = calif;
        printf("\nIngrese 1 para ingresar alumnos o 0 para finalizar\n");
     	  scanf("%d",&n); fflush(stdin);
      	i++;
    }
    imprimir_inf(libreta, calificaciones,i);
    printf("\n\nCantidad de Alumnos ingresados: %d", i);
    return i;

}
