#pragma once

// Rotational Stepper: ("X")
#define X_STEP_PIN 2
#define X_DIR_PIN 5
#define X_ENABLE_PIN 8 // only one ENABLE pin for all axes

// Pen Stepper:        ("Y")
#define Y_STEP_PIN 6
#define Y_DIR_PIN 3
#define Y_ENABLE_PIN 12 // this is intentionally set to some non connected pin as the CNC board has the ENABLE pins for all axes connected anyway; enabling one is sufficient, so

// Servo
#define SERVO_PIN A1 // "SpnEn"
#define ENGRAVER_PIN A4 // "SpnDir"

// Buttons
#define PRG_BUTTON_PIN A2 // PRG button ("Abort")
#define PEN_TOGGLE_BUTTON_PIN A3 // pen up/down button ("Hold")
#define MOTORS_BUTTON_PIN A0 // motors enable button ("Resume")
