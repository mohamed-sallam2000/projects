#include "rigistars.h"
#include "datatyps.h"
#include "gpio.h"
//#define intial 0x00
#define heigh 1
#define low  0
#define input 0
#define output 1
#define pull_up 2
#define heigh_nible 1
#define low_nible 0
void gpio_setpin_ddr(u8 port,u8 pinnum,u8 stat)
{
	if (stat==output)
	{
	switch(port){
	case 'A' :
	case 'a' :
	
		set_Bit(mddra,pinnum);
		break;
	case 'B':
	case 'b':
		set_Bit(mddrb,pinnum);

		break;
	case 'c':
	case 'C':
	set_Bit(mddrc,pinnum);
		break;
	case 'D':
	case 'd':
		set_Bit(mddrd,pinnum);
		break;
	default:break;
	}
}
	else if(stat==input)
	{
	
	switch (port) 
	{
	case 'A':
	case 'a':
	clear_Bit(mddra,pinnum);
	break;
	case 'B':
	case 'b':
	clear_Bit(mddrb,pinnum);

	break;
	case 'c':
	case 'C':
	clear_Bit(mddrc,pinnum);
	break;
	case 'D':
	case 'd':
	clear_Bit(mddrd,pinnum);
	break;
	default:break;
	}
}
		else if(stat==pull_up)
		{clear_Bit(mysfior,PUD);
			switch(port)
			{
				
				
				case 'A':
				case'a':
				clear_Bit(mddra,pinnum);
				set_Bit(mporta,pinnum);
				break;
				case 'B':
				case 'b':
				clear_Bit(mddrb,pinnum);
				set_Bit(mportb,pinnum);
				break;
				case 'c':
				case 'C':
				clear_Bit(mddrc,pinnum);
				set_Bit(mportc,pinnum);
				break;
				case 'D':
				case 'd':
				clear_Bit(mddrd,pinnum);
				set_Bit(mportd,pinnum);
				break;
				default:
				break;}
		
		
		
		
	
	} else
	{}
	}
void gpio_set_out_pin(u8 port,u8 pinnum,u8 stat){
	
if (stat==1)
{
	switch(port){
	case 'A':
	case 'a':
		set_Bit(mporta,pinnum);
		break;
	case 'B':
	case 'b':
	set_Bit(mportb,pinnum);

	break;
	case 'C':
	case 'c':
	set_Bit(mportc,pinnum );
	break;
	case 'D':
	case 'd':
	set_Bit(mportd,pinnum);
break;
default:break;}
} 
else if(stat==low){
	
	
		switch(port){
		case 'A':
		case 'a':
		clear_Bit(mporta,pinnum);
		break;
		case 'B':
		case 'b':
		clear_Bit(mportb,pinnum);

		break;
		case 'c':
		case 'C':
		clear_Bit(mportc,pinnum);
		break;
		case 'D':
		case 'd':
		clear_Bit(mportd,pinnum);
		break;
		default:break;
		}
}
	else{}
	
	
}
u8 gpio_readpin(u8 port,u8 pinum){
	

	switch(port){
		case 'A':
		case 'a':
		return read_Bit(mpina,pinum);
		break;
		case 'B':
		case 'b':
		return read_Bit(mpinb,pinum);
		break;
		case 'c':
		case 'C':
		return read_Bit(mpinc,pinum);
		break;
		case 'D':
		case 'd':
		return read_Bit(mpind,pinum);
		break;
		default:break;
		}


	
	
	
}	
void gpio_set_dir_heighorlow_nibble(u8 port,u8 HorL,u8 stat)
	{
		if (HorL==heigh)
		{
		
		
		if (stat==input)
		{
			switch(port)
			{
			case 'a':
			case 'A':
						mddra &=0x0f;
break;			
		case 'b':
		case'B':
		mddrb&=0x0f;
		break;
		case 'c':
		case 'C':
		mddrc&=0x0f;
		break;	
		
		case'd':
		case'D':
		mddrd&=0x0f;
		break;default:
		break;
		}
			}
		
		else if(stat==output){switch(port)
			{
			case 'a':
			case 'A':
			mddra |=0xf0;
			break;
			case'b':
			case'B':
			mddrb|=0xf0;
			break;
			case'c':
			case'C':
			mddrc|=0xf0;
			break;
			
			case'd':
			case'D':
			mddrd|=0xf0;
			break;
			default:
			break;
		}
		}
		}
		else if (HorL==low)
		{
			if (stat==input)
			{
				switch(port)
				{
					case 'a':
					case 'A':
					mddra &=0xf0;
					break;
					case 'b':
					case'B':
					mddrb&=0xf0;
					break;
					case 'c':
					case'C':
					mddrc&=0xf0;
					break;
					
					case 'd':
					case 'D':
					mddrd&=0xf0;
					break;default:
					break;
				}
			}
			
			else if(stat==output){switch(port)
				{
					case 'a':
					case 'A':
					mddra |=0x0f;
					break;
					case'b':
					case'B':
					mddrb|=0x0f;
					break;
					case'c':
					case'C':
					mddrc|=0x0f;
					break;
					
					case'd':
					case'D':
					mddrd|=0x0f;
					break;
					default:
					break;
				}
			}	
			
		}
		
		
		
	}
