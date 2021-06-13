#include <stdint.h>
#include <stdio.h>
#include <string.h>
void main()
{
	uint16_t x = 0x04D2;
	uint8_t x_hight = 0;
	uint8_t x_low = 0;
	uint8_t* pointer = &x;
	x_low = *pointer;
	x_hight = *(pointer + 1);
	printf("x_hight: %x\r\n", x_hight);
	printf("x_low: %x\r\n", x_low);
}