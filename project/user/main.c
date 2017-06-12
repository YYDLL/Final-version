#include "lpc11xx.h"
#include "uart.h"
#include "delay.h"
#include "1602.h"
#include "ADC.h"
#include "key.h"
#include "MF52.h"
#include <stdio.h>
#include <string.h>
int main()
{  
	UART_Init();
	ADC_Init();
	InitLCD();	
    while(1)
	{       
			temp();   
            LCD_DisplayStr(0,0,GcRcvBuf_C);	        //显示摄氏度
            UART_SendStr(GcRcvBuf_C);       //串口显示温度
            if((LPC_GPIO3->RIS&(1<<4))==(1<<4))  // 读取RIS寄存器
            {   
                temp();       
                LCD_DisplayStr(0,1,GcRcvBuf_F);     //显示华氏度    
            }             
    }
}





