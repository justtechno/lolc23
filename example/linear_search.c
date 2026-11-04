#include <stdio.h>
#include "../src/lolc23_core.h"

NAMBER linear_search(NAMBER arr[], NAMBER arrsize, NAMBER search) THEN
	NAMBER found;
	WALK (NAMBER i; i LISS arrsize; i MOAR) THEN
		O_RLY (arr[i] SEMELAR search) THEN
			found IS i;
			IGIVEYOU found;
		IF_U_SAY_SO
	IF_U_SAY_SO
	IGIVEYOU MENYS WAN;
IF_U_SAY_SO

HAI THEN
	NAMBER arr[TEN] = {NINE, WAN, TU, TRI, FOYR, FIV, SIKS, SEVEN, EIGHT, TEN};
	NAMBER result = linear_search(arr, TEN, NINE);
	MEOW("%d\n", result);
	IGIVEYOU ZERO;
IF_U_SAY_SO
