/*
 * stm32f4xx_gpio_driver.c
 *
 *  Created on: Aug 17, 2024
 *      Author: suraj
 */
#include "stm32f407xx.h"
#include "stm32f407xx_gpio_driver.h"

/*
 *@brief: API to Enable/Disable GPIO Peripheral Clock Control.
 *@param1: Pointer to the GPIO Base Address.
 *@param2: An unsigned int macro to enable or disable the GPIO Peripheral Clock.
 *@return: None.
 * */
void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx, uint8_t EnOrDi)
{
	if (EnOrDi == ENABLE) {
		if(pGPIOx == GPIOA) {

			GPIOA_PCLK_EN();

		} else if (pGPIOx == GPIOB) {

			GPIOB_PCLK_EN();

		} else if (pGPIOx == GPIOC) {

			GPIOC_PCLK_EN();

		} else if (pGPIOx == GPIOD) {

			GPIOD_PCLK_EN();

		} else if (pGPIOx == GPIOD) {

			GPIOD_PCLK_EN();

		} else if (pGPIOx == GPIOE) {

			GPIOE_PCLK_EN();

		} else if (pGPIOx == GPIOF) {

			GPIOF_PCLK_EN();

		} else if (pGPIOx == GPIOG) {

			GPIOG_PCLK_EN();

		} else if (pGPIOx == GPIOH) {

			GPIOH_PCLK_EN();

		} else if (pGPIOx == GPIOI) {

			GPIOI_PCLK_EN();

		} else {

			if(pGPIOx == GPIOA) {

				GPIOA_PCLK_DI();

			} else if (pGPIOx == GPIOB) {

				GPIOB_PCLK_DI();

			} else if (pGPIOx == GPIOC) {

				GPIOC_PCLK_DI();

			} else if (pGPIOx == GPIOD) {

				GPIOD_PCLK_DI();

			} else if (pGPIOx == GPIOD) {

				GPIOD_PCLK_DI();

			} else if (pGPIOx == GPIOE) {

				GPIOE_PCLK_DI();

			} else if (pGPIOx == GPIOF) {

				GPIOF_PCLK_DI();

			} else if (pGPIOx == GPIOG) {

				GPIOG_PCLK_DI();

			} else if (pGPIOx == GPIOH) {

				GPIOH_PCLK_DI();

			} else if (pGPIOx == GPIOI) {

				GPIOI_PCLK_DI();

			}

		}

	}
}

/*
 *@brief: API to Initialize the GPIO Peripheral.
 *@param1: Pointer to the GPIO Handle.
 *@return: None.
 * */
void GPIO_Init(GPIO_Handle_t *pGPIOHandle)
{

}

/*
 *@brief: API to De-Initialize the GPIO Peripheral.
 *@param1: Pointer to the GPIO Base Address.
 *@return: None.
 * */
void GPIO_DeInit(GPIO_RegDef_t *pGPIOx)
{

}

/*
 *@brief: API to Read from GPIO Input Pin.
 *@param1: Pointer to the GPIO Base Address.
 *@param2: An unsigned int macro specifying the pin number.
 *@return: Read uint8_t value.
 * */
uint8_t GPIO_ReadFromInputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber)
{

}

/*
 *@brief: API to Read from GPIO Input Port.
 *@param1: Pointer to the GPIO Base Address.
 *@return: An uint16_t parameter containing the read port value.
 * */
uint16_t GPIO_ReadFromInputPort(GPIO_RegDef_t *pGPIOx)
{

}


/*
 *@brief: API to write to GPIO Output Pin.
 *@param1: Pointer to the GPIO Base Address.
 *@param2: An uint8_t parameter specifying the pin number.
 *@param3: An uint8_t macro specifying the value to be written.
 *@return: None.
 * */
void GPIO_WriteToOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber, uint8_t value)
{

}

/*
 *@brief: API to Write to GPIO Output Port.
 *@param1: Pointer to the GPIO Base Address.
 *@param2: An uint16_t parameter specifying the value to be written.
 *@return: None.
 * */
void GPIO_WriteToOutputPort(GPIO_RegDef_t *pGPIOx, uint8_t value)
{

}

/*
 *@brief: API to Toggle a GPIO output pin.
 *@param1: Pointer to the GPIO Base Address.
 *@param2: An uint16_t parameter specifying the pin number.
 *@return: None.
 * */
void GPIO_TogglePin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber)
{

}

/*
 *@brief: API to Configure the GPIO Interrupts.
 *@param1: An uint16_t value specifying the IRQ.
 *@param2: An uint16_t parameter specifying the Interrupt Priority.
 *@param3: An uint8_t macro specifying the value to be set.
 *@return: None.
 * */
void GPIO_IRQConfig(uint8_t IRQNumber, uint8_t IRQPriority, uint8_t EnOrDi)
{

}

/*
 *@brief: ISR Routine to Handle GPIO Interrupts.
 *@brief: An uint8_t specifying the GPIO Pin Number.
 *@return: None.
 * */
void GPIO_IRQHandling(uint8_t PinNumber)
{

}
