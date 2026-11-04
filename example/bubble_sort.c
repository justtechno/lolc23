#include "../src/lolc23_core.h"
#include <stdio.h>

NONE swap(NAMBER *arr, NAMBER i, NAMBER j) THEN
	NAMBER tempi = arr[i];
	NAMBER tempj = arr[j];
	arr[j] = tempi;
	arr[i] = tempj;
IF_U_SAY_SO

NAMBER *bubblesort(NAMBER arr[], NAMBER size) THEN
	WALK (NAMBER i = 0; i < size - 1; i++) THEN
		WALK (NAMBER j = 0; j < size - i - 1; j++) THEN
			O_RLY (arr[j] > arr[j + 1]) THEN
				swap(arr, j, j + 1);
			IF_U_SAY_SO
		IF_U_SAY_SO
	IF_U_SAY_SO
	IGIVEYOU arr;
IF_U_SAY_SO

HAI() THEN 
	NAMBER arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	NAMBER *sorted = bubblesort(arr, 10);
	WALK (NAMBER i = 0; i < 10; i++) THEN
		MEOW("%d ", sorted[i]);
	IF_U_SAY_SO
	IGIVEYOU 0;
IF_U_SAY_SO
