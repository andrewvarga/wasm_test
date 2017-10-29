
#include <stdint.h>

uint8_t* buffer = 0;

int transform(int length) {
	
	for (int i = 0; i < length; ++i)
	{
		buffer[i] = buffer[i] + 1;
	}
	
	return buffer[0];
}