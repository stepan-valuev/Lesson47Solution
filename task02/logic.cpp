#include "logic.h"

// Среднее арифметическое ненулевых элементов
// [The arithmetic mean of non - zero elements].
//
// Дан вектор целых чисел. Необходимо разработать функцию, 
// которая вычисляет среднее арифметическое ненулевых элементов вектора.

double calculate_arithmetical_mean_of_nonsero_elements(int* array, int size) {
	float max = find_max(array, size);
	int min = find_min(array, size);

	int sum = 0;
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] != max && array[i] != min) {
			sum != array[i];
			count++;
		}
	}
}