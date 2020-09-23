#include <stdio.h>
#include <stdlib.h>

int main(){


    /*Un procedimiento que inicialice al azar los primeros n elementos de un arreglo recibido como argumento*/

      void funcion1(int arreglo[], int size){
			srand(time(NULL));
			for(int i = 0; i < 10; i++){
				arreglo[i] = rand();
                printf("%d\n",arreglo[i]);
			}
	}

    //Test funcion 1
	/*int a[10];
	funcion1(a,10);*/



    /*Un procedimiento que ordene en forma ascendente los primeros n elementos de un
    arreglo recibido como argumento.*/

	void ordenar_ascendente(int a[], int cant){
        int i = 0;
        int aux;

        while(i+1 <cant){
            if(a[i] < a[i+1]){
                i++;
            }
            else{
              aux = a[i+1];
              a[i+1] = a[i];
              a[i] = aux;
              i++;
            }
            printf("%d\n",a[i]);

        }
	}
    //Test ordenar ascendente
   /* int a[10] = {0,3,2,6,4,11,5,4,8,9};
    ordenar_ascendente(a,10);*/


    /*Una funcion que determine si los primeros n elementos de un arreglo recibido como
    argumento se encuentran ordenados de forma ascendente.*/

    int ascendente(int a[],int n){
          int elem = a[0];
          int es = 1;//True
          int i = 0;

        while((i+1 < n) && (es == 1)){

            if(elem <= a[i+1]){
                elem = a[i+1];
                es = 1;
            }
            else{
                es = 0;
            }

            i++;
        }
            return es;
	}

/*
	int b[10] = {5,1,6,7,10,9,8,5,4,7};
	int es = ascendente(b,5);
	printf("Ascendente es %d",es);*/

	/*Un procedimiento que reciba dos arreglos de enteros A1 y A2, cada uno con una
    cierta cantidad de elementos previamente ordenados de forma ascendente, y que
    retorne un nuevo arreglo resultante de intercalar de forma ordenada y sin repeticion
    los elementos de A1 y A2.
	*/

	void intercalar(int a[],int b[]){

    int aLength = sizeof(a)/sizeof(a[0]);
    int bLength = sizeof(b)/sizeof(b[0]);
    int nuevo [aLength+bLength];

    int i,j,k = 0;

        if(es_ascendente(a) && es_ascendente(b)){

                if(a[i]<b[j]){//si el menor elemento lo tiene a

                    nuevo[k]=a[i];//inicializo el arreglo con ese elemento
                    k++;
                    i++;
                }
                else{//si lo tiene b
                    nuevo[k]=b[j];//lo inicializo con ese elemento
                    k++;
                    j++;
                }

            while(i< aLength && j< bLength){

                if(a[i] <= b[j]){

                    if(a[i]!=nuevo[k-1]){//Si no se repite un elemento
                        nuevo[k] = a[i];
                        k++;
                    }
                    i++;
                }
                else{
                    if(b[j]!=nuevo[k-1]){//Si no se repite un elemento.
                        nuevo[k] = b[j];
                        k++;
                    }
                    j++;
                }
            }

            if(i == aLength){//Si se termino el arreglo a
                while(j < bLength){
                    nuevo[k] = b[j];//Copio lo que queden en b en el nuevo.
                    j++;
                    k++;
                }
            }
            else{//Si se termino b
                while(i < aLength){//Copio lo que quede en a en el nuevo.
                    nuevo[k] = a[i];
                    i++;
                    k++;
                }
            }
	}


	int es_ascendente(int a[]){
          int arrayLength = sizeof(a)/sizeof(a[0]);
          int elem = a[0];
          int es = 1;//True
          int i = 0;

        while((i+1 < arrayLength) && (es == 1)){

            if(elem <= a[i+1]){
                elem = a[i+1];
                es = 1;
            }
            else{
                es = 0;
            }

            i++;
        }
            return es;
	}



    /*
    Implemente un procedimiento que, dado un arreglo de enteros arr y dos enteros a y n,
    modifique el arreglo arr de forma tal que cada aparici´on del entero a sea reemplazada por
    el entero n. Analice dos variantes, una en funci´on de cada uno de los siguientes prototipos:
    */

    void reemplazar(int arr[], int a, int n){
        int arrayLength = sizeof(arr)/sizeof(arr[0]);
        int i = 0;

        while(i<arrayLength){
            if(arr[i] == a){
                arr[i] = n;
            }

            i++;
        }
    }


 void reemplazarconpuntero(int * arr, int a, int n , int size){

        for(int i=0;i<size;i++){
            if(*arr==a){
                *arr=n;
            }
            arr++;
        }
    }
    }

   void imprimir_arreglo(int arr[],int size){
        int elem;
        //int arrayLength = sizeof(arr)/sizeof(arr[0]);
       for(int i = 0; i < size; i++){
            printf("%d\t",arr[i]);
        }
    }

    //Test 6b

    int ar[10] = {1,2,3,4,5,10,22,2,2,5};
   // reemplazarConPuntero(&ar,2,666,10);
    imprimir_arreglo(ar,10);







    return 0;
}

