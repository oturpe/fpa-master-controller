#include "Atmega328pUtils.cpp"
#include "config.h"

#include <avr/io.h>
#include <util/delay.h>

int main() {
	// Relay outputs
    DDRD |= BV(DDD0) | BV(DDD1) | BV(DDD2) | BV(DDD3) | BV(DDD4);

    // Pulled up switch inputs;
    PORTC |= BV(PORTC1) | BV(PORTC2) | BV(PORTC3) | BV(PORTC4) | BV(PORTC5);

    while (true) {
    	if (PINC & BV(PINC1)) {
    		PORTD &= ~BV(PORTD0);
    	} else {
    		PORTD |= BV(PORTD0);
    	}

    	if (PINC & BV(PINC2)) {
    		PORTD &= ~BV(PORTD1);
    	} else {
    		PORTD |= BV(PORTD1);
    	}

    	if (PINC & BV(PINC3)) {
    		PORTD &= ~BV(PORTD2);
    	} else {
    		PORTD |= BV(PORTD2);
    	}

    	if (PINC & BV(PINC4)) {
    		PORTD &= ~BV(PORTD3);
    	} else {
    		PORTD |= BV(PORTD3);
    	}

    	if (PINC & BV(PINC5)) {
    		PORTD &= ~BV(PORTD4);
    	} else {
    		PORTD |= BV(PORTD4);
    	}
    }
}