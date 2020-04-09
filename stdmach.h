#ifndef STDMACH_H_INCLUDED
#define STDMACH_H_INCLUDED


#define set_Bit(reg,bit) reg|=(1<<bit)

#define clear_Bit(reg,bit) (reg&=(~(1<<bit)))

#define toggle_Bit(reg,bit) reg^=(1<<bit)


#define read_Bit(reg,bit)(reg=((reg&=1<<bit)>>bit))

#endif // STDMACH_H_INCLUDED
