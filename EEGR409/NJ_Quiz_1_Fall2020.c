/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Quiz 1
   This program calculates velocity and acceleration based on time.
   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz
*/

#include <stdio.h>
#include <math.h>

void main() {
    float t = 3.25;
    float vel;
    float accel;

    vel = 0.0001*pow(t, 3) - 0.00488*pow(t, 2) + 0.75796*t + 181.3566;
    accel = 3 - 0.000062*pow(vel, 2);

    printf("Velocity = %3.2f m/s\n", vel);
    printf("Acceleration = %1.2f m/s^2", accel);
}