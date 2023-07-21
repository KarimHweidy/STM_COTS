#ifndef NVIC_INTERFACE_H_
#define NVIC_INTERFACE_H_

typedef enum
{
	WWDG = 0,
	PVD,
	TAMP_STAMP,
	RTC_WKUP,
	FLASH,
	RCC_,
	EXTI0,
	EXTI1,
	EXTI2,
	EXTI3,
	EXTI4,
	DMA1_Stream0,
	DMA1_Stream1,
	DMA1_Stream2,
	DMA1_Stream3,
	DMA1_Stream4,
	DMA1_Stream5,
	DMA1_Stream6,
	ADC,
	CAN1_TX,
	CAN1_RX0,
	CAN1_RX1,
	CAN1_SCE,
	EXTI9_5,
	TIM1_BRK_TIM9,
	TIM1_UP_TIM10,
	TIM1_TRG_COM_TIM11,
	TIM1_CC,
	TIM2,
	TIM3,
	TIM4,
	I2C1_EV,
	I2C1_ER,
	I2C2_EV,
	I2C2_ER,
	SPI1,
	SPI2,
	USART1,
	USART2,
	USART3,
	EXTI15_10,
	RTC_Alarm,
	OTG_FS_WKUP,
	TIM8_BRK_TIM12,
	TIM8_UP_TIM13,
	TIM8_TRG_COM_TIM14,
	TIM8_CC,
	DMA1_Stream7,
	FMC,
	SDIO,
	TIM5,
	SPI3,
	UART4,
	UART5,
	TIM6_DAC,
	TIM7,
	DMA2_Stream0,
	DMA2_Stream1,
	DMA2_Stream2,
	DMA2_Stream3,
	DMA2_Stream4,
	CAN2_TX = 63,
	CAN2_RX0,
	CAN2_RX1,
	CAN2_SCE,
	OTG_FS,
	DMA2_Stream5,
	DMA2_Stream6,
	DMA2_Stream7,
	USART6,
	I2C3_EV,
	I2C3_ER,
	OTG_HS_EP1_OUT,
	OTG_HS_EP1_IN,
	OTG_HS_WKUP,
	OTG_HS,
	DCMI,
	FPU = 81,
	SPI4 = 84,
	SAI1 = 87,
	SAI2 = 91,
	QuadSPI,
	HDMI_CEC,
	SPDIF_Rx,
	FMPI2C1,
	FMPI2C1_error,
}NVIC_IRQ_t;

typedef enum
{
	SixteenGroups_OneSub = 0x05FA0300,
	EightGroups_TwoSubs = 0x05FA0400,
	FourGroups_FourSubs = 0x05FA0500,
	TwoGroups_EightSubs = 0x05FA0600,
	OneGroup_SixteenSubs = 0x05FA0700,
}SCB_PRGROUP_t;


typedef enum
{
	Level_0 = 0,
	Level_1,
	Level_2,
	Level_3,
	Level_4,
	Level_5,
	Level_6,
	Level_7,
	Level_8,
	Level_9,
	Level_10,
	Level_11,
	Level_12,
	Level_13,
	Level_14,
	Level_15,
}NVIC_PRLEVELS_t;


uint8_t NVIC_u8Enable(NVIC_IRQ_t IRQ_NUM);
uint8_t NVIC_u8Disable(NVIC_IRQ_t IRQ_NUM);
uint8_t NVIC_u8SetPending(NVIC_IRQ_t IRQ_NUM);
uint8_t NVIC_u8ClearPending(NVIC_IRQ_t IRQ_NUM);
uint8_t NVIC_u8GitActiveFlag(NVIC_IRQ_t IRQ_NUM, uint32_t* ActiveFlag);
uint8_t SCB_u8SetPeriorityGroup(SCB_PRGROUP_t PriorityGroup);
uint8_t NVIC_u8IRQPeriority(NVIC_IRQ_t IRQ_NUM, NVIC_PRLEVELS_t PriorityLevel);





#endif
