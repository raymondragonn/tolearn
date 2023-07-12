/*
    !PARÁMETRO       ARCHIVO EN MODO:    
*       r (READ)        Lectura. (Abre)
*       w (WRITE)       Escritura. (Crea)
*       a (ADD)         Añadir.

*       rb              Lectura para binario. (Abre)
*       wb              Escritura para binario. (Crea)
*       ab              Añadir para binario.

*       r+              Lectura y escritura. (Abre)
?       w+              Lectura y escritura. (Crea)
*       a+              Lectura y escritura. (Añade)

*       rb+             Lectura y escritura en binario. (Abre)
?       wb+             Lectura y escribtura en binario. (Crea)
*       ab+             Lectura y escritura en binario. (Añade)

!FUNCIONES - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
?fputc(Caracter, ApuntadorArchivo)
*Es una función que nos permite escribir un caracter en el archivo, regresa el caracter que se
*presionó en caso de que la operación se realice con éxito o EOF si falló. 
!El apuntador es el que nos brinda la función open.

?fclose(ApuntadorArchivo)
*Guarda los cambios en el archivo, cierra la conexión y libera los recursos usados por el apuntador.

    !NOMBRE         FUNCIÓN
    *fopen()        Abre un archivo.
    *fclose()       Cierra un archivo.
    *fgets()        Lee una cadena de un archivo.
    *fputs()        Escribe una cadena en un archivo.
    *fseek()        Busca un byte específico de un archivo.
    *fprintf()      Escribe una salida con formato en el archivo.
    *fscanf()       Una entrata con formato desde el archivo.
    *feof()         Devuelve "verdadero" si se llega al final del archivo.
    *ferror()       Devuelve "verdadero" si se produce un error.
    *rewind()       Coloca el localizador de posición del archivo al principio del mismo.
    *remove()       Borra un archivo.
    *fflush()       Vacía un archivo.
    
*/