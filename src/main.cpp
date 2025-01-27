#include <avr/io.h>

#define X_STEP_PIN    54    // PF0/ADC0
#define X_DIR_PIN     55    // PF1/ADC1
#define X_ENABLE_PIN  38    // PD7

#define Y_STEP_PIN    60    // PF6/ADC6
#define Y_DIR_PIN     61    // PF7/ADC7
#define Y_ENABLE_PIN  56    // PF2/ADC2

#define Z_STEP_PIN    46    // PL3
#define Z_DIR_PIN     48    // PL1
#define Z_ENABLE_PIN  62    // PK0/ADC8

#define X_STOP_PIN    3     // PE5
#define Y_STPO_PIN    14    // PJ1
#define Z_STOP_PIN    18    // PD3

#define B_X           2     // PE4
#define B_Y           15    // PJ0
#define B_Z           19    // PD2       
#define POT           A13   // PK5/ADC13

int main() {
  DDRD = 0b10001000;
  DDRE = 0b00100000;
  DDRF = 0b11000111;
  DDRJ = 0b00000010;
  DDRK = 0b00000001;
  DDRL = 0b00001010;
  
  while(1){

    

  }
  return 0;
}
