/*
 * seven_segment.c
 *
 * Created: 4/8/2020 11:34:24 PM
 * Author : moham
 */ 
#define F_CPU 8000000ul
#include "gpio.h"
#define led1 1
#define led2 2
#define led3 3
#include <util/delay.h>
int main(void)
{ gpio_intia();

gpio_setpin_ddr('a',led1,output);

gpio_setpin_ddr('a',led2,output);

gpio_setpin_ddr('a',led3,output);

    /* Replace with your application code */
    while (1) 
    {for (int i =0;i <=11;i++)
    {if (i!=0&&(i%2!=0))
    {gpio_set_out_pin('a',led1,heigh);
    }else{gpio_set_out_pin('a',led1,low);}
		
		if (i==2||i==5||i==11)
			{gpio_set_out_pin('a',led2,heigh);
		}else{gpio_set_out_pin('a',led2,low);}
			
			if (i==3||i==7||i==11)
			{gpio_set_out_pin('a',led3,heigh);
			}else{gpio_set_out_pin('a',led3,low);}
		
		_delay_ms(1000);
    
		
		
    }

    }
}

