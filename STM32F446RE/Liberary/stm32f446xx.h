#ifndef STM32F446XX_H
#define STM32F446XX_H


/**************  Various Memories Base Addresses    *********/

#define FLASH_BASE_ADDRESS        0x08000000UL
#define SRAM_BASE_ADDRESS         0x20000000UL
#define ROM_BASE_ADDRESS          0x1FFF0000UL


/**************  CORE Peripheral Base Addresses    *********/

#define SYSTICK_BASE_ADDRESS      0xE000E010U

#define NVIC_BASE_ADDRESS         0xE000E100U

/**************  AHB1 Peripheral Base Addresses    *********/


#define GPIOA_BASE_ADDRESS         0x40020000U
#define GPIOB_BASE_ADDRESS         0x40020400U
#define GPIOC_BASE_ADDRESS         0x40020800U
#define GPIOD_BASE_ADDRESS         0x40020C00U
#define GPIOE_BASE_ADDRESS         0x40021000U
#define GPIOF_BASE_ADDRESS         0x40021400U
#define GPIOG_BASE_ADDRESS         0x40021800U
#define GPIOH_BASE_ADDRESS         0x40021C00U

#define RCC_BASE_ADDRESS           0x40023800U



/**************  AHB2 Peripheral Base Addresses    *********/



/**************  AHB3 Peripheral Base Addresses    *********/



/**************  APB1 Peripheral Base Addresses    *********/



/**************  APB2 Peripheral Base Addresses    *********/



/**************  SYSTICK Register Defination Structure   *********/

typedef struct
{
	volatile uint32_t CSR;   /*SysTick control and status register*/
	volatile uint32_t RVR;   /*SysTick Reload value register*/
	volatile uint32_t CVR;   /*SysTick Current value register*/
	volatile uint32_t CALIB; /*SysTick Claibration value register*/
}SYSTICK_RegDef_t;



/*************   NVIC Register Defination structure *********/

typedef struct
{
	volatile uint32_t ISER[8];
	uint32_t Resreved_0[15];
	volatile uint32_t ICER[8];
	uint32_t Resreved_1[15];
	volatile uint32_t ISPR[8];
	uint32_t Resreved_2[15];
    volatile uint32_t ICPR[8];
    uint32_t Resreved_3[15];
	volatile uint32_t IABPR[8];
	uint32_t Resreved_4[15];
	volatile uint32_t IPR[60];
	uint32_t Resreved_5[644];
	volatile uint32 STIR ;	
}NVIC_RegDef_t;



/**************  RCC Register Defination Structure   *********/


