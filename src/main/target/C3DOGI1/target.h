/*

 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "C3DOGI1"

#define USBD_PRODUCT_STRING  "C3DOGI1"

#define LED0                    PA13
#define LED1                    PA14

#define BEEPER                  PB14
#define BEEPER_PWM
#define BEEPER_PWM_FREQUENCY    4000
#define BEEPER_INVERTED

// *************** Gyro & ACC **********************
#define USE_SPI
#define USE_SPI_DEVICE_1

#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PB4
#define SPI1_MOSI_PIN           PB5

#define USE_IMU_MPU6000
#define IMU_MPU6000_ALIGN       CW0_DEG
#define MPU6000_CS_PIN          PA4
#define MPU6000_SPI_BUS         BUS_SPI1

#define USE_EXTI
#define GYRO_INT_EXTI            PC4
#define USE_MPU_DATA_READY_SIGNAL


// *************** I2C/Baro/Mag *********************
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB6        // SCL pad
#define I2C1_SDA                PB7        // SDA pad

#define USE_BARO
#define BARO_I2C_BUS            BUS_I2C1
// #define USE_BARO_BMP280
#define USE_BARO_MS5611
// #define USE_BARO_BMP085
// #define USE_BARO_DPS310
#define MS5611_ADDRESS          0x76

#define USE_MAG
#define MAG_I2C_BUS             BUS_I2C1
#define USE_MAG_HMC5883
#define USE_MAG_QMC5883
#define USE_MAG_IST8310
#define USE_MAG_IST8308
#define USE_MAG_MAG3110
#define USE_MAG_LIS3MDL

// #define TEMPERATURE_I2C_BUS     BUS_I2C1

// #define PITOT_I2C_BUS           BUS_I2C1

// *************** SD Card **************************
#define USE_SDCARD
#define USE_SDCARD_SPI
#define SDCARD_SPI_BUS          BUS_SPI2
#define SDCARD_CS_PIN           PB12

#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN   	    PC1
#define SPI2_MOSI_PIN   	    PC2

#define ENABLE_BLACKBOX_LOGGING_ON_SDCARD_BY_DEFAULT

// *************** OSD *****************************
// #define USE_SPI_DEVICE_2
// #define SPI2_SCK_PIN            PB13
// #define SPI2_MISO_PIN           PB14
// #define SPI2_MOSI_PIN           PB15

 #define USE_OSD
// #define USE_MAX7456
// #define MAX7456_SPI_BUS         BUS_SPI2
// #define MAX7456_CS_PIN          PB10

// *************** UART *****************************
#define USE_VCP

#define USE_UART1
#define UART1_RX_PIN            PA10
#define UART1_TX_PIN            PA9

#define USE_UART2
#define UART2_RX_PIN            PA3
#define UART2_TX_PIN            PA2

#define USE_UART3
#define UART3_RX_PIN            PC11
#define UART3_TX_PIN            PC10

#define USE_UART4
#define UART4_RX_PIN            PA1
#define UART4_TX_PIN            PA0

#define USE_UART5
#define UART5_RX_PIN            PD2
#define UART5_TX_PIN            PC12

#define USE_UART6
#define UART6_RX_PIN            PC7
#define UART6_TX_PIN            PC6

#define SERIAL_PORT_COUNT       7

#define USE_SERIALRX_CRSF
#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_CRSF
#define SERIALRX_UART           SERIAL_PORT_USART2

// *************** ADC *****************************
#define USE_ADC
#define ADC_INSTANCE                ADC1
#define ADC1_DMA_STREAM             DMA2_Stream0
#define ADC_CHANNEL_1_PIN           PC0
#define ADC_CHANNEL_2_PIN           PC3
#define VBAT_ADC_CHANNEL            ADC_CHN_1
#define CURRENT_METER_ADC_CHANNEL   ADC_CHN_2

#define DEFAULT_FEATURES        (FEATURE_TX_PROF_SEL | FEATURE_CURRENT_METER | FEATURE_TELEMETRY| FEATURE_VBAT | FEATURE_OSD )

//#define USE_LED_STRIP
//#define WS2811_PIN                      PA8   //TIM2_CH1

// #define USE_SPEKTRUM_BIND
// #define BIND_PIN                PA3  //USART2_RX

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         (BIT(2))

#define MAX_PWM_OUTPUT_PORTS        8
#define USE_DSHOT
#define USE_ESC_SENSOR
#define USE_SERIALSHOT

// #define BNO055_I2C_BUS          BUS_I2C1
