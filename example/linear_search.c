#include <stdio.h>
#include "../src/lolc23_core.h"

NAMBER linear_search(NAMBER arr[], NAMBER arrsize, NAMBER search) THEN
	NAMBER found;
	WALK (NAMBER i; i < arrsize; i++) THEN
		O_RLY (arr[i] SEMELAR search) THEN
			found = i;
			IGIVEYOU found;
		IF_U_SAY_SO
	IF_U_SAY_SO
	IGIVEYOU -1;
IF_U_SAY_SO

HAI() THEN
	NAMBER arr[10] = {9, 1, 2, 3, 4, 5, 6, 7, 8, 10};
	NAMBER result = linear_search(arr, 10, 9);
	MEOW("%d\n", result);
	IGIVEYOU 0;
IF_U_SAY_SO
