/*
 * stm32f407xx.h
 *
 *  Created on: Aug 16, 2024
 *      Author: suraj
 */

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_
#include <stdint.h>

#define __vo volatile

/*
 * Base Addresses for the SRAM & Flash Memories
 *
 * */
#define FLASH_BASEADDRESS 0x08000000U
#define SRAM1_BASEADDRESS 0x20000000U
#define SRAM2_BASEADDRESS 0x20001C00U
#define ROM_BASEADDRESS   0x1FFF0000U
#define OTP_BASEADDRESS   0x1FFF7800U

/*
 * APB and AHB Peripheral Base Addresses
 *
 * */
#define PERIPHERALBASE 0x40000000U
#define APB1_PERIPHERALBASE PERIPHERALBASE
#define APB2_PERIPHERALBASE 0x40010000U
#define AHB1_PERIPHERALBASE 0x40020000U
#define AHB2_PERIPHERALBASE 0x50000000U


/*
 * Base Addresses for the Peripherals on AHB1 bus.
 *
 * */
#define GPIOA_BASEADDR (APB1_PERIPHERALBASE + 0x0000)
#define GPIOB_BASEADDR (APB2_PERIPHERALBASE + 0x0400)
#define GPIOC_BASEADDR (APB2_PERIPHERALBASE + 0x0800)
#define GPIOD_BASEADDR (APB2_PERIPHERALBASE + 0x0C00)
#define GPIOE_BASEADDR (APB2_PERIPHERALBASE + 0x1000)
#define GPIOF_BASEADDR (APB2_PERIPHERALBASE + 0x1400)
#define GPIOG_BASEADDR (APB2_PERIPHERALBASE + 0x1800)
#define GPIOH_BASEADDR (APB2_PERIPHERALBASE + 0x1C00)
#define GPIOI_BASEADDR (APB2_PERIPHERALBASE + 0x2000)

/*
 * Base Addresses for the Peripherals on APB1 bus.
 *
 * */
#define I2C1_BASEADDR (APB1_PERIPHERALBASE + 0x5400)
#define I2C2_BASEADDR (APB1_PERIPHERALBASE + 0x5800)
#define I2C3_BASEADDR (APB1_PERIPHERALBASE + 0x5C00)
#define SPI2_BASEADDR (APB1_PERIPHERALBASE + 0x3800)
#define SPI3_BASEADDR (APB1_PERIPHERALBASE + 0x3C00)
#define USART2_BASEADDR (APB1_PERIPHERALBASE + 0x4400)
#define USART3_BASEADDR (APB1_PERIPHERALBASE + 0x4800)
#define UART4_BASEADDR (APB1_PERIPHERALBASE + 0x4C00)
#define UART5_BASEADDR (APB1_PERIPHERALBASE + 0x5000)

/*
 * Base Addresses for the Peripherals on APB2 bus.
 *
 * */
#define EXTI_BASEADDR (APB2_PERIPHERALBASE + 0x3C00)
#define SPI1_BASEADDR (APB2_PERIPHERALBASE + 0x3000)
#define USART1_BASEADDR (APB2_PERIPHERALBASE + 0x1000)
#define USART6_BASEADDR (APB2_PERIPHERALBASE + 0x1400)
#define SYSCFG_BASEADDR (APB2_PERIPHERALBASE + 0x3800)


/*
 * Peripheral Structure Definition for RCC.
 *
 * */
typedef struct {
	__vo uint32_t CR;
	__vo uint32_t PLLCFGR;
	__vo uint32_t CFGR;
	__vo uint32_t CIR;
	__vo uint32_t AHB1RSTR;
	__vo uint32_t AHB2RSTR;
	__vo uint32_t APB1RSTR;
	__vo uint32_t APB2RSTR;
	__vo uint32_t AHB1ENR;
	__vo uint32_t AHB2ENR;
	__vo uint32_t AHB3ENR;
	__vo uint32_t APB1ENR;
	__vo uint32_t APB2ENR;
	__vo uint32_t AHB1LPENR;
	__vo uint32_t AHB2LPENR;
	__vo uint32_t AHB3LPENR;
	__vo uint32_t APB1LPENR;
	__vo uint32_t APB2LPENR;
	uint32_t RESERVED;
	uint32_t RESERVED;
	__vo uint32_t BDCR;
	__vo uint32_t CSR;
	uint32_t RESERVED;
	uint32_t RESERVED;
	__vo uint32_t SSCGR;
	__vo uint32_t PLLI2SCFGR;
	__vo uint32_t PLLSAICFGR;
	__vo uint32_t DCKCFGR;
}RCCRegDef_t;

/*
 * Peripheral Structure Definition for GPIO.
 *
 * */
typedef struct {
	__vo uint32_t MODER;
	__vo uint32_t OTYPER;
	__vo uint32_t MODER;
	__vo uint32_t PUPDR;
	__vo uint32_t MODER;
	__vo uint32_t IDR;
	__vo uint32_t ODR;
	__vo uint32_t BSRR;
	__vo uint32_t LCKR;
	__vo uint32_t AFRL[2];

}GPIORegDef_t;

#define GPIOA   (GPIORegDef_t *)GPIOA_BASEADDR




#endif /* INC_STM32F407XX_H_ */
