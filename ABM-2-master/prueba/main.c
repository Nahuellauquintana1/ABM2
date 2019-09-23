#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcionesABM.h"
#include "pedirValidar.h"
#define T 5


int main()
{
    eAlumno unAlumno;
    eAlumno listaDeAlumnos[T];
    int indice, opcion, notaAux, numeroAux,legajoAuxInt;
    char legajoAux[50];
    char nombreAux[50];
    inicializarAlumnos(listaDeAlumnos, T);

    do
    {
        opcion = menuDeOpciones("1.Mostrar Alumnos\n2.Cargar Alumno\n3.Buscar Alumno\n4.Baja\n5.Modificar Nota\n6.Salir\nElija una opcion: ");

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
            /*if(cargarNuevoCosa(listaDeAlumnos, T) == -1)
            {
                printf("No hay espacio");
            }*/
            hardCodearDatos(listaDeAlumnos, T);
            break;
        case 3:
            printf("Ingrese el nombre del Alumno a buscar: ");
            scanf("%s",&nombreAux);
            strlwr(nombreAux);
            if(buscarAlumno(listaDeAlumnos, T, nombreAux) == 0)
            {
                printf("No existe el Alumno\n");
            }
            break;
        case 4:
            legajoAuxInt = devuelveInt("Ingrese Legajo del Alumno a dar de Baja: ");
            //fflush(stdin);
            if(bajaAlumno(listaDeAlumnos, T, legajoAux) == 0)
            {
                printf("No existe Alumno con ese Legajo\n");
            }
            else
            {
                printf("Se dio de baja al Alumno de forma exitosa\n");
            }

            break;

        case 5:
            listarAlumnos(listaDeAlumnos, T);
            printf("Ingrese el Legajo del Alumno a Modificar: ");
            scanf("%d", &legajoAux);
            numeroAux = buscarAlumnoPorLegajo(listaDeAlumnos, T, legajoAux);
            if(numeroAux!= 0)
            {
                mostrarUnAlumno(listaDeAlumnos[numeroAux]);
                printf("Ingrese la nueva Nota: ");
                scanf("%d", &notaAux);
                if(modificarCosa(listaDeAlumnos, T ,legajoAux, notaAux)== 0)
                {
                    printf("No se pudo realizar la modificacion\n");
                }
                else
                {
                    printf("Modificacion Exitosa\n");
                }
            }
            else
            {
                printf("No existe alumno con ese Legajo\n");
            }
            break;
        case 6:
            opcion = 7;
            break;
        }
        system("pause");
        system("cls");

    }
    while(opcion!=6);

    return 0;
}

