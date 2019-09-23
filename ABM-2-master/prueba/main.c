#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcionesABM.h"
#define T 5


int main()
{

    /*indice = pedirIndiceLibre(listaDeAlumnos, T);
    if(indice == -1)
    {
        printf("No hay lugar");
    }
    else
    {
        unAlumno.estado = 0;
        unAlumno.nota = 10;
        unAlumno.legajo = 15;
        listaDeAlumnos[indice] = unAlumno;
    }*/
    eAlumno unAlumno;
    eAlumno listaDeAlumnos[T];
    int indice;
    int opcion;
    char nombreAux[T];
    int legajoAux;
    inicializarAlumnos(listaDeAlumnos, T);
    do
    {
        opcion = menuDeOpciones("1.Mostrar Alumnos\n2.Cargar Alumno\n3.Buscar Alumno\n4.Baja\n5.Salir\nElija una opcion: ");

        while (opcion!=1 && opcion!=2 && opcion!=3 && opcion!=4 && opcion!=5 && opcion!=6)
        {
            printf("Error. Ha ingresado una opcion no valida\n\n");
            printf("Debe elegir una opcion valida: ");
            scanf("%d", &opcion);
        }

        switch(opcion)
        {
        case 1:
            listarAlumnos(listaDeAlumnos, T);
            break;
        case 2:
            hardCodearDatos(listaDeAlumnos, T);
            break;
        case 3:
            printf("Ingrese el nombre del Alumno a buscar: ");
            scanf("%s",&nombreAux);
            if(buscarAlumno(listaDeAlumnos, T, nombreAux) == 0)
            {
                printf("No existe el Alumno");
            }
            break;
        case 4:
            printf("Ingrese el legajo del Alumno a Borrar: ");
            scanf("%d", &legajoAux);
            if(bajaAlumno(listaDeAlumnos, T, legajoAux) == 0)
            {
                printf("No existe Alumno con ese Legajo");
            }
            break;
        case 5:
                printf("Salir\n");
                opcion = 6;
            break;
        }
        system("pause");
        system("cls");

        }while(opcion!=6);

        return 0;
    }

