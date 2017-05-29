#include <cstdlib>
#include "Generator.h"

void Generator::GenerateInputs(int size)
{
	for (int i = 0; i < size; i++)
	{
		inBox[0][i] = rand();
		inBox[1][i] = rand();
		inBox[2][i] = rand();
		inBox[3][i] = rand();
	}
}
