#ifndef UTIL_H_
#define UTIL_H_

#include <stdint.h>

#define UP 1
#define DOWN 0

/***
 * void Sort -
 * sortia niz array duzine array_lenght
 * @param UP -sortira niz od najveceg do najmanjeg
 * @param DOWN - sortira niz od najmanjeg do najveceg
 * @return  Nema povratnu vrednost
 *
 */
void Sort(int16_t *array, int16_t array_length, int8_t mode);


/***
 * int8_t Check -
 * vrsi proveru da li je niz geometrijski
 * @return  ima povratnu vrednost
 *
 */
int8_t Check(int16_t *array);

#endif /* UTIL_H_ */
