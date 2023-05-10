/***************************************************************/
/**SWC :       DIO(Digital Input Output)              **********/
/**Author :   Mohamed Khaled Elfawakhry              ***********/
/**Version :       1.0                               ***********/
/**Date :            27/3/2023                      ************/
/***************************************************************/
/*      File Gaurd    */
#ifndef DIO_PRIVATE_H
#define DIO_PRIVATE_H

/*  PORT A    */
#define DDRA_REG     *((volatile u8*)0x3A)
#define PORTA_REG    *((volatile u8*)0x3B)
#define PINA_REG     *((volatile u8*)0x39)
/*  PORT B    */
#define DDRB_REG     *((volatile u8*)0x37)
#define PORTB_REG    *((volatile u8*)0x38)
#define PINB_REG     *((volatile u8*)0x36)
/*  PORT C    */
#define DDRC_REG     *((volatile u8*)0x35)
#define PORTC_REG    *((volatile u8*)0x34)
#define PINC_REG     *((volatile u8*)0x33)
/*  PORT D    */
#define DDRD_REG     *((volatile u8*)0x32)
#define PORTD_REG    *((volatile u8*)0x31)
#define PIND_REG     *((volatile u8*)0x30)

#endif
