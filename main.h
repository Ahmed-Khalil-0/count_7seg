#ifndef __MAIN_GURD_H__
#define __MAIN_GURD_H__
//including MUC.
#include <pic16f877a.h>

//PIN'S DEFINATION.
#define GPIO_PIN_0 (0)
#define GPIO_PIN_1 (1)
#define GPIO_PIN_2 (2)
#define GPIO_PIN_3 (3)
#define GPIO_PIN_4 (4)
#define GPIO_PIN_5 (5)
#define GPIO_PIN_6 (6)
#define GPIO_PIN_7 (7)

//PORT's control and data.
#define GPIO_PORT_A_DATA       (PORTA)
#define GPIO_PORT_A_CONTROL    (TRISA)

#define GPIO_PORT_B_DATA       (PORTB)
#define GPIO_PORT_B_CONTROL    (TRISB)

#define GPIO_PORT_C_DATA       (PORTC)
#define GPIO_PORT_C_CONTROL    (TRISC)

#define GPIO_PORT_D_DATA       (PORTD)
#define GPIO_PORT_D_CONTROL    (TRISD)

#define GPIO_PORT_E_DATA       (PORTE)
#define GPIO_PORT_E_CONTROL    (TRISE)

//DIRECTION READ OR WRITE.
#define GPIO_WRITE               (0)
#define GPIO_READ                (1)

//OPERATIONS ON PORT.
#define GPIO_PORT_INIT(CONTROL, DIRECTION) (CONTROL = (DIRECTION)? ~(0):(0))
#define GPIO_PORT_WRITE(PORT, DATA)        (PORT) = (DATA)
#define GPIO_PORT_READ(PORT)               (PORT)

//POERATIONS ON PIN OF PORT.
#define GPIO_PIN_INIT(CONTROL, PIN, DIRECTION) (CONTROL = CONTROL&(~(1<<PIN))|(DIRECTION<<PIN))
#define GPIO_PIN_WRITE(PORT, PIN, DATA)        (PORT = PORT&(~(1<<PIN))|(DATA<<PIN))
#define GPIO_PIN_READ(PORT, PIN)               (((PORT) & (1 << PIN)) >> (PIN))
#endif // __MAIN_GURD_H__
