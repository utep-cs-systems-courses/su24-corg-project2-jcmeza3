//Alternate LEDs from Off, Green, and Red
/*#include <msp430.h>
#include "libTimer.h"
#include "led.h"

int main(void) {
  P1DIR |= LEDS;
  P1OUT &= ~LED_GREEN;
  P1OUT |= LED_RED;

  or_sr(0x18);		/* CPU off, GIE on */
#include <msp430.h>
#include "libTimer.h"
#include "led.h"

void main(void) {
  WDTCTL = WDTPW | WDTHOLD;    // Stop watchdog timer
  P1DIR |= LEDS;               // Set LEDs as outputs

  while (1) {
    P1OUT &= ~LEDS;            // Turn off both LEDs
    P1OUT |= LED_RED;          // Turn on red LED
    __delay_cycles(500000);    // Delay

    P1OUT &= ~LEDS;            // Turn off both LEDs
    P1OUT |= LED_GREEN;        // Turn on green LED
    __delay_cycles(500000);    // Delay

    P1OUT &= ~LEDS;            // Turn off both LEDs
    __delay_cycles(500000);    // Delay
  }
}

