#include "stdafx.h"
#include "extern.h"


void IncrementGlobalCounters()
{
	extern int globalVariable;
	++globalVariable;
}