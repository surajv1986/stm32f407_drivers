/*
 * stm32f407xx.h
 *
 *  Created on: Aug 16, 2024
 *      Author: suraj
 */

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_
#include <stdint.h>

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
#define RCC_BASEADDR (APB1_PERIPHERALBASE + 0x3800)
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
	volatile uint32_t CR;
	volatile uint32_t PLLCFGR;
	volatile uint32_t CFGR;
	volatile uint32_t CIR;
	volatile uint32_t AHB1RSTR;
	volatile uint32_t AHB2RSTR;
	volatile uint32_t AHB3RSTR;
	     uint32_t RESERVED1;
	volatile uint32_t APB1RSTR;
	volatile uint32_t APB2RSTR;
		 uint32_t RESERVED2[2];
	volatile uint32_t AHB1ENR;
	volatile uint32_t AHB2ENR;
	volatile uint32_t AHB3ENR;
		 uint32_t RESERVED3;
	volatile uint32_t APB1ENR;
	volatile uint32_t APB2ENR;
		 uint32_t RESERVED4[2];
	volatile uint32_t AHB1LPENR;
	volatile uint32_t AHB2LPENR;
	volatile uint32_t AHB3LPENR;
	     uint32_t RESERVED5;
	volatile uint32_t APB1LPENR;
	volatile uint32_t APB2LPENR;
	uint32_t RESERVED6;
	uint32_t RESERVED7;
	volatile uint32_t BDCR;
	volatile uint32_t CSR;
	uint32_t RESERVED8;
	uint32_t RESERVED9;
	volatile uint32_t SSCGR;
	volatile uint32_t PLLI2SCFGR;
}RCC_RegDef_t;

/*
 * Peripheral Structure Definition for GPIO.
 *
 * */
typedef struct {
	volatile uint32_t MODER;
	volatile uint32_t OTYPER;
	volatile uint32_t OSPEEDR;
	volatile uint32_t PUPDR;
	volatile uint32_t IDR;
	volatile uint32_t ODR;
	volatile uint32_t BSRR;
	volatile uint32_t LCKR;
	volatile uint32_t AFR[2];

}GPIO_RegDef_t;

#define GPIOA   ((GPIO_RegDef_t *)GPIOA_BASEADDR)
#define GPIOB   ((GPIO_RegDef_t *)GPIOB_BASEADDR)
#define GPIOC   ((GPIO_RegDef_t *)GPIOC_BASEADDR)
#define GPIOD   ((GPIO_RegDef_t *)GPIOD_BASEADDR)
#define GPIOE   ((GPIO_RegDef_t *)GPIOE_BASEADDR)
#define GPIOF   ((GPIO_RegDef_t *)GPIOF_BASEADDR)
#define GPIOG   ((GPIO_RegDef_t *)GPIOG_BASEADDR)
#define GPIOH   ((GPIO_RegDef_t *)GPIOH_BASEADDR)
#define GPIOI   ((GPIO_RegDef_t *)GPIOI_BASEADDR)
#define RCC   	((RCC_RegDef_t *)RCC_BASEADDR)


/*
 * Clock Enable Macros for GPIOx Peripherals.
 * */
#define GPIOA_PCLK_EN() (RCC->AHB1ENR |= (1 << 0))
#define GPIOB_PCLK_EN() (RCC->AHB1ENR |= (1 << 1))
#define GPIOC_PCLK_EN() (RCC->AHB1ENR |= (1 << 2))
#define GPIOD_PCLK_EN() (RCC->AHB1ENR |= (1 << 3))
#define GPIOE_PCLK_EN() (RCC->AHB1ENR |= (1 << 4))
#define GPIOF_PCLK_EN() (RCC->AHB1ENR |= (1 << 5))
#define GPIOG_PCLK_EN() (RCC->AHB1ENR |= (1 << 6))
#define GPIOH_PCLK_EN() (RCC->AHB1ENR |= (1 << 7))
#define GPIOI_PCLK_EN() (RCC->AHB1ENR |= (1 << 8))

/*
 * Clock Enable Macros for I2Cx Peripherals.
 * */
#define I2C1_PCLK_EN() (RCC->APB1ENR |= (1 << 21))
#define I2C2_PCLK_EN()  (RCC->APB1ENR |= (1 << 22))
#define I2C3_PCLK_EN()  (RCC->APB1ENR |= (1 << 23))

/*
 * Clock Enable Macros for SPIx Peripherals.
 * */
#define SPI1_PCLK_EN() (RCC->APB2ENR |= (1 << 12))
#define SPI2_PCLK_EN() (RCC->APB1ENR |= (1 << 14))
#define SPI3_PCLK_EN() (RCC->APB1ENR |= (1 << 15))

/*
 * Clock Enable Macros for USARTx/UARTx Peripherals.
 * */
