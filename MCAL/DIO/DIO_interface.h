/***************************************************************/
/**SWC :       DIO(Digital Input Output)              **********/
/**Author :   Mohamed Khaled Elfawakhry              ***********/
/**Version :       1.0                               ***********/
/**Date :            27/3/2023                      ************/
/***************************************************************/
/*      File Gaurd    */
#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H
/* Macros as PortId options */
#define PORTA       0
#define PORTB       1
#define PORTC       2
#define PORTD       3
/* Macros as PinId options */
#define PIN0       0
#define PIN1       1
#define PIN2       2
#define PIN3       3
#define PIN4       4
#define PIN5       5
#define PIN6       6
#define PIN7       7

#define LOW        0
#define HIGH       1

#define INPUT        0
#define OUTPUT       1
/*******************************************************************************/
/* Func Name : DIO_voidSetPinValue                                             */
/* i/p arguments : Copy_u8PortId options : PORTA , PORTB , PORTC , PORTD       */
/*   Copy_u8PinId : PIN0 , PIN1 , PIN2 , PIN3 , PIN4 ,PIN5 , PIN6 , PIN7       */
/*   Copy_u8Value : HIGH , LOW                                                 */
/*return : void                                                                */
/*******************************************************************************/
void DIO_voidSetPinValue    (u8 Copy_u8PortId , u8 Copy_u8PinId , u8 Copy_u8Value);
/*******************************************************************************/
/* Func Name : DIO_voidSetPinValue                                             */
/* i/p arguments : Copy_u8PortId options : PORTA , PORTB , PORTC , PORTD       */
/*   Copy_u8PinId : PIN0 , PIN1 , PIN2 , PIN3 , PIN4 ,PIN5 , PIN6 , PIN7       */
/*   Copy_u8Value : INPUT , OUTPUT                                             */
/*return : void                                                                */
/*******************************************************************************/
void DIO_voidSetPinDirection(u8 Copy_u8PortId , u8 Copy_u8PinId , u8 Copy_u8Direction);
/*******************************************************************************/
/* Func Name : DIO_u8GetPinValue                                               */
/* i/p arguments : Copy_u8PortId options : PORTA , PORTB , PORTC , PORTD       */
/*   Copy_u8PinId : PIN0 , PIN1 , PIN2 , PIN3 , PIN4 ,PIN5 , PIN6 , PIN7       */
/*return : unsigned char                                                       */
/*******************************************************************************/
u8   DIO_u8GetPinValue      (u8 Copy_u8PortId , u8 Copy_u8PinId );
/*******************************************************************************/
/* Func Name : DIO_voidSetPortValue                                             */
/* i/p arguments : Copy_u8PortId options : PORTA , PORTB , PORTC , PORTD       */
/*   Copy_u8Value : HIGH , LOW                                                 */
/*return : void                                                                */
/*******************************************************************************/
void DIO_voidSetPortValue   (u8 Copy_u8PortId  , u8 Copy_u8Value);
/*******************************************************************************/
/* Func Name : DIO_voidSetPortDirection                                         */
/* i/p arguments : Copy_u8PortId options : PORTA , PORTB , PORTC , PORTD       */
/*   Copy_u8Value : INPUT , OUTPUT                                             */
/*return : void                                                                */
/*******************************************************************************/
void DIO_voidSetPortDirection(u8 Copy_u8PortId , u8 Copy_u8Direction);
/*******************************************************************************/
/* Func Name : DIO_u8GetPinValue                                               */
/* i/p arguments : Copy_u8PortId options : PORTA , PORTB , PORTC , PORTD       */
/*return : unsigned char                                                       */
/*******************************************************************************/
u8   DIO_u8GetPortValue      (u8 Copy_u8PortId  );
/*******************************************************************************/
/* Func Name : DIO_voidToggPinValue                                            */
/* i/p arguments : Copy_u8PortId options : PORTA , PORTB , PORTC , PORTD       */
/*   Copy_u8PinId : PIN0 , PIN1 , PIN2 , PIN3 , PIN4 ,PIN5 , PIN6 , PIN7       */
/*return : void                                                                */
/*******************************************************************************/
void DIO_voidToggPinValue (u8 Copy_u8PortId , u8 Copy_u8PinId );

#endif
