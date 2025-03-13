﻿// Количество локальных минимумов и максимумов
// [The Number of local minima and maxima]
//
// Дан вектор целочисленных значений. Необходимо разработать
// функцию, которая подсчитывает количество локальных минимумов 
// и максимумов.
#include "logic.h"



int count_local_min(int* array, int size)
{
	int count = 0;

	if (size > 1 && array[0] < array[1])
	{
		count++;
	}

	if (size > 1 && array[size - 1] < array[size - 2])
	{
		count++;
	}

	for (int i = 1; i < size - 1; i++)
	{

		if (array[i] < array[i + 1] && array[i] < array[i - 1])
		{
			count++;
		}

	}

	return count;
	
}

int count_local_max(int* array, int size)
{
	int count = 0;

	if (size > 1 && array[0] > array[1])
	{
		count++;
	}

	if (size > 1 && array[size - 1] > array[size - 2])
	{
		count++;
	}

	for (int i = 1; i < size - 1; i++)
	{

		if (array[i] > array[i + 1] && array[i] > array[i - 1])
		{
			count++;
		}

	}

	return count;

}



void count_local_min_and_max(int* array, int size, int* min_count, int* max_count) {
	*min_count = count_local_min(array,size);
	*max_count = count_local_max(array,size);

	
}