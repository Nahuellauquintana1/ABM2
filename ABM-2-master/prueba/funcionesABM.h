#define T 5

typedef struct
{
    char nombre[T];
    int nota;
    int legajo;
    int estado;// 0 = Ocupdado -- 1 = Vacio

} eAlumno;

void inicializarAlumnos (eAlumno listaDeAlumnos[], int tam);
void listarAlumnos (eAlumno listaDeAlumnos[], int tam);
void mostrarUnAlumno (eAlumno unAlumno);
int pedirIndiceLibre(eAlumno listaDeAlumnos[], int tam);
void cargaLogica(eAlumno listaDeAlumnos[], int tam);
int menuDeOpciones(char[]);
int buscarAlumno(eAlumno listaDeAlumnos[], int tam, char nombre[]);
int bajaAlumno (eAlumno listaDeAlumnos[], int tam, int legajo);
//int cargaLogica(eAlumno listaDeAlumnos[], int);
void hardCodearDatos(eAlumno listaDeAlumnos[], int tam);