typedef struct
{
  volatile uint32_t CR;            /*!< RCC clock control register,                                   */
  volatile uint32_t PLLCFGR;       /*!< RCC PLL configuration register,                               */
  volatile uint32_t CFGR;          /*!< RCC clock configuration register,                             */
  volatile uint32_t CIR;           /*!< RCC clock interrupt register,                                 */
  volatile uint32_t AHB1RSTR;      /*!< RCC AHB1 peripheral reset register,                           */
  volatile uint32_t AHB2RSTR;      /*!< RCC AHB2 peripheral reset register,                           */
  volatile uint32_t AHB3RSTR;      /*!< RCC AHB3 peripheral reset register,                           */
  uint32_t      RESERVED0;     		/*!< Reserved, 0x1C                                                */
  volatile uint32_t APB1RSTR;      /*!< RCC APB1 peripheral reset register,                           */
  volatile uint32_t APB2RSTR;      /*!< RCC APB2 peripheral reset register,                           */
  uint32_t      RESERVED1[2];  		/*!< Reserved, 0x28-0x2C                                           */
  volatile uint32_t AHB1ENR;       /*!< RCC AHB1 peripheral clock register,                           */
  volatile uint32_t AHB2ENR;       /*!< RCC AHB2 peripheral clock register,                           */
  volatile uint32_t AHB3ENR;       /*!< RCC AHB3 peripheral clock register,                           */
  uint32_t      RESERVED2;     		/*!< Reserved, 0x3C                                                */
  volatile uint32_t APB1ENR;       /*!< RCC APB1 peripheral clock enable register,                    */
  volatile uint32_t APB2ENR;       /*!< RCC APB2 peripheral clock enable register,                    */
  uint32_t      RESERVED3[2];  		/*!< Reserved, 0x48-0x4C                                           */
  volatile uint32_t AHB1LPENR;     /*!< RCC AHB1 peripheral clock enable in low power mode register,  */
  volatile uint32_t AHB2LPENR;     /*!< RCC AHB2 peripheral clock enable in low power mode register,  */
  volatile uint32_t AHB3LPENR;     /*!< RCC AHB3 peripheral clock enable in low power mode register,  */
  uint32_t      RESERVED4;     		/*!< Reserved, 0x5C                                                */
  volatile uint32_t APB1LPENR;     /*!< RCC APB1 peripheral clock enable in low power mode register,  */
  volatile uint32_t APB2LPENR;     /*!< RCC APB2 peripheral clock enable in low power mode register,  */
  uint32_t      RESERVED5[2];  		/*!< Reserved, 0x68-0x6C                                           */
  volatile uint32_t BDCR;          /*!< RCC Backup domain control register,                           */
  volatile uint32_t CSR;           /*!< RCC clock control & status register,                          */
  uint32_t      RESERVED6[2];  		/*!< Reserved, 0x78-0x7C                                           */
  volatile uint32_t SSCGR;         /*!< RCC spread spectrum clock generation register,                */
  volatile uint32_t PLLI2SCFGR;    /*!< RCC PLLI2S configuration register,                            */
  volatile uint32_t PLLSAICFGR;    /*!< RCC PLLSAI configuration register,                            */
  volatile uint32_t DCKCFGR;       /*!< RCC Dedicated Clocks configuration register,                  */
  volatile uint32_t CKGATENR;      /*!< RCC Clocks Gated ENable Register,                             */
  volatile uint32_t DCKCFGR2;      /*!< RCC Dedicated Clocks configuration register 2,                */
} RCC_RegDef_t;

/**************  GPIO Register Defination Structure   *********/

typedef struct
{  
	volatile uint32_t  MODER;    /*GPIO PORT MODER Register*/
	volatile uint32_t  OTYPER;   /*GPIO PORT Output type Register*/
	volatile uint32_t  OSPEEDR;  /*GPIO PORT Output speed Register*/
	volatile uint32_t  PUPDR;    /*GPIO PORT Pull up Pull downRegister*/
	volatile uint32_t  IDR;      /*GPIO PORT Input Data Register*/
	volatile uint32_t  ODR;      /*GPIO PORT Output Data Register*/
	volatile uint32_t  BSRR;     /*GPIO PORT Bit Set Rest Register*/
	volatile uint32_t  LCKR;     /*GPIO PORT Configuration Lock Register*/
	volatile uint32_t  AFR[2];    /*GPIO PORT Alteranate function Registers*/
}GPIO_RegDef_t;


/************* Core Peripheral Defination **********/

#define SYSTICK             ((SYSTICK_RegDef_t*)SYSTICK_BASE_ADDRESS)

#define NVIC                ((NVIC_RegDef_t *)NVIC_BASE_ADDRESS)

/**************  GPIO Peripheral Defination   *********/

#define GPIOA              ((GPIO_RegDef_t*)GPIOA_BASE_ADDRESS)
#define GPIOB              ((GPIO_RegDef_t*)GPIOB_BASE_ADDRESS)
#define GPIOC              ((GPIO_RegDef_t*)GPIOC_BASE_ADDRESS)
#define GPIOD              ((GPIO_RegDef_t*)GPIOD_BASE_ADDRESS)
#define GPIOE              ((GPIO_RegDef_t*)GPIOE_BASE_ADDRESS)
#define GPIOF              ((GPIO_RegDef_t*)GPIOF_BASE_ADDRESS)
#define GPIOG              ((GPIO_RegDef_t*)GPIOG_BASE_ADDRESS)
#define GPIOH              ((GPIO_RegDef_t*)GPIOH_BASE_ADDRESS)

/**************  RCC Peripheral Defination   *********/

#define RCC                ((RCC_RegDef_t*)RCC_BASE_ADDRESS)


#endif
