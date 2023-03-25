/**
 * \file
 *
 * \brief Empty user application template
 *
 */

/**
 * \mainpage User Application template doxygen documentation
 *
 * \par Empty user application template
 *
 * Bare minimum empty user application template
 *
 * \par Content
 *
 * -# Include the ASF header files (through asf.h)
 * -# "Insert system clock initialization code here" comment
 * -# Minimal main function that starts with a call to board_init()
 * -# "Insert application code here" comment
 *
 */

/*
 * Include header files for all drivers that have been imported from
 * Atmel Software Framework (ASF).
 */
/*
 * Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
 */
#include <asf.h>
#include <avr32/io.h>
#include "gpio.h"
#include "wdt.h"
#include "delay.h"



#include "compiler.h"




#define LED_PIN AVR32_PIN_PA05

int main (void)
{
	/* Insert system clock initialization code here (sysclk_init()). */

	board_init();
	// Enable GPIO pin 1 on port A
	volatile avr32_gpio_t *gpio = &AVR32_GPIO;
	
wdt_opt_t opt = {
    .us_timeout_period =  (((1ULL << (1 << AVR32_WDT_CTRL_PSEL_SIZE)) * 10000000 + AVR32_PM_RCOSC_FREQUENCY / 2) / AVR32_PM_RCOSC_FREQUENCY) // Example timeout period of 5 seconds
};
  //   gpio_enable_gpio(gpio, LED_PIN);

	wdt_enable(&opt);
// 	 // Set the direction of the pin as output
// 	   gpio_local_init(gpio, LED_PIN, GPIO_DIR_OUTPUT, 0);
	/* Insert application code here, after the board has been initialized. */
    // wdt_enable(wdt_opt_t 1000000);
//	 gpio_enable_gpio_pin(LED_PIN);
	 while (1)
	 {
		 for (int i=0;i<2;i++);
		// 	 wdt_reset_mcu();		 
		 for (int i=0;i<2;i++);
	 }
		 // Toggle the state of the pin
		// gpio_tgl_gpio_pin(LED_PIN);

// 		 // Wait for a brief period of time
// 		 for (volatile int i = 0; i < 100000; i++) {}
// 
// 		 // Set the pin to high
// 		 gpio_set_gpio_pin(LED_PIN);
// 
// 		 // Wait for a brief period of time
// 		 for (volatile int i = 0; i < 100000; i++) {}
// 		   
// 		  // Set the pin to low
// 		   gpio_clr_gpio_pin(LED_PIN);
// for (volatile int i = 0; i < 100*100000; i++) {}
// 	for (volatile int i = 0; i < 100*100000; i++) {}
		   // Wait for a brief period of time
//		   for (volatile int i = 0; i < 100000; i++) {}
		 
	 //}
	 
	 


}
