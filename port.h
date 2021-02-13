#ifndef __PORT_H__
#define __PORT_H__

#define L1                                          (GPIO_PIN_0)
#define L2                                          (GPIO_PIN_5)
#define L3                                          (GPIO_PIN_1)
#define L4                                          (GPIO_PIN_6)
#define L5                                          (GPIO_PIN_4)
#define L6                                          (GPIO_PIN_2)
#define L7                                          (GPIO_PIN_3)
#define L8                                          (GPIO_PIN_7)

#define SEG_CONTROL_D                               (GPIO_PORT_D_CONTROL)
#define SEG_DATA_D                                  (GPIO_PORT_D_DATA)

#define SEG_LED_PIN_WRITE(PORT, PIN, DATA)           GPIO_WritePortPin(PORT, PIN, DATA)

#define WHICH_SEGMENT_C(CONTROL, PIN, DIRECTION)     GPIO_InitPortPin(CONTROL, PIN, DIRECTION)
#define WHICH_SEGMENT_D(PORT, PIN, DATA)             GPIO_WritePortPin(PORT, PIN, DATA)

#endif // __PORT_H__