#define USART1_PCLK_EN() (RCC->APB2ENR |= (1 << 4))
#define USART2_PCLK_EN() (RCC->APB1ENR |= (1 << 17))
#define USART3_PCLK_EN() (RCC->APB1ENR |= (1 << 18))
#define UART4_PCLK_EN() (RCC->APB1ENR |= (1 << 19))
#define UART5_PCLK_EN() (RCC->APB1ENR |= (1 << 20))
#define USART6_PCLK_EN() (RCC->APB2ENR |= (1 << 5))

/*
 * Clock Enable Macros for SYSCFG Peripheral.
 * */
#define SYSCFG_PCLK_EN() (RCC->APB2ENR |= (1 << 14))



/*
 * Clock Disable Macros for GPIOx Peripherals.
 * */
#define GPIOA_PCLK_DI() (RCC->AHB1ENR &= ~(1 << 0))
#define GPIOB_PCLK_DI() (RCC->AHB1ENR &= ~(1 << 1))
#define GPIOC_PCLK_DI() (RCC->AHB1ENR &= ~(1 << 2))
#define GPIOD_PCLK_DI() (RCC->AHB1ENR &= ~(1 << 3))
#define GPIOE_PCLK_DI() (RCC->AHB1ENR &= ~(1 << 4))
#define GPIOF_PCLK_DI() (RCC->AHB1ENR &= ~(1 << 5))
#define GPIOG_PCLK_DI() (RCC->AHB1ENR &= ~(1 << 6))
#define GPIOH_PCLK_DI() (RCC->AHB1ENR &= ~(1 << 7))
#define GPIOI_PCLK_DI() (RCC->AHB1ENR &= ~(1 << 8))




/*
 * Clock Disable Macros for I2Cx Peripherals.
 * */
#define I2C1_PCLK_DI() (RCC->APB1ENR &= ~(1 << 21))
#define I2C2_PCLK_DI()  (RCC->APB1ENR &= ~(1 << 22))
#define I2C3_PCLK_DI()  (RCC->APB1ENR &= ~(1 << 23))

/*
 * Clock Disable Macros for SPIx Peripherals.
 * */
#define SPI1_PCLK_DI() (RCC->APB2ENR &= ~(1 << 12))
#define SPI2_PCLK_DI() (RCC->APB1ENR &= ~(1 << 14))
#define SPI3_PCLK_DI() (RCC->APB1ENR &= ~(1 << 15))

/*
 * Clock Disable Macros for USARTx/UARTx Peripherals.
 * */
#define USART1_PCLK_DI() (RCC->APB2ENR &= ~(1 << 4))
#define USART2_PCLK_DI() (RCC->APB1ENR &= ~(1 << 17))
#define USART3_PCLK_DI() (RCC->APB1ENR &= ~(1 << 18))
#define UART4_PCLK_DI() (RCC->APB1ENR &= ~(1 << 19))
#define UART5_PCLK_DI() (RCC->APB1ENR &= ~(1 << 20))
#define USART6_PCLK_DI() (RCC->APB2ENR &= ~(1 << 5))


/*
 * Clock Disable Macros for SYSCFG Peripheral.
 * */
#define SYSCFG_PCLK_DI() (RCC->APB2ENR &= ~(1 << 14))

/*
 * Macros to reset GPIOx peripherals.
 * */
#define GPIOA_REG_RESET() do{(RCC->AHB1RSTR |= (1 << 0)) (RCC->AHB1RSTR &= ~(1 << 0));} while(0)
#define GPIOB_REG_RESET() do{(RCC->AHB1RSTR |= (1 << 1)) (RCC->AHB1RSTR &= ~(1 << 1));} while(0)
#define GPIOC_REG_RESET() do{(RCC->AHB1RSTR |= (1 << 2)) (RCC->AHB1RSTR &= ~(1 << 2));} while(0)
#define GPIOD_REG_RESET() do{(RCC->AHB1RSTR |= (1 << 3)) (RCC->AHB1RSTR &= ~(1 << 3));} while(0)
#define GPIOE_REG_RESET() do{(RCC->AHB1RSTR |= (1 << 4)) (RCC->AHB1RSTR &= ~(1 << 4));} while(0)
#define GPIOF_REG_RESET() do{(RCC->AHB1RSTR |= (1 << 5)) (RCC->AHB1RSTR &= ~(1 << 5));} while(0)
#define GPIOG_REG_RESET() do{(RCC->AHB1RSTR |= (1 << 6)) (RCC->AHB1RSTR &= ~(1 << 6));} while(0)
#define GPIOH_REG_RESET() do{(RCC->AHB1RSTR |= (1 << 7)) (RCC->AHB1RSTR &= ~(1 << 7));} while(0)
#define GPIOI_REG_RESET() do{(RCC->AHB1RSTR |= (1 << 8)) (RCC->AHB1RSTR &= ~(1 << 8));} while(0)


/* Generic Macros */
#define ENABLE 1
#define DISABLE 0
#define SET ENABLE
#define RESET DISABLE
#define GPIO_PIN_SET SET
#define GPIO_PIN_RESET RESET


#endif /* INC_STM32F407XX_H_ */
