/***************************************************************/
/**SWC :       DIO(Digital Input Output)              **********/
/**Author :   Mohamed Khaled Elfawakhry              ***********/
/**Version :       1.0                               ***********/
/**Date :            27/3/2023                      ************/
/***************************************************************/
/* Inclusions */
#include"../../LIB/STD_TYPES.h"
#include"../../LIB/BIT_MATH.h"
#include"DIO_interface.h"
#include"DIO_private.h"
#include"DIO_config.h"
/*******************************************************************************/
/* Func Name : DIO_voidSetPinValue                                             */
/* i/p arguments : Copy_u8PortId options : PORTA , PORTB , PORTC , PORTD       */
/*   Copy_u8PinId : PIN0 , PIN1 , PIN2 , PIN3 , PIN4 ,PIN5 , PIN6 , PIN7       */
/*   Copy_u8Value : HIGH , LOW                                                 */
/*return : void                                                                */
/*******************************************************************************/
void DIO_voidSetPinValue    (u8 Copy_u8PortId , u8 Copy_u8PinId , u8 Copy_u8Value)
{
    /*i/p validation */
    if(Copy_u8PortId > PORTD || Copy_u8PinId > PIN7)
    {
        // Do Nothing
    }
    else
    {
        switch(Copy_u8Value)
        {
            case LOW :  switch(Copy_u8PortId)
                        {
                            case PORTA : /* Action */
                                        CLR_BIT(PORTA_REG , Copy_u8PinId);
                                        break;

                            case PORTB :
                                        CLR_BIT(PORTB_REG , Copy_u8PinId);
                                        break;

                            case PORTC :
                                        CLR_BIT(PORTC_REG , Copy_u8PinId);
                                        break;

                            case PORTD :
                                        CLR_BIT(PORTD_REG , Copy_u8PinId);
                                        break;
                            default :          
                                        break;

                        }
                        break;

            case HIGH : switch(Copy_u8PortId)
                        {
                            case PORTA : /* Action */
                                        SET_BIT(PORTA_REG , Copy_u8PinId);
                                        break;

                            case PORTB :
                                        SET_BIT(PORTB_REG , Copy_u8PinId);
                                        break;

                            case PORTC :
                                        SET_BIT(PORTC_REG , Copy_u8PinId);
                                        break;

                            case PORTD :
                                        SET_BIT(PORTD_REG , Copy_u8PinId);
                                        break;
                            default :          
                                        break;

                        }
                        break;
            default  : 
                        break;
        }
    }
    
}
/*******************************************************************************/
/* Func Name : DIO_voidSetPinDirection                                         */
/* i/p arguments : Copy_u8PortId options : PORTA , PORTB , PORTC , PORTD       */
/*   Copy_u8PinId : PIN0 , PIN1 , PIN2 , PIN3 , PIN4 ,PIN5 , PIN6 , PIN7       */
/*   Copy_u8Value : INPUT , OUTPUT                                             */
/*return : void                                                                */
/*******************************************************************************/
void DIO_voidSetPinDirection(u8 Copy_u8PortId , u8 Copy_u8PinId , u8 Copy_u8Direction)
{
    /*i/p validation */
    if(Copy_u8PortId > PORTD || Copy_u8PinId > PIN7)
    {
        // Do Nothing
    }
    else
    {
        switch(Copy_u8Direction)
        {
            case INPUT :  switch(Copy_u8PortId)
                        {
                            case PORTA : /* Action */
                                        CLR_BIT(DDRA_REG , Copy_u8PinId);
                                        break;
                                        
                            case PORTB :
                                        CLR_BIT(DDRB_REG , Copy_u8PinId);
                                        break;
                                        
                            case PORTC :
                                        CLR_BIT(DDRC_REG , Copy_u8PinId);
                                        break;
                                        
                            case PORTD :
                                        CLR_BIT(DDRD_REG , Copy_u8PinId);
                                        break;
                            default :          
                                        break;
                                        
                        }
                        break;
                        
            case OUTPUT : switch(Copy_u8PortId)
                        {
                            case PORTA : /* Action */
                                        SET_BIT(DDRA_REG , Copy_u8PinId);
                                        break;
                                        
                            case PORTB :
                                        SET_BIT(DDRB_REG , Copy_u8PinId);
                                        break;
                                        
                            case PORTC :
                                        SET_BIT(DDRC_REG , Copy_u8PinId);
                                        break;
                                        
                            case PORTD :
                                        SET_BIT(DDRD_REG , Copy_u8PinId);
                                        break;
                            default :          
                                        break;
                                        
                        }
                        break;
            default  : 
                        break;
        }
    }
}
/*******************************************************************************/
/* Func Name : DIO_u8GetPinValue                                               */
/* i/p arguments : Copy_u8PortId options : PORTA , PORTB , PORTC , PORTD       */
/*   Copy_u8PinId : PIN0 , PIN1 , PIN2 , PIN3 , PIN4 ,PIN5 , PIN6 , PIN7       */
/*return : unsigned char                                                       */
/*******************************************************************************/
u8   DIO_u8GetPinValue      (u8 Copy_u8PortId , u8 Copy_u8PinId )
{
    u8 Local_u8ReturnedValue ; 
    switch(Copy_u8PortId)
    {
        case PORTA :   Local_u8ReturnedValue = GET_BIT(PINA_REG , Copy_u8PinId);
                    break;
        case PORTB :   Local_u8ReturnedValue = GET_BIT(PINB_REG , Copy_u8PinId);
                    break;
        case PORTC :   Local_u8ReturnedValue = GET_BIT(PINC_REG , Copy_u8PinId);
                    break;
        case PORTD :  Local_u8ReturnedValue =  GET_BIT(PIND_REG , Copy_u8PinId);
                    break;
        default :   
                    break;
        
    }
    return Local_u8ReturnedValue ;
}
/*******************************************************************************/
/* Func Name : DIO_voidSetPortValue                                             */
/* i/p arguments : Copy_u8PortId options : PORTA , PORTB , PORTC , PORTD       */
/*   Copy_u8Value : HIGH , LOW                                                 */
/*return : void                                                                */
/*******************************************************************************/
void DIO_voidSetPortValue   (u8 Copy_u8PortId  , u8 Copy_u8Value)
{
	/*i/p validation */
	if(Copy_u8PortId > PORTD )
	{
		// Do Nothing
	}
	else
	{
		switch(Copy_u8PortId)
		{
		case PORTA : /* Action */
			PORTA_REG = Copy_u8Value ;
			break;

		case PORTB :
			PORTB_REG = Copy_u8Value ;
			break;

		case PORTC :
			PORTC_REG = Copy_u8Value ;
			break;

		case PORTD :
			PORTD_REG = Copy_u8Value ;
			break;
		default :
			break;

		}

	}
}
/*******************************************************************************/
/* Func Name : DIO_voidSetPortDirection                                         */
/* i/p arguments : Copy_u8PortId options : PORTA , PORTB , PORTC , PORTD       */
/*   Copy_u8Value : INPUT , OUTPUT                                             */
/*return : void                                                                */
/*******************************************************************************/
    void DIO_voidSetPortDirection(u8 Copy_u8PortId , u8 Copy_u8Direction)
    {
    	/*i/p validation */
    	if(Copy_u8PortId > PORTD)
    	{
    		// Do Nothing
    	}
    	else
    	{
    		switch(Copy_u8Direction)
    		{
    		case INPUT :  switch(Copy_u8PortId)
    		{
    		case PORTA : /* Action */
    			DDRA_REG = 0x00 ;
    			break;

    		case PORTB :
    			DDRB_REG = 0x00 ;
    			break;

    		case PORTC :
    			DDRC_REG = 0x00 ;
    			break;

    		case PORTD :
    			DDRD_REG = 0x00 ;
    			break;
    		default :
    			break;

    		}
    		break;

    		case OUTPUT : switch(Copy_u8PortId)
    		{
    		case PORTA : /* Action */
    			DDRA_REG = 0xff ;
    			break;

    		case PORTB :
    			DDRB_REG = 0xff ;
    			break;

    		case PORTC :
    			DDRC_REG = 0xff ;
    			break;

    		case PORTD :
    			DDRD_REG = 0xff ;
    			break;
    		default :
    			break;

    		}
    		break;
    		default  :
    			break;
    		}
    	}
    }
