# STM32F103 Drivers

This repository contains drivers and modules for the STM32F103 microcontroller, organized into three main folders: MCAL, HAL, and LIB. These drivers aim to facilitate the development of embedded applications using STM32F103 by providing reusable and modular code for hardware abstraction and peripheral control.

## Project Structure

- **MCAL (Microcontroller Abstraction Layer)**  
  Contains low-level drivers for direct hardware access. The following modules are included:
  
  - `RCC` - Reset and Clock Control
  - `DIO` - Digital Input/Output (GPIO control)
  - `NVIC` - Nested Vector Interrupt Controller
  - `EXTI` - External Interrupt
  - `AFIO` - Alternate Function I/O
  - `SYSTICK` - System Tick Timer
  - `DMA` - Direct Memory Access
  - `SPI` - Serial Peripheral Interface
  - `USART` - Universal Synchronous/Asynchronous Receiver/Transmitter
  - `FPEC` - Flash Program/Erase Controller
  - `ADC` - Analog to Digital Converter
  - `ADV TIM (1 & 8)` - Advanced Timers
  - `TIMER 2 & 3` - General-purpose Timers

- **HAL (Hardware Abstraction Layer)**  
  Provides higher-level drivers abstracting away hardware specifics for ease of use. Includes:
  
  - `LED` - Light Emitting Diode control
  - `SEVENSEGMENT` - Seven Segment Display
  - `LEDMATRIX` - LED Matrix Display
  - `STP` - Serial to Parallel Conversion (Shift Register)
  - `TFT LCD` - Thin Film Transistor Liquid Crystal Display
  - `IR Receiver` - Infrared Receiver
  - `ESP` - Wi-Fi Module (ESP8266)
  - `ULTRASONIC` - Ultrasonic Distance Sensor

- **LIB (Libraries)**  
  Contains utility libraries and common definitions used across the project:
  
  - `BIT_math` - Bit manipulation macros
  - `ERRorSTATUS` - Error status handling
  - `STD_type` - Standard type definitions
  - `STRING_COMPARE` - String comparison utility functions

## Getting Started

### Prerequisites

To compile and use the drivers in this project, you will need:
- STM32F103 development board
- STM32CubeMX and STM32CubeIDE (or any other suitable IDE)
- Arm GCC toolchain for embedded development
- OpenOCD for flashing and debugging

### Setup Instructions

1. Clone the repository:
   ```bash
   git clone https://github.com/YOUR_USERNAME/STM32F103-Drivers.git
