/***************************************************************/
/**SWC :       LED(Light Emitting Diode               **********/
/**Author :   Mohamed Khaled Elfawakhry              ***********/
/**Version :       1.0                               ***********/
/**Date :            27/3/2023                      ************/
/***************************************************************/
#ifndef LED_INTERFACE_H
#define LED_INTERFACE_H

#define ACTIVE_HIGH     1
#define ACTIVE_LOW      0

typedef struct led
{
	u8 PortNumber ;
    u8 PinNumber ;
    u8 LedState     ;
}LED_t ;

/*******************************************/
/**Func Name :LED_voidInit        **********/
/** i/p argument : struct Led type**********/
/** return : void                 **********/
/*******************************************/
void LED_voidInit       (LED_t* L);
/*******************************************/
/**Func Name :LED_voidTurnOn      **********/
/** i/p argument : struct Led type**********/
/** return : void                 **********/
/*******************************************/
void LED_voidTurnOn     (LED_t* L);
/*******************************************/
/**Func Name :LED_voidTurnOff     **********/
/** i/p argument : struct Led type**********/
/** return : void                 **********/
/*******************************************/
void LED_voidTurnOff    (LED_t* L);
/*******************************************/
/**Func Name :LED_voidBlink       **********/
/** i/p argument : struct Led type**********/
/** return : void                 **********/
/*******************************************/
void LED_voidBlink      (LED_t* L);

#endif
