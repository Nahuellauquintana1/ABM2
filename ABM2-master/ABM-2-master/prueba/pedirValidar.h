//PEDIDO DE DATOS
/** \brief Solicita un numero al usuario y devuelve el resultado
 *
 * \param mensaje Es el mensaje que será mostrado al usuario
 * \return Es el numero ingresado por el usuario.
 */
int devuelveInt(char mensaje[]);



/** \brief Solicita un numero al usuario y devuelve el resultado
 *
 * \param mensaje Es el mensaje que será mostrado al usuario
 * \return Es el numero ingresado por el usuario.
 */
float devuelveFloat(char mensaje[]);



/** \brief Solicita un caracter al usuario y devuelve el resultado
 *
 * \param mensaje Es el mensaje que será mostrado al usuario
 * \return Es el caracter ingresado por el usuario.
 */
char devuelveChar(char mensaje[]);
//PEDIDO DE DATOS




//VALIDACIONES
/** \brief Funcion que hace mayusculas las primeras letras de los nombres o strings ingresados.
 *
 * \param caracter[] char string que va a ser modificado.
 * \return void
 */
void validacionMayuscula(char caracter[]);



/** \brief Verifica si el valor recibido es numerico.
 *
 * \param str Array con la cadena que va a ser analizada.
 * \return 1 si es numero // 0 si no es numero.
 */
int validacionNumero(char str[]);



/** \brief Verifica si el valor recibido contiene solamente numeros, + y -.
 *
 * \param str Array con la cadena que va a ser analizada.
 * \return 1 si es numero, con espacios y guion // 0 si no es numero.
 */
int validacionTelefono(char str[]);



/** \brief Verifica si el valor recibido contiene solamente letras.
 *
 * \param str Array con la cadena que va a ser analizada.
 * \return 1 si contiene solo espacios y letras // 0 si contiene numero, etc.
 */
int validacionSoloCaracteres(char str[]);



/** \brief Verifica si el valor recibido contiene solo letras y numeros.
 *
 * \param str Array con la cadena que va a ser analizada.
 * \return 1 si contiene solo espacio o letras y numeros // 0 si no.
 */
int validacionAlfaNumerica(char str[]);



/** \brief Solicita un texto al usuario.
 *
 * \param Mensaje que se le mostrara al Usuario
 * \param input Array donde se cargara el texto ingresado.
 * \return void.
 */
void pideString(char mensaje[], char input[]);



/** \brief Solicita un texto al usuario y lo devuelve.
 *
 * \param Mensaje que se le mostrara al Usuario
 * \param input Array donde se cargará el texto ingresado.
 * \return 1 si el texto contiene SOLO letras.
 */
int pideStringLetras(char mensaje[], char input[]);



/** \brief Solicita un texto numerico al usuario y lo devuelve
 *
 * \param Mensaje que se le mostrara al Usuario
 * \param input Array donde se cargara el texto ingresado.
 * \return 1 si el texto contiene SOLO numeros.
 */
int pideStringNumeros(char mensaje[], char input[]);



/**
 * \brief Solicita un texto Alfa numérico al usuario y lo devuelve.
 * \param char* Es el mensaje a ser mostrado.
 * \param char* puntero donde se cargará el texto ingresado.
 * \return 1 si el texto contiene solo números enteros o letras.
 */
int pideAlfaNumerico(char mensaje[], char input[]);
