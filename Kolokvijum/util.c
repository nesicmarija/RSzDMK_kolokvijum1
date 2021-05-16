#include "util.h"
#include <stdint.h>

#define TRUE 1
#define FALSE 0


	void Sort(int16_t *array, int16_t array_length, int8_t mode)
	{
		int16_t tmp;
		if(mode == UP)
		{
			for(int8_t i = 0; i < array_length; i++ )
			{
				 for(int8_t j = i + 1 ; j < array_length; i++)
				 {
					 if(array[i] > array[j])
					 {
						 tmp = array[i];
						 array[i] = array[j];
						 array[j] = tmp;
					 }
				 }
			}
		}
		else
		{
			for(int8_t i = 0; i < array_length; i++ )
					{
						 for(int8_t j = i + 1 ; j < array_length; i++)
						 {
							 if(array[i] < array[j])
							 {
								 tmp = array[i];
								 array[i] = array[j];
								 array[j] = tmp;
							 }
						 }
					}

		}
	}

	int8_t Check(int16_t *array)
	{
		int8_t i=0;
		int8_t q=array[0]/array[1];


  	while(array[i]!=0)
		{
			if(array[i]/array[i+1]!=q)
			{
			   return FALSE;
			}
		}

  	return TRUE;

	}
