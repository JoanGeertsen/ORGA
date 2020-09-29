#include <stdio.h>
#include <stdlib.h>

//------------------Punto 11---------------
/*Escribir un programa que al recibir el nombre de un archivo de texto en la lınea de
comandos le agregue el n´umero de l´ınea actual a cada una de las lıneas que componen al
archivo.*/


void mostrar_archivo(FILE *f){
    char c;
    while(!feof(f)){
        c = fgetc(f);
        printf("%c",c);//lo imprimo por consola
    }
}


void contar_lineas(FILE *f){                                            //creo un archivo aux y voy numerando y copiando el contenido de cada linea, luego borro el archivo original y vuelco
    char c;                                                             //el contenido de aux en original
    int linea=0;

    while(!eof(f)){
        while(c!='\n'){
            fprintf(f,linea);
        }
    }

}




void main(){

   FILE * aux1;
   aux1 = fopen ("f1.txt", "r+");

    if(aux1 == NULL ) {
        printf("No fue posible abrir el archivo f1\n");
    }

    mostrar_archivo(aux1);
    rewind(aux1);

    contar_lineas(aux1);
    rewind(aux1);

    mostrar_archivo(aux1);

    fclose(aux1);

}
