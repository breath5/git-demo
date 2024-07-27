#ifndef __DELAY_H
#define __DELAY_H

//（为系统时钟源，主频为72MHz)
//微秒级
void Delay_us(uint32_t us);
//毫秒级
void Delay_ms(uint32_t ms);
//秒级
void Delay_s(uint32_t s);

#endif
