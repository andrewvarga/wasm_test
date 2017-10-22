
#include <stdint.h>

int counter1 = 23;
int counter2 = 2;

uint8_t transform(uint8_t* buf, int len) {
	
	for (int i = 0; i < len; i++) {
		buf[i] += 6;
	}
	
	return buf[0];
}