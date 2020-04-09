



#ifndef reigistar_H_

#define  registar_H_
#define mddra *((volatile unsigned char * const )0x3A)
#define mporta *((volatile unsigned char * const )0x3B)
#define mpina *((volatile unsigned char * const )0x39)
/**********************************************************/
#define mddrb *((volatile unsigned char* const )0x37)
#define mportb *((volatile unsigned char * const )0x38)
#define mpinb *((volatile unsigned char* const )0x36)
/********************************************************/
#define mddrc *((volatile unsigned char* const )0x34)
#define mportc *((volatile unsigned char* const )0x35)
#define mpinc *((volatile unsigned char *const )0x33)
/********************************************************/
#define mddrd *((volatile unsigned char *const )0x31)
#define mportd *((volatile unsigned char * const )0x32)
#define mpind *((volatile unsigned char* const)0x30)
/**********************************************/
#define  mysfior *((volatile unsigned char * const )0x50)
#define  PUD 2// pull up display
/***********************************************/
             /*EEPROM registers */
#define mEEAH *((volatile unsigned char* const)0x3f)
#define mEEAL *((volatile unsigned char* const)0x3E)
#define mEEDR *((volatile unsigned char* const)0x3d)
#define mEECR *((volatile unsigned char* const)0x3c)
#define  mEEMWE 2
#define  mEERE 0
#define  mEEWE 1
/****************************************************/













#endif