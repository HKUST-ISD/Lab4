/********************************* TASK 1 *********************************/
// On your breadboard, connect the pins listed below to the DRV8833 input pins
#define M1IN1       12
#define M1IN2       11
#define M2IN1       10
#define M2IN2       9

/********************************* TASK 2 *********************************/
// Refer to page 9 of the DRV8833 datasheet, complete this function where
// power        is an integer ranging from -255 to 255, with the sign 
//              of the value indicates the motor spin direction, and the
//              magnitude of the value indicating the motor power
// in1 and in2  is the arduino pin number of the pins connected to the 
//              DRV8833 IN1 and IN2 input pins
// You may use the analogWrite() function
void motorDrive(int power, pin_size_t in1, pin_size_t in2) {

}

void setup() {
    /********************************* TASK 3 *********************************/
    // Using the motorDrive function, set the 2 motors to spin full power in one
    // direction for 10 seconds, then reverse direction at half power for 10 seconds

    // You may notice the motors does not spin up. Troubleshoot the issue by reading 
    // the DRV8833 datasheet, you might need to make additional connections on your 
    // breadboard.
}

void loop() {
    /********************************* TASK 4 *********************************/
    // Program the arduino to control power to the motors according to finger position 
    // relative to the line sensor, set the power to -255 when the finger covers
    // the left most reflectance sensor and set the power to 255 when the finger covers
    // the right most reflectance sensor.    
}
