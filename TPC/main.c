#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include "empleado.h"

void main(){

 char nombre[100] = "Camila";
 char apellido[100] = "Arena";
 char estado_civil[100] = "Soltera";
 int edad = 21;
 long tel = 2914139035;
 char sexo = 'f';
 char estudios[100] = "Secundarios";

//Creo las especificaciones del domicilio
 struct especificaciones esp;
 int piso = 5;
 char depto = 'A';
 char torre[100] = "torre 1";
 esp = crear_especificaciones(torre, piso, depto);


//Creo el domicilio del empleado
 struct domicilio d;
  char calle[100] = "Ayacucho";
 int num = 1245;
 d = crear_domicilio(calle,num,esp);

//Creo el empleado
 struct empleado emp1;
 emp1 = crearEmpleado(apellido, nombre, d, tel,sexo, edad,estudios, estado_civil);


printf("Nombre: %s, Apellido: %s, estado civil: %s, edad: %d, telefono: %lu", emp1.nombre, emp1.apellido,emp1.estado_civil,emp1.edad, emp1.telefono);
printf("\n");
printf("Domicilio: calle:%s, numero: %d, especificaciones: torre:%c, piso: %d, depto: %c", emp1.domicilio_actual.calle,emp1.domicilio_actual.numero,esp.torre, esp.piso, esp.depto);


}
