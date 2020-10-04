#include <stdio.h>
#include <stdlib.h>

void main()
{
    gestor_alumnos();
}

typedef struct alumno{
	long lu;
	int calif;
};

struct alumno crear_alumno(){
    struct alumno alum;
    return alum;

}


void imprimir_inf(struct alumno alumnos[],int cant){
    int i=0;

    printf("\nInformacion guardada:\n");
    while(i< cant){
        printf("\nAlumno %lu, Calificacion %d",alumnos[i].lu,alumnos[i].calif);
        i++;
    }
}





int gestor_alumnos(){
    struct alumno alumnos[99];
    int calif;
    long lu;
    int n;
  	int i=0;


    printf("Bienvenido al gestor de Alumnos\n");

    printf("\n1: Ingresar, 0: salir\n");

    scanf("%d",&n); fflush(stdin);
    while(n==1 && i<99){
            alumnos[i]=crear_alumno();
      	printf("\nIngrese una libreta y un promedio de calificacion\n");
        scanf("%lu", &lu);
        alumnos[i].lu=lu;
        scanf("%d", &calif); fflush(stdin);
         alumnos[i].calif=calif;
        printf("\nIngrese 1 para ingresar alumnos o 0 para finalizar\n");
     	  scanf("%d",&n); fflush(stdin);
      	i++;
    }
    imprimir_inf(alumnos, i);
    printf("\n\nCantidad de Alumnos ingresados: %d", i);
    return i;

}
