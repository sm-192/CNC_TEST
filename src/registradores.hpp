#ifdef REGISTRADORES_HPP
    #define REGISTRADORES_HPP

    #include <avr/io.h>
    #include <avr/interrupt.h>

    #define X_STEP_PIN    54    // PF0/ADC0
    #define X_DIR_PIN     55    // PF1/ADC1
    #define X_ENABLE_PIN  38    // PD7

    #define Y_STEP_PIN    60    // PF6/ADC6
    #define Y_DIR_PIN     61    // PF7/ADC7
    #define Y_ENABLE_PIN  56    // PF2/ADC2

    #define Z_STEP_PIN    46    // PL3
    #define Z_DIR_PIN     48    // PL1
    #define Z_ENABLE_PIN  62    // PK0/ADC8

    #define X_STOP_PIN    3     // PE5 - x_min
    #define Y_STPO_PIN    14    // PJ1 - y_min
    #define Z_STOP_PIN    18    // PD3 - z_min

    #define B_X           2     // PE4 - x_max
    #define B_Y           15    // PJ0 - y_max
    #define B_Z           19    // PD2 - z_max       
    #define POT           A13   // PK5/ADC13

    void adc_init();
    uint16_t an_read(uint8_t ch);

    volatile uint8_t adc_done = 1;

    ISR(ADC_vect){
        adc_done = 1;
    }

    int main() {
    DDRD = 0b10001000;
    DDRE = 0b00100000;
    DDRF = 0b11000111;
    DDRJ = 0b00000010;
    DDRK = 0b00000001;
    DDRL = 0b00001010;

    cli();
    adc_init();
    sei();
    
    while(1){
        
    }

    void adc_init(){
        ADMUX  = 0b01000000
        ADCSRA = 0b10001111   
    }

    uint16_t an_read(uint8_t ch){
        adc_done = 0;
        DIDR0 != (1<<ch);
    }

    return 0;
    }


#endif