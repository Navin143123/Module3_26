/**
 * authors Shirisha , Deepika , Ravi , Navin
 * Date : 12/3/2022
 * Generated in STMCUBE IDE
 * Project Title: Remote keyless entry
 */

#include "MyStm32f407xx.h"
#define BTN_PRESSED ENABLE
#define BTN_RELEASED DISABLE
const int delay_ms = 100000;
const int encrypt1 = 1;
const int encrypt2 = 2;
const int encrypt3 = 3;
const int encrypt4 = 4;
void delay(uint32_t tdelay) // used to create time delay  by Shirisha
{
	for(uint32_t i=0;i<((tdelay * delay_ms)/2);i++)
{
}

}

int encryption(int user) // used to encrypt by Navin
{
if(user==encrypt1)
{
int data = 200 + 514;
return data;
 }
if(user==encrypt2)
{
int data = 300 + 514;
return data;
 }
if(user==encrypt3)
{
int data = 400 + 514;
return data;
 }
if(user==encrypt4)
{
int data = 500 + 514;
return data;
 }
return 0;
}


int main(void)
{
	GPIO_Handle_t GpiogLed,GpiooLed,GpiorLed,GpiobLed,GpioBtn;
	GpiogLed.pGPIOx = GPIOD;                                  // Initialise pin for green led by Shirisha
	GpiogLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
    GpiogLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
    GpiogLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_MEDIUM;
    GpiogLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
    GPIO_PeriClockControl(GPIOD, ENABLE);
    GPIO_Init(&GpiogLed);

        GpiooLed.pGPIOx = GPIOD;                             // Initialise pin for orange led by Deepika
    	GpiooLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
        GpiooLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
        GpiooLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_MEDIUM;
        GpiooLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
        GPIO_PeriClockControl(GPIOD, ENABLE);
        GPIO_Init(&GpiooLed);

            GpiorLed.pGPIOx = GPIOD;                         // Initialise pin for red led by Ravi
        	GpiorLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
            GpiorLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
            GpiorLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_MEDIUM;
            GpiorLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
            GPIO_PeriClockControl(GPIOD, ENABLE);
            GPIO_Init(&GpiorLed);

                GpiobLed.pGPIOx = GPIOD;                      // Initialise pin for blue led by Navin
            	GpiobLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
                GpiobLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
                GpiobLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_MEDIUM;
                GpiobLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
                GPIO_PeriClockControl(GPIOD, ENABLE);
                GPIO_Init(&GpiobLed);




    GpioBtn.pGPIOx = GPIOA;                        // Initialise pin for blue switch by Navin
    GpioBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
    GpioBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
    GpioBtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_MEDIUM;
    GpioBtn.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
    GPIO_PeriClockControl(GPIOA, ENABLE);
    GPIO_Init(&GpioBtn);

int btn_count(void) // to calculate Button count by Deepika
{
int count =0;
int n = 5;
while(n!=0)
{
 n--;
 if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0)==BTN_RELEASED)
{
delay(5);
count++;
if(count>4)
{
count=0;
}
}
}
return count;
}
void lock(void) // for locking the door by Shirisha
{
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,GPIO_PIN_SET);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,GPIO_PIN_SET);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,GPIO_PIN_SET);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,GPIO_PIN_SET);
}

void alarm_acorde(void) // for alarm activate/deactivate by Deepika
{
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,GPIO_PIN_SET);
	                delay(5);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,GPIO_PIN_RESET);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,GPIO_PIN_SET);
	                delay(5);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,GPIO_PIN_RESET);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,GPIO_PIN_SET);
	                delay(5);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,GPIO_PIN_RESET);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,GPIO_PIN_SET);
	                delay(5);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,GPIO_PIN_RESET);
}

void appr_light(void) // for approaching light by Ravi
{
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,GPIO_PIN_SET);
	                delay(5);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,GPIO_PIN_RESET);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,GPIO_PIN_SET);
	                delay(5);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,GPIO_PIN_RESET);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,GPIO_PIN_SET);
	                delay(5);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,GPIO_PIN_RESET);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,GPIO_PIN_SET);
	                delay(5);
		    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,GPIO_PIN_RESET);
}

void unlock(void) // for unlocking the door by Navin
{
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,GPIO_PIN_RESET);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,GPIO_PIN_RESET);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,GPIO_PIN_RESET);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,GPIO_PIN_RESET);
}
while (1) // for calling the functions by Navin
{
     int bcount = btn_count();
     volatile int endata = encryption(bcount);
     if(endata == 714)
     {
    	lock();
    	bcount = 0;
     }

       if(endata == 814)
         {
        	unlock();
        	bcount = 0;
         }
        if(endata == 914)
         {
        	alarm_acorde();
        	bcount = 0;
         }
          if(endata == 1014)
          {
        	 appr_light();
        	bcount = 0;
          }
}
}

