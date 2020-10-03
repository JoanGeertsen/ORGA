#include <stdio.h>
#include <stdlib.h>


void contiene_palabra(FILE * f, char palabra[]){

    char oracion[1000];
    int encontre=0;

    while(!encontre){
        fgets(oracion, sizeof(oracion)/sizeof(oracion[0]),f);       //Obtengo una linea y la guardo en oracion
        if(esta_en(oracion,palabra)){       //Si la palabra pertenece a oracion
            printf("%s", oracion);
            encontre=1;
        }
    }

    rewind(f);
}

int esta_en(char oracion[], char palabra[]){
    char cdo=0;
    char cdp=0;
    int encontre=0;

    while(oracion[cdo]!='\n' && !encontre){     //Mientras no llegue al fin de linea y no haya encontrado
        if(oracion[cdo]==palabra[cdp]){     //Si el caracter de oracion coincide con el caracter de palabra
            while(oracion[cdo]==palabra[cdp] && !encontre && oracion[cdo]!='\n'){       // mientras sean iguales, no haya encontrado y no sea el fin de la oracion
                cdp++;      //avanzo la palabra
                cdo++;      //avanzo la oracion
                if(oracion[cdo]==' ' || palabra[cdp]=='\0' || oracion[cdo]=='\n'){      //si llegue a un espacio en la oracion
                        encontre=1;
                }
            }
            cdp=0;      //vuelvo al principio de la palabra
            while(oracion[cdo]!=' ' && !encontre){      //avanzo hasta la siguiente palabra de la oracion
                cdo++;
            }
        }
    }
    return encontre;
}





void main()
{
   FILE * f1;
   char palabra[1000]="hola\0";

   f1 = fopen ("f.txt", "r");

    if(!f1){
        printf("No fue posible abrir el archivo f1\n");
   }

   contiene_palabra(f1, palabra);



   fclose(f1);
}
