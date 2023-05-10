/***************************************************************/
/**SWC :       LED(Light Emitting Diode)              **********/
/**Author :   Mohamed Khaled Elfawakhry              ***********/
/**Version :       1.0                               ***********/
/**Date :            27/3/2023                      ************/
/***************************************************************/
#include"../../LIB/STD_TYPES.h"
#include"../../LIB/BIT_MATH.h"

#include"../../MCAL/DIO/DIO_interface.h"
#include"LED_interface.h"

/*******************************************/
/**Func Name :LED_voidInit        **********/
/** i/p argument : struct Led type**********/
/** return : void                 **********/
/*******************************************/
void LED_voidInit       (LED_t* L)
{
    /* Pin -> OutPut*/
    DIO_voidSetPinDirection(L->PortNumber , L->PinNumber , OUTPUT);
    /* Initialize the led as off state */
    switch (L->LedState)
    {
    case ACTIVE_HIGH:
        DIO_voidSetPinValue(L->PortNumber , L->PinNumber , LOW );
        break;
    case ACTIVE_LOW:
        DIO_voidSetPinValue(L->PortNumber , L->PinNumber , HIGH );
        break;
    
    default:
        break;
    }
}
/*******************************************/
/**Func Name :LED_voidTurnOn      **********/
/** i/p argument : struct Led type**********/
/** return : void                 **********/
/*******************************************/
void LED_voidTurnOn     (LED_t* L)
{
   switch (L->LedState)
    {
    case ACTIVE_HIGH:
        DIO_voidSetPinValue(L->PortNumber , L->PinNumber , HIGH );
        break;
    case ACTIVE_LOW:
        DIO_voidSetPinValue(L->PortNumber , L->PinNumber , LOW );
        break;
    
    default:
        break;
    } 
}
/*******************************************/
/**Func Name :LED_voidTurnOff     **********/
/** i/p argument : struct Led type**********/
/** return : void                 **********/
/*******************************************/
void LED_voidTurnOff    (LED_t* L)
{
    switch (L->LedState)
    {
    case ACTIVE_HIGH:
        DIO_voidSetPinValue(L->PortNumber , L->PinNumber , LOW );
        break;
    case ACTIVE_LOW:
        DIO_voidSetPinValue(L->PortNumber , L->PinNumber , HIGH );
        break;
    
    default:
        break;
    } 
}
/*******************************************/
/**Func Name :LED_voidBlink       **********/
/** i/p argument : struct Led type**********/
/** return : void                 **********/
/*******************************************/
void LED_voidBlink      (LED_t* L)
{
    DIO_voidToggPinValue(L->PortNumber , L->PinNumber);
}