/*******************************************************************************/
/* Func Name : DIO_u8GetPortValue                                               */
/* i/p arguments : Copy_u8PortId options : PORTA , PORTB , PORTC , PORTD       */
/*return : unsigned char                                                       */
/*******************************************************************************/
u8   DIO_u8GetPortValue      (u8 Copy_u8PortId  )
{
    u8 Local_u8ReturedValue ;
    switch (Copy_u8PortId)
    {
    case PORTA :
        Local_u8ReturedValue = PINA_REG ;
        break;
    case PORTB :
        Local_u8ReturedValue = PINB_REG ;
        break;
    case PORTC :
        Local_u8ReturedValue = PINC_REG ;
        break;
    case PORTD :
        Local_u8ReturedValue = PIND_REG ;
        break;
    
    default:
        break;
    }
    return Local_u8ReturedValue;
}
/*******************************************************************************/
/* Func Name : DIO_voidToggPinValue                                            */
/* i/p arguments : Copy_u8PortId options : PORTA , PORTB , PORTC , PORTD       */
/*   Copy_u8PinId : PIN0 , PIN1 , PIN2 , PIN3 , PIN4 ,PIN5 , PIN6 , PIN7       */
/*return : void                                                                */
/*******************************************************************************/
void DIO_voidToggPinValue (u8 Copy_u8PortId , u8 Copy_u8PinId )
{
	switch (Copy_u8PortId)
	    {
	    case PORTA :
	    	DIO_voidSetPinValue(Copy_u8PortId , Copy_u8PinId , !GET_BIT(PORTA_REG , Copy_u8PinId));
	        break;
	    case PORTB :
	    	DIO_voidSetPinValue(Copy_u8PortId , Copy_u8PinId , !GET_BIT(PORTB_REG , Copy_u8PinId));
	        break;
	    case PORTC :
	    	DIO_voidSetPinValue(Copy_u8PortId , Copy_u8PinId , !GET_BIT(PORTC_REG , Copy_u8PinId));
	        break;
	    case PORTD :
	    	DIO_voidSetPinValue(Copy_u8PortId , Copy_u8PinId , !GET_BIT(PORTD_REG , Copy_u8PinId));
	        break;

	    default:
	        break;
	    }

}
