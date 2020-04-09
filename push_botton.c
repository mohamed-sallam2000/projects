void set_botton(u8 port,u8 pin ){
	gpio_setpin_ddr(port,pin,input)
;	
}
u8 read_botton(u8 port,u8 pin){
	
	return gpio_readpin(port,pin);
	
}