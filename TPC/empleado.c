#include "empleado.h"

struct empleado crearEmpleado(char nombre[], char apellido[], struct domicilio d, int tel, char sexo, int edad, char estudios[],char estadociv[]){
    struct empleado emp;
    strcpy(emp.nombre, nombre);
    strcpy(emp.apellido, apellido);
    emp.domicilio_actual = d;
    emp.telefono = tel;
    emp.sexo = sexo;
    emp.edad = edad;
    strcpy(emp.estudios_cursados,estudios);
    strcpy(emp.estado_civil,estadociv);
    return emp;
}

struct domicilio crear_domicilio(char calle[], int num, struct especificaciones esp){
    struct domicilio dom;
    strcpy(dom.calle,calle);
    dom.espec = esp;
    dom.numero = num;
    return dom;
}

struct especificaciones crear_especificaciones(char torre[], int piso, char depto){
    struct especificaciones e;
    e.depto = depto;
    e.piso = piso;
    strcpy(e.torre, torre);
    return e;
}
