// code = utf-8
#ifndef __delay_h
#define __delay_h

#include "stm32f10x.h"
#include "stm32f10x_conf.h"

void delay1ms(uint32_t t);
void delay1us_init(void);
void delay1us(uint8_t t);

#endif
