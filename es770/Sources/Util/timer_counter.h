/* ***************************************************************** */
/* File name:        timer_counter.h                                 */
/* File description: Header file containing the function/methods     */
/*                   prototypes of timer_counter.c                   */
/* Author name:      fcpinheiro,lopfrigerio                          */
/* Creation date:    23jun2018                                       */
/* Revision date:    20jun2018                                       */
/* ***************************************************************** */

#ifndef UTIL_TIMER_COUNTER_H
#define UTIL_TIMER_COUNTER_H

/* ************************************************** */
/* Method name: 	   timer_initTPM1AsPWM            */
/* Method description: configure Timer1 to act as PWM */
/* Input params:	   n/a 			                  */
/* Outpu params:	   n/a 		                      */
/* ************************************************** */
void timer_initTPM1AsPWM(void);

/* ************************************************ */
/* Method name:        timer_coolerfan_init         */
/* Method description: Initialize the cooler device */
/*                     as PWM controlled            */
/* Input params:       n/a                          */
/* Output params:      n/a                          */
/* ************************************************ */
//void timer_coolerfan_init(void);

/* ************************************************ */
/* Method name:        timer_initHeater             */
/* Method description: Initialize the heater device */
/* Input params:       n/a                          */
/* Output params:      n/a                          */
/* ************************************************ */
//void timer_initHeater(void);

/* ************************************************** */
/* Method name:        timer_setFanDutyCycle          */
/* Method description: Set the cooler device to       */
/*                     desired duty cycle             */
/* Input params:       cDutyCycle = duty cycle (in %) */
/* Output params:      n/a                            */
/* ************************************************** */
//void timer_setFanDutyCycle(char cDutyCycle);

/* ************************************************ */
/* Method name:        timer_changeHeaterPwm        */
/* Method description: change the cooler pwm        */
/* Input params:       pwm desired (percentage)     */
/* Output params:      n/a                          */
/* ************************************************ */
//void timer_changeHeaterPwm(int iPwm);

void timer_initMotor(void);
void timer_changeMotor1Pwm(int iPwm);
void timer_changeMotor2Pwm(int iPwm);
void timer_initMotorAsGpio(void);
void timer_MotorGpioEnable(void);
void timer_MotorGpioDisable(void);

#endif /* UTIL_TIMER_COUNTER_H */
