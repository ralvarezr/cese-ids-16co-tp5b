/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/
/**
 * @brief Estructura que representa a un alumno.
 * Contiene los apellidos, nombres y
 * nro de documento del alumno.
 * 
 */
typedef struct alumno_s {
    char apellidos[30];
    char nombres[30];
    char documento[11];
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/
/**
 * @brief Almacena en la variable cadena la información formateada de un alumno.
 * 
 * @param cadena variable donde se almacena la información formateada del alumno.
 * @param espacio tamaño de la variable cadena.
 * @param alumno estructura con la información del alumno.
 * @return true si se pudo almacenar 0 o más alumnos.
 * @return false en caso de error.
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

/**
 * @brief Almacena en la variable cadena la información formateada de todos los alumnos.
 * 
 * @param cadena variable donde se almacena la información formateada de todos los alumnos.
 * @param espacio tamaño de la variable cadena.
 * @return true si pudo almacenar a 0 o más alumnos.
 * @return false en caso de error.
 */
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
