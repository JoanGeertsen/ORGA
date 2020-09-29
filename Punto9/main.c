#include <stdio.h>
#include <stdlib.h>

/*• FILE* fopen(char, char): apertura de un archivo para lectura o
escritura.
• int fclose(FILE): cierre de un archivo.
• int fprintf(FILE, ...): escritura con formato.
• int fscanf(FILE, ...): lectura con formato.
• int feof(FILE): determina si se ha alcanzado el final de un archivo*/

//PUNTO 9
void imprimir_archivos(FILE *f1, FILE* f2){
    char c;


    mostrar_archivo(f1);
   rewind(f1);

    while(feof(f1) == 0){//Copio f1 en f2
        c = fgetc(f1);
        fputc(c,f2);
    }
    printf("\n");

    rewind(f2);
    mostrar_archivo(f2);
}




void mostrar_archivo(FILE *f){
    char c;
    while(!feof(f)){
        c = fgetc(f);
        printf("%c",c);//lo imprimo por consola
    }
}



void main(){

   FILE * aux1;
   FILE * aux2;

   aux1 = fopen ("f1.txt", "r");
   aux2 = fopen ("f2.txt", "w+");

    if(aux1 == NULL ) {
        printf("No fue posible abrir el archivo f1\n");
        return -1;
   }

   if(aux2 == NULL ) {
        printf("No fue posible abrir el archivo f2\n");
        return -1;
   }

   imprimir_archivos(aux1,aux2);

   fclose(aux1);
   fclose(aux2);

}