void gpio_write_nible(u8 port,u8 HorL,u8 value)
{
	if (HorL==low)
	{
		switch(port)
		{value &=0x0f;
		case 'a':
		case 'A':
		mporta&=0xf0;
		mporta|=value;
		break;
				case 'b':
				case 'B':
				mportb&=0xf0;
				mportb|=value;
				break;
						case 'C':
						case 'c':
						mportc &=0xf0;
						mportc |=value;
						break;
								case 'd':
								case 'D':
				mportd&=0xf0;
				mportd|=value;				break;
								default:break;
	}
	}else if (HorL==heigh)
	{	value=(value<<4);	
		switch(port)
		{
			case 'a':
			case 'A':
			mporta&=0x0f;
			mporta|=value;
			break;
			case 'b':
			case 'B':
			mportb&=0x0f;
			mportb|=value;
			break;
			case 'C':
			case 'c':
			mportc&=0x0f;
			mportc|=value;
			break;
			case 'd':
			case 'D':
			mportd&=0x0f;
			mportd|=value;
			break;
			default:break;
	}
	}
	
	}
void gpio_write_port(u8 port,u8 value){
	switch(port)
	{
		case 'A':
		case 'a':
		mporta=value;
		break;
		case 'B':
		case 'b':mportb=value;
		break;
		case 'c':
		case 'C':mpinc=value;
		break;
		case 'D':
		case 'd':mportd=value;break;
		default:break;
	}
	
	
}
void gpio_set_port(u8 port,u8 stat){
	
	if (stat==output)
	{
	
		switch(port)
		{
			case 'A':
			case 'a':
			mddra=0xff;
			break;
			case 'B':
			case 'b':mddrb=0xff;
			break;
			case 'c':
			case 'C':mddrc=0xff;
			break;
			case 'D':
			case 'd':mddrd=0xff;break;
			default:break;
		}
		
	}else{
	switch(port)
	{
		case 'A':
		case 'a':
		mddra=0x00;
		break;
		case 'B':
		case 'b':mddrb=0x00;
		break;
		case 'c':
		case 'C':mddrc=0x00;
		break;
		case 'D':
		case 'd':mddrd=0x00;break;
		default:break;
	}
	}
}
u8 gpio_read_port(u8 port){
	
	
	switch(port)
	{
		case 'A':
		case 'a':
		return mporta;
		break;
		case 'B':
		case 'b':return mportb;
		break;
		case 'c':
		case 'C':return mportc;
		break;
		case 'D':
		case 'd':return mportd;break;
		default:break;
	}
	
	
	
	
}	
void EEwrite(u16 addrs,u8 value){
	mEEAH=(u8)(addrs>>8);
	mEEAL=(u8)addrs;
	mEEDR=value;
	set_Bit(mEECR,mEEMWE);
	set_Bit(mEECR,mEEWE);
	while(mEECR>>mEEWE);
	
	
}	

		
		
		
		
		
		
		
		
		
		
		
		

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
void gpio_intia(){
	
	mddra=0x00;
	mddrb=0x00;
	mddrc=0x00;
	mddrd=0x00;
	
	
}
	
	
	
