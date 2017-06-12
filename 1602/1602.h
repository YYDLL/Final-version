#include "LPC11xx.h"

#define LCD_RS_LOW 		LPC_GPIO2->DATA &= ~(1<<0)	//命令状态引脚
#define LCD_RS_HIGH		LPC_GPIO2->DATA |=  (1<<0)	//
#define LCD_RW_LOW		LPC_GPIO2->DATA &= ~(1<<1)	//读写使能引脚
#define LCD_RW_HIGH		LPC_GPIO2->DATA |=  (1<<1)	//
#define LCD_E_LOW		LPC_GPIO2->DATA &= ~(1<<2)	//使能端
#define LCD_E_HIGH		LPC_GPIO2->DATA |=  (1<<2)	//
#define LCD_DATAPORT	LPC_GPIO2->DATA	            //DB0～DB7数据端口
#define LCD_DATA_IN		LPC_GPIO2->DIR &= ~0xFFF	//设置端口为输入
#define LCD_DATA_OUT	LPC_GPIO2->DIR |=  0xFFF	//设置端口为输出

extern uint8_t LCD_DisplayStr(uint8_t x, uint8_t y, uint8_t *pStr);        //显示字符




