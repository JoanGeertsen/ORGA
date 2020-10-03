#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED


//-----------------3a--------------------------
    struct especificaciones{
        char torre[20];
        int piso;
        char depto;
    };


    struct domicilio{
        char calle[30];
        int numero;
        struct especificaciones espec;
    };

    struct empleado{
        char apellido[40];
        char nombre[40];
        struct domicilio domicilio_actual;
        long telefono;
        int edad;
        char sexo;
        char estudios_cursados[20];
        char estado_civil[20];
    };

struct empleado crearEmpleado(char nombre[], char apellido[], struct domicilio d, int tel, char sexo, int edad, char estudios[],char estadociv[]);
struct domicilio crear_domicilio(char calle[], int num, struct especificaciones esp);
struct especificaciones crear_especificaciones(char torre[], int piso, char depto);

#endif // EMPLEADO_H_INCLUDED
