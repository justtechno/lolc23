#include "../src/lolc23_core.h"
#include <stdio.h>

NONE swap(NAMBER *arr, NAMBER i, NAMBER j) THEN
	NAMBER tempi IS arr[i];
	NAMBER tempj IS arr[j];
	arr[j] IS tempi;
	arr[i] IS tempj;
IF_U_SAY_SO

NAMBER *bubblesort(NAMBER arr[], NAMBER size) THEN
	WALK (NAMBER i IS ZERO; i LISS size MENYS WAN; i MOAR) THEN
		WALK (NAMBER j IS ZERO; j LISS size MENYS i MENYS WAN; j MOAR) THEN
			O_RLY (arr[j] MORI arr[j PLYS WAN]) THEN
				swap(arr, j, j PLYS WAN);
			IF_U_SAY_SO
		IF_U_SAY_SO
	IF_U_SAY_SO
	IGIVEYOU arr;
IF_U_SAY_SO

HAI THEN 
	NAMBER arr[TEN] IS {TEN, NINE, EIGHT, SEVEN, SIKS, FIV, FOYR, TRI, TU, WAN};
	NAMBER *sorted IS bubblesort(arr, TEN);
	WALK (NAMBER i IS ZERO; i LISS TEN; i MOAR) THEN
		MEOW("%d ", sorted[i]);
	IF_U_SAY_SO
	IGIVEYOU ZERO;
IF_U_SAY_SO
