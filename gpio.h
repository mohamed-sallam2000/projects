#include "rigistars.h"
#include "datatyps.h"
#include "stdmach.h"
//#include "gpio.c"
#define heigh_nible 1
#define low_nible 0
#define intial 0x00
#define heigh 1
#define low  0
#define input 0
#define output 1
#define pull_up 2
void gpio_intia();
/**********************************************/
void gpio_setpin_ddr(u8 port,u8 pinnum,u8 stat);
void gpio_set_out_pin(u8 port,u8 pinnum,u8 stat);
u8  gpio_readpin (u8 port,u8 pinum);
/*********************************************/
void gpio_set_dir_heighorlow_nibble(u8 port,u8 HorL,u8 stat);
void gpio_write_nible(u8 port,u8 HorL,u8 value);
/*******************************************/
void gpio_write_port(u8 port,u8 value);
void gpio_set_port(u8 port,u8 stat);
u8 gpio_read_port(u8 port);
/********************EEPROM**************************/
void EEwrite(u16 addrs,u8 value);
u8 EEread(u16 addrs);
/****************************************************/