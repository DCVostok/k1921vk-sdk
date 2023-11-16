#define __I     volatile const                /*!< defines 'read only' permissions */
#define __O     volatile                      /*!< defines 'write only' permissions */
#define __IO    volatile                      /*!< defines 'read / write' permissions */


#define RCU_CGCFGAHB	0x3000e000		 /*--  --*/

#define RCU_CGCFGAHB_CANEN_pos	 	 	 	0	 	 /*--  --*/
#define RCU_CGCFGAHB_USBEN_pos	 	 	 	1	 	 /*--  --*/
#define RCU_CGCFGAHB_CRYPTOEN_pos	 	 	 	2	 	 /*--  --*/
#define RCU_CGCFGAHB_HASHEN_pos	 	 	 	3	 	 /*--  --*/
#define RCU_CGCFGAHB_QSPIEN_pos	 	 	 	4	 	 /*--  --*/
#define RCU_CGCFGAHB_SPI0EN_pos	 	 	 	5	 	 /*--  --*/
#define RCU_CGCFGAHB_SPI1EN_pos	 	 	 	6	 	 /*--  --*/
#define RCU_CGCFGAHB_GPIOAEN_pos	 	 	 	8	 	 /*--  --*/
#define RCU_CGCFGAHB_GPIOBEN_pos	 	 	 	9	 	 /*--  --*/
#define RCU_CGCFGAHB_GPIOCEN_pos	 	 	 	10	 	 /*--  --*/
#define RCU_CGCFGAHB_CRC0EN_pos	 	 	 	12	 	 /*--  --*/
#define RCU_CGCFGAHB_CRC1EN_pos	 	 	 	13	 	 /*--  --*/


#define RCU_CGCFGAHB_CANEN_msk	 	 	 	0x00000001UL
#define RCU_CGCFGAHB_USBEN_msk	 	 	 	0x00000002UL
#define RCU_CGCFGAHB_CRYPTOEN_msk	 	 	 	0x00000004UL
#define RCU_CGCFGAHB_HASHEN_msk	 	 	 	0x00000008UL
#define RCU_CGCFGAHB_QSPIEN_msk	 	 	 	0x00000010UL
#define RCU_CGCFGAHB_SPI0EN_msk	 	 	 	0x00000020UL
#define RCU_CGCFGAHB_SPI1EN_msk	 	 	 	0x00000040UL
#define RCU_CGCFGAHB_GPIOAEN_msk	 	 	 	0x00000100UL
#define RCU_CGCFGAHB_GPIOBEN_msk	 	 	 	0x00000200UL
#define RCU_CGCFGAHB_GPIOCEN_msk	 	 	 	0x00000400UL
#define RCU_CGCFGAHB_CRC0EN_msk	 	 	 	0x00001000UL
#define RCU_CGCFGAHB_CRC1EN_msk	 	 	 	0x00002000UL


typedef struct {
uint32_t 	 	RCU_CGCFGAHB_CANEN	 	:1;
uint32_t 	 	RCU_CGCFGAHB_USBEN	 	:1;
uint32_t 	 	RCU_CGCFGAHB_CRYPTOEN	 	:1;
uint32_t 	 	RCU_CGCFGAHB_HASHEN	 	:1;
uint32_t 	 	RCU_CGCFGAHB_QSPIEN	 	:1;
uint32_t 	 	RCU_CGCFGAHB_SPI0EN	 	:1;
uint32_t 	 	RCU_CGCFGAHB_SPI1EN	 	:1;
uint32_t 	 	 	 	:1;
uint32_t 	 	RCU_CGCFGAHB_GPIOAEN	 	:1;
uint32_t 	 	RCU_CGCFGAHB_GPIOBEN	 	:1;
uint32_t 	 	RCU_CGCFGAHB_GPIOCEN	 	:1;
uint32_t 	 	 	 	:1;
uint32_t 	 	RCU_CGCFGAHB_CRC0EN	 	:1;
uint32_t 	 	RCU_CGCFGAHB_CRC1EN	 	:1;
uint32_t 	 	 	 	:18;
} t_RCU_CGCFGAHB_bits;


typedef enum { 
 	RCU_CGCFGAHB_CANEN_off		 = 0b0,
	RCU_CGCFGAHB_CANEN_on		 = 0b1,
} t_RCU_CGCFGAHB_CANEN_enum;

typedef enum { 
 	RCU_CGCFGAHB_USBEN_off		 = 0b0,
	RCU_CGCFGAHB_USBEN_on		 = 0b1,
} t_RCU_CGCFGAHB_USBEN_enum;

typedef enum { 
 	RCU_CGCFGAHB_CRYPTOEN_off		 = 0b0,
	RCU_CGCFGAHB_CRYPTOEN_on		 = 0b1,
} t_RCU_CGCFGAHB_CRYPTOEN_enum;

typedef enum { 
 	RCU_CGCFGAHB_HASHEN_off		 = 0b0,
	RCU_CGCFGAHB_HASHEN_on		 = 0b1,
} t_RCU_CGCFGAHB_HASHEN_enum;

typedef enum { 
 	RCU_CGCFGAHB_QSPIEN_off		 = 0b0,
	RCU_CGCFGAHB_QSPIEN_on		 = 0b1,
} t_RCU_CGCFGAHB_QSPIEN_enum;

typedef enum { 
 	RCU_CGCFGAHB_SPI0EN_off		 = 0b0,
	RCU_CGCFGAHB_SPI0EN_on		 = 0b1,
} t_RCU_CGCFGAHB_SPI0EN_enum;

typedef enum { 
 	RCU_CGCFGAHB_SPI1EN_off		 = 0b0,
	RCU_CGCFGAHB_SPI1EN_on		 = 0b1,
} t_RCU_CGCFGAHB_SPI1EN_enum;

typedef enum { 
 	RCU_CGCFGAHB_GPIOAEN_off		 = 0b0,
	RCU_CGCFGAHB_GPIOAEN_on		 = 0b1,
} t_RCU_CGCFGAHB_GPIOAEN_enum;

typedef enum { 
 	RCU_CGCFGAHB_GPIOBEN_off		 = 0b0,
	RCU_CGCFGAHB_GPIOBEN_on		 = 0b1,
} t_RCU_CGCFGAHB_GPIOBEN_enum;

typedef enum { 
 	RCU_CGCFGAHB_GPIOCEN_off		 = 0b0,
	RCU_CGCFGAHB_GPIOCEN_on		 = 0b1,
} t_RCU_CGCFGAHB_GPIOCEN_enum;

typedef enum { 
 	RCU_CGCFGAHB_CRC0EN_off		 = 0b0,
	RCU_CGCFGAHB_CRC0EN_on		 = 0b1,
} t_RCU_CGCFGAHB_CRC0EN_enum;

typedef enum { 
 	RCU_CGCFGAHB_CRC1EN_off		 = 0b0,
	RCU_CGCFGAHB_CRC1EN_on		 = 0b1,
} t_RCU_CGCFGAHB_CRC1EN_enum;




#define RCU_CGCFGAPB	0x3000e008		 /*--  --*/

#define RCU_CGCFGAPB_TMR32EN_pos	 	 	 	0	 	 /*--  --*/
#define RCU_CGCFGAPB_TMR0EN_pos	 	 	 	1	 	 /*--  --*/
#define RCU_CGCFGAPB_TMR1EN_pos	 	 	 	2	 	 /*--  --*/
#define RCU_CGCFGAPB_TMR2EN_pos	 	 	 	3	 	 /*--  --*/
#define RCU_CGCFGAPB_TRNGEN_pos	 	 	 	4	 	 /*--  --*/
#define RCU_CGCFGAPB_I2CEN_pos	 	 	 	5	 	 /*--  --*/
#define RCU_CGCFGAPB_UART0EN_pos	 	 	 	6	 	 /*--  --*/
#define RCU_CGCFGAPB_UART1EN_pos	 	 	 	7	 	 /*--  --*/
#define RCU_CGCFGAPB_UART2EN_pos	 	 	 	8	 	 /*--  --*/
#define RCU_CGCFGAPB_UART3EN_pos	 	 	 	9	 	 /*--  --*/
#define RCU_CGCFGAPB_UART4EN_pos	 	 	 	10	 	 /*--  --*/
#define RCU_CGCFGAPB_WDTEN_pos	 	 	 	11	 	 /*--  --*/
#define RCU_CGCFGAPB_ADCSDEN_pos	 	 	 	15	 	 /*--  --*/
#define RCU_CGCFGAPB_ADCSAREN_pos	 	 	 	16	 	 /*--  --*/
#define RCU_CGCFGAPB_CMPEN_pos	 	 	 	18	 	 /*--  --*/


#define RCU_CGCFGAPB_TMR32EN_msk	 	 	 	0x00000001UL
#define RCU_CGCFGAPB_TMR0EN_msk	 	 	 	0x00000002UL
#define RCU_CGCFGAPB_TMR1EN_msk	 	 	 	0x00000004UL
#define RCU_CGCFGAPB_TMR2EN_msk	 	 	 	0x00000008UL
#define RCU_CGCFGAPB_TRNGEN_msk	 	 	 	0x00000010UL
#define RCU_CGCFGAPB_I2CEN_msk	 	 	 	0x00000020UL
#define RCU_CGCFGAPB_UART0EN_msk	 	 	 	0x00000040UL
#define RCU_CGCFGAPB_UART1EN_msk	 	 	 	0x00000080UL
#define RCU_CGCFGAPB_UART2EN_msk	 	 	 	0x00000100UL
#define RCU_CGCFGAPB_UART3EN_msk	 	 	 	0x00000200UL
#define RCU_CGCFGAPB_UART4EN_msk	 	 	 	0x00000400UL
#define RCU_CGCFGAPB_WDTEN_msk	 	 	 	0x00000800UL
#define RCU_CGCFGAPB_ADCSDEN_msk	 	 	 	0x00008000UL
#define RCU_CGCFGAPB_ADCSAREN_msk	 	 	 	0x00010000UL
#define RCU_CGCFGAPB_CMPEN_msk	 	 	 	0x00040000UL


typedef struct {
uint32_t 	 	RCU_CGCFGAPB_TMR32EN	 	:1;
uint32_t 	 	RCU_CGCFGAPB_TMR0EN	 	:1;
uint32_t 	 	RCU_CGCFGAPB_TMR1EN	 	:1;
uint32_t 	 	RCU_CGCFGAPB_TMR2EN	 	:1;
uint32_t 	 	RCU_CGCFGAPB_TRNGEN	 	:1;
uint32_t 	 	RCU_CGCFGAPB_I2CEN	 	:1;
uint32_t 	 	RCU_CGCFGAPB_UART0EN	 	:1;
uint32_t 	 	RCU_CGCFGAPB_UART1EN	 	:1;
uint32_t 	 	RCU_CGCFGAPB_UART2EN	 	:1;
uint32_t 	 	RCU_CGCFGAPB_UART3EN	 	:1;
uint32_t 	 	RCU_CGCFGAPB_UART4EN	 	:1;
uint32_t 	 	RCU_CGCFGAPB_WDTEN	 	:1;
uint32_t 	 	 	 	:3;
uint32_t 	 	RCU_CGCFGAPB_ADCSDEN	 	:1;
uint32_t 	 	RCU_CGCFGAPB_ADCSAREN	 	:1;
uint32_t 	 	 	 	:1;
uint32_t 	 	RCU_CGCFGAPB_CMPEN	 	:1;
uint32_t 	 	 	 	:13;
} t_RCU_CGCFGAPB_bits;


typedef enum { 
 	RCU_CGCFGAPB_TMR32EN_off		 = 0b0,
	RCU_CGCFGAPB_TMR32EN_on		 = 0b1,
} t_RCU_CGCFGAPB_TMR32EN_enum;

typedef enum { 
 	RCU_CGCFGAPB_TMR0EN_off		 = 0b0,
	RCU_CGCFGAPB_TMR0EN_on		 = 0b1,
} t_RCU_CGCFGAPB_TMR0EN_enum;

typedef enum { 
 	RCU_CGCFGAPB_TMR1EN_off		 = 0b0,
	RCU_CGCFGAPB_TMR1EN_on		 = 0b1,
} t_RCU_CGCFGAPB_TMR1EN_enum;

typedef enum { 
 	RCU_CGCFGAPB_TMR2EN_off		 = 0b0,
	RCU_CGCFGAPB_TMR2EN_on		 = 0b1,
} t_RCU_CGCFGAPB_TMR2EN_enum;

typedef enum { 
 	RCU_CGCFGAPB_TRNGEN_off		 = 0b0,
	RCU_CGCFGAPB_TRNGEN_on		 = 0b1,
} t_RCU_CGCFGAPB_TRNGEN_enum;

typedef enum { 
 	RCU_CGCFGAPB_I2CEN_off		 = 0b0,
	RCU_CGCFGAPB_I2CEN_on		 = 0b1,
} t_RCU_CGCFGAPB_I2CEN_enum;

typedef enum { 
 	RCU_CGCFGAPB_UART0EN_off		 = 0b0,
	RCU_CGCFGAPB_UART0EN_on		 = 0b1,
} t_RCU_CGCFGAPB_UART0EN_enum;

typedef enum { 
 	RCU_CGCFGAPB_UART1EN_off		 = 0b0,
	RCU_CGCFGAPB_UART1EN_on		 = 0b1,
} t_RCU_CGCFGAPB_UART1EN_enum;

typedef enum { 
 	RCU_CGCFGAPB_UART2EN_off		 = 0b0,
	RCU_CGCFGAPB_UART2EN_on		 = 0b1,
} t_RCU_CGCFGAPB_UART2EN_enum;

typedef enum { 
 	RCU_CGCFGAPB_UART3EN_off		 = 0b0,
	RCU_CGCFGAPB_UART3EN_on		 = 0b1,
} t_RCU_CGCFGAPB_UART3EN_enum;

typedef enum { 
 	RCU_CGCFGAPB_UART4EN_off		 = 0b0,
	RCU_CGCFGAPB_UART4EN_on		 = 0b1,
} t_RCU_CGCFGAPB_UART4EN_enum;

typedef enum { 
 	RCU_CGCFGAPB_WDTEN_off		 = 0b0,
	RCU_CGCFGAPB_WDTEN_on		 = 0b1,
} t_RCU_CGCFGAPB_WDTEN_enum;

typedef enum { 
 	RCU_CGCFGAPB_ADCSDEN_off		 = 0b0,
	RCU_CGCFGAPB_ADCSDEN_on		 = 0b1,
} t_RCU_CGCFGAPB_ADCSDEN_enum;

typedef enum { 
 	RCU_CGCFGAPB_ADCSAREN_off		 = 0b0,
	RCU_CGCFGAPB_ADCSAREN_on		 = 0b1,
} t_RCU_CGCFGAPB_ADCSAREN_enum;

typedef enum { 
 	RCU_CGCFGAPB_CMPEN_off		 = 0b0,
	RCU_CGCFGAPB_CMPEN_on		 = 0b1,
} t_RCU_CGCFGAPB_CMPEN_enum;




#define RCU_RSTDISAHB	0x3000e010		 /*--  --*/

#define RCU_RSTDISAHB_CANEN_pos	 	 	 	0	 	 /*--  --*/
#define RCU_RSTDISAHB_USBEN_pos	 	 	 	1	 	 /*--  --*/
#define RCU_RSTDISAHB_CRYPTOEN_pos	 	 	 	2	 	 /*--  --*/
#define RCU_RSTDISAHB_HASHEN_pos	 	 	 	3	 	 /*--  --*/
#define RCU_RSTDISAHB_QSPIEN_pos	 	 	 	4	 	 /*--  --*/
#define RCU_RSTDISAHB_SPI0EN_pos	 	 	 	5	 	 /*--  --*/
#define RCU_RSTDISAHB_SPI1EN_pos	 	 	 	6	 	 /*--  --*/
#define RCU_RSTDISAHB_GPIOAEN_pos	 	 	 	8	 	 /*--  --*/
#define RCU_RSTDISAHB_GPIOBEN_pos	 	 	 	9	 	 /*--  --*/
#define RCU_RSTDISAHB_GPIOCEN_pos	 	 	 	10	 	 /*--  --*/
#define RCU_RSTDISAHB_CRC0EN_pos	 	 	 	12	 	 /*--  --*/
#define RCU_RSTDISAHB_CRC1EN_pos	 	 	 	13	 	 /*--  --*/


#define RCU_RSTDISAHB_CANEN_msk	 	 	 	0x00000001UL
#define RCU_RSTDISAHB_USBEN_msk	 	 	 	0x00000002UL
#define RCU_RSTDISAHB_CRYPTOEN_msk	 	 	 	0x00000004UL
#define RCU_RSTDISAHB_HASHEN_msk	 	 	 	0x00000008UL
#define RCU_RSTDISAHB_QSPIEN_msk	 	 	 	0x00000010UL
#define RCU_RSTDISAHB_SPI0EN_msk	 	 	 	0x00000020UL
#define RCU_RSTDISAHB_SPI1EN_msk	 	 	 	0x00000040UL
#define RCU_RSTDISAHB_GPIOAEN_msk	 	 	 	0x00000100UL
#define RCU_RSTDISAHB_GPIOBEN_msk	 	 	 	0x00000200UL
#define RCU_RSTDISAHB_GPIOCEN_msk	 	 	 	0x00000400UL
#define RCU_RSTDISAHB_CRC0EN_msk	 	 	 	0x00001000UL
#define RCU_RSTDISAHB_CRC1EN_msk	 	 	 	0x00002000UL


typedef struct {
uint32_t 	 	RCU_RSTDISAHB_CANEN	 	:1;
uint32_t 	 	RCU_RSTDISAHB_USBEN	 	:1;
uint32_t 	 	RCU_RSTDISAHB_CRYPTOEN	 	:1;
uint32_t 	 	RCU_RSTDISAHB_HASHEN	 	:1;
uint32_t 	 	RCU_RSTDISAHB_QSPIEN	 	:1;
uint32_t 	 	RCU_RSTDISAHB_SPI0EN	 	:1;
uint32_t 	 	RCU_RSTDISAHB_SPI1EN	 	:1;
uint32_t 	 	 	 	:1;
uint32_t 	 	RCU_RSTDISAHB_GPIOAEN	 	:1;
uint32_t 	 	RCU_RSTDISAHB_GPIOBEN	 	:1;
uint32_t 	 	RCU_RSTDISAHB_GPIOCEN	 	:1;
uint32_t 	 	 	 	:1;
uint32_t 	 	RCU_RSTDISAHB_CRC0EN	 	:1;
uint32_t 	 	RCU_RSTDISAHB_CRC1EN	 	:1;
uint32_t 	 	 	 	:18;
} t_RCU_RSTDISAHB_bits;


typedef enum { 
 	RCU_RSTDISAHB_CANEN_off		 = 0b0,
	RCU_RSTDISAHB_CANEN_on		 = 0b1,
} t_RCU_RSTDISAHB_CANEN_enum;

typedef enum { 
 	RCU_RSTDISAHB_USBEN_off		 = 0b0,
	RCU_RSTDISAHB_USBEN_on		 = 0b1,
} t_RCU_RSTDISAHB_USBEN_enum;

typedef enum { 
 	RCU_RSTDISAHB_CRYPTOEN_off		 = 0b0,
	RCU_RSTDISAHB_CRYPTOEN_on		 = 0b1,
} t_RCU_RSTDISAHB_CRYPTOEN_enum;

typedef enum { 
 	RCU_RSTDISAHB_HASHEN_off		 = 0b0,
	RCU_RSTDISAHB_HASHEN_on		 = 0b1,
} t_RCU_RSTDISAHB_HASHEN_enum;

typedef enum { 
 	RCU_RSTDISAHB_QSPIEN_off		 = 0b0,
	RCU_RSTDISAHB_QSPIEN_on		 = 0b1,
} t_RCU_RSTDISAHB_QSPIEN_enum;

typedef enum { 
 	RCU_RSTDISAHB_SPI0EN_off		 = 0b0,
	RCU_RSTDISAHB_SPI0EN_on		 = 0b1,
} t_RCU_RSTDISAHB_SPI0EN_enum;

typedef enum { 
 	RCU_RSTDISAHB_SPI1EN_off		 = 0b0,
	RCU_RSTDISAHB_SPI1EN_on		 = 0b1,
} t_RCU_RSTDISAHB_SPI1EN_enum;

typedef enum { 
 	RCU_RSTDISAHB_GPIOAEN_off		 = 0b0,
	RCU_RSTDISAHB_GPIOAEN_on		 = 0b1,
} t_RCU_RSTDISAHB_GPIOAEN_enum;

typedef enum { 
 	RCU_RSTDISAHB_GPIOBEN_off		 = 0b0,
	RCU_RSTDISAHB_GPIOBEN_on		 = 0b1,
} t_RCU_RSTDISAHB_GPIOBEN_enum;

typedef enum { 
 	RCU_RSTDISAHB_GPIOCEN_off		 = 0b0,
	RCU_RSTDISAHB_GPIOCEN_on		 = 0b1,
} t_RCU_RSTDISAHB_GPIOCEN_enum;

typedef enum { 
 	RCU_RSTDISAHB_CRC0EN_off		 = 0b0,
	RCU_RSTDISAHB_CRC0EN_on		 = 0b1,
} t_RCU_RSTDISAHB_CRC0EN_enum;

typedef enum { 
 	RCU_RSTDISAHB_CRC1EN_off		 = 0b0,
	RCU_RSTDISAHB_CRC1EN_on		 = 0b1,
} t_RCU_RSTDISAHB_CRC1EN_enum;




#define RCU_RSTDISAPB	0x3000e018		 /*--  --*/

#define RCU_RSTDISAPB_TMR32EN_pos	 	 	 	0	 	 /*--  --*/
#define RCU_RSTDISAPB_TMR0EN_pos	 	 	 	1	 	 /*--  --*/
#define RCU_RSTDISAPB_TMR1EN_pos	 	 	 	2	 	 /*--  --*/
#define RCU_RSTDISAPB_TMR2EN_pos	 	 	 	3	 	 /*--  --*/
#define RCU_RSTDISAPB_TRNGEN_pos	 	 	 	4	 	 /*--  --*/
#define RCU_RSTDISAPB_I2CEN_pos	 	 	 	5	 	 /*--  --*/
#define RCU_RSTDISAPB_UART0EN_pos	 	 	 	6	 	 /*--  --*/
#define RCU_RSTDISAPB_UART1EN_pos	 	 	 	7	 	 /*--  --*/
#define RCU_RSTDISAPB_UART2EN_pos	 	 	 	8	 	 /*--  --*/
#define RCU_RSTDISAPB_UART3EN_pos	 	 	 	9	 	 /*--  --*/
#define RCU_RSTDISAPB_UART4EN_pos	 	 	 	10	 	 /*--  --*/
#define RCU_RSTDISAPB_WDTEN_pos	 	 	 	11	 	 /*--  --*/
#define RCU_RSTDISAPB_ADCSDEN_pos	 	 	 	15	 	 /*--  --*/
#define RCU_RSTDISAPB_ADCSAREN_pos	 	 	 	16	 	 /*--  --*/
#define RCU_RSTDISAPB_CMPEN_pos	 	 	 	18	 	 /*--  --*/


#define RCU_RSTDISAPB_TMR32EN_msk	 	 	 	0x00000001UL
#define RCU_RSTDISAPB_TMR0EN_msk	 	 	 	0x00000002UL
#define RCU_RSTDISAPB_TMR1EN_msk	 	 	 	0x00000004UL
#define RCU_RSTDISAPB_TMR2EN_msk	 	 	 	0x00000008UL
#define RCU_RSTDISAPB_TRNGEN_msk	 	 	 	0x00000010UL
#define RCU_RSTDISAPB_I2CEN_msk	 	 	 	0x00000020UL
#define RCU_RSTDISAPB_UART0EN_msk	 	 	 	0x00000040UL
#define RCU_RSTDISAPB_UART1EN_msk	 	 	 	0x00000080UL
#define RCU_RSTDISAPB_UART2EN_msk	 	 	 	0x00000100UL
#define RCU_RSTDISAPB_UART3EN_msk	 	 	 	0x00000200UL
#define RCU_RSTDISAPB_UART4EN_msk	 	 	 	0x00000400UL
#define RCU_RSTDISAPB_WDTEN_msk	 	 	 	0x00000800UL
#define RCU_RSTDISAPB_ADCSDEN_msk	 	 	 	0x00008000UL
#define RCU_RSTDISAPB_ADCSAREN_msk	 	 	 	0x00010000UL
#define RCU_RSTDISAPB_CMPEN_msk	 	 	 	0x00040000UL


typedef struct {
uint32_t 	 	RCU_RSTDISAPB_TMR32EN	 	:1;
uint32_t 	 	RCU_RSTDISAPB_TMR0EN	 	:1;
uint32_t 	 	RCU_RSTDISAPB_TMR1EN	 	:1;
uint32_t 	 	RCU_RSTDISAPB_TMR2EN	 	:1;
uint32_t 	 	RCU_RSTDISAPB_TRNGEN	 	:1;
uint32_t 	 	RCU_RSTDISAPB_I2CEN	 	:1;
uint32_t 	 	RCU_RSTDISAPB_UART0EN	 	:1;
uint32_t 	 	RCU_RSTDISAPB_UART1EN	 	:1;
uint32_t 	 	RCU_RSTDISAPB_UART2EN	 	:1;
uint32_t 	 	RCU_RSTDISAPB_UART3EN	 	:1;
uint32_t 	 	RCU_RSTDISAPB_UART4EN	 	:1;
uint32_t 	 	RCU_RSTDISAPB_WDTEN	 	:1;
uint32_t 	 	 	 	:3;
uint32_t 	 	RCU_RSTDISAPB_ADCSDEN	 	:1;
uint32_t 	 	RCU_RSTDISAPB_ADCSAREN	 	:1;
uint32_t 	 	 	 	:1;
uint32_t 	 	RCU_RSTDISAPB_CMPEN	 	:1;
uint32_t 	 	 	 	:13;
} t_RCU_RSTDISAPB_bits;


typedef enum { 
 	RCU_RSTDISAPB_TMR32EN_off		 = 0b0,
	RCU_RSTDISAPB_TMR32EN_on		 = 0b1,
} t_RCU_RSTDISAPB_TMR32EN_enum;

typedef enum { 
 	RCU_RSTDISAPB_TMR0EN_off		 = 0b0,
	RCU_RSTDISAPB_TMR0EN_on		 = 0b1,
} t_RCU_RSTDISAPB_TMR0EN_enum;

typedef enum { 
 	RCU_RSTDISAPB_TMR1EN_off		 = 0b0,
	RCU_RSTDISAPB_TMR1EN_on		 = 0b1,
} t_RCU_RSTDISAPB_TMR1EN_enum;

typedef enum { 
 	RCU_RSTDISAPB_TMR2EN_off		 = 0b0,
	RCU_RSTDISAPB_TMR2EN_on		 = 0b1,
} t_RCU_RSTDISAPB_TMR2EN_enum;

typedef enum { 
 	RCU_RSTDISAPB_TRNGEN_off		 = 0b0,
	RCU_RSTDISAPB_TRNGEN_on		 = 0b1,
} t_RCU_RSTDISAPB_TRNGEN_enum;

typedef enum { 
 	RCU_RSTDISAPB_I2CEN_off		 = 0b0,
	RCU_RSTDISAPB_I2CEN_on		 = 0b1,
} t_RCU_RSTDISAPB_I2CEN_enum;

typedef enum { 
 	RCU_RSTDISAPB_UART0EN_off		 = 0b0,
	RCU_RSTDISAPB_UART0EN_on		 = 0b1,
} t_RCU_RSTDISAPB_UART0EN_enum;

typedef enum { 
 	RCU_RSTDISAPB_UART1EN_off		 = 0b0,
	RCU_RSTDISAPB_UART1EN_on		 = 0b1,
} t_RCU_RSTDISAPB_UART1EN_enum;

typedef enum { 
 	RCU_RSTDISAPB_UART2EN_off		 = 0b0,
	RCU_RSTDISAPB_UART2EN_on		 = 0b1,
} t_RCU_RSTDISAPB_UART2EN_enum;

typedef enum { 
 	RCU_RSTDISAPB_UART3EN_off		 = 0b0,
	RCU_RSTDISAPB_UART3EN_on		 = 0b1,
} t_RCU_RSTDISAPB_UART3EN_enum;

typedef enum { 
 	RCU_RSTDISAPB_UART4EN_off		 = 0b0,
	RCU_RSTDISAPB_UART4EN_on		 = 0b1,
} t_RCU_RSTDISAPB_UART4EN_enum;

typedef enum { 
 	RCU_RSTDISAPB_WDTEN_off		 = 0b0,
	RCU_RSTDISAPB_WDTEN_on		 = 0b1,
} t_RCU_RSTDISAPB_WDTEN_enum;

typedef enum { 
 	RCU_RSTDISAPB_ADCSDEN_off		 = 0b0,
	RCU_RSTDISAPB_ADCSDEN_on		 = 0b1,
} t_RCU_RSTDISAPB_ADCSDEN_enum;

typedef enum { 
 	RCU_RSTDISAPB_ADCSAREN_off		 = 0b0,
	RCU_RSTDISAPB_ADCSAREN_on		 = 0b1,
} t_RCU_RSTDISAPB_ADCSAREN_enum;

typedef enum { 
 	RCU_RSTDISAPB_CMPEN_off		 = 0b0,
	RCU_RSTDISAPB_CMPEN_on		 = 0b1,
} t_RCU_RSTDISAPB_CMPEN_enum;




#define RCU_RSTSTAT	0x3000e020		 /*--  --*/

#define RCU_RSTSTAT_PORVBAT_pos	 	 	 	0	 	 /*--  --*/
#define RCU_RSTSTAT_POR_pos	 	 	 	1	 	 /*--  --*/
#define RCU_RSTSTAT_WDOG_pos	 	 	 	2	 	 /*--  --*/
#define RCU_RSTSTAT_IWDOG_pos	 	 	 	3	 	 /*--  --*/
#define RCU_RSTSTAT_SYSRST_pos	 	 	 	4	 	 /*--  --*/


#define RCU_RSTSTAT_PORVBAT_msk	 	 	 	0x00000001UL
#define RCU_RSTSTAT_POR_msk	 	 	 	0x00000002UL
#define RCU_RSTSTAT_WDOG_msk	 	 	 	0x00000004UL
#define RCU_RSTSTAT_IWDOG_msk	 	 	 	0x00000008UL
#define RCU_RSTSTAT_SYSRST_msk	 	 	 	0x00000010UL


typedef struct {
uint32_t 	 	RCU_RSTSTAT_PORVBAT	 	:1;
uint32_t 	 	RCU_RSTSTAT_POR	 	:1;
uint32_t 	 	RCU_RSTSTAT_WDOG	 	:1;
uint32_t 	 	RCU_RSTSTAT_IWDOG	 	:1;
uint32_t 	 	RCU_RSTSTAT_SYSRST	 	:1;
uint32_t 	 	 	 	:27;
} t_RCU_RSTSTAT_bits;


typedef enum { 
 	RCU_RSTSTAT_PORVBAT_off		 = 0b0,
	RCU_RSTSTAT_PORVBAT_on		 = 0b1,
} t_RCU_RSTSTAT_PORVBAT_enum;

typedef enum { 
 	RCU_RSTSTAT_POR_off		 = 0b0,
	RCU_RSTSTAT_POR_on		 = 0b1,
} t_RCU_RSTSTAT_POR_enum;

typedef enum { 
 	RCU_RSTSTAT_WDOG_off		 = 0b0,
	RCU_RSTSTAT_WDOG_on		 = 0b1,
} t_RCU_RSTSTAT_WDOG_enum;

typedef enum { 
 	RCU_RSTSTAT_IWDOG_off		 = 0b0,
	RCU_RSTSTAT_IWDOG_on		 = 0b1,
} t_RCU_RSTSTAT_IWDOG_enum;

typedef enum { 
 	RCU_RSTSTAT_SYSRST_off		 = 0b0,
	RCU_RSTSTAT_SYSRST_on		 = 0b1,
} t_RCU_RSTSTAT_SYSRST_enum;




#define RCU_SYSCLKCFG	0x3000e030		 /*--  --*/

#define RCU_SYSCLKCFG_SRC_pos	 	 	 	0	 	 /*--  --*/
#define RCU_SYSCLKCFG_SECEN_pos	 	 	 	16	 	 /*--  --*/


#define RCU_SYSCLKCFG_SRC_msk	 	 	 	0x00000003UL
#define RCU_SYSCLKCFG_SECEN_msk	 	 	 	0x00010000UL


typedef struct {
uint32_t 	 	RCU_SYSCLKCFG_SRC	 	:2;
uint32_t 	 	 	 	:14;
uint32_t 	 	RCU_SYSCLKCFG_SECEN	 	:1;
uint32_t 	 	 	 	:15;
} t_RCU_SYSCLKCFG_bits;


typedef enum { 
 	RCU_SYSCLKCFG_SRC_refclk		 = 0b00,
	RCU_SYSCLKCFG_SRC_srcclk		 = 0b01,
	RCU_SYSCLKCFG_SRC_syspll0clk		 = 0b10,
	RCU_SYSCLKCFG_SRC_lsiclk		 = 0b11,
} t_RCU_SYSCLKCFG_SRC_enum;

typedef enum { 
 	RCU_SYSCLKCFG_SECEN_off		 = 0b0,
	RCU_SYSCLKCFG_SECEN_on		 = 0b1,
} t_RCU_SYSCLKCFG_SECEN_enum;




#define RCU_SECCNT0	0x3000e034		 /*--  --*/

#define RCU_SECCNT0_VAL0_pos	 	 	 	0	 	 /*--  --*/
#define RCU_SECCNT0_VAL1_pos	 	 	 	16	 	 /*--  --*/


#define RCU_SECCNT0_VAL0_msk	 	 	 	0x0000ffffUL
#define RCU_SECCNT0_VAL1_msk	 	 	 	0xffff0000UL


typedef struct {
uint32_t 	 	RCU_SECCNT0_VAL0	 	:16;
uint32_t 	 	RCU_SECCNT0_VAL1	 	:16;
} t_RCU_SECCNT0_bits;





#define RCU_SECCNT1	0x3000e038		 /*--  --*/

#define RCU_SECCNT1_VAL2_pos	 	 	 	0	 	 /*--  --*/
#define RCU_SECCNT1_VAL3_pos	 	 	 	16	 	 /*--  --*/


#define RCU_SECCNT1_VAL2_msk	 	 	 	0x0000ffffUL
#define RCU_SECCNT1_VAL3_msk	 	 	 	0xffff0000UL


typedef struct {
uint32_t 	 	RCU_SECCNT1_VAL2	 	:16;
uint32_t 	 	RCU_SECCNT1_VAL3	 	:16;
} t_RCU_SECCNT1_bits;





#define RCU_CLKSTAT	0x3000e03c		 /*--  --*/

#define RCU_CLKSTAT_SRC_pos	 	 	 	0	 	 /*--  --*/
#define RCU_CLKSTAT_CLKGOOD0_pos	 	 	 	8	 	 /*--  --*/
#define RCU_CLKSTAT_CLKGOOD1_pos	 	 	 	9	 	 /*--  --*/
#define RCU_CLKSTAT_CLKGOOD2_pos	 	 	 	10	 	 /*--  --*/
#define RCU_CLKSTAT_CLKGOOD3_pos	 	 	 	11	 	 /*--  --*/
#define RCU_CLKSTAT_CLKERR0_pos	 	 	 	16	 	 /*--  --*/
#define RCU_CLKSTAT_CLKERR1_pos	 	 	 	17	 	 /*--  --*/
#define RCU_CLKSTAT_CLKERR2_pos	 	 	 	18	 	 /*--  --*/
#define RCU_CLKSTAT_CLKERR3_pos	 	 	 	19	 	 /*--  --*/


#define RCU_CLKSTAT_SRC_msk	 	 	 	0x00000003UL
#define RCU_CLKSTAT_CLKGOOD0_msk	 	 	 	0x00000100UL
#define RCU_CLKSTAT_CLKGOOD1_msk	 	 	 	0x00000200UL
#define RCU_CLKSTAT_CLKGOOD2_msk	 	 	 	0x00000400UL
#define RCU_CLKSTAT_CLKGOOD3_msk	 	 	 	0x00000800UL
#define RCU_CLKSTAT_CLKERR0_msk	 	 	 	0x00010000UL
#define RCU_CLKSTAT_CLKERR1_msk	 	 	 	0x00020000UL
#define RCU_CLKSTAT_CLKERR2_msk	 	 	 	0x00040000UL
#define RCU_CLKSTAT_CLKERR3_msk	 	 	 	0x00080000UL


typedef struct {
uint32_t 	 	RCU_CLKSTAT_SRC	 	:2;
uint32_t 	 	 	 	:6;
uint32_t 	 	RCU_CLKSTAT_CLKGOOD0	 	:1;
uint32_t 	 	RCU_CLKSTAT_CLKGOOD1	 	:1;
uint32_t 	 	RCU_CLKSTAT_CLKGOOD2	 	:1;
uint32_t 	 	RCU_CLKSTAT_CLKGOOD3	 	:1;
uint32_t 	 	 	 	:4;
uint32_t 	 	RCU_CLKSTAT_CLKERR0	 	:1;
uint32_t 	 	RCU_CLKSTAT_CLKERR1	 	:1;
uint32_t 	 	RCU_CLKSTAT_CLKERR2	 	:1;
uint32_t 	 	RCU_CLKSTAT_CLKERR3	 	:1;
uint32_t 	 	 	 	:12;
} t_RCU_CLKSTAT_bits;


typedef enum { 
 	RCU_CLKSTAT_CLKGOOD0_off		 = 0b0,
	RCU_CLKSTAT_CLKGOOD0_on		 = 0b1,
} t_RCU_CLKSTAT_CLKGOOD0_enum;

typedef enum { 
 	RCU_CLKSTAT_CLKGOOD1_off		 = 0b0,
	RCU_CLKSTAT_CLKGOOD1_on		 = 0b1,
} t_RCU_CLKSTAT_CLKGOOD1_enum;

typedef enum { 
 	RCU_CLKSTAT_CLKGOOD2_off		 = 0b0,
	RCU_CLKSTAT_CLKGOOD2_on		 = 0b1,
} t_RCU_CLKSTAT_CLKGOOD2_enum;

typedef enum { 
 	RCU_CLKSTAT_CLKGOOD3_off		 = 0b0,
	RCU_CLKSTAT_CLKGOOD3_on		 = 0b1,
} t_RCU_CLKSTAT_CLKGOOD3_enum;

typedef enum { 
 	RCU_CLKSTAT_CLKERR0_off		 = 0b0,
	RCU_CLKSTAT_CLKERR0_on		 = 0b1,
} t_RCU_CLKSTAT_CLKERR0_enum;

typedef enum { 
 	RCU_CLKSTAT_CLKERR1_off		 = 0b0,
	RCU_CLKSTAT_CLKERR1_on		 = 0b1,
} t_RCU_CLKSTAT_CLKERR1_enum;

typedef enum { 
 	RCU_CLKSTAT_CLKERR2_off		 = 0b0,
	RCU_CLKSTAT_CLKERR2_on		 = 0b1,
} t_RCU_CLKSTAT_CLKERR2_enum;

typedef enum { 
 	RCU_CLKSTAT_CLKERR3_off		 = 0b0,
	RCU_CLKSTAT_CLKERR3_on		 = 0b1,
} t_RCU_CLKSTAT_CLKERR3_enum;




#define RCU_PLLSYSCFG0	0x3000e050		 /*--  --*/

#define RCU_PLLSYSCFG0_PLLEN_pos	 	 	 	0	 	 /*--  --*/
#define RCU_PLLSYSCFG0_BYP_pos	 	 	 	1	 	 /*--  --*/
#define RCU_PLLSYSCFG0_DACEN_pos	 	 	 	3	 	 /*--  --*/
#define RCU_PLLSYSCFG0_DSMEN_pos	 	 	 	4	 	 /*--  --*/
#define RCU_PLLSYSCFG0_FOUTEN_pos	 	 	 	5	 	 /*--  --*/
#define RCU_PLLSYSCFG0_REFDIV_pos	 	 	 	7	 	 /*--  --*/
#define RCU_PLLSYSCFG0_PD0A_pos	 	 	 	13	 	 /*--  --*/
#define RCU_PLLSYSCFG0_PD0B_pos	 	 	 	16	 	 /*--  --*/
#define RCU_PLLSYSCFG0_PD1A_pos	 	 	 	22	 	 /*--  --*/
#define RCU_PLLSYSCFG0_PD1B_pos	 	 	 	25	 	 /*--  --*/


#define RCU_PLLSYSCFG0_PLLEN_msk	 	 	 	0x00000001UL
#define RCU_PLLSYSCFG0_BYP_msk	 	 	 	0x00000006UL
#define RCU_PLLSYSCFG0_DACEN_msk	 	 	 	0x00000008UL
#define RCU_PLLSYSCFG0_DSMEN_msk	 	 	 	0x00000010UL
#define RCU_PLLSYSCFG0_FOUTEN_msk	 	 	 	0x00000060UL
#define RCU_PLLSYSCFG0_REFDIV_msk	 	 	 	0x00001f80UL
#define RCU_PLLSYSCFG0_PD0A_msk	 	 	 	0x0000e000UL
#define RCU_PLLSYSCFG0_PD0B_msk	 	 	 	0x003f0000UL
#define RCU_PLLSYSCFG0_PD1A_msk	 	 	 	0x01c00000UL
#define RCU_PLLSYSCFG0_PD1B_msk	 	 	 	0x7e000000UL


typedef struct {
uint32_t 	 	RCU_PLLSYSCFG0_PLLEN	 	:1;
uint32_t 	 	RCU_PLLSYSCFG0_BYP	 	:2;
uint32_t 	 	RCU_PLLSYSCFG0_DACEN	 	:1;
uint32_t 	 	RCU_PLLSYSCFG0_DSMEN	 	:1;
uint32_t 	 	RCU_PLLSYSCFG0_FOUTEN	 	:2;
uint32_t 	 	RCU_PLLSYSCFG0_REFDIV	 	:6;
uint32_t 	 	RCU_PLLSYSCFG0_PD0A	 	:3;
uint32_t 	 	RCU_PLLSYSCFG0_PD0B	 	:6;
uint32_t 	 	RCU_PLLSYSCFG0_PD1A	 	:3;
uint32_t 	 	RCU_PLLSYSCFG0_PD1B	 	:6;
uint32_t 	 	 	 	:1;
} t_RCU_PLLSYSCFG0_bits;


typedef enum { 
 	RCU_PLLSYSCFG0_PLLEN_off		 = 0b0,
	RCU_PLLSYSCFG0_PLLEN_on		 = 0b1,
} t_RCU_PLLSYSCFG0_PLLEN_enum;

typedef enum { 
 	RCU_PLLSYSCFG0_DACEN_off		 = 0b0,
	RCU_PLLSYSCFG0_DACEN_on		 = 0b1,
} t_RCU_PLLSYSCFG0_DACEN_enum;

typedef enum { 
 	RCU_PLLSYSCFG0_DSMEN_off		 = 0b0,
	RCU_PLLSYSCFG0_DSMEN_on		 = 0b1,
} t_RCU_PLLSYSCFG0_DSMEN_enum;




#define RCU_PLLSYSCFG1	0x3000e054		 /*--  --*/

#define RCU_PLLSYSCFG1_FRAC_pos	 	 	 	0	 	 /*--  --*/


#define RCU_PLLSYSCFG1_FRAC_msk	 	 	 	0x00ffffffUL


typedef struct {
uint32_t 	 	RCU_PLLSYSCFG1_FRAC	 	:24;
uint32_t 	 	 	 	:8;
} t_RCU_PLLSYSCFG1_bits;





#define RCU_PLLSYSCFG2	0x3000e058		 /*--  --*/

#define RCU_PLLSYSCFG2_FBDIV_pos	 	 	 	0	 	 /*--  --*/


#define RCU_PLLSYSCFG2_FBDIV_msk	 	 	 	0x00000fffUL


typedef struct {
uint32_t 	 	RCU_PLLSYSCFG2_FBDIV	 	:12;
uint32_t 	 	 	 	:20;
} t_RCU_PLLSYSCFG2_bits;





#define RCU_PLLSYSCFG3	0x3000e05c		 /*--  --*/

#define RCU_PLLSYSCFG3_DSKEWEN_pos	 	 	 	0	 	 /*--  --*/
#define RCU_PLLSYSCFG3_DSKEWCALBYP_pos	 	 	 	1	 	 /*--  --*/
#define RCU_PLLSYSCFG3_DSKEWCALCNT_pos	 	 	 	2	 	 /*--  --*/
#define RCU_PLLSYSCFG3_DSKEWCALEN_pos	 	 	 	5	 	 /*--  --*/
#define RCU_PLLSYSCFG3_DSKEWFASTCAL_pos	 	 	 	6	 	 /*--  --*/
#define RCU_PLLSYSCFG3_DSKEWCALIN_pos	 	 	 	8	 	 /*--  --*/
#define RCU_PLLSYSCFG3_REFSEL_pos	 	 	 	24	 	 /*--  --*/


#define RCU_PLLSYSCFG3_DSKEWEN_msk	 	 	 	0x00000001UL
#define RCU_PLLSYSCFG3_DSKEWCALBYP_msk	 	 	 	0x00000002UL
#define RCU_PLLSYSCFG3_DSKEWCALCNT_msk	 	 	 	0x0000001cUL
#define RCU_PLLSYSCFG3_DSKEWCALEN_msk	 	 	 	0x00000020UL
#define RCU_PLLSYSCFG3_DSKEWFASTCAL_msk	 	 	 	0x00000040UL
#define RCU_PLLSYSCFG3_DSKEWCALIN_msk	 	 	 	0x000fff00UL
#define RCU_PLLSYSCFG3_REFSEL_msk	 	 	 	0x01000000UL


typedef struct {
uint32_t 	 	RCU_PLLSYSCFG3_DSKEWEN	 	:1;
uint32_t 	 	RCU_PLLSYSCFG3_DSKEWCALBYP	 	:1;
uint32_t 	 	RCU_PLLSYSCFG3_DSKEWCALCNT	 	:3;
uint32_t 	 	RCU_PLLSYSCFG3_DSKEWCALEN	 	:1;
uint32_t 	 	RCU_PLLSYSCFG3_DSKEWFASTCAL	 	:1;
uint32_t 	 	 	 	:1;
uint32_t 	 	RCU_PLLSYSCFG3_DSKEWCALIN	 	:12;
uint32_t 	 	 	 	:4;
uint32_t 	 	RCU_PLLSYSCFG3_REFSEL	 	:1;
uint32_t 	 	 	 	:7;
} t_RCU_PLLSYSCFG3_bits;


typedef enum { 
 	RCU_PLLSYSCFG3_DSKEWEN_off		 = 0b0,
	RCU_PLLSYSCFG3_DSKEWEN_on		 = 0b1,
} t_RCU_PLLSYSCFG3_DSKEWEN_enum;

typedef enum { 
 	RCU_PLLSYSCFG3_DSKEWCALBYP_off		 = 0b0,
	RCU_PLLSYSCFG3_DSKEWCALBYP_on		 = 0b1,
} t_RCU_PLLSYSCFG3_DSKEWCALBYP_enum;

typedef enum { 
 	RCU_PLLSYSCFG3_DSKEWCALEN_off		 = 0b0,
	RCU_PLLSYSCFG3_DSKEWCALEN_on		 = 0b1,
} t_RCU_PLLSYSCFG3_DSKEWCALEN_enum;

typedef enum { 
 	RCU_PLLSYSCFG3_DSKEWFASTCAL_off		 = 0b0,
	RCU_PLLSYSCFG3_DSKEWFASTCAL_on		 = 0b1,
} t_RCU_PLLSYSCFG3_DSKEWFASTCAL_enum;

typedef enum { 
 	RCU_PLLSYSCFG3_REFSEL_off		 = 0b0,
	RCU_PLLSYSCFG3_REFSEL_on		 = 0b1,
} t_RCU_PLLSYSCFG3_REFSEL_enum;




#define RCU_PLLSYSSTAT	0x3000e060		 /*--  --*/

#define RCU_PLLSYSSTAT_LOCK_pos	 	 	 	0	 	 /*--  --*/


#define RCU_PLLSYSSTAT_LOCK_msk	 	 	 	0x00000001UL


typedef struct {
uint32_t 	 	RCU_PLLSYSSTAT_LOCK	 	:1;
uint32_t 	 	 	 	:31;
} t_RCU_PLLSYSSTAT_bits;


typedef enum { 
 	RCU_PLLSYSSTAT_LOCK_off		 = 0b0,
	RCU_PLLSYSSTAT_LOCK_on		 = 0b1,
} t_RCU_PLLSYSSTAT_LOCK_enum;




#define RCU_UARTCLKCFG0	0x3000e070		 /*--  --*/

#define RCU_UARTCLKCFG0_CLKEN_pos	 	 	 	0	 	 /*--  --*/
#define RCU_UARTCLKCFG0_RSTDIS_pos	 	 	 	8	 	 /*--  --*/
#define RCU_UARTCLKCFG0_CLKSEL_pos	 	 	 	16	 	 /*--  --*/
#define RCU_UARTCLKCFG0_DIVEN_pos	 	 	 	20	 	 /*--  --*/
#define RCU_UARTCLKCFG0_DIVN_pos	 	 	 	24	 	 /*--  --*/


#define RCU_UARTCLKCFG0_CLKEN_msk	 	 	 	0x00000001UL
#define RCU_UARTCLKCFG0_RSTDIS_msk	 	 	 	0x00000100UL
#define RCU_UARTCLKCFG0_CLKSEL_msk	 	 	 	0x00030000UL
#define RCU_UARTCLKCFG0_DIVEN_msk	 	 	 	0x00100000UL
#define RCU_UARTCLKCFG0_DIVN_msk	 	 	 	0x3f000000UL


typedef struct {
uint32_t 	 	RCU_UARTCLKCFG0_CLKEN	 	:1;
uint32_t 	 	 	 	:7;
uint32_t 	 	RCU_UARTCLKCFG0_RSTDIS	 	:1;
uint32_t 	 	 	 	:7;
uint32_t 	 	RCU_UARTCLKCFG0_CLKSEL	 	:2;
uint32_t 	 	 	 	:2;
uint32_t 	 	RCU_UARTCLKCFG0_DIVEN	 	:1;
uint32_t 	 	 	 	:3;
uint32_t 	 	RCU_UARTCLKCFG0_DIVN	 	:6;
uint32_t 	 	 	 	:2;
} t_RCU_UARTCLKCFG0_bits;


typedef enum { 
 	RCU_UARTCLKCFG0_CLKEN_off		 = 0b0,
	RCU_UARTCLKCFG0_CLKEN_on		 = 0b1,
} t_RCU_UARTCLKCFG0_CLKEN_enum;

typedef enum { 
 	RCU_UARTCLKCFG0_RSTDIS_off		 = 0b0,
	RCU_UARTCLKCFG0_RSTDIS_on		 = 0b1,
} t_RCU_UARTCLKCFG0_RSTDIS_enum;

typedef enum { 
 	RCU_UARTCLKCFG0_CLKSEL_hsi		 = 0b00,
	RCU_UARTCLKCFG0_CLKSEL_hse		 = 0b01,
	RCU_UARTCLKCFG0_CLKSEL_pll0		 = 0b10,
	RCU_UARTCLKCFG0_CLKSEL_pll1		 = 0b11,
} t_RCU_UARTCLKCFG0_CLKSEL_enum;

typedef enum { 
 	RCU_UARTCLKCFG0_DIVEN_off		 = 0b0,
	RCU_UARTCLKCFG0_DIVEN_on		 = 0b1,
} t_RCU_UARTCLKCFG0_DIVEN_enum;




#define RCU_UARTCLKCFG1	0x3000e074		 /*--  --*/

#define RCU_UARTCLKCFG1_CLKEN_pos	 	 	 	0	 	 /*--  --*/
#define RCU_UARTCLKCFG1_RSTDIS_pos	 	 	 	8	 	 /*--  --*/
#define RCU_UARTCLKCFG1_CLKSEL_pos	 	 	 	16	 	 /*--  --*/
#define RCU_UARTCLKCFG1_DIVEN_pos	 	 	 	20	 	 /*--  --*/
#define RCU_UARTCLKCFG1_DIVN_pos	 	 	 	24	 	 /*--  --*/


#define RCU_UARTCLKCFG1_CLKEN_msk	 	 	 	0x00000001UL
#define RCU_UARTCLKCFG1_RSTDIS_msk	 	 	 	0x00000100UL
#define RCU_UARTCLKCFG1_CLKSEL_msk	 	 	 	0x00030000UL
#define RCU_UARTCLKCFG1_DIVEN_msk	 	 	 	0x00100000UL
#define RCU_UARTCLKCFG1_DIVN_msk	 	 	 	0x3f000000UL


typedef struct {
uint32_t 	 	RCU_UARTCLKCFG1_CLKEN	 	:1;
uint32_t 	 	 	 	:7;
uint32_t 	 	RCU_UARTCLKCFG1_RSTDIS	 	:1;
uint32_t 	 	 	 	:7;
uint32_t 	 	RCU_UARTCLKCFG1_CLKSEL	 	:2;
uint32_t 	 	 	 	:2;
uint32_t 	 	RCU_UARTCLKCFG1_DIVEN	 	:1;
uint32_t 	 	 	 	:3;
uint32_t 	 	RCU_UARTCLKCFG1_DIVN	 	:6;
uint32_t 	 	 	 	:2;
} t_RCU_UARTCLKCFG1_bits;


typedef enum { 
 	RCU_UARTCLKCFG1_CLKEN_off		 = 0b0,
	RCU_UARTCLKCFG1_CLKEN_on		 = 0b1,
} t_RCU_UARTCLKCFG1_CLKEN_enum;

typedef enum { 
 	RCU_UARTCLKCFG1_RSTDIS_off		 = 0b0,
	RCU_UARTCLKCFG1_RSTDIS_on		 = 0b1,
} t_RCU_UARTCLKCFG1_RSTDIS_enum;

typedef enum { 
 	RCU_UARTCLKCFG1_CLKSEL_hsi		 = 0b00,
	RCU_UARTCLKCFG1_CLKSEL_hse		 = 0b01,
	RCU_UARTCLKCFG1_CLKSEL_pll0		 = 0b10,
	RCU_UARTCLKCFG1_CLKSEL_pll1		 = 0b11,
} t_RCU_UARTCLKCFG1_CLKSEL_enum;

typedef enum { 
 	RCU_UARTCLKCFG1_DIVEN_off		 = 0b0,
	RCU_UARTCLKCFG1_DIVEN_on		 = 0b1,
} t_RCU_UARTCLKCFG1_DIVEN_enum;




#define RCU_UARTCLKCFG2	0x3000e078		 /*--  --*/

#define RCU_UARTCLKCFG2_CLKEN_pos	 	 	 	0	 	 /*--  --*/
#define RCU_UARTCLKCFG2_RSTDIS_pos	 	 	 	8	 	 /*--  --*/
#define RCU_UARTCLKCFG2_CLKSEL_pos	 	 	 	16	 	 /*--  --*/
#define RCU_UARTCLKCFG2_DIVEN_pos	 	 	 	20	 	 /*--  --*/
#define RCU_UARTCLKCFG2_DIVN_pos	 	 	 	24	 	 /*--  --*/


#define RCU_UARTCLKCFG2_CLKEN_msk	 	 	 	0x00000001UL
#define RCU_UARTCLKCFG2_RSTDIS_msk	 	 	 	0x00000100UL
#define RCU_UARTCLKCFG2_CLKSEL_msk	 	 	 	0x00030000UL
#define RCU_UARTCLKCFG2_DIVEN_msk	 	 	 	0x00100000UL
#define RCU_UARTCLKCFG2_DIVN_msk	 	 	 	0x3f000000UL


typedef struct {
uint32_t 	 	RCU_UARTCLKCFG2_CLKEN	 	:1;
uint32_t 	 	 	 	:7;
uint32_t 	 	RCU_UARTCLKCFG2_RSTDIS	 	:1;
uint32_t 	 	 	 	:7;
uint32_t 	 	RCU_UARTCLKCFG2_CLKSEL	 	:2;
uint32_t 	 	 	 	:2;
uint32_t 	 	RCU_UARTCLKCFG2_DIVEN	 	:1;
uint32_t 	 	 	 	:3;
uint32_t 	 	RCU_UARTCLKCFG2_DIVN	 	:6;
uint32_t 	 	 	 	:2;
} t_RCU_UARTCLKCFG2_bits;


typedef enum { 
 	RCU_UARTCLKCFG2_CLKEN_off		 = 0b0,
	RCU_UARTCLKCFG2_CLKEN_on		 = 0b1,
} t_RCU_UARTCLKCFG2_CLKEN_enum;

typedef enum { 
 	RCU_UARTCLKCFG2_RSTDIS_off		 = 0b0,
	RCU_UARTCLKCFG2_RSTDIS_on		 = 0b1,
} t_RCU_UARTCLKCFG2_RSTDIS_enum;

typedef enum { 
 	RCU_UARTCLKCFG2_CLKSEL_hsi		 = 0b00,
	RCU_UARTCLKCFG2_CLKSEL_hse		 = 0b01,
	RCU_UARTCLKCFG2_CLKSEL_pll0		 = 0b10,
	RCU_UARTCLKCFG2_CLKSEL_pll1		 = 0b11,
} t_RCU_UARTCLKCFG2_CLKSEL_enum;

typedef enum { 
 	RCU_UARTCLKCFG2_DIVEN_off		 = 0b0,
	RCU_UARTCLKCFG2_DIVEN_on		 = 0b1,
} t_RCU_UARTCLKCFG2_DIVEN_enum;




#define RCU_UARTCLKCFG3	0x3000e07c		 /*--  --*/

#define RCU_UARTCLKCFG3_CLKEN_pos	 	 	 	0	 	 /*--  --*/
#define RCU_UARTCLKCFG3_RSTDIS_pos	 	 	 	8	 	 /*--  --*/
#define RCU_UARTCLKCFG3_CLKSEL_pos	 	 	 	16	 	 /*--  --*/
#define RCU_UARTCLKCFG3_DIVEN_pos	 	 	 	20	 	 /*--  --*/
#define RCU_UARTCLKCFG3_DIVN_pos	 	 	 	24	 	 /*--  --*/


#define RCU_UARTCLKCFG3_CLKEN_msk	 	 	 	0x00000001UL
#define RCU_UARTCLKCFG3_RSTDIS_msk	 	 	 	0x00000100UL
#define RCU_UARTCLKCFG3_CLKSEL_msk	 	 	 	0x00030000UL
#define RCU_UARTCLKCFG3_DIVEN_msk	 	 	 	0x00100000UL
#define RCU_UARTCLKCFG3_DIVN_msk	 	 	 	0x3f000000UL


typedef struct {
uint32_t 	 	RCU_UARTCLKCFG3_CLKEN	 	:1;
uint32_t 	 	 	 	:7;
uint32_t 	 	RCU_UARTCLKCFG3_RSTDIS	 	:1;
uint32_t 	 	 	 	:7;
uint32_t 	 	RCU_UARTCLKCFG3_CLKSEL	 	:2;
uint32_t 	 	 	 	:2;
uint32_t 	 	RCU_UARTCLKCFG3_DIVEN	 	:1;
uint32_t 	 	 	 	:3;
uint32_t 	 	RCU_UARTCLKCFG3_DIVN	 	:6;
uint32_t 	 	 	 	:2;
} t_RCU_UARTCLKCFG3_bits;


typedef enum { 
 	RCU_UARTCLKCFG3_CLKEN_off		 = 0b0,
	RCU_UARTCLKCFG3_CLKEN_on		 = 0b1,
} t_RCU_UARTCLKCFG3_CLKEN_enum;

typedef enum { 
 	RCU_UARTCLKCFG3_RSTDIS_off		 = 0b0,
	RCU_UARTCLKCFG3_RSTDIS_on		 = 0b1,
} t_RCU_UARTCLKCFG3_RSTDIS_enum;

typedef enum { 
 	RCU_UARTCLKCFG3_CLKSEL_hsi		 = 0b00,
	RCU_UARTCLKCFG3_CLKSEL_hse		 = 0b01,
	RCU_UARTCLKCFG3_CLKSEL_pll0		 = 0b10,
	RCU_UARTCLKCFG3_CLKSEL_pll1		 = 0b11,
} t_RCU_UARTCLKCFG3_CLKSEL_enum;

typedef enum { 
 	RCU_UARTCLKCFG3_DIVEN_off		 = 0b0,
	RCU_UARTCLKCFG3_DIVEN_on		 = 0b1,
} t_RCU_UARTCLKCFG3_DIVEN_enum;




#define RCU_UARTCLKCFG4	0x3000e080		 /*--  --*/

#define RCU_UARTCLKCFG4_CLKEN_pos	 	 	 	0	 	 /*--  --*/
#define RCU_UARTCLKCFG4_RSTDIS_pos	 	 	 	8	 	 /*--  --*/
#define RCU_UARTCLKCFG4_CLKSEL_pos	 	 	 	16	 	 /*--  --*/
#define RCU_UARTCLKCFG4_DIVEN_pos	 	 	 	20	 	 /*--  --*/
#define RCU_UARTCLKCFG4_DIVN_pos	 	 	 	24	 	 /*--  --*/


#define RCU_UARTCLKCFG4_CLKEN_msk	 	 	 	0x00000001UL
#define RCU_UARTCLKCFG4_RSTDIS_msk	 	 	 	0x00000100UL
#define RCU_UARTCLKCFG4_CLKSEL_msk	 	 	 	0x00030000UL
#define RCU_UARTCLKCFG4_DIVEN_msk	 	 	 	0x00100000UL
#define RCU_UARTCLKCFG4_DIVN_msk	 	 	 	0x3f000000UL


typedef struct {
uint32_t 	 	RCU_UARTCLKCFG4_CLKEN	 	:1;
uint32_t 	 	 	 	:7;
uint32_t 	 	RCU_UARTCLKCFG4_RSTDIS	 	:1;
uint32_t 	 	 	 	:7;
uint32_t 	 	RCU_UARTCLKCFG4_CLKSEL	 	:2;
uint32_t 	 	 	 	:2;
uint32_t 	 	RCU_UARTCLKCFG4_DIVEN	 	:1;
uint32_t 	 	 	 	:3;
uint32_t 	 	RCU_UARTCLKCFG4_DIVN	 	:6;
uint32_t 	 	 	 	:2;
} t_RCU_UARTCLKCFG4_bits;


typedef enum { 
 	RCU_UARTCLKCFG4_CLKEN_off		 = 0b0,
	RCU_UARTCLKCFG4_CLKEN_on		 = 0b1,
} t_RCU_UARTCLKCFG4_CLKEN_enum;

typedef enum { 
 	RCU_UARTCLKCFG4_RSTDIS_off		 = 0b0,
	RCU_UARTCLKCFG4_RSTDIS_on		 = 0b1,
} t_RCU_UARTCLKCFG4_RSTDIS_enum;

typedef enum { 
 	RCU_UARTCLKCFG4_CLKSEL_hsi		 = 0b00,
	RCU_UARTCLKCFG4_CLKSEL_hse		 = 0b01,
	RCU_UARTCLKCFG4_CLKSEL_pll0		 = 0b10,
	RCU_UARTCLKCFG4_CLKSEL_pll1		 = 0b11,
} t_RCU_UARTCLKCFG4_CLKSEL_enum;

typedef enum { 
 	RCU_UARTCLKCFG4_DIVEN_off		 = 0b0,
	RCU_UARTCLKCFG4_DIVEN_on		 = 0b1,
} t_RCU_UARTCLKCFG4_DIVEN_enum;




#define RCU_SPICLKCFG0	0x3000e094		 /*--  --*/

#define RCU_SPICLKCFG0_CLKEN_pos	 	 	 	0	 	 /*--  --*/
#define RCU_SPICLKCFG0_RSTDIS_pos	 	 	 	8	 	 /*--  --*/
#define RCU_SPICLKCFG0_CLKSEL_pos	 	 	 	16	 	 /*--  --*/
#define RCU_SPICLKCFG0_DIVEN_pos	 	 	 	20	 	 /*--  --*/
#define RCU_SPICLKCFG0_DIVN_pos	 	 	 	24	 	 /*--  --*/


#define RCU_SPICLKCFG0_CLKEN_msk	 	 	 	0x00000001UL
#define RCU_SPICLKCFG0_RSTDIS_msk	 	 	 	0x00000100UL
#define RCU_SPICLKCFG0_CLKSEL_msk	 	 	 	0x00030000UL
#define RCU_SPICLKCFG0_DIVEN_msk	 	 	 	0x00100000UL
#define RCU_SPICLKCFG0_DIVN_msk	 	 	 	0x3f000000UL


typedef struct {
uint32_t 	 	RCU_SPICLKCFG0_CLKEN	 	:1;
uint32_t 	 	 	 	:7;
uint32_t 	 	RCU_SPICLKCFG0_RSTDIS	 	:1;
uint32_t 	 	 	 	:7;
uint32_t 	 	RCU_SPICLKCFG0_CLKSEL	 	:2;
uint32_t 	 	 	 	:2;
uint32_t 	 	RCU_SPICLKCFG0_DIVEN	 	:1;
uint32_t 	 	 	 	:3;
uint32_t 	 	RCU_SPICLKCFG0_DIVN	 	:6;
uint32_t 	 	 	 	:2;
} t_RCU_SPICLKCFG0_bits;


typedef enum { 
 	RCU_SPICLKCFG0_CLKEN_off		 = 0b0,
	RCU_SPICLKCFG0_CLKEN_on		 = 0b1,
} t_RCU_SPICLKCFG0_CLKEN_enum;

typedef enum { 
 	RCU_SPICLKCFG0_RSTDIS_off		 = 0b0,
	RCU_SPICLKCFG0_RSTDIS_on		 = 0b1,
} t_RCU_SPICLKCFG0_RSTDIS_enum;

typedef enum { 
 	RCU_SPICLKCFG0_CLKSEL_hsi		 = 0b00,
	RCU_SPICLKCFG0_CLKSEL_hse		 = 0b01,
	RCU_SPICLKCFG0_CLKSEL_pll0		 = 0b10,
	RCU_SPICLKCFG0_CLKSEL_pll1		 = 0b11,
} t_RCU_SPICLKCFG0_CLKSEL_enum;

typedef enum { 
 	RCU_SPICLKCFG0_DIVEN_off		 = 0b0,
	RCU_SPICLKCFG0_DIVEN_on		 = 0b1,
} t_RCU_SPICLKCFG0_DIVEN_enum;




#define RCU_SPICLKCFG1	0x3000e098		 /*--  --*/

#define RCU_SPICLKCFG1_CLKEN_pos	 	 	 	0	 	 /*--  --*/
#define RCU_SPICLKCFG1_RSTDIS_pos	 	 	 	8	 	 /*--  --*/
#define RCU_SPICLKCFG1_CLKSEL_pos	 	 	 	16	 	 /*--  --*/
#define RCU_SPICLKCFG1_DIVEN_pos	 	 	 	20	 	 /*--  --*/
#define RCU_SPICLKCFG1_DIVN_pos	 	 	 	24	 	 /*--  --*/


#define RCU_SPICLKCFG1_CLKEN_msk	 	 	 	0x00000001UL
#define RCU_SPICLKCFG1_RSTDIS_msk	 	 	 	0x00000100UL
#define RCU_SPICLKCFG1_CLKSEL_msk	 	 	 	0x00030000UL
#define RCU_SPICLKCFG1_DIVEN_msk	 	 	 	0x00100000UL
#define RCU_SPICLKCFG1_DIVN_msk	 	 	 	0x3f000000UL


typedef struct {
uint32_t 	 	RCU_SPICLKCFG1_CLKEN	 	:1;
uint32_t 	 	 	 	:7;
uint32_t 	 	RCU_SPICLKCFG1_RSTDIS	 	:1;
uint32_t 	 	 	 	:7;
uint32_t 	 	RCU_SPICLKCFG1_CLKSEL	 	:2;
uint32_t 	 	 	 	:2;
uint32_t 	 	RCU_SPICLKCFG1_DIVEN	 	:1;
uint32_t 	 	 	 	:3;
uint32_t 	 	RCU_SPICLKCFG1_DIVN	 	:6;
uint32_t 	 	 	 	:2;
} t_RCU_SPICLKCFG1_bits;


typedef enum { 
 	RCU_SPICLKCFG1_CLKEN_off		 = 0b0,
	RCU_SPICLKCFG1_CLKEN_on		 = 0b1,
} t_RCU_SPICLKCFG1_CLKEN_enum;

typedef enum { 
 	RCU_SPICLKCFG1_RSTDIS_off		 = 0b0,
	RCU_SPICLKCFG1_RSTDIS_on		 = 0b1,
} t_RCU_SPICLKCFG1_RSTDIS_enum;

typedef enum { 
 	RCU_SPICLKCFG1_CLKSEL_hsi		 = 0b00,
	RCU_SPICLKCFG1_CLKSEL_hse		 = 0b01,
	RCU_SPICLKCFG1_CLKSEL_pll0		 = 0b10,
	RCU_SPICLKCFG1_CLKSEL_pll1		 = 0b11,
} t_RCU_SPICLKCFG1_CLKSEL_enum;

typedef enum { 
 	RCU_SPICLKCFG1_DIVEN_off		 = 0b0,
	RCU_SPICLKCFG1_DIVEN_on		 = 0b1,
} t_RCU_SPICLKCFG1_DIVEN_enum;




#define RCU_ADCSARCLKCFG	0x3000e0b0		 /*--  --*/

#define RCU_ADCSARCLKCFG_CLKEN_pos	 	 	 	0	 	 /*--  --*/
#define RCU_ADCSARCLKCFG_RSTDIS_pos	 	 	 	8	 	 /*--  --*/
#define RCU_ADCSARCLKCFG_CLKSEL_pos	 	 	 	16	 	 /*--  --*/
#define RCU_ADCSARCLKCFG_DIVEN_pos	 	 	 	20	 	 /*--  --*/
#define RCU_ADCSARCLKCFG_DIVN_pos	 	 	 	24	 	 /*--  --*/


#define RCU_ADCSARCLKCFG_CLKEN_msk	 	 	 	0x00000001UL
#define RCU_ADCSARCLKCFG_RSTDIS_msk	 	 	 	0x00000100UL
#define RCU_ADCSARCLKCFG_CLKSEL_msk	 	 	 	0x00030000UL
#define RCU_ADCSARCLKCFG_DIVEN_msk	 	 	 	0x00100000UL
#define RCU_ADCSARCLKCFG_DIVN_msk	 	 	 	0x3f000000UL


typedef struct {
uint32_t 	 	RCU_ADCSARCLKCFG_CLKEN	 	:1;
uint32_t 	 	 	 	:7;
uint32_t 	 	RCU_ADCSARCLKCFG_RSTDIS	 	:1;
uint32_t 	 	 	 	:7;
uint32_t 	 	RCU_ADCSARCLKCFG_CLKSEL	 	:2;
uint32_t 	 	 	 	:2;
uint32_t 	 	RCU_ADCSARCLKCFG_DIVEN	 	:1;
uint32_t 	 	 	 	:3;
uint32_t 	 	RCU_ADCSARCLKCFG_DIVN	 	:6;
uint32_t 	 	 	 	:2;
} t_RCU_ADCSARCLKCFG_bits;


typedef enum { 
 	RCU_ADCSARCLKCFG_CLKEN_off		 = 0b0,
	RCU_ADCSARCLKCFG_CLKEN_on		 = 0b1,
} t_RCU_ADCSARCLKCFG_CLKEN_enum;

typedef enum { 
 	RCU_ADCSARCLKCFG_RSTDIS_off		 = 0b0,
	RCU_ADCSARCLKCFG_RSTDIS_on		 = 0b1,
} t_RCU_ADCSARCLKCFG_RSTDIS_enum;

typedef enum { 
 	RCU_ADCSARCLKCFG_CLKSEL_hsi		 = 0b00,
	RCU_ADCSARCLKCFG_CLKSEL_hse		 = 0b01,
	RCU_ADCSARCLKCFG_CLKSEL_pll0		 = 0b10,
	RCU_ADCSARCLKCFG_CLKSEL_pll1		 = 0b11,
} t_RCU_ADCSARCLKCFG_CLKSEL_enum;

typedef enum { 
 	RCU_ADCSARCLKCFG_DIVEN_off		 = 0b0,
	RCU_ADCSARCLKCFG_DIVEN_on		 = 0b1,
} t_RCU_ADCSARCLKCFG_DIVEN_enum;




#define RCU_ADCSDCLKCFG	0x3000e0b4		 /*--  --*/

#define RCU_ADCSDCLKCFG_CLKEN_pos	 	 	 	0	 	 /*--  --*/
#define RCU_ADCSDCLKCFG_RSTDIS_pos	 	 	 	8	 	 /*--  --*/
#define RCU_ADCSDCLKCFG_CLKSEL_pos	 	 	 	16	 	 /*--  --*/
#define RCU_ADCSDCLKCFG_DIVEN_pos	 	 	 	20	 	 /*--  --*/
#define RCU_ADCSDCLKCFG_DIVN_pos	 	 	 	24	 	 /*--  --*/


#define RCU_ADCSDCLKCFG_CLKEN_msk	 	 	 	0x00000001UL
#define RCU_ADCSDCLKCFG_RSTDIS_msk	 	 	 	0x00000100UL
#define RCU_ADCSDCLKCFG_CLKSEL_msk	 	 	 	0x00030000UL
#define RCU_ADCSDCLKCFG_DIVEN_msk	 	 	 	0x00100000UL
#define RCU_ADCSDCLKCFG_DIVN_msk	 	 	 	0x3f000000UL


typedef struct {
uint32_t 	 	RCU_ADCSDCLKCFG_CLKEN	 	:1;
uint32_t 	 	 	 	:7;
uint32_t 	 	RCU_ADCSDCLKCFG_RSTDIS	 	:1;
uint32_t 	 	 	 	:7;
uint32_t 	 	RCU_ADCSDCLKCFG_CLKSEL	 	:2;
uint32_t 	 	 	 	:2;
uint32_t 	 	RCU_ADCSDCLKCFG_DIVEN	 	:1;
uint32_t 	 	 	 	:3;
uint32_t 	 	RCU_ADCSDCLKCFG_DIVN	 	:6;
uint32_t 	 	 	 	:2;
} t_RCU_ADCSDCLKCFG_bits;


typedef enum { 
 	RCU_ADCSDCLKCFG_CLKEN_off		 = 0b0,
	RCU_ADCSDCLKCFG_CLKEN_on		 = 0b1,
} t_RCU_ADCSDCLKCFG_CLKEN_enum;

typedef enum { 
 	RCU_ADCSDCLKCFG_RSTDIS_off		 = 0b0,
	RCU_ADCSDCLKCFG_RSTDIS_on		 = 0b1,
} t_RCU_ADCSDCLKCFG_RSTDIS_enum;

typedef enum { 
 	RCU_ADCSDCLKCFG_CLKSEL_hsi		 = 0b00,
	RCU_ADCSDCLKCFG_CLKSEL_hse		 = 0b01,
	RCU_ADCSDCLKCFG_CLKSEL_pll0		 = 0b10,
	RCU_ADCSDCLKCFG_CLKSEL_pll1		 = 0b11,
} t_RCU_ADCSDCLKCFG_CLKSEL_enum;

typedef enum { 
 	RCU_ADCSDCLKCFG_DIVEN_off		 = 0b0,
	RCU_ADCSDCLKCFG_DIVEN_on		 = 0b1,
} t_RCU_ADCSDCLKCFG_DIVEN_enum;




#define RCU_WDOGCLKCFG	0x3000e0b8		 /*--  --*/

#define RCU_WDOGCLKCFG_CLKEN_pos	 	 	 	0	 	 /*--  --*/
#define RCU_WDOGCLKCFG_RSTDIS_pos	 	 	 	8	 	 /*--  --*/
#define RCU_WDOGCLKCFG_CLKSEL_pos	 	 	 	16	 	 /*--  --*/
#define RCU_WDOGCLKCFG_DIVEN_pos	 	 	 	20	 	 /*--  --*/
#define RCU_WDOGCLKCFG_DIVN_pos	 	 	 	24	 	 /*--  --*/


#define RCU_WDOGCLKCFG_CLKEN_msk	 	 	 	0x00000001UL
#define RCU_WDOGCLKCFG_RSTDIS_msk	 	 	 	0x00000100UL
#define RCU_WDOGCLKCFG_CLKSEL_msk	 	 	 	0x00030000UL
#define RCU_WDOGCLKCFG_DIVEN_msk	 	 	 	0x00100000UL
#define RCU_WDOGCLKCFG_DIVN_msk	 	 	 	0x3f000000UL


typedef struct {
uint32_t 	 	RCU_WDOGCLKCFG_CLKEN	 	:1;
uint32_t 	 	 	 	:7;
uint32_t 	 	RCU_WDOGCLKCFG_RSTDIS	 	:1;
uint32_t 	 	 	 	:7;
uint32_t 	 	RCU_WDOGCLKCFG_CLKSEL	 	:2;
uint32_t 	 	 	 	:2;
uint32_t 	 	RCU_WDOGCLKCFG_DIVEN	 	:1;
uint32_t 	 	 	 	:3;
uint32_t 	 	RCU_WDOGCLKCFG_DIVN	 	:6;
uint32_t 	 	 	 	:2;
} t_RCU_WDOGCLKCFG_bits;


typedef enum { 
 	RCU_WDOGCLKCFG_CLKEN_off		 = 0b0,
	RCU_WDOGCLKCFG_CLKEN_on		 = 0b1,
} t_RCU_WDOGCLKCFG_CLKEN_enum;

typedef enum { 
 	RCU_WDOGCLKCFG_RSTDIS_off		 = 0b0,
	RCU_WDOGCLKCFG_RSTDIS_on		 = 0b1,
} t_RCU_WDOGCLKCFG_RSTDIS_enum;

typedef enum { 
 	RCU_WDOGCLKCFG_CLKSEL_hsi		 = 0b00,
	RCU_WDOGCLKCFG_CLKSEL_hse		 = 0b01,
	RCU_WDOGCLKCFG_CLKSEL_pll0		 = 0b10,
	RCU_WDOGCLKCFG_CLKSEL_pll1		 = 0b11,
} t_RCU_WDOGCLKCFG_CLKSEL_enum;

typedef enum { 
 	RCU_WDOGCLKCFG_DIVEN_off		 = 0b0,
	RCU_WDOGCLKCFG_DIVEN_on		 = 0b1,
} t_RCU_WDOGCLKCFG_DIVEN_enum;




#define RCU_CLKOUTCFG	0x3000e0bc		 /*--  --*/

#define RCU_CLKOUTCFG_CLKEN_pos	 	 	 	0	 	 /*--  --*/
#define RCU_CLKOUTCFG_CLKSEL_pos	 	 	 	4	 	 /*--  --*/
#define RCU_CLKOUTCFG_RSTDIS_pos	 	 	 	8	 	 /*--  --*/
#define RCU_CLKOUTCFG_DIVEN_pos	 	 	 	12	 	 /*--  --*/
#define RCU_CLKOUTCFG_DIVN_pos	 	 	 	16	 	 /*--  --*/


#define RCU_CLKOUTCFG_CLKEN_msk	 	 	 	0x00000001UL
#define RCU_CLKOUTCFG_CLKSEL_msk	 	 	 	0x00000030UL
#define RCU_CLKOUTCFG_RSTDIS_msk	 	 	 	0x00000100UL
#define RCU_CLKOUTCFG_DIVEN_msk	 	 	 	0x00001000UL
#define RCU_CLKOUTCFG_DIVN_msk	 	 	 	0xffff0000UL


typedef struct {
uint32_t 	 	RCU_CLKOUTCFG_CLKEN	 	:1;
uint32_t 	 	 	 	:3;
uint32_t 	 	RCU_CLKOUTCFG_CLKSEL	 	:2;
uint32_t 	 	 	 	:2;
uint32_t 	 	RCU_CLKOUTCFG_RSTDIS	 	:1;
uint32_t 	 	 	 	:3;
uint32_t 	 	RCU_CLKOUTCFG_DIVEN	 	:1;
uint32_t 	 	 	 	:3;
uint32_t 	 	RCU_CLKOUTCFG_DIVN	 	:16;
} t_RCU_CLKOUTCFG_bits;


typedef enum { 
 	RCU_CLKOUTCFG_CLKEN_off		 = 0b0,
	RCU_CLKOUTCFG_CLKEN_on		 = 0b1,
} t_RCU_CLKOUTCFG_CLKEN_enum;

typedef enum { 
 	RCU_CLKOUTCFG_CLKSEL_hsi		 = 0b00,
	RCU_CLKOUTCFG_CLKSEL_hse		 = 0b01,
	RCU_CLKOUTCFG_CLKSEL_pll0		 = 0b10,
	RCU_CLKOUTCFG_CLKSEL_lsi		 = 0b11,
} t_RCU_CLKOUTCFG_CLKSEL_enum;

typedef enum { 
 	RCU_CLKOUTCFG_RSTDIS_off		 = 0b0,
	RCU_CLKOUTCFG_RSTDIS_on		 = 0b1,
} t_RCU_CLKOUTCFG_RSTDIS_enum;

typedef enum { 
 	RCU_CLKOUTCFG_DIVEN_off		 = 0b0,
	RCU_CLKOUTCFG_DIVEN_on		 = 0b1,
} t_RCU_CLKOUTCFG_DIVEN_enum;




#define RCU_ADCSOCSET	0x3000e0c0		 /*--  --*/

#define RCU_RSTSYS_RSTEN_pos	 	 	 	0	 	 /*--  --*/
#define RCU_RSTSYS_KEY_pos	 	 	 	16	 	 /*--  --*/


#define RCU_RSTSYS_RSTEN_msk	 	 	 	0x00000001UL
#define RCU_RSTSYS_KEY_msk	 	 	 	0xffff0000UL


typedef struct {
uint32_t 	 	RCU_RSTSYS_RSTEN	 	:1;
uint32_t 	 	 	 	:15;
uint32_t 	 	RCU_RSTSYS_KEY	 	:16;
} t_RCU_ADCSOCSET_bits;


typedef enum { 
 	RCU_RSTSYS_RSTEN_off		 = 0b0,
	RCU_RSTSYS_RSTEN_on		 = 0b1,
} t_RCU_RSTSYS_RSTEN_enum;



typedef struct { 
union {
 __IO uint32_t 	RCU_CGCFGAHB_reg;
 __IO t_RCU_CGCFGAHB_bits	 RCU_CGCFGAHB_bit;
};
__IO uint32_t reserved0[1];
union {
 __IO uint32_t 	RCU_CGCFGAPB_reg;
 __IO t_RCU_CGCFGAPB_bits	 RCU_CGCFGAPB_bit;
};
__IO uint32_t reserved1[1];
union {
 __IO uint32_t 	RCU_RSTDISAHB_reg;
 __IO t_RCU_RSTDISAHB_bits	 RCU_RSTDISAHB_bit;
};
__IO uint32_t reserved2[1];
union {
 __IO uint32_t 	RCU_RSTDISAPB_reg;
 __IO t_RCU_RSTDISAPB_bits	 RCU_RSTDISAPB_bit;
};
__IO uint32_t reserved3[1];
union {
 __IO uint32_t 	RCU_RSTSTAT_reg;
 __IO t_RCU_RSTSTAT_bits	 RCU_RSTSTAT_bit;
};
__IO uint32_t reserved4[3];
union {
 __IO uint32_t 	RCU_SYSCLKCFG_reg;
 __IO t_RCU_SYSCLKCFG_bits	 RCU_SYSCLKCFG_bit;
};
union {
 __IO uint32_t 	RCU_SECCNT0_reg;
 __IO t_RCU_SECCNT0_bits	 RCU_SECCNT0_bit;
};
union {
 __IO uint32_t 	RCU_SECCNT1_reg;
 __IO t_RCU_SECCNT1_bits	 RCU_SECCNT1_bit;
};
union {
 __IO uint32_t 	RCU_CLKSTAT_reg;
 __IO t_RCU_CLKSTAT_bits	 RCU_CLKSTAT_bit;
};
__IO uint32_t reserved5[4];
union {
 __IO uint32_t 	RCU_PLLSYSCFG0_reg;
 __IO t_RCU_PLLSYSCFG0_bits	 RCU_PLLSYSCFG0_bit;
};
union {
 __IO uint32_t 	RCU_PLLSYSCFG1_reg;
 __IO t_RCU_PLLSYSCFG1_bits	 RCU_PLLSYSCFG1_bit;
};
union {
 __IO uint32_t 	RCU_PLLSYSCFG2_reg;
 __IO t_RCU_PLLSYSCFG2_bits	 RCU_PLLSYSCFG2_bit;
};
union {
 __IO uint32_t 	RCU_PLLSYSCFG3_reg;
 __IO t_RCU_PLLSYSCFG3_bits	 RCU_PLLSYSCFG3_bit;
};
union {
 __IO uint32_t 	RCU_PLLSYSSTAT_reg;
 __IO t_RCU_PLLSYSSTAT_bits	 RCU_PLLSYSSTAT_bit;
};
__IO uint32_t reserved6[3];
union {
 __IO uint32_t 	RCU_UARTCLKCFG0_reg;
 __IO t_RCU_UARTCLKCFG0_bits	 RCU_UARTCLKCFG0_bit;
};
union {
 __IO uint32_t 	RCU_UARTCLKCFG1_reg;
 __IO t_RCU_UARTCLKCFG1_bits	 RCU_UARTCLKCFG1_bit;
};
union {
 __IO uint32_t 	RCU_UARTCLKCFG2_reg;
 __IO t_RCU_UARTCLKCFG2_bits	 RCU_UARTCLKCFG2_bit;
};
union {
 __IO uint32_t 	RCU_UARTCLKCFG3_reg;
 __IO t_RCU_UARTCLKCFG3_bits	 RCU_UARTCLKCFG3_bit;
};
union {
 __IO uint32_t 	RCU_UARTCLKCFG4_reg;
 __IO t_RCU_UARTCLKCFG4_bits	 RCU_UARTCLKCFG4_bit;
};
__IO uint32_t reserved7[4];
union {
 __IO uint32_t 	RCU_SPICLKCFG0_reg;
 __IO t_RCU_SPICLKCFG0_bits	 RCU_SPICLKCFG0_bit;
};
union {
 __IO uint32_t 	RCU_SPICLKCFG1_reg;
 __IO t_RCU_SPICLKCFG1_bits	 RCU_SPICLKCFG1_bit;
};
__IO uint32_t reserved8[5];
union {
 __IO uint32_t 	RCU_ADCSARCLKCFG_reg;
 __IO t_RCU_ADCSARCLKCFG_bits	 RCU_ADCSARCLKCFG_bit;
};
union {
 __IO uint32_t 	RCU_ADCSDCLKCFG_reg;
 __IO t_RCU_ADCSDCLKCFG_bits	 RCU_ADCSDCLKCFG_bit;
};
union {
 __IO uint32_t 	RCU_WDOGCLKCFG_reg;
 __IO t_RCU_WDOGCLKCFG_bits	 RCU_WDOGCLKCFG_bit;
};
union {
 __IO uint32_t 	RCU_CLKOUTCFG_reg;
 __IO t_RCU_CLKOUTCFG_bits	 RCU_CLKOUTCFG_bit;
};
union {
 __IO uint32_t 	RCU_ADCSOCSET_reg;
 __IO t_RCU_ADCSOCSET_bits	 RCU_ADCSOCSET_bit;
};
} t_RCU_REG;


typedef struct { 
} t_SPI_REG;



#define WDT_LOAD	0x3000b000		 /*--  --*/

#define WDT_LOAD_VAL_pos	 	 	 	0	 	 /*--  --*/


#define WDT_LOAD_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	WDT_LOAD_VAL	 	:32;
} t_WDT_LOAD_bits;





#define WDT_VALUE	0x3000b004		 /*--  --*/

#define WDT_VALUE_VAL_pos	 	 	 	0	 	 /*--  --*/


#define WDT_VALUE_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	WDT_VALUE_VAL	 	:32;
} t_WDT_VALUE_bits;





#define WDT_CTRL	0x3000b008		 /*--  --*/

#define WDT_CTRL_INTEN_pos	 	 	 	0	 	 /*--  --*/
#define WDT_CTRL_RESEN_pos	 	 	 	1	 	 /*--  --*/


#define WDT_CTRL_INTEN_msk	 	 	 	0x00000001UL
#define WDT_CTRL_RESEN_msk	 	 	 	0x00000002UL


typedef struct {
uint32_t 	 	WDT_CTRL_INTEN	 	:1;
uint32_t 	 	WDT_CTRL_RESEN	 	:1;
uint32_t 	 	 	 	:30;
} t_WDT_CTRL_bits;


typedef enum { 
 	WDT_CTRL_INTEN_off		 = 0b0,
	WDT_CTRL_INTEN_on		 = 0b1,
} t_WDT_CTRL_INTEN_enum;

typedef enum { 
 	WDT_CTRL_RESEN_off		 = 0b0,
	WDT_CTRL_RESEN_on		 = 0b1,
} t_WDT_CTRL_RESEN_enum;




#define WDT_INTCLR	0x3000b00c		 /*--  --*/

#define WDT_INTCLR_WDTCLR_pos	 	 	 	0	 	 /*--  --*/


#define WDT_INTCLR_WDTCLR_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	WDT_INTCLR_WDTCLR	 	:32;
} t_WDT_INTCLR_bits;





#define WDT_RIS	0x3000b010		 /*--  --*/

#define WDT_RIS_RAWWDTINT_pos	 	 	 	0	 	 /*--  --*/


#define WDT_RIS_RAWWDTINT_msk	 	 	 	0x00000001UL


typedef struct {
uint32_t 	 	WDT_RIS_RAWWDTINT	 	:1;
uint32_t 	 	 	 	:31;
} t_WDT_RIS_bits;


typedef enum { 
 	WDT_RIS_RAWWDTINT_off		 = 0b0,
	WDT_RIS_RAWWDTINT_on		 = 0b1,
} t_WDT_RIS_RAWWDTINT_enum;




#define WDT_MIS	0x3000b014		 /*--  --*/

#define WDT_MIS_WDTINT_pos	 	 	 	0	 	 /*--  --*/


#define WDT_MIS_WDTINT_msk	 	 	 	0x00000001UL


typedef struct {
uint32_t 	 	WDT_MIS_WDTINT	 	:1;
uint32_t 	 	 	 	:31;
} t_WDT_MIS_bits;


typedef enum { 
 	WDT_MIS_WDTINT_off		 = 0b0,
	WDT_MIS_WDTINT_on		 = 0b1,
} t_WDT_MIS_WDTINT_enum;




#define WDT_LOCK	0x3000bc00		 /*--  --*/

#define WDT_LOCK_REGWRDIS_pos	 	 	 	0	 	 /*--  --*/


#define WDT_LOCK_REGWRDIS_msk	 	 	 	0x00000001UL


typedef struct {
uint32_t 	 	WDT_LOCK_REGWRDIS	 	:1;
uint32_t 	 	 	 	:31;
} t_WDT_LOCK_bits;


typedef enum { 
 	WDT_LOCK_REGWRDIS_off		 = 0b0,
	WDT_LOCK_REGWRDIS_on		 = 0b1,
} t_WDT_LOCK_REGWRDIS_enum;



typedef struct { 
union {
 __IO uint32_t 	WDT_LOAD_reg;
 __IO t_WDT_LOAD_bits	 WDT_LOAD_bit;
};
union {
 __IO uint32_t 	WDT_VALUE_reg;
 __IO t_WDT_VALUE_bits	 WDT_VALUE_bit;
};
union {
 __IO uint32_t 	WDT_CTRL_reg;
 __IO t_WDT_CTRL_bits	 WDT_CTRL_bit;
};
union {
 __IO uint32_t 	WDT_INTCLR_reg;
 __IO t_WDT_INTCLR_bits	 WDT_INTCLR_bit;
};
union {
 __IO uint32_t 	WDT_RIS_reg;
 __IO t_WDT_RIS_bits	 WDT_RIS_bit;
};
union {
 __IO uint32_t 	WDT_MIS_reg;
 __IO t_WDT_MIS_bits	 WDT_MIS_bit;
};
__IO uint32_t reserved0[762];
union {
 __IO uint32_t 	WDT_LOCK_reg;
 __IO t_WDT_LOCK_bits	 WDT_LOCK_bit;
};
} t_WDT_REG;



#define PMURTC_RTC_CFG0	0x38011000		 /*--  --*/

#define PMURTC_RTC_CFG0_LPCK_pos	 	 	 	0	 	 /*--  --*/
#define PMURTC_RTC_CFG0_FC_pos	 	 	 	3	 	 /*--  --*/
#define PMURTC_RTC_CFG0_UVDIS_pos	 	 	 	5	 	 /*--  --*/
#define PMURTC_RTC_CFG0_CD_pos	 	 	 	6	 	 /*--  --*/
#define PMURTC_RTC_CFG0_DE_pos	 	 	 	10	 	 /*--  --*/
#define PMURTC_RTC_CFG0_EL_pos	 	 	 	11	 	 /*--  --*/
#define PMURTC_RTC_CFG0_LS_pos	 	 	 	13	 	 /*--  --*/
#define PMURTC_RTC_CFG0_AT2_pos	 	 	 	14	 	 /*--  --*/
#define PMURTC_RTC_CFG0_EXTOSC_pos	 	 	 	17	 	 /*--  --*/
#define PMURTC_RTC_CFG0_FREQDIFF_pos	 	 	 	19	 	 /*--  --*/


#define PMURTC_RTC_CFG0_LPCK_msk	 	 	 	0x00000007UL
#define PMURTC_RTC_CFG0_FC_msk	 	 	 	0x00000018UL
#define PMURTC_RTC_CFG0_UVDIS_msk	 	 	 	0x00000020UL
#define PMURTC_RTC_CFG0_CD_msk	 	 	 	0x00000040UL
#define PMURTC_RTC_CFG0_DE_msk	 	 	 	0x00000400UL
#define PMURTC_RTC_CFG0_EL_msk	 	 	 	0x00000800UL
#define PMURTC_RTC_CFG0_LS_msk	 	 	 	0x00002000UL
#define PMURTC_RTC_CFG0_AT2_msk	 	 	 	0x0001c000UL
#define PMURTC_RTC_CFG0_EXTOSC_msk	 	 	 	0x00020000UL
#define PMURTC_RTC_CFG0_FREQDIFF_msk	 	 	 	0x0ff80000UL


typedef struct {
uint32_t 	 	PMURTC_RTC_CFG0_LPCK	 	:3;
uint32_t 	 	PMURTC_RTC_CFG0_FC	 	:2;
uint32_t 	 	PMURTC_RTC_CFG0_UVDIS	 	:1;
uint32_t 	 	PMURTC_RTC_CFG0_CD	 	:1;
uint32_t 	 	 	 	:3;
uint32_t 	 	PMURTC_RTC_CFG0_DE	 	:1;
uint32_t 	 	PMURTC_RTC_CFG0_EL	 	:1;
uint32_t 	 	 	 	:1;
uint32_t 	 	PMURTC_RTC_CFG0_LS	 	:1;
uint32_t 	 	PMURTC_RTC_CFG0_AT2	 	:3;
uint32_t 	 	PMURTC_RTC_CFG0_EXTOSC	 	:1;
uint32_t 	 	 	 	:1;
uint32_t 	 	PMURTC_RTC_CFG0_FREQDIFF	 	:9;
uint32_t 	 	 	 	:4;
} t_PMURTC_RTC_CFG0_bits;


typedef enum { 
 	PMURTC_RTC_CFG0_FC_def		 = 0b00,
	PMURTC_RTC_CFG0_FC_forcelp		 = 0b01,
	PMURTC_RTC_CFG0_FC_forcehp		 = 0b10,
	PMURTC_RTC_CFG0_FC_forcelp2hp		 = 0b11,
} t_PMURTC_RTC_CFG0_FC_enum;

typedef enum { 
 	PMURTC_RTC_CFG0_UVDIS_off		 = 0b0,
	PMURTC_RTC_CFG0_UVDIS_on		 = 0b1,
} t_PMURTC_RTC_CFG0_UVDIS_enum;

typedef enum { 
 	PMURTC_RTC_CFG0_CD_off		 = 0b0,
	PMURTC_RTC_CFG0_CD_on		 = 0b1,
} t_PMURTC_RTC_CFG0_CD_enum;

typedef enum { 
 	PMURTC_RTC_CFG0_DE_off		 = 0b0,
	PMURTC_RTC_CFG0_DE_on		 = 0b1,
} t_PMURTC_RTC_CFG0_DE_enum;

typedef enum { 
 	PMURTC_RTC_CFG0_EL_off		 = 0b0,
	PMURTC_RTC_CFG0_EL_on		 = 0b1,
} t_PMURTC_RTC_CFG0_EL_enum;

typedef enum { 
 	PMURTC_RTC_CFG0_LS_off		 = 0b0,
	PMURTC_RTC_CFG0_LS_on		 = 0b1,
} t_PMURTC_RTC_CFG0_LS_enum;

typedef enum { 
 	PMURTC_RTC_CFG0_AT2_disable		 = 0b000,
	PMURTC_RTC_CFG0_AT2_freq_4_7per		 = 0b001,
	PMURTC_RTC_CFG0_AT2_freq_7_8per		 = 0b010,
	PMURTC_RTC_CFG0_AT2_freq_10_9per		 = 0b011,
	PMURTC_RTC_CFG0_AT2_freq_14_1per		 = 0b100,
	PMURTC_RTC_CFG0_AT2_freq_17_2per		 = 0b101,
	PMURTC_RTC_CFG0_AT2_freq_20_3per		 = 0b110,
	PMURTC_RTC_CFG0_AT2_freq_23_4per		 = 0b111,
} t_PMURTC_RTC_CFG0_AT2_enum;

typedef enum { 
 	PMURTC_RTC_CFG0_EXTOSC_off		 = 0b0,
	PMURTC_RTC_CFG0_EXTOSC_on		 = 0b1,
} t_PMURTC_RTC_CFG0_EXTOSC_enum;




#define PMURTC_RTC_TRIMRC	0x38011004		 /*--  --*/

#define PMURTC_RTC_TRIMRC_VAL_pos	 	 	 	0	 	 /*--  --*/


#define PMURTC_RTC_TRIMRC_VAL_msk	 	 	 	0x000007ffUL


typedef struct {
uint32_t 	 	PMURTC_RTC_TRIMRC_VAL	 	:11;
uint32_t 	 	 	 	:21;
} t_PMURTC_RTC_TRIMRC_bits;





#define PMURTC_RTC_HISTORY	0x38011008		 /*--  --*/

#define PMURTC_RTC_HISTORY_WAKE0_pos	 	 	 	0	 	 /*--  --*/
#define PMURTC_RTC_HISTORY_WAKE1_pos	 	 	 	1	 	 /*--  --*/
#define PMURTC_RTC_HISTORY_WAKE2_pos	 	 	 	2	 	 /*--  --*/
#define PMURTC_RTC_HISTORY_WKVBATPER_pos	 	 	 	3	 	 /*--  --*/
#define PMURTC_RTC_HISTORY_WKUVLO_pos	 	 	 	4	 	 /*--  --*/
#define PMURTC_RTC_HISTORY_WKVFVBAK_pos	 	 	 	5	 	 /*--  --*/
#define PMURTC_RTC_HISTORY_FREQERR_pos	 	 	 	6	 	 /*--  --*/
#define PMURTC_RTC_HISTORY_TAMPER0_pos	 	 	 	7	 	 /*--  --*/
#define PMURTC_RTC_HISTORY_TAMPER1_pos	 	 	 	8	 	 /*--  --*/
#define PMURTC_RTC_HISTORY_TAMPER2_pos	 	 	 	9	 	 /*--  --*/
#define PMURTC_RTC_HISTORY_TIMEALARM_pos	 	 	 	10	 	 /*--  --*/


#define PMURTC_RTC_HISTORY_WAKE0_msk	 	 	 	0x00000001UL
#define PMURTC_RTC_HISTORY_WAKE1_msk	 	 	 	0x00000002UL
#define PMURTC_RTC_HISTORY_WAKE2_msk	 	 	 	0x00000004UL
#define PMURTC_RTC_HISTORY_WKVBATPER_msk	 	 	 	0x00000008UL
#define PMURTC_RTC_HISTORY_WKUVLO_msk	 	 	 	0x00000010UL
#define PMURTC_RTC_HISTORY_WKVFVBAK_msk	 	 	 	0x00000020UL
#define PMURTC_RTC_HISTORY_FREQERR_msk	 	 	 	0x00000040UL
#define PMURTC_RTC_HISTORY_TAMPER0_msk	 	 	 	0x00000080UL
#define PMURTC_RTC_HISTORY_TAMPER1_msk	 	 	 	0x00000100UL
#define PMURTC_RTC_HISTORY_TAMPER2_msk	 	 	 	0x00000200UL
#define PMURTC_RTC_HISTORY_TIMEALARM_msk	 	 	 	0x00000400UL


typedef struct {
uint32_t 	 	PMURTC_RTC_HISTORY_WAKE0	 	:1;
uint32_t 	 	PMURTC_RTC_HISTORY_WAKE1	 	:1;
uint32_t 	 	PMURTC_RTC_HISTORY_WAKE2	 	:1;
uint32_t 	 	PMURTC_RTC_HISTORY_WKVBATPER	 	:1;
uint32_t 	 	PMURTC_RTC_HISTORY_WKUVLO	 	:1;
uint32_t 	 	PMURTC_RTC_HISTORY_WKVFVBAK	 	:1;
uint32_t 	 	PMURTC_RTC_HISTORY_FREQERR	 	:1;
uint32_t 	 	PMURTC_RTC_HISTORY_TAMPER0	 	:1;
uint32_t 	 	PMURTC_RTC_HISTORY_TAMPER1	 	:1;
uint32_t 	 	PMURTC_RTC_HISTORY_TAMPER2	 	:1;
uint32_t 	 	PMURTC_RTC_HISTORY_TIMEALARM	 	:1;
uint32_t 	 	 	 	:21;
} t_PMURTC_RTC_HISTORY_bits;


typedef enum { 
 	PMURTC_RTC_HISTORY_WAKE0_off		 = 0b0,
	PMURTC_RTC_HISTORY_WAKE0_on		 = 0b1,
} t_PMURTC_RTC_HISTORY_WAKE0_enum;

typedef enum { 
 	PMURTC_RTC_HISTORY_WAKE1_off		 = 0b0,
	PMURTC_RTC_HISTORY_WAKE1_on		 = 0b1,
} t_PMURTC_RTC_HISTORY_WAKE1_enum;

typedef enum { 
 	PMURTC_RTC_HISTORY_WAKE2_off		 = 0b0,
	PMURTC_RTC_HISTORY_WAKE2_on		 = 0b1,
} t_PMURTC_RTC_HISTORY_WAKE2_enum;

typedef enum { 
 	PMURTC_RTC_HISTORY_WKVBATPER_off		 = 0b0,
	PMURTC_RTC_HISTORY_WKVBATPER_on		 = 0b1,
} t_PMURTC_RTC_HISTORY_WKVBATPER_enum;

typedef enum { 
 	PMURTC_RTC_HISTORY_WKUVLO_off		 = 0b0,
	PMURTC_RTC_HISTORY_WKUVLO_on		 = 0b1,
} t_PMURTC_RTC_HISTORY_WKUVLO_enum;

typedef enum { 
 	PMURTC_RTC_HISTORY_WKVFVBAK_off		 = 0b0,
	PMURTC_RTC_HISTORY_WKVFVBAK_on		 = 0b1,
} t_PMURTC_RTC_HISTORY_WKVFVBAK_enum;

typedef enum { 
 	PMURTC_RTC_HISTORY_FREQERR_off		 = 0b0,
	PMURTC_RTC_HISTORY_FREQERR_on		 = 0b1,
} t_PMURTC_RTC_HISTORY_FREQERR_enum;

typedef enum { 
 	PMURTC_RTC_HISTORY_TAMPER0_off		 = 0b0,
	PMURTC_RTC_HISTORY_TAMPER0_on		 = 0b1,
} t_PMURTC_RTC_HISTORY_TAMPER0_enum;

typedef enum { 
 	PMURTC_RTC_HISTORY_TAMPER1_off		 = 0b0,
	PMURTC_RTC_HISTORY_TAMPER1_on		 = 0b1,
} t_PMURTC_RTC_HISTORY_TAMPER1_enum;

typedef enum { 
 	PMURTC_RTC_HISTORY_TAMPER2_off		 = 0b0,
	PMURTC_RTC_HISTORY_TAMPER2_on		 = 0b1,
} t_PMURTC_RTC_HISTORY_TAMPER2_enum;

typedef enum { 
 	PMURTC_RTC_HISTORY_TIMEALARM_off		 = 0b0,
	PMURTC_RTC_HISTORY_TIMEALARM_on		 = 0b1,
} t_PMURTC_RTC_HISTORY_TIMEALARM_enum;




#define PMURTC_RTC_TIME	0x3801100c		 /*--  --*/

#define PMURTC_RTC_TIME_VAL_pos	 	 	 	0	 	 /*--  --*/


#define PMURTC_RTC_TIME_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	PMURTC_RTC_TIME_VAL	 	:32;
} t_PMURTC_RTC_TIME_bits;





#define PMURTC_RTC_ALARM	0x38011010		 /*--  --*/

#define PMURTC_RTC_ALARM_VAL_pos	 	 	 	0	 	 /*--  --*/


#define PMURTC_RTC_ALARM_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	PMURTC_RTC_ALARM_VAL	 	:32;
} t_PMURTC_RTC_ALARM_bits;





#define PMURTC_RTC_TRIM	0x38011014		 /*--  --*/

#define PMURTC_RTC_TRIM_TRIM1S_pos	 	 	 	0	 	 /*--  --*/
#define PMURTC_RTC_TRIM_ITRIM_pos	 	 	 	11	 	 /*--  --*/
#define PMURTC_RTC_TRIM_VTRIM_pos	 	 	 	14	 	 /*--  --*/
#define PMURTC_RTC_TRIM_TEMPTRIM_pos	 	 	 	19	 	 /*--  --*/
#define PMURTC_RTC_TRIM_BYPASS_pos	 	 	 	22	 	 /*--  --*/
#define PMURTC_RTC_TRIM_CXT_pos	 	 	 	23	 	 /*--  --*/
#define PMURTC_RTC_TRIM_CLKDIV_pos	 	 	 	27	 	 /*--  --*/


#define PMURTC_RTC_TRIM_TRIM1S_msk	 	 	 	0x000007ffUL
#define PMURTC_RTC_TRIM_ITRIM_msk	 	 	 	0x00003800UL
#define PMURTC_RTC_TRIM_VTRIM_msk	 	 	 	0x0007c000UL
#define PMURTC_RTC_TRIM_TEMPTRIM_msk	 	 	 	0x00380000UL
#define PMURTC_RTC_TRIM_BYPASS_msk	 	 	 	0x00400000UL
#define PMURTC_RTC_TRIM_CXT_msk	 	 	 	0x07800000UL
#define PMURTC_RTC_TRIM_CLKDIV_msk	 	 	 	0xf8000000UL


typedef struct {
uint32_t 	 	PMURTC_RTC_TRIM_TRIM1S	 	:11;
uint32_t 	 	PMURTC_RTC_TRIM_ITRIM	 	:3;
uint32_t 	 	PMURTC_RTC_TRIM_VTRIM	 	:5;
uint32_t 	 	PMURTC_RTC_TRIM_TEMPTRIM	 	:3;
uint32_t 	 	PMURTC_RTC_TRIM_BYPASS	 	:1;
uint32_t 	 	PMURTC_RTC_TRIM_CXT	 	:4;
uint32_t 	 	PMURTC_RTC_TRIM_CLKDIV	 	:5;
} t_PMURTC_RTC_TRIM_bits;


typedef enum { 
 	PMURTC_RTC_TRIM_BYPASS_off		 = 0b0,
	PMURTC_RTC_TRIM_BYPASS_on		 = 0b1,
} t_PMURTC_RTC_TRIM_BYPASS_enum;




#define PMURTC_RTC_CFG1	0x38011018		 /*--  --*/

#define PMURTC_RTC_CFG1_CLKSEL_pos	 	 	 	0	 	 /*--  --*/
#define PMURTC_RTC_CFG1_ALARMZEN_pos	 	 	 	1	 	 /*--  --*/
#define PMURTC_RTC_CFG1_ALARMEN_pos	 	 	 	2	 	 /*--  --*/
#define PMURTC_RTC_CFG1_ULP_pos	 	 	 	9	 	 /*--  --*/
#define PMURTC_RTC_CFG1_LP_pos	 	 	 	11	 	 /*--  --*/
#define PMURTC_RTC_CFG1_REGEN_pos	 	 	 	13	 	 /*--  --*/
#define PMURTC_RTC_CFG1_REGDIS_pos	 	 	 	15	 	 /*--  --*/
#define PMURTC_RTC_CFG1_LDOLV_pos	 	 	 	17	 	 /*--  --*/
#define PMURTC_RTC_CFG1_LDOHV_pos	 	 	 	23	 	 /*--  --*/
#define PMURTC_RTC_CFG1_ALARMRST_pos	 	 	 	30	 	 /*--  --*/


#define PMURTC_RTC_CFG1_CLKSEL_msk	 	 	 	0x00000001UL
#define PMURTC_RTC_CFG1_ALARMZEN_msk	 	 	 	0x00000002UL
#define PMURTC_RTC_CFG1_ALARMEN_msk	 	 	 	0x00000004UL
#define PMURTC_RTC_CFG1_ULP_msk	 	 	 	0x00000600UL
#define PMURTC_RTC_CFG1_LP_msk	 	 	 	0x00001800UL
#define PMURTC_RTC_CFG1_REGEN_msk	 	 	 	0x00006000UL
#define PMURTC_RTC_CFG1_REGDIS_msk	 	 	 	0x00018000UL
#define PMURTC_RTC_CFG1_LDOLV_msk	 	 	 	0x003e0000UL
#define PMURTC_RTC_CFG1_LDOHV_msk	 	 	 	0x0f800000UL
#define PMURTC_RTC_CFG1_ALARMRST_msk	 	 	 	0x40000000UL


typedef struct {
uint32_t 	 	PMURTC_RTC_CFG1_CLKSEL	 	:1;
uint32_t 	 	PMURTC_RTC_CFG1_ALARMZEN	 	:1;
uint32_t 	 	PMURTC_RTC_CFG1_ALARMEN	 	:1;
uint32_t 	 	 	 	:6;
uint32_t 	 	PMURTC_RTC_CFG1_ULP	 	:2;
uint32_t 	 	PMURTC_RTC_CFG1_LP	 	:2;
uint32_t 	 	PMURTC_RTC_CFG1_REGEN	 	:2;
uint32_t 	 	PMURTC_RTC_CFG1_REGDIS	 	:2;
uint32_t 	 	PMURTC_RTC_CFG1_LDOLV	 	:5;
uint32_t 	 	 	 	:1;
uint32_t 	 	PMURTC_RTC_CFG1_LDOHV	 	:5;
uint32_t 	 	 	 	:2;
uint32_t 	 	PMURTC_RTC_CFG1_ALARMRST	 	:1;
uint32_t 	 	 	 	:1;
} t_PMURTC_RTC_CFG1_bits;


typedef enum { 
 	PMURTC_RTC_CFG1_CLKSEL_off		 = 0b0,
	PMURTC_RTC_CFG1_CLKSEL_on		 = 0b1,
} t_PMURTC_RTC_CFG1_CLKSEL_enum;

typedef enum { 
 	PMURTC_RTC_CFG1_ALARMZEN_off		 = 0b0,
	PMURTC_RTC_CFG1_ALARMZEN_on		 = 0b1,
} t_PMURTC_RTC_CFG1_ALARMZEN_enum;

typedef enum { 
 	PMURTC_RTC_CFG1_ALARMEN_off		 = 0b0,
	PMURTC_RTC_CFG1_ALARMEN_on		 = 0b1,
} t_PMURTC_RTC_CFG1_ALARMEN_enum;

typedef enum { 
 	PMURTC_RTC_CFG1_ALARMRST_off		 = 0b0,
	PMURTC_RTC_CFG1_ALARMRST_on		 = 0b1,
} t_PMURTC_RTC_CFG1_ALARMRST_enum;




#define PMURTC_RTC_WAKECFG	0x3801101c		 /*--  --*/

#define PMURTC_RTC_WAKECFG_WAKEEN_pos	 	 	 	0	 	 /*--  --*/
#define PMURTC_RTC_WAKECFG_WAKEPOL_pos	 	 	 	6	 	 /*--  --*/
#define PMURTC_RTC_WAKECFG_DIS5_pos	 	 	 	12	 	 /*--  --*/
#define PMURTC_RTC_WAKECFG_DIS4_pos	 	 	 	14	 	 /*--  --*/
#define PMURTC_RTC_WAKECFG_RST5_pos	 	 	 	16	 	 /*--  --*/
#define PMURTC_RTC_WAKECFG_RST4_pos	 	 	 	18	 	 /*--  --*/
#define PMURTC_RTC_WAKECFG_TAMPER0EN_pos	 	 	 	20	 	 /*--  --*/
#define PMURTC_RTC_WAKECFG_TAMPER1EN_pos	 	 	 	21	 	 /*--  --*/
#define PMURTC_RTC_WAKECFG_TAMPER2EN_pos	 	 	 	22	 	 /*--  --*/
#define PMURTC_RTC_WAKECFG_VPROG_pos	 	 	 	26	 	 /*--  --*/


#define PMURTC_RTC_WAKECFG_WAKEEN_msk	 	 	 	0x0000003fUL
#define PMURTC_RTC_WAKECFG_WAKEPOL_msk	 	 	 	0x00000fc0UL
#define PMURTC_RTC_WAKECFG_DIS5_msk	 	 	 	0x00003000UL
#define PMURTC_RTC_WAKECFG_DIS4_msk	 	 	 	0x0000c000UL
#define PMURTC_RTC_WAKECFG_RST5_msk	 	 	 	0x00030000UL
#define PMURTC_RTC_WAKECFG_RST4_msk	 	 	 	0x000c0000UL
#define PMURTC_RTC_WAKECFG_TAMPER0EN_msk	 	 	 	0x00100000UL
#define PMURTC_RTC_WAKECFG_TAMPER1EN_msk	 	 	 	0x00200000UL
#define PMURTC_RTC_WAKECFG_TAMPER2EN_msk	 	 	 	0x00400000UL
#define PMURTC_RTC_WAKECFG_VPROG_msk	 	 	 	0x7c000000UL


typedef struct {
uint32_t 	 	PMURTC_RTC_WAKECFG_WAKEEN	 	:6;
uint32_t 	 	PMURTC_RTC_WAKECFG_WAKEPOL	 	:6;
uint32_t 	 	PMURTC_RTC_WAKECFG_DIS5	 	:2;
uint32_t 	 	PMURTC_RTC_WAKECFG_DIS4	 	:2;
uint32_t 	 	PMURTC_RTC_WAKECFG_RST5	 	:2;
uint32_t 	 	PMURTC_RTC_WAKECFG_RST4	 	:2;
uint32_t 	 	PMURTC_RTC_WAKECFG_TAMPER0EN	 	:1;
uint32_t 	 	PMURTC_RTC_WAKECFG_TAMPER1EN	 	:1;
uint32_t 	 	PMURTC_RTC_WAKECFG_TAMPER2EN	 	:1;
uint32_t 	 	 	 	:3;
uint32_t 	 	PMURTC_RTC_WAKECFG_VPROG	 	:5;
uint32_t 	 	 	 	:1;
} t_PMURTC_RTC_WAKECFG_bits;


typedef enum { 
 	PMURTC_RTC_WAKECFG_TAMPER0EN_off		 = 0b0,
	PMURTC_RTC_WAKECFG_TAMPER0EN_on		 = 0b1,
} t_PMURTC_RTC_WAKECFG_TAMPER0EN_enum;

typedef enum { 
 	PMURTC_RTC_WAKECFG_TAMPER1EN_off		 = 0b0,
	PMURTC_RTC_WAKECFG_TAMPER1EN_on		 = 0b1,
} t_PMURTC_RTC_WAKECFG_TAMPER1EN_enum;

typedef enum { 
 	PMURTC_RTC_WAKECFG_TAMPER2EN_off		 = 0b0,
	PMURTC_RTC_WAKECFG_TAMPER2EN_on		 = 0b1,
} t_PMURTC_RTC_WAKECFG_TAMPER2EN_enum;




#define PMURTC_RTC_TICKGEN	0x38011060		 /*--  --*/

#define PMURTC_RTC_TICKGEN_VAL_pos	 	 	 	0	 	 /*--  --*/


#define PMURTC_RTC_TICKGEN_VAL_msk	 	 	 	0x001fffffUL


typedef struct {
uint32_t 	 	PMURTC_RTC_TICKGEN_VAL	 	:21;
uint32_t 	 	 	 	:11;
} t_PMURTC_RTC_TICKGEN_bits;





#define PMURTC_RTC_TRIM1S_LD	0x38011064		 /*--  --*/

#define PMURTC_RTC_TRIM1S_LD_VAL_pos	 	 	 	0	 	 /*--  --*/


#define PMURTC_RTC_TRIM1S_LD_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	PMURTC_RTC_TRIM1S_LD_VAL	 	:32;
} t_PMURTC_RTC_TRIM1S_LD_bits;





#define PMURTC_PMU_WK3EN	0x38011080		 /*--  --*/

#define PMURTC_PMU_WK3EN_CMP0_pos	 	 	 	0	 	 /*--  --*/
#define PMURTC_PMU_WK3EN_CMP1_pos	 	 	 	1	 	 /*--  --*/
#define PMURTC_PMU_WK3EN_IWDG_pos	 	 	 	2	 	 /*--  --*/
#define PMURTC_PMU_WK3EN_EXTRST_pos	 	 	 	3	 	 /*--  --*/
#define PMURTC_PMU_WK3EN_CLK1S_pos	 	 	 	4	 	 /*--  --*/


#define PMURTC_PMU_WK3EN_CMP0_msk	 	 	 	0x00000001UL
#define PMURTC_PMU_WK3EN_CMP1_msk	 	 	 	0x00000002UL
#define PMURTC_PMU_WK3EN_IWDG_msk	 	 	 	0x00000004UL
#define PMURTC_PMU_WK3EN_EXTRST_msk	 	 	 	0x00000008UL
#define PMURTC_PMU_WK3EN_CLK1S_msk	 	 	 	0x00000010UL


typedef struct {
uint32_t 	 	PMURTC_PMU_WK3EN_CMP0	 	:1;
uint32_t 	 	PMURTC_PMU_WK3EN_CMP1	 	:1;
uint32_t 	 	PMURTC_PMU_WK3EN_IWDG	 	:1;
uint32_t 	 	PMURTC_PMU_WK3EN_EXTRST	 	:1;
uint32_t 	 	PMURTC_PMU_WK3EN_CLK1S	 	:1;
uint32_t 	 	 	 	:27;
} t_PMURTC_PMU_WK3EN_bits;


typedef enum { 
 	PMURTC_PMU_WK3EN_CMP0_off		 = 0b0,
	PMURTC_PMU_WK3EN_CMP0_on		 = 0b1,
} t_PMURTC_PMU_WK3EN_CMP0_enum;

typedef enum { 
 	PMURTC_PMU_WK3EN_CMP1_off		 = 0b0,
	PMURTC_PMU_WK3EN_CMP1_on		 = 0b1,
} t_PMURTC_PMU_WK3EN_CMP1_enum;

typedef enum { 
 	PMURTC_PMU_WK3EN_IWDG_off		 = 0b0,
	PMURTC_PMU_WK3EN_IWDG_on		 = 0b1,
} t_PMURTC_PMU_WK3EN_IWDG_enum;

typedef enum { 
 	PMURTC_PMU_WK3EN_EXTRST_off		 = 0b0,
	PMURTC_PMU_WK3EN_EXTRST_on		 = 0b1,
} t_PMURTC_PMU_WK3EN_EXTRST_enum;

typedef enum { 
 	PMURTC_PMU_WK3EN_CLK1S_off		 = 0b0,
	PMURTC_PMU_WK3EN_CLK1S_on		 = 0b1,
} t_PMURTC_PMU_WK3EN_CLK1S_enum;




#define PMURTC_PMU_WK3STAT	0x38011084		 /*--  --*/

#define PMURTC_PMU_WK3STAT_CMP0_pos	 	 	 	0	 	 /*--  --*/
#define PMURTC_PMU_WK3STAT_CMP1_pos	 	 	 	1	 	 /*--  --*/
#define PMURTC_PMU_WK3STAT_IWDG_pos	 	 	 	2	 	 /*--  --*/
#define PMURTC_PMU_WK3STAT_EXTRST_pos	 	 	 	3	 	 /*--  --*/
#define PMURTC_PMU_WK3STAT_CLK1S_pos	 	 	 	4	 	 /*--  --*/


#define PMURTC_PMU_WK3STAT_CMP0_msk	 	 	 	0x00000001UL
#define PMURTC_PMU_WK3STAT_CMP1_msk	 	 	 	0x00000002UL
#define PMURTC_PMU_WK3STAT_IWDG_msk	 	 	 	0x00000004UL
#define PMURTC_PMU_WK3STAT_EXTRST_msk	 	 	 	0x00000008UL
#define PMURTC_PMU_WK3STAT_CLK1S_msk	 	 	 	0x00000010UL


typedef struct {
uint32_t 	 	PMURTC_PMU_WK3STAT_CMP0	 	:1;
uint32_t 	 	PMURTC_PMU_WK3STAT_CMP1	 	:1;
uint32_t 	 	PMURTC_PMU_WK3STAT_IWDG	 	:1;
uint32_t 	 	PMURTC_PMU_WK3STAT_EXTRST	 	:1;
uint32_t 	 	PMURTC_PMU_WK3STAT_CLK1S	 	:1;
uint32_t 	 	 	 	:27;
} t_PMURTC_PMU_WK3STAT_bits;


typedef enum { 
 	PMURTC_PMU_WK3STAT_CMP0_off		 = 0b0,
	PMURTC_PMU_WK3STAT_CMP0_on		 = 0b1,
} t_PMURTC_PMU_WK3STAT_CMP0_enum;

typedef enum { 
 	PMURTC_PMU_WK3STAT_CMP1_off		 = 0b0,
	PMURTC_PMU_WK3STAT_CMP1_on		 = 0b1,
} t_PMURTC_PMU_WK3STAT_CMP1_enum;

typedef enum { 
 	PMURTC_PMU_WK3STAT_IWDG_off		 = 0b0,
	PMURTC_PMU_WK3STAT_IWDG_on		 = 0b1,
} t_PMURTC_PMU_WK3STAT_IWDG_enum;

typedef enum { 
 	PMURTC_PMU_WK3STAT_EXTRST_off		 = 0b0,
	PMURTC_PMU_WK3STAT_EXTRST_on		 = 0b1,
} t_PMURTC_PMU_WK3STAT_EXTRST_enum;

typedef enum { 
 	PMURTC_PMU_WK3STAT_CLK1S_off		 = 0b0,
	PMURTC_PMU_WK3STAT_CLK1S_on		 = 0b1,
} t_PMURTC_PMU_WK3STAT_CLK1S_enum;




#define PMURTC_PMU_WCYC	0x38011088		 /*--  --*/

#define PMURTC_PMU_WCYC_VAL_pos	 	 	 	0	 	 /*--  --*/


#define PMURTC_PMU_WCYC_VAL_msk	 	 	 	0x000000ffUL


typedef struct {
uint32_t 	 	PMURTC_PMU_WCYC_VAL	 	:8;
uint32_t 	 	 	 	:24;
} t_PMURTC_PMU_WCYC_bits;





#define PMURTC_WFI_PDEN	0x3801108c		 /*--  --*/

#define PMURTC_WFI_PDEN_EN_pos	 	 	 	0	 	 /*--  --*/


#define PMURTC_WFI_PDEN_EN_msk	 	 	 	0x00000001UL


typedef struct {
uint32_t 	 	PMURTC_WFI_PDEN_EN	 	:1;
uint32_t 	 	 	 	:31;
} t_PMURTC_WFI_PDEN_bits;


typedef enum { 
 	PMURTC_WFI_PDEN_EN_off		 = 0b0,
	PMURTC_WFI_PDEN_EN_on		 = 0b1,
} t_PMURTC_WFI_PDEN_EN_enum;




#define PMURTC_WFI_ENTR	0x38011090		 /*--  --*/

#define PMURTC_WFI_ENTR_LDO0EN_pos	 	 	 	0	 	 /*--  --*/
#define PMURTC_WFI_ENTR_LDO1EN_pos	 	 	 	1	 	 /*--  --*/
#define PMURTC_WFI_ENTR_LDO0LP_pos	 	 	 	4	 	 /*--  --*/
#define PMURTC_WFI_ENTR_LDO1LP_pos	 	 	 	5	 	 /*--  --*/
#define PMURTC_WFI_ENTR_LDO0ULP_pos	 	 	 	8	 	 /*--  --*/
#define PMURTC_WFI_ENTR_LDO1ULP_pos	 	 	 	9	 	 /*--  --*/
#define PMURTC_WFI_ENTR_VL_pos	 	 	 	16	 	 /*--  --*/
#define PMURTC_WFI_ENTR_VH_pos	 	 	 	24	 	 /*--  --*/
#define PMURTC_WFI_ENTR_ALR_pos	 	 	 	31	 	 /*--  --*/


#define PMURTC_WFI_ENTR_LDO0EN_msk	 	 	 	0x00000001UL
#define PMURTC_WFI_ENTR_LDO1EN_msk	 	 	 	0x00000002UL
#define PMURTC_WFI_ENTR_LDO0LP_msk	 	 	 	0x00000010UL
#define PMURTC_WFI_ENTR_LDO1LP_msk	 	 	 	0x00000020UL
#define PMURTC_WFI_ENTR_LDO0ULP_msk	 	 	 	0x00000100UL
#define PMURTC_WFI_ENTR_LDO1ULP_msk	 	 	 	0x00000200UL
#define PMURTC_WFI_ENTR_VL_msk	 	 	 	0x001f0000UL
#define PMURTC_WFI_ENTR_VH_msk	 	 	 	0x1f000000UL
#define PMURTC_WFI_ENTR_ALR_msk	 	 	 	0x80000000UL


typedef struct {
uint32_t 	 	PMURTC_WFI_ENTR_LDO0EN	 	:1;
uint32_t 	 	PMURTC_WFI_ENTR_LDO1EN	 	:1;
uint32_t 	 	 	 	:2;
uint32_t 	 	PMURTC_WFI_ENTR_LDO0LP	 	:1;
uint32_t 	 	PMURTC_WFI_ENTR_LDO1LP	 	:1;
uint32_t 	 	 	 	:2;
uint32_t 	 	PMURTC_WFI_ENTR_LDO0ULP	 	:1;
uint32_t 	 	PMURTC_WFI_ENTR_LDO1ULP	 	:1;
uint32_t 	 	 	 	:6;
uint32_t 	 	PMURTC_WFI_ENTR_VL	 	:5;
uint32_t 	 	 	 	:3;
uint32_t 	 	PMURTC_WFI_ENTR_VH	 	:5;
uint32_t 	 	 	 	:2;
uint32_t 	 	PMURTC_WFI_ENTR_ALR	 	:1;
} t_PMURTC_WFI_ENTR_bits;


typedef enum { 
 	PMURTC_WFI_ENTR_LDO0EN_off		 = 0b0,
	PMURTC_WFI_ENTR_LDO0EN_on		 = 0b1,
} t_PMURTC_WFI_ENTR_LDO0EN_enum;

typedef enum { 
 	PMURTC_WFI_ENTR_LDO1EN_off		 = 0b0,
	PMURTC_WFI_ENTR_LDO1EN_on		 = 0b1,
} t_PMURTC_WFI_ENTR_LDO1EN_enum;

typedef enum { 
 	PMURTC_WFI_ENTR_LDO0LP_off		 = 0b0,
	PMURTC_WFI_ENTR_LDO0LP_on		 = 0b1,
} t_PMURTC_WFI_ENTR_LDO0LP_enum;

typedef enum { 
 	PMURTC_WFI_ENTR_LDO1LP_off		 = 0b0,
	PMURTC_WFI_ENTR_LDO1LP_on		 = 0b1,
} t_PMURTC_WFI_ENTR_LDO1LP_enum;

typedef enum { 
 	PMURTC_WFI_ENTR_LDO0ULP_off		 = 0b0,
	PMURTC_WFI_ENTR_LDO0ULP_on		 = 0b1,
} t_PMURTC_WFI_ENTR_LDO0ULP_enum;

typedef enum { 
 	PMURTC_WFI_ENTR_LDO1ULP_off		 = 0b0,
	PMURTC_WFI_ENTR_LDO1ULP_on		 = 0b1,
} t_PMURTC_WFI_ENTR_LDO1ULP_enum;

typedef enum { 
 	PMURTC_WFI_ENTR_ALR_off		 = 0b0,
	PMURTC_WFI_ENTR_ALR_on		 = 0b1,
} t_PMURTC_WFI_ENTR_ALR_enum;




#define PMURTC_WFI_EXIT	0x38011094		 /*--  --*/

#define PMURTC_WFI_EXIT_LDO0EN_pos	 	 	 	0	 	 /*--  --*/
#define PMURTC_WFI_EXIT_LDO1EN_pos	 	 	 	1	 	 /*--  --*/
#define PMURTC_WFI_EXIT_LDO0LP_pos	 	 	 	4	 	 /*--  --*/
#define PMURTC_WFI_EXIT_LDO1LP_pos	 	 	 	5	 	 /*--  --*/
#define PMURTC_WFI_EXIT_LDO0ULP_pos	 	 	 	8	 	 /*--  --*/
#define PMURTC_WFI_EXIT_LDO1ULP_pos	 	 	 	9	 	 /*--  --*/
#define PMURTC_WFI_EXIT_VL_pos	 	 	 	16	 	 /*--  --*/
#define PMURTC_WFI_EXIT_VH_pos	 	 	 	24	 	 /*--  --*/
#define PMURTC_WFI_EXIT_ALR_pos	 	 	 	31	 	 /*--  --*/


#define PMURTC_WFI_EXIT_LDO0EN_msk	 	 	 	0x00000001UL
#define PMURTC_WFI_EXIT_LDO1EN_msk	 	 	 	0x00000002UL
#define PMURTC_WFI_EXIT_LDO0LP_msk	 	 	 	0x00000010UL
#define PMURTC_WFI_EXIT_LDO1LP_msk	 	 	 	0x00000020UL
#define PMURTC_WFI_EXIT_LDO0ULP_msk	 	 	 	0x00000100UL
#define PMURTC_WFI_EXIT_LDO1ULP_msk	 	 	 	0x00000200UL
#define PMURTC_WFI_EXIT_VL_msk	 	 	 	0x001f0000UL
#define PMURTC_WFI_EXIT_VH_msk	 	 	 	0x1f000000UL
#define PMURTC_WFI_EXIT_ALR_msk	 	 	 	0x80000000UL


typedef struct {
uint32_t 	 	PMURTC_WFI_EXIT_LDO0EN	 	:1;
uint32_t 	 	PMURTC_WFI_EXIT_LDO1EN	 	:1;
uint32_t 	 	 	 	:2;
uint32_t 	 	PMURTC_WFI_EXIT_LDO0LP	 	:1;
uint32_t 	 	PMURTC_WFI_EXIT_LDO1LP	 	:1;
uint32_t 	 	 	 	:2;
uint32_t 	 	PMURTC_WFI_EXIT_LDO0ULP	 	:1;
uint32_t 	 	PMURTC_WFI_EXIT_LDO1ULP	 	:1;
uint32_t 	 	 	 	:6;
uint32_t 	 	PMURTC_WFI_EXIT_VL	 	:5;
uint32_t 	 	 	 	:3;
uint32_t 	 	PMURTC_WFI_EXIT_VH	 	:5;
uint32_t 	 	 	 	:2;
uint32_t 	 	PMURTC_WFI_EXIT_ALR	 	:1;
} t_PMURTC_WFI_EXIT_bits;


typedef enum { 
 	PMURTC_WFI_EXIT_LDO0EN_off		 = 0b0,
	PMURTC_WFI_EXIT_LDO0EN_on		 = 0b1,
} t_PMURTC_WFI_EXIT_LDO0EN_enum;

typedef enum { 
 	PMURTC_WFI_EXIT_LDO1EN_off		 = 0b0,
	PMURTC_WFI_EXIT_LDO1EN_on		 = 0b1,
} t_PMURTC_WFI_EXIT_LDO1EN_enum;

typedef enum { 
 	PMURTC_WFI_EXIT_LDO0LP_off		 = 0b0,
	PMURTC_WFI_EXIT_LDO0LP_on		 = 0b1,
} t_PMURTC_WFI_EXIT_LDO0LP_enum;

typedef enum { 
 	PMURTC_WFI_EXIT_LDO1LP_off		 = 0b0,
	PMURTC_WFI_EXIT_LDO1LP_on		 = 0b1,
} t_PMURTC_WFI_EXIT_LDO1LP_enum;

typedef enum { 
 	PMURTC_WFI_EXIT_LDO0ULP_off		 = 0b0,
	PMURTC_WFI_EXIT_LDO0ULP_on		 = 0b1,
} t_PMURTC_WFI_EXIT_LDO0ULP_enum;

typedef enum { 
 	PMURTC_WFI_EXIT_LDO1ULP_off		 = 0b0,
	PMURTC_WFI_EXIT_LDO1ULP_on		 = 0b1,
} t_PMURTC_WFI_EXIT_LDO1ULP_enum;

typedef enum { 
 	PMURTC_WFI_EXIT_ALR_off		 = 0b0,
	PMURTC_WFI_EXIT_ALR_on		 = 0b1,
} t_PMURTC_WFI_EXIT_ALR_enum;




#define PMURTC_WFI_DELENTR	0x38011098		 /*--  --*/

#define PMURTC_WFI_DELENTR_VAL_pos	 	 	 	0	 	 /*--  --*/


#define PMURTC_WFI_DELENTR_VAL_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	PMURTC_WFI_DELENTR_VAL	 	:16;
uint32_t 	 	 	 	:16;
} t_PMURTC_WFI_DELENTR_bits;





#define PMURTC_WFI_DELEXIT	0x3801109c		 /*--  --*/

#define PMURTC_WFI_DELEXIT_VAL_pos	 	 	 	0	 	 /*--  --*/


#define PMURTC_WFI_DELEXIT_VAL_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	PMURTC_WFI_DELEXIT_VAL	 	:16;
uint32_t 	 	 	 	:16;
} t_PMURTC_WFI_DELEXIT_bits;





#define PMURTC_PMU_IRQEVT	0x380110a0		 /*--  --*/

#define PMURTC_PMU_IRQEVT_IRQEVT_pos	 	 	 	0	 	 /*--  --*/


#define PMURTC_PMU_IRQEVT_IRQEVT_msk	 	 	 	0x00000001UL


typedef struct {
uint32_t 	 	PMURTC_PMU_IRQEVT_IRQEVT	 	:1;
uint32_t 	 	 	 	:31;
} t_PMURTC_PMU_IRQEVT_bits;


typedef enum { 
 	PMURTC_PMU_IRQEVT_IRQEVT_off		 = 0b0,
	PMURTC_PMU_IRQEVT_IRQEVT_on		 = 0b1,
} t_PMURTC_PMU_IRQEVT_IRQEVT_enum;




#define PMURTC_PMU_VBATPER_FORCE	0x380110a4		 /*--  --*/

#define PMURTC_PMU_VBATPER_FORCE_DACPD_pos	 	 	 	0	 	 /*--  --*/
#define PMURTC_PMU_VBATPER_FORCE_CMP0PD_pos	 	 	 	1	 	 /*--  --*/
#define PMURTC_PMU_VBATPER_FORCE_CMP1PD_pos	 	 	 	2	 	 /*--  --*/
#define PMURTC_PMU_VBATPER_FORCE_SRAM1LO_PD_pos	 	 	 	3	 	 /*--  --*/
#define PMURTC_PMU_VBATPER_FORCE_SRAM1HI_PD_pos	 	 	 	4	 	 /*--  --*/
#define PMURTC_PMU_VBATPER_FORCE_EXTOSC_pos	 	 	 	5	 	 /*--  --*/
#define PMURTC_PMU_VBATPER_FORCE_INTOSC_pos	 	 	 	6	 	 /*--  --*/
#define PMURTC_PMU_VBATPER_FORCE_SRAM1LO_RET_pos	 	 	 	16	 	 /*--  --*/
#define PMURTC_PMU_VBATPER_FORCE_SRAM1HI_RET_pos	 	 	 	17	 	 /*--  --*/


#define PMURTC_PMU_VBATPER_FORCE_DACPD_msk	 	 	 	0x00000001UL
#define PMURTC_PMU_VBATPER_FORCE_CMP0PD_msk	 	 	 	0x00000002UL
#define PMURTC_PMU_VBATPER_FORCE_CMP1PD_msk	 	 	 	0x00000004UL
#define PMURTC_PMU_VBATPER_FORCE_SRAM1LO_PD_msk	 	 	 	0x00000008UL
#define PMURTC_PMU_VBATPER_FORCE_SRAM1HI_PD_msk	 	 	 	0x00000010UL
#define PMURTC_PMU_VBATPER_FORCE_EXTOSC_msk	 	 	 	0x00000020UL
#define PMURTC_PMU_VBATPER_FORCE_INTOSC_msk	 	 	 	0x00000040UL
#define PMURTC_PMU_VBATPER_FORCE_SRAM1LO_RET_msk	 	 	 	0x00010000UL
#define PMURTC_PMU_VBATPER_FORCE_SRAM1HI_RET_msk	 	 	 	0x00020000UL


typedef struct {
uint32_t 	 	PMURTC_PMU_VBATPER_FORCE_DACPD	 	:1;
uint32_t 	 	PMURTC_PMU_VBATPER_FORCE_CMP0PD	 	:1;
uint32_t 	 	PMURTC_PMU_VBATPER_FORCE_CMP1PD	 	:1;
uint32_t 	 	PMURTC_PMU_VBATPER_FORCE_SRAM1LO_PD	 	:1;
uint32_t 	 	PMURTC_PMU_VBATPER_FORCE_SRAM1HI_PD	 	:1;
uint32_t 	 	PMURTC_PMU_VBATPER_FORCE_EXTOSC	 	:1;
uint32_t 	 	PMURTC_PMU_VBATPER_FORCE_INTOSC	 	:1;
uint32_t 	 	 	 	:9;
uint32_t 	 	PMURTC_PMU_VBATPER_FORCE_SRAM1LO_RET	 	:1;
uint32_t 	 	PMURTC_PMU_VBATPER_FORCE_SRAM1HI_RET	 	:1;
uint32_t 	 	 	 	:14;
} t_PMURTC_PMU_VBATPER_FORCE_bits;


typedef enum { 
 	PMURTC_PMU_VBATPER_FORCE_DACPD_off		 = 0b0,
	PMURTC_PMU_VBATPER_FORCE_DACPD_on		 = 0b1,
} t_PMURTC_PMU_VBATPER_FORCE_DACPD_enum;

typedef enum { 
 	PMURTC_PMU_VBATPER_FORCE_CMP0PD_off		 = 0b0,
	PMURTC_PMU_VBATPER_FORCE_CMP0PD_on		 = 0b1,
} t_PMURTC_PMU_VBATPER_FORCE_CMP0PD_enum;

typedef enum { 
 	PMURTC_PMU_VBATPER_FORCE_CMP1PD_off		 = 0b0,
	PMURTC_PMU_VBATPER_FORCE_CMP1PD_on		 = 0b1,
} t_PMURTC_PMU_VBATPER_FORCE_CMP1PD_enum;

typedef enum { 
 	PMURTC_PMU_VBATPER_FORCE_SRAM1LO_PD_off		 = 0b0,
	PMURTC_PMU_VBATPER_FORCE_SRAM1LO_PD_on		 = 0b1,
} t_PMURTC_PMU_VBATPER_FORCE_SRAM1LO_PD_enum;

typedef enum { 
 	PMURTC_PMU_VBATPER_FORCE_SRAM1HI_PD_off		 = 0b0,
	PMURTC_PMU_VBATPER_FORCE_SRAM1HI_PD_on		 = 0b1,
} t_PMURTC_PMU_VBATPER_FORCE_SRAM1HI_PD_enum;

typedef enum { 
 	PMURTC_PMU_VBATPER_FORCE_EXTOSC_off		 = 0b0,
	PMURTC_PMU_VBATPER_FORCE_EXTOSC_on		 = 0b1,
} t_PMURTC_PMU_VBATPER_FORCE_EXTOSC_enum;

typedef enum { 
 	PMURTC_PMU_VBATPER_FORCE_INTOSC_off		 = 0b0,
	PMURTC_PMU_VBATPER_FORCE_INTOSC_on		 = 0b1,
} t_PMURTC_PMU_VBATPER_FORCE_INTOSC_enum;

typedef enum { 
 	PMURTC_PMU_VBATPER_FORCE_SRAM1LO_RET_off		 = 0b0,
	PMURTC_PMU_VBATPER_FORCE_SRAM1LO_RET_on		 = 0b1,
} t_PMURTC_PMU_VBATPER_FORCE_SRAM1LO_RET_enum;

typedef enum { 
 	PMURTC_PMU_VBATPER_FORCE_SRAM1HI_RET_off		 = 0b0,
	PMURTC_PMU_VBATPER_FORCE_SRAM1HI_RET_on		 = 0b1,
} t_PMURTC_PMU_VBATPER_FORCE_SRAM1HI_RET_enum;




#define PMURTC_PMU_VBATPER_WFI	0x380110a8		 /*--  --*/

#define PMURTC_PMU_VBATPER_WFI_DACPD_pos	 	 	 	0	 	 /*--  --*/
#define PMURTC_PMU_VBATPER_WFI_CMP0PD_pos	 	 	 	1	 	 /*--  --*/
#define PMURTC_PMU_VBATPER_WFI_CMP1PD_pos	 	 	 	2	 	 /*--  --*/
#define PMURTC_PMU_VBATPER_WFI_SRAM1LO_PD_pos	 	 	 	3	 	 /*--  --*/
#define PMURTC_PMU_VBATPER_WFI_SRAM1HI_PD_pos	 	 	 	4	 	 /*--  --*/
#define PMURTC_PMU_VBATPER_WFI_EXTOSC_pos	 	 	 	5	 	 /*--  --*/
#define PMURTC_PMU_VBATPER_WFI_INTOSC_pos	 	 	 	6	 	 /*--  --*/
#define PMURTC_PMU_VBATPER_WFI_SRAM1LO_RET_pos	 	 	 	16	 	 /*--  --*/
#define PMURTC_PMU_VBATPER_WFI_SRAM1HI_RET_pos	 	 	 	17	 	 /*--  --*/


#define PMURTC_PMU_VBATPER_WFI_DACPD_msk	 	 	 	0x00000001UL
#define PMURTC_PMU_VBATPER_WFI_CMP0PD_msk	 	 	 	0x00000002UL
#define PMURTC_PMU_VBATPER_WFI_CMP1PD_msk	 	 	 	0x00000004UL
#define PMURTC_PMU_VBATPER_WFI_SRAM1LO_PD_msk	 	 	 	0x00000008UL
#define PMURTC_PMU_VBATPER_WFI_SRAM1HI_PD_msk	 	 	 	0x00000010UL
#define PMURTC_PMU_VBATPER_WFI_EXTOSC_msk	 	 	 	0x00000020UL
#define PMURTC_PMU_VBATPER_WFI_INTOSC_msk	 	 	 	0x00000040UL
#define PMURTC_PMU_VBATPER_WFI_SRAM1LO_RET_msk	 	 	 	0x00010000UL
#define PMURTC_PMU_VBATPER_WFI_SRAM1HI_RET_msk	 	 	 	0x00020000UL


typedef struct {
uint32_t 	 	PMURTC_PMU_VBATPER_WFI_DACPD	 	:1;
uint32_t 	 	PMURTC_PMU_VBATPER_WFI_CMP0PD	 	:1;
uint32_t 	 	PMURTC_PMU_VBATPER_WFI_CMP1PD	 	:1;
uint32_t 	 	PMURTC_PMU_VBATPER_WFI_SRAM1LO_PD	 	:1;
uint32_t 	 	PMURTC_PMU_VBATPER_WFI_SRAM1HI_PD	 	:1;
uint32_t 	 	PMURTC_PMU_VBATPER_WFI_EXTOSC	 	:1;
uint32_t 	 	PMURTC_PMU_VBATPER_WFI_INTOSC	 	:1;
uint32_t 	 	 	 	:9;
uint32_t 	 	PMURTC_PMU_VBATPER_WFI_SRAM1LO_RET	 	:1;
uint32_t 	 	PMURTC_PMU_VBATPER_WFI_SRAM1HI_RET	 	:1;
uint32_t 	 	 	 	:14;
} t_PMURTC_PMU_VBATPER_WFI_bits;


typedef enum { 
 	PMURTC_PMU_VBATPER_WFI_DACPD_off		 = 0b0,
	PMURTC_PMU_VBATPER_WFI_DACPD_on		 = 0b1,
} t_PMURTC_PMU_VBATPER_WFI_DACPD_enum;

typedef enum { 
 	PMURTC_PMU_VBATPER_WFI_CMP0PD_off		 = 0b0,
	PMURTC_PMU_VBATPER_WFI_CMP0PD_on		 = 0b1,
} t_PMURTC_PMU_VBATPER_WFI_CMP0PD_enum;

typedef enum { 
 	PMURTC_PMU_VBATPER_WFI_CMP1PD_off		 = 0b0,
	PMURTC_PMU_VBATPER_WFI_CMP1PD_on		 = 0b1,
} t_PMURTC_PMU_VBATPER_WFI_CMP1PD_enum;

typedef enum { 
 	PMURTC_PMU_VBATPER_WFI_SRAM1LO_PD_off		 = 0b0,
	PMURTC_PMU_VBATPER_WFI_SRAM1LO_PD_on		 = 0b1,
} t_PMURTC_PMU_VBATPER_WFI_SRAM1LO_PD_enum;

typedef enum { 
 	PMURTC_PMU_VBATPER_WFI_SRAM1HI_PD_off		 = 0b0,
	PMURTC_PMU_VBATPER_WFI_SRAM1HI_PD_on		 = 0b1,
} t_PMURTC_PMU_VBATPER_WFI_SRAM1HI_PD_enum;

typedef enum { 
 	PMURTC_PMU_VBATPER_WFI_EXTOSC_off		 = 0b0,
	PMURTC_PMU_VBATPER_WFI_EXTOSC_on		 = 0b1,
} t_PMURTC_PMU_VBATPER_WFI_EXTOSC_enum;

typedef enum { 
 	PMURTC_PMU_VBATPER_WFI_INTOSC_off		 = 0b0,
	PMURTC_PMU_VBATPER_WFI_INTOSC_on		 = 0b1,
} t_PMURTC_PMU_VBATPER_WFI_INTOSC_enum;

typedef enum { 
 	PMURTC_PMU_VBATPER_WFI_SRAM1LO_RET_off		 = 0b0,
	PMURTC_PMU_VBATPER_WFI_SRAM1LO_RET_on		 = 0b1,
} t_PMURTC_PMU_VBATPER_WFI_SRAM1LO_RET_enum;

typedef enum { 
 	PMURTC_PMU_VBATPER_WFI_SRAM1HI_RET_off		 = 0b0,
	PMURTC_PMU_VBATPER_WFI_SRAM1HI_RET_on		 = 0b1,
} t_PMURTC_PMU_VBATPER_WFI_SRAM1HI_RET_enum;




#define PMURTC_IWDG_CFG	0x380110ac		 /*--  --*/

#define PMURTC_IWDG_CFG_CLKSRC_pos	 	 	 	0	 	 /*--  --*/
#define PMURTC_IWDG_CFG_RSTDIS_pos	 	 	 	8	 	 /*--  --*/


#define PMURTC_IWDG_CFG_CLKSRC_msk	 	 	 	0x00000003UL
#define PMURTC_IWDG_CFG_RSTDIS_msk	 	 	 	0x00000100UL


typedef struct {
uint32_t 	 	PMURTC_IWDG_CFG_CLKSRC	 	:2;
uint32_t 	 	 	 	:6;
uint32_t 	 	PMURTC_IWDG_CFG_RSTDIS	 	:1;
uint32_t 	 	 	 	:23;
} t_PMURTC_IWDG_CFG_bits;


typedef enum { 
 	PMURTC_IWDG_CFG_CLKSRC_hsi		 = 0b00,
	PMURTC_IWDG_CFG_CLKSRC_hse		 = 0b01,
	PMURTC_IWDG_CFG_CLKSRC_lsi		 = 0b10,
} t_PMURTC_IWDG_CFG_CLKSRC_enum;

typedef enum { 
 	PMURTC_IWDG_CFG_RSTDIS_off		 = 0b0,
	PMURTC_IWDG_CFG_RSTDIS_on		 = 0b1,
} t_PMURTC_IWDG_CFG_RSTDIS_enum;




#define PMURTC_VBATRST	0x380110c0		 /*--  --*/

#define PMURTC_VBATRST_RSTEN_pos	 	 	 	0	 	 /*--  --*/
#define PMURTC_VBATRST_KEY_pos	 	 	 	16	 	 /*--  --*/


#define PMURTC_VBATRST_RSTEN_msk	 	 	 	0x00000001UL
#define PMURTC_VBATRST_KEY_msk	 	 	 	0xffff0000UL


typedef struct {
uint32_t 	 	PMURTC_VBATRST_RSTEN	 	:1;
uint32_t 	 	 	 	:15;
uint32_t 	 	PMURTC_VBATRST_KEY	 	:16;
} t_PMURTC_VBATRST_bits;


typedef enum { 
 	PMURTC_VBATRST_RSTEN_off		 = 0b0,
	PMURTC_VBATRST_RSTEN_on		 = 0b1,
} t_PMURTC_VBATRST_RSTEN_enum;




#define PMURTC_CPE_STAT	0x380110c4		 /*--  --*/

#define PMURTC_CPE_STAT_CPE_pos	 	 	 	0	 	 /*--  --*/


#define PMURTC_CPE_STAT_CPE_msk	 	 	 	0x00000001UL


typedef struct {
uint32_t 	 	PMURTC_CPE_STAT_CPE	 	:1;
uint32_t 	 	 	 	:31;
} t_PMURTC_CPE_STAT_bits;


typedef enum { 
 	PMURTC_CPE_STAT_CPE_off		 = 0b0,
	PMURTC_CPE_STAT_CPE_on		 = 0b1,
} t_PMURTC_CPE_STAT_CPE_enum;



typedef struct { 
union {
 __IO uint32_t 	PMURTC_RTC_CFG0_reg;
 __IO t_PMURTC_RTC_CFG0_bits	 PMURTC_RTC_CFG0_bit;
};
union {
 __IO uint32_t 	PMURTC_RTC_TRIMRC_reg;
 __IO t_PMURTC_RTC_TRIMRC_bits	 PMURTC_RTC_TRIMRC_bit;
};
union {
 __IO uint32_t 	PMURTC_RTC_HISTORY_reg;
 __IO t_PMURTC_RTC_HISTORY_bits	 PMURTC_RTC_HISTORY_bit;
};
union {
 __IO uint32_t 	PMURTC_RTC_TIME_reg;
 __IO t_PMURTC_RTC_TIME_bits	 PMURTC_RTC_TIME_bit;
};
union {
 __IO uint32_t 	PMURTC_RTC_ALARM_reg;
 __IO t_PMURTC_RTC_ALARM_bits	 PMURTC_RTC_ALARM_bit;
};
union {
 __IO uint32_t 	PMURTC_RTC_TRIM_reg;
 __IO t_PMURTC_RTC_TRIM_bits	 PMURTC_RTC_TRIM_bit;
};
union {
 __IO uint32_t 	PMURTC_RTC_CFG1_reg;
 __IO t_PMURTC_RTC_CFG1_bits	 PMURTC_RTC_CFG1_bit;
};
union {
 __IO uint32_t 	PMURTC_RTC_WAKECFG_reg;
 __IO t_PMURTC_RTC_WAKECFG_bits	 PMURTC_RTC_WAKECFG_bit;
};
__IO uint32_t reserved0[16];
union {
 __IO uint32_t 	PMURTC_RTC_TICKGEN_reg;
 __IO t_PMURTC_RTC_TICKGEN_bits	 PMURTC_RTC_TICKGEN_bit;
};
union {
 __IO uint32_t 	PMURTC_RTC_TRIM1S_LD_reg;
 __IO t_PMURTC_RTC_TRIM1S_LD_bits	 PMURTC_RTC_TRIM1S_LD_bit;
};
__IO uint32_t reserved1[6];
union {
 __IO uint32_t 	PMURTC_PMU_WK3EN_reg;
 __IO t_PMURTC_PMU_WK3EN_bits	 PMURTC_PMU_WK3EN_bit;
};
union {
 __IO uint32_t 	PMURTC_PMU_WK3STAT_reg;
 __IO t_PMURTC_PMU_WK3STAT_bits	 PMURTC_PMU_WK3STAT_bit;
};
union {
 __IO uint32_t 	PMURTC_PMU_WCYC_reg;
 __IO t_PMURTC_PMU_WCYC_bits	 PMURTC_PMU_WCYC_bit;
};
union {
 __IO uint32_t 	PMURTC_WFI_PDEN_reg;
 __IO t_PMURTC_WFI_PDEN_bits	 PMURTC_WFI_PDEN_bit;
};
union {
 __IO uint32_t 	PMURTC_WFI_ENTR_reg;
 __IO t_PMURTC_WFI_ENTR_bits	 PMURTC_WFI_ENTR_bit;
};
union {
 __IO uint32_t 	PMURTC_WFI_EXIT_reg;
 __IO t_PMURTC_WFI_EXIT_bits	 PMURTC_WFI_EXIT_bit;
};
union {
 __IO uint32_t 	PMURTC_WFI_DELENTR_reg;
 __IO t_PMURTC_WFI_DELENTR_bits	 PMURTC_WFI_DELENTR_bit;
};
union {
 __IO uint32_t 	PMURTC_WFI_DELEXIT_reg;
 __IO t_PMURTC_WFI_DELEXIT_bits	 PMURTC_WFI_DELEXIT_bit;
};
union {
 __IO uint32_t 	PMURTC_PMU_IRQEVT_reg;
 __IO t_PMURTC_PMU_IRQEVT_bits	 PMURTC_PMU_IRQEVT_bit;
};
union {
 __IO uint32_t 	PMURTC_PMU_VBATPER_FORCE_reg;
 __IO t_PMURTC_PMU_VBATPER_FORCE_bits	 PMURTC_PMU_VBATPER_FORCE_bit;
};
union {
 __IO uint32_t 	PMURTC_PMU_VBATPER_WFI_reg;
 __IO t_PMURTC_PMU_VBATPER_WFI_bits	 PMURTC_PMU_VBATPER_WFI_bit;
};
union {
 __IO uint32_t 	PMURTC_IWDG_CFG_reg;
 __IO t_PMURTC_IWDG_CFG_bits	 PMURTC_IWDG_CFG_bit;
};
__IO uint32_t reserved2[4];
union {
 __IO uint32_t 	PMURTC_VBATRST_reg;
 __IO t_PMURTC_VBATRST_bits	 PMURTC_VBATRST_bit;
};
union {
 __IO uint32_t 	PMURTC_CPE_STAT_reg;
 __IO t_PMURTC_CPE_STAT_bits	 PMURTC_CPE_STAT_bit;
};
} t_PMURTC_REG;



#define HASH_CR	0x20032000		 /*--  --*/

#define HASH_CR_INIT_pos	 	 	 	0	 	 /*--  --*/
#define HASH_CR_MODE_pos	 	 	 	1	 	 /*--  --*/
#define HASH_CR_LKEY_pos	 	 	 	2	 	 /*--  --*/
#define HASH_CR_SAMK_pos	 	 	 	3	 	 /*--  --*/
#define HASH_CR_DATATYPE_pos	 	 	 	4	 	 /*--  --*/
#define HASH_CR_DMAE_pos	 	 	 	6	 	 /*--  --*/
#define HASH_CR_MDMAT_pos	 	 	 	7	 	 /*--  --*/
#define HASH_CR_NBW_pos	 	 	 	8	 	 /*--  --*/
#define HASH_CR_DINNE_pos	 	 	 	12	 	 /*--  --*/
#define HASH_CR_ALGO_pos	 	 	 	14	 	 /*--  --*/


#define HASH_CR_INIT_msk	 	 	 	0x00000001UL
#define HASH_CR_MODE_msk	 	 	 	0x00000002UL
#define HASH_CR_LKEY_msk	 	 	 	0x00000004UL
#define HASH_CR_SAMK_msk	 	 	 	0x00000008UL
#define HASH_CR_DATATYPE_msk	 	 	 	0x00000030UL
#define HASH_CR_DMAE_msk	 	 	 	0x00000040UL
#define HASH_CR_MDMAT_msk	 	 	 	0x00000080UL
#define HASH_CR_NBW_msk	 	 	 	0x00000f00UL
#define HASH_CR_DINNE_msk	 	 	 	0x00001000UL
#define HASH_CR_ALGO_msk	 	 	 	0x0000c000UL


typedef struct {
uint32_t 	 	HASH_CR_INIT	 	:1;
uint32_t 	 	HASH_CR_MODE	 	:1;
uint32_t 	 	HASH_CR_LKEY	 	:1;
uint32_t 	 	HASH_CR_SAMK	 	:1;
uint32_t 	 	HASH_CR_DATATYPE	 	:2;
uint32_t 	 	HASH_CR_DMAE	 	:1;
uint32_t 	 	HASH_CR_MDMAT	 	:1;
uint32_t 	 	HASH_CR_NBW	 	:4;
uint32_t 	 	HASH_CR_DINNE	 	:1;
uint32_t 	 	 	 	:1;
uint32_t 	 	HASH_CR_ALGO	 	:2;
uint32_t 	 	 	 	:16;
} t_HASH_CR_bits;


typedef enum { 
 	HASH_CR_INIT_off		 = 0b0,
	HASH_CR_INIT_on		 = 0b1,
} t_HASH_CR_INIT_enum;

typedef enum { 
 	HASH_CR_MODE_hash		 = 0b0,
	HASH_CR_MODE_hmac		 = 0b1,
} t_HASH_CR_MODE_enum;

typedef enum { 
 	HASH_CR_LKEY_hmac_short_key		 = 0b0,
	HASH_CR_LKEY_hmac_long_key		 = 0b1,
} t_HASH_CR_LKEY_enum;

typedef enum { 
 	HASH_CR_SAMK_off		 = 0b0,
	HASH_CR_SAMK_on		 = 0b1,
} t_HASH_CR_SAMK_enum;

typedef enum { 
 	HASH_CR_DATATYPE_word		 = 0b00,
	HASH_CR_DATATYPE_hword		 = 0b01,
	HASH_CR_DATATYPE_byte		 = 0b10,
	HASH_CR_DATATYPE_bit		 = 0b11,
} t_HASH_CR_DATATYPE_enum;

typedef enum { 
 	HASH_CR_DMAE_off		 = 0b0,
	HASH_CR_DMAE_on		 = 0b1,
} t_HASH_CR_DMAE_enum;

typedef enum { 
 	HASH_CR_MDMAT_off		 = 0b0,
	HASH_CR_MDMAT_on		 = 0b1,
} t_HASH_CR_MDMAT_enum;

typedef enum { 
 	HASH_CR_DINNE_off		 = 0b0,
	HASH_CR_DINNE_on		 = 0b1,
} t_HASH_CR_DINNE_enum;

typedef enum { 
 	HASH_CR_ALGO_sha1		 = 0b00,
	HASH_CR_ALGO_md5		 = 0b01,
	HASH_CR_ALGO_sha224		 = 0b10,
	HASH_CR_ALGO_sha256		 = 0b11,
} t_HASH_CR_ALGO_enum;




#define HASH_DATAIN	0x20032004		 /*--  --*/

#define HASH_DATAIN_VAL_pos	 	 	 	0	 	 /*--  --*/


#define HASH_DATAIN_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	HASH_DATAIN_VAL	 	:32;
} t_HASH_DATAIN_bits;





#define HASH_STR	0x20032008		 /*--  --*/

#define HASH_STR_NBLW_pos	 	 	 	0	 	 /*--  --*/
#define HASH_STR_DCAL_pos	 	 	 	8	 	 /*--  --*/


#define HASH_STR_NBLW_msk	 	 	 	0x0000001fUL
#define HASH_STR_DCAL_msk	 	 	 	0x00000100UL


typedef struct {
uint32_t 	 	HASH_STR_NBLW	 	:5;
uint32_t 	 	 	 	:3;
uint32_t 	 	HASH_STR_DCAL	 	:1;
uint32_t 	 	 	 	:23;
} t_HASH_STR_bits;


typedef enum { 
 	HASH_STR_DCAL_off		 = 0b0,
	HASH_STR_DCAL_on		 = 0b1,
} t_HASH_STR_DCAL_enum;




#define HASH_IMR	0x2003200c		 /*--  --*/

#define HASH_IMR_DINIE_pos	 	 	 	0	 	 /*--  --*/
#define HASH_IMR_DCIE_pos	 	 	 	1	 	 /*--  --*/


#define HASH_IMR_DINIE_msk	 	 	 	0x00000001UL
#define HASH_IMR_DCIE_msk	 	 	 	0x00000002UL


typedef struct {
uint32_t 	 	HASH_IMR_DINIE	 	:1;
uint32_t 	 	HASH_IMR_DCIE	 	:1;
uint32_t 	 	 	 	:30;
} t_HASH_IMR_bits;


typedef enum { 
 	HASH_IMR_DINIE_off		 = 0b0,
	HASH_IMR_DINIE_on		 = 0b1,
} t_HASH_IMR_DINIE_enum;

typedef enum { 
 	HASH_IMR_DCIE_off		 = 0b0,
	HASH_IMR_DCIE_on		 = 0b1,
} t_HASH_IMR_DCIE_enum;




#define HASH_SR	0x20032010		 /*--  --*/

#define HASH_SR_DINIS_pos	 	 	 	0	 	 /*--  --*/
#define HASH_SR_DCIS_pos	 	 	 	1	 	 /*--  --*/
#define HASH_SR_DMAS_pos	 	 	 	2	 	 /*--  --*/
#define HASH_SR_BUSY_pos	 	 	 	3	 	 /*--  --*/


#define HASH_SR_DINIS_msk	 	 	 	0x00000001UL
#define HASH_SR_DCIS_msk	 	 	 	0x00000002UL
#define HASH_SR_DMAS_msk	 	 	 	0x00000004UL
#define HASH_SR_BUSY_msk	 	 	 	0x00000008UL


typedef struct {
uint32_t 	 	HASH_SR_DINIS	 	:1;
uint32_t 	 	HASH_SR_DCIS	 	:1;
uint32_t 	 	HASH_SR_DMAS	 	:1;
uint32_t 	 	HASH_SR_BUSY	 	:1;
uint32_t 	 	 	 	:28;
} t_HASH_SR_bits;


typedef enum { 
 	HASH_SR_DINIS_off		 = 0b0,
	HASH_SR_DINIS_on		 = 0b1,
} t_HASH_SR_DINIS_enum;

typedef enum { 
 	HASH_SR_DCIS_off		 = 0b0,
	HASH_SR_DCIS_on		 = 0b1,
} t_HASH_SR_DCIS_enum;

typedef enum { 
 	HASH_SR_DMAS_off		 = 0b0,
	HASH_SR_DMAS_on		 = 0b1,
} t_HASH_SR_DMAS_enum;

typedef enum { 
 	HASH_SR_BUSY_off		 = 0b0,
	HASH_SR_BUSY_on		 = 0b1,
} t_HASH_SR_BUSY_enum;



typedef struct { 
union {
 __IO uint32_t 	HASH_CR_reg;
 __IO t_HASH_CR_bits	 HASH_CR_bit;
};
union {
 __IO uint32_t 	HASH_DATAIN_reg;
 __IO t_HASH_DATAIN_bits	 HASH_DATAIN_bit;
};
union {
 __IO uint32_t 	HASH_STR_reg;
 __IO t_HASH_STR_bits	 HASH_STR_bit;
};
union {
 __IO uint32_t 	HASH_IMR_reg;
 __IO t_HASH_IMR_bits	 HASH_IMR_bit;
};
union {
 __IO uint32_t 	HASH_SR_reg;
 __IO t_HASH_SR_bits	 HASH_SR_bit;
};
} t_HASH_REG;



#define TRNG_CR	0x30004000		 /*--  --*/

#define TRNG_CR_START_pos	 	 	 	0	 	 /*--  --*/
#define TRNG_CR_LFSR_pos	 	 	 	1	 	 /*--  --*/
#define TRNG_CR_TESTEN_pos	 	 	 	2	 	 /*--  --*/
#define TRNG_CR_CONDBYPASS_pos	 	 	 	3	 	 /*--  --*/
#define TRNG_CR_TFAILINTEN_pos	 	 	 	4	 	 /*--  --*/
#define TRNG_CR_FFULLINTEN_pos	 	 	 	7	 	 /*--  --*/
#define TRNG_CR_SOFTRST_pos	 	 	 	8	 	 /*--  --*/
#define TRNG_CR_FORCEROS_pos	 	 	 	11	 	 /*--  --*/
#define TRNG_CR_IGNORHTF_pos	 	 	 	12	 	 /*--  --*/
#define TRNG_CR_COUNTBLOCK_pos	 	 	 	16	 	 /*--  --*/
#define TRNG_CR_FIFOFILLST_pos	 	 	 	20	 	 /*--  --*/
#define TRNG_CR_REPTSTDIS_pos	 	 	 	21	 	 /*--  --*/
#define TRNG_CR_PROPTSTDIS_pos	 	 	 	22	 	 /*--  --*/
#define TRNG_CR_AUTOCORRDIS_pos	 	 	 	23	 	 /*--  --*/
#define TRNG_CR_CORRTSTDIS_pos	 	 	 	27	 	 /*--  --*/
#define TRNG_CR_BLENDMETHOD_pos	 	 	 	30	 	 /*--  --*/


#define TRNG_CR_START_msk	 	 	 	0x00000001UL
#define TRNG_CR_LFSR_msk	 	 	 	0x00000002UL
#define TRNG_CR_TESTEN_msk	 	 	 	0x00000004UL
#define TRNG_CR_CONDBYPASS_msk	 	 	 	0x00000008UL
#define TRNG_CR_TFAILINTEN_msk	 	 	 	0x00000010UL
#define TRNG_CR_FFULLINTEN_msk	 	 	 	0x00000080UL
#define TRNG_CR_SOFTRST_msk	 	 	 	0x00000100UL
#define TRNG_CR_FORCEROS_msk	 	 	 	0x00000800UL
#define TRNG_CR_IGNORHTF_msk	 	 	 	0x00001000UL
#define TRNG_CR_COUNTBLOCK_msk	 	 	 	0x000f0000UL
#define TRNG_CR_FIFOFILLST_msk	 	 	 	0x00100000UL
#define TRNG_CR_REPTSTDIS_msk	 	 	 	0x00200000UL
#define TRNG_CR_PROPTSTDIS_msk	 	 	 	0x00400000UL
#define TRNG_CR_AUTOCORRDIS_msk	 	 	 	0x01800000UL
#define TRNG_CR_CORRTSTDIS_msk	 	 	 	0x38000000UL
#define TRNG_CR_BLENDMETHOD_msk	 	 	 	0xc0000000UL


typedef struct {
uint32_t 	 	TRNG_CR_START	 	:1;
uint32_t 	 	TRNG_CR_LFSR	 	:1;
uint32_t 	 	TRNG_CR_TESTEN	 	:1;
uint32_t 	 	TRNG_CR_CONDBYPASS	 	:1;
uint32_t 	 	TRNG_CR_TFAILINTEN	 	:1;
uint32_t 	 	 	 	:2;
uint32_t 	 	TRNG_CR_FFULLINTEN	 	:1;
uint32_t 	 	TRNG_CR_SOFTRST	 	:1;
uint32_t 	 	 	 	:2;
uint32_t 	 	TRNG_CR_FORCEROS	 	:1;
uint32_t 	 	TRNG_CR_IGNORHTF	 	:1;
uint32_t 	 	 	 	:3;
uint32_t 	 	TRNG_CR_COUNTBLOCK	 	:4;
uint32_t 	 	TRNG_CR_FIFOFILLST	 	:1;
uint32_t 	 	TRNG_CR_REPTSTDIS	 	:1;
uint32_t 	 	TRNG_CR_PROPTSTDIS	 	:1;
uint32_t 	 	TRNG_CR_AUTOCORRDIS	 	:2;
uint32_t 	 	 	 	:2;
uint32_t 	 	TRNG_CR_CORRTSTDIS	 	:3;
uint32_t 	 	TRNG_CR_BLENDMETHOD	 	:2;
} t_TRNG_CR_bits;


typedef enum { 
 	TRNG_CR_START_off		 = 0b0,
	TRNG_CR_START_on		 = 0b1,
} t_TRNG_CR_START_enum;

typedef enum { 
 	TRNG_CR_LFSR_asyncfreerunosc		 = 0b0,
	TRNG_CR_LFSR_syncosc		 = 0b1,
} t_TRNG_CR_LFSR_enum;

typedef enum { 
 	TRNG_CR_TESTEN_off		 = 0b0,
	TRNG_CR_TESTEN_on		 = 0b1,
} t_TRNG_CR_TESTEN_enum;

typedef enum { 
 	TRNG_CR_CONDBYPASS_off		 = 0b0,
	TRNG_CR_CONDBYPASS_on		 = 0b1,
} t_TRNG_CR_CONDBYPASS_enum;

typedef enum { 
 	TRNG_CR_TFAILINTEN_off		 = 0b0,
	TRNG_CR_TFAILINTEN_on		 = 0b1,
} t_TRNG_CR_TFAILINTEN_enum;

typedef enum { 
 	TRNG_CR_FFULLINTEN_off		 = 0b0,
	TRNG_CR_FFULLINTEN_on		 = 0b1,
} t_TRNG_CR_FFULLINTEN_enum;

typedef enum { 
 	TRNG_CR_SOFTRST_off		 = 0b0,
	TRNG_CR_SOFTRST_on		 = 0b1,
} t_TRNG_CR_SOFTRST_enum;

typedef enum { 
 	TRNG_CR_FORCEROS_off		 = 0b0,
	TRNG_CR_FORCEROS_on		 = 0b1,
} t_TRNG_CR_FORCEROS_enum;

typedef enum { 
 	TRNG_CR_IGNORHTF_off		 = 0b0,
	TRNG_CR_IGNORHTF_on		 = 0b1,
} t_TRNG_CR_IGNORHTF_enum;

typedef enum { 
 	TRNG_CR_FIFOFILLST_off		 = 0b0,
	TRNG_CR_FIFOFILLST_on		 = 0b1,
} t_TRNG_CR_FIFOFILLST_enum;

typedef enum { 
 	TRNG_CR_REPTSTDIS_off		 = 0b0,
	TRNG_CR_REPTSTDIS_on		 = 0b1,
} t_TRNG_CR_REPTSTDIS_enum;

typedef enum { 
 	TRNG_CR_PROPTSTDIS_off		 = 0b0,
	TRNG_CR_PROPTSTDIS_on		 = 0b1,
} t_TRNG_CR_PROPTSTDIS_enum;

typedef enum { 
 	TRNG_CR_BLENDMETHOD_concatenation		 = 0b00,
	TRNG_CR_BLENDMETHOD_xor_level_1		 = 0b01,
	TRNG_CR_BLENDMETHOD_xor_level_2		 = 0b10,
	TRNG_CR_BLENDMETHOD_von_neumann_debiasing		 = 0b11,
} t_TRNG_CR_BLENDMETHOD_enum;




#define TRNG_FIFOLEV	0x30004004		 /*--  --*/

#define TRNG_FIFOLEV_VAL_pos	 	 	 	0	 	 /*--  --*/


#define TRNG_FIFOLEV_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	TRNG_FIFOLEV_VAL	 	:32;
} t_TRNG_FIFOLEV_bits;





#define TRNG_FIFOTHR	0x30004008		 /*--  --*/

#define TRNG_FIFOTHR_VAL_pos	 	 	 	0	 	 /*--  --*/


#define TRNG_FIFOTHR_VAL_msk	 	 	 	0x0000007fUL


typedef struct {
uint32_t 	 	TRNG_FIFOTHR_VAL	 	:7;
uint32_t 	 	 	 	:25;
} t_TRNG_FIFOTHR_bits;





#define TRNG_FIFODEP	0x3000400c		 /*--  --*/

#define TRNG_FIFODEP_VAL_pos	 	 	 	0	 	 /*--  --*/


#define TRNG_FIFODEP_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	TRNG_FIFODEP_VAL	 	:32;
} t_TRNG_FIFODEP_bits;





#define TRNG_TESTDATA	0x30004020		 /*--  --*/

#define TRNG_TESTDATA_VAL_pos	 	 	 	0	 	 /*--  --*/


#define TRNG_TESTDATA_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	TRNG_TESTDATA_VAL	 	:32;
} t_TRNG_TESTDATA_bits;





#define TRNG_REPTSTCUTOFF	0x30004024		 /*--  --*/

#define TRNG_REPTSTCUTOFF_VAL_pos	 	 	 	0	 	 /*--  --*/


#define TRNG_REPTSTCUTOFF_VAL_msk	 	 	 	0x0000003fUL


typedef struct {
uint32_t 	 	TRNG_REPTSTCUTOFF_VAL	 	:6;
uint32_t 	 	 	 	:26;
} t_TRNG_REPTSTCUTOFF_bits;





#define TRNG_PROPTESTCUTOFF	0x30004028		 /*--  --*/

#define TRNG_PROPTESTCUTOFF_VAL_pos	 	 	 	0	 	 /*--  --*/


#define TRNG_PROPTESTCUTOFF_VAL_msk	 	 	 	0x000001ffUL


typedef struct {
uint32_t 	 	TRNG_PROPTESTCUTOFF_VAL	 	:9;
uint32_t 	 	 	 	:23;
} t_TRNG_PROPTESTCUTOFF_bits;





#define TRNG_LFSRSEED	0x3000402c		 /*--  --*/

#define TRNG_LFSRSEED_SEED_pos	 	 	 	0	 	 /*--  --*/
#define TRNG_LFSRSEED_SEL_pos	 	 	 	24	 	 /*--  --*/


#define TRNG_LFSRSEED_SEED_msk	 	 	 	0x00ffffffUL
#define TRNG_LFSRSEED_SEL_msk	 	 	 	0x03000000UL


typedef struct {
uint32_t 	 	TRNG_LFSRSEED_SEED	 	:24;
uint32_t 	 	TRNG_LFSRSEED_SEL	 	:2;
uint32_t 	 	 	 	:6;
} t_TRNG_LFSRSEED_bits;





#define TRNG_STAT	0x30004030		 /*--  --*/

#define TRNG_STAT_DATABUSYTEST_pos	 	 	 	0	 	 /*--  --*/
#define TRNG_STAT_STATE_pos	 	 	 	1	 	 /*--  --*/
#define TRNG_STAT_REPTESTFAIL_pos	 	 	 	4	 	 /*--  --*/
#define TRNG_STAT_PROPTESTFAIL_pos	 	 	 	5	 	 /*--  --*/
#define TRNG_STAT_ANYTESTFAIL_pos	 	 	 	6	 	 /*--  --*/
#define TRNG_STAT_FIFOFULL_pos	 	 	 	7	 	 /*--  --*/
#define TRNG_STAT_STARTUPFAIL_pos	 	 	 	10	 	 /*--  --*/
#define TRNG_STAT_REPTSTFAILSH_pos	 	 	 	12	 	 /*--  --*/
#define TRNG_STAT_PRTSTFAILSH_pos	 	 	 	16	 	 /*--  --*/
#define TRNG_STAT_CONDSLOW_pos	 	 	 	20	 	 /*--  --*/


#define TRNG_STAT_DATABUSYTEST_msk	 	 	 	0x00000001UL
#define TRNG_STAT_STATE_msk	 	 	 	0x0000000eUL
#define TRNG_STAT_REPTESTFAIL_msk	 	 	 	0x00000010UL
#define TRNG_STAT_PROPTESTFAIL_msk	 	 	 	0x00000020UL
#define TRNG_STAT_ANYTESTFAIL_msk	 	 	 	0x00000040UL
#define TRNG_STAT_FIFOFULL_msk	 	 	 	0x00000080UL
#define TRNG_STAT_STARTUPFAIL_msk	 	 	 	0x00000400UL
#define TRNG_STAT_REPTSTFAILSH_msk	 	 	 	0x0000f000UL
#define TRNG_STAT_PRTSTFAILSH_msk	 	 	 	0x000f0000UL
#define TRNG_STAT_CONDSLOW_msk	 	 	 	0x00100000UL


typedef struct {
uint32_t 	 	TRNG_STAT_DATABUSYTEST	 	:1;
uint32_t 	 	TRNG_STAT_STATE	 	:3;
uint32_t 	 	TRNG_STAT_REPTESTFAIL	 	:1;
uint32_t 	 	TRNG_STAT_PROPTESTFAIL	 	:1;
uint32_t 	 	TRNG_STAT_ANYTESTFAIL	 	:1;
uint32_t 	 	TRNG_STAT_FIFOFULL	 	:1;
uint32_t 	 	 	 	:2;
uint32_t 	 	TRNG_STAT_STARTUPFAIL	 	:1;
uint32_t 	 	 	 	:1;
uint32_t 	 	TRNG_STAT_REPTSTFAILSH	 	:4;
uint32_t 	 	TRNG_STAT_PRTSTFAILSH	 	:4;
uint32_t 	 	TRNG_STAT_CONDSLOW	 	:1;
uint32_t 	 	 	 	:11;
} t_TRNG_STAT_bits;


typedef enum { 
 	TRNG_STAT_DATABUSYTEST_off		 = 0b0,
	TRNG_STAT_DATABUSYTEST_on		 = 0b1,
} t_TRNG_STAT_DATABUSYTEST_enum;

typedef enum { 
 	TRNG_STAT_STATE_reset		 = 0b000,
	TRNG_STAT_STATE_startup		 = 0b001,
	TRNG_STAT_STATE_idle_fifofull		 = 0b010,
	TRNG_STAT_STATE_fifofill		 = 0b100,
	TRNG_STAT_STATE_error		 = 0b101,
} t_TRNG_STAT_STATE_enum;

typedef enum { 
 	TRNG_STAT_REPTESTFAIL_off		 = 0b0,
	TRNG_STAT_REPTESTFAIL_on		 = 0b1,
} t_TRNG_STAT_REPTESTFAIL_enum;

typedef enum { 
 	TRNG_STAT_PROPTESTFAIL_off		 = 0b0,
	TRNG_STAT_PROPTESTFAIL_on		 = 0b1,
} t_TRNG_STAT_PROPTESTFAIL_enum;

typedef enum { 
 	TRNG_STAT_ANYTESTFAIL_off		 = 0b0,
	TRNG_STAT_ANYTESTFAIL_on		 = 0b1,
} t_TRNG_STAT_ANYTESTFAIL_enum;

typedef enum { 
 	TRNG_STAT_FIFOFULL_off		 = 0b0,
	TRNG_STAT_FIFOFULL_on		 = 0b1,
} t_TRNG_STAT_FIFOFULL_enum;

typedef enum { 
 	TRNG_STAT_STARTUPFAIL_off		 = 0b0,
	TRNG_STAT_STARTUPFAIL_on		 = 0b1,
} t_TRNG_STAT_STARTUPFAIL_enum;

typedef enum { 
 	TRNG_STAT_CONDSLOW_off		 = 0b0,
	TRNG_STAT_CONDSLOW_on		 = 0b1,
} t_TRNG_STAT_CONDSLOW_enum;




#define TRNG_WARMPERIOD	0x30004034		 /*--  --*/

#define TRNG_WARMPERIOD_VAL_pos	 	 	 	0	 	 /*--  --*/


#define TRNG_WARMPERIOD_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	TRNG_WARMPERIOD_VAL	 	:32;
} t_TRNG_WARMPERIOD_bits;





#define TRNG_DISOSC	0x30004038		 /*--  --*/

#define TRNG_DISOSC_VAL_pos	 	 	 	0	 	 /*--  --*/


#define TRNG_DISOSC_VAL_msk	 	 	 	0x000000ffUL


typedef struct {
uint32_t 	 	TRNG_DISOSC_VAL	 	:8;
uint32_t 	 	 	 	:24;
} t_TRNG_DISOSC_bits;





#define TRNG_SAMPERIOD	0x30004044		 /*--  --*/

#define TRNG_SAMPERIOD_VAL_pos	 	 	 	0	 	 /*--  --*/


#define TRNG_SAMPERIOD_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	TRNG_SAMPERIOD_VAL	 	:32;
} t_TRNG_SAMPERIOD_bits;





#define TRNG_HWCFG	0x30004058		 /*--  --*/

#define TRNG_HWCFG_INVCOUNT_pos	 	 	 	0	 	 /*--  --*/
#define TRNG_HWCFG_AUTOCORRTEST_pos	 	 	 	8	 	 /*--  --*/
#define TRNG_HWCFG_FIFODEP_pos	 	 	 	12	 	 /*--  --*/


#define TRNG_HWCFG_INVCOUNT_msk	 	 	 	0x000000ffUL
#define TRNG_HWCFG_AUTOCORRTEST_msk	 	 	 	0x00000f00UL
#define TRNG_HWCFG_FIFODEP_msk	 	 	 	0x0000f000UL


typedef struct {
uint32_t 	 	TRNG_HWCFG_INVCOUNT	 	:8;
uint32_t 	 	TRNG_HWCFG_AUTOCORRTEST	 	:4;
uint32_t 	 	TRNG_HWCFG_FIFODEP	 	:4;
uint32_t 	 	 	 	:16;
} t_TRNG_HWCFG_bits;





#define TRNG_COOLDPERIOD	0x3000405c		 /*--  --*/

#define TRNG_COOLDPERIOD_VAL_pos	 	 	 	0	 	 /*--  --*/


#define TRNG_COOLDPERIOD_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	TRNG_COOLDPERIOD_VAL	 	:32;
} t_TRNG_COOLDPERIOD_bits;





#define TRNG_AUTOCORRTESTCUTOFF0	0x30004060		 /*--  --*/

#define TRNG_AUTOCORRTESTCUTOFF0_ZEROCUTOFF_pos	 	 	 	0	 	 /*--  --*/
#define TRNG_AUTOCORRTESTCUTOFF0_ONECUTOFF_pos	 	 	 	16	 	 /*--  --*/


#define TRNG_AUTOCORRTESTCUTOFF0_ZEROCUTOFF_msk	 	 	 	0x0000ffffUL
#define TRNG_AUTOCORRTESTCUTOFF0_ONECUTOFF_msk	 	 	 	0xffff0000UL


typedef struct {
uint32_t 	 	TRNG_AUTOCORRTESTCUTOFF0_ZEROCUTOFF	 	:16;
uint32_t 	 	TRNG_AUTOCORRTESTCUTOFF0_ONECUTOFF	 	:16;
} t_TRNG_AUTOCORRTESTCUTOFF0_bits;





#define TRNG_AUTOCORRTESTCUTOFF1	0x30004064		 /*--  --*/

#define TRNG_AUTOCORRTESTCUTOFF1_TWOCUTOFF_pos	 	 	 	0	 	 /*--  --*/
#define TRNG_AUTOCORRTESTCUTOFF1_THREECUTOFF_pos	 	 	 	16	 	 /*--  --*/


#define TRNG_AUTOCORRTESTCUTOFF1_TWOCUTOFF_msk	 	 	 	0x0000ffffUL
#define TRNG_AUTOCORRTESTCUTOFF1_THREECUTOFF_msk	 	 	 	0xffff0000UL


typedef struct {
uint32_t 	 	TRNG_AUTOCORRTESTCUTOFF1_TWOCUTOFF	 	:16;
uint32_t 	 	TRNG_AUTOCORRTESTCUTOFF1_THREECUTOFF	 	:16;
} t_TRNG_AUTOCORRTESTCUTOFF1_bits;





#define TRNG_CORRTESTCUTOFF0	0x30004068		 /*--  --*/

#define TRNG_CORRTESTCUTOFF0_ZEROCUTOFF_pos	 	 	 	0	 	 /*--  --*/
#define TRNG_CORRTESTCUTOFF0_ONECUTOFF_pos	 	 	 	16	 	 /*--  --*/


#define TRNG_CORRTESTCUTOFF0_ZEROCUTOFF_msk	 	 	 	0x0000ffffUL
#define TRNG_CORRTESTCUTOFF0_ONECUTOFF_msk	 	 	 	0xffff0000UL


typedef struct {
uint32_t 	 	TRNG_CORRTESTCUTOFF0_ZEROCUTOFF	 	:16;
uint32_t 	 	TRNG_CORRTESTCUTOFF0_ONECUTOFF	 	:16;
} t_TRNG_CORRTESTCUTOFF0_bits;





#define TRNG_CORRTESTCUTOFF1	0x3000406c		 /*--  --*/

#define TRNG_CORRTESTCUTOFF1_TWOCUTOFF_pos	 	 	 	0	 	 /*--  --*/
#define TRNG_CORRTESTCUTOFF1_THREECUTOFF_pos	 	 	 	16	 	 /*--  --*/


#define TRNG_CORRTESTCUTOFF1_TWOCUTOFF_msk	 	 	 	0x0000ffffUL
#define TRNG_CORRTESTCUTOFF1_THREECUTOFF_msk	 	 	 	0xffff0000UL


typedef struct {
uint32_t 	 	TRNG_CORRTESTCUTOFF1_TWOCUTOFF	 	:16;
uint32_t 	 	TRNG_CORRTESTCUTOFF1_THREECUTOFF	 	:16;
} t_TRNG_CORRTESTCUTOFF1_bits;





#define TRNG_AUTOCORRTESTFAILED	0x30004070		 /*--  --*/

#define TRNG_AUTOCORRTESTFAILED_VAL_pos	 	 	 	0	 	 /*--  --*/


#define TRNG_AUTOCORRTESTFAILED_VAL_msk	 	 	 	0x000000ffUL


typedef struct {
uint32_t 	 	TRNG_AUTOCORRTESTFAILED_VAL	 	:8;
uint32_t 	 	 	 	:24;
} t_TRNG_AUTOCORRTESTFAILED_bits;





#define TRNG_CORRTESTFAILED	0x30004074		 /*--  --*/

#define TRNG_CORRTESTFAILED_VAL_pos	 	 	 	0	 	 /*--  --*/


#define TRNG_CORRTESTFAILED_VAL_msk	 	 	 	0x000000ffUL


typedef struct {
uint32_t 	 	TRNG_CORRTESTFAILED_VAL	 	:8;
uint32_t 	 	 	 	:24;
} t_TRNG_CORRTESTFAILED_bits;





#define TRNG_HWVERSION	0x3000407c		 /*--  --*/

#define TRNG_HWVERSION_HWVER_pos	 	 	 	0	 	 /*--  --*/


#define TRNG_HWVERSION_HWVER_msk	 	 	 	0x00000001UL


typedef struct {
uint32_t 	 	TRNG_HWVERSION_HWVER	 	:1;
uint32_t 	 	 	 	:31;
} t_TRNG_HWVERSION_bits;


typedef enum { 
 	TRNG_HWVERSION_HWVER_off		 = 0b0,
	TRNG_HWVERSION_HWVER_on		 = 0b1,
} t_TRNG_HWVERSION_HWVER_enum;



typedef struct { 
union {
 __IO uint32_t 	TRNG_CR_reg;
 __IO t_TRNG_CR_bits	 TRNG_CR_bit;
};
union {
 __IO uint32_t 	TRNG_FIFOLEV_reg;
 __IO t_TRNG_FIFOLEV_bits	 TRNG_FIFOLEV_bit;
};
union {
 __IO uint32_t 	TRNG_FIFOTHR_reg;
 __IO t_TRNG_FIFOTHR_bits	 TRNG_FIFOTHR_bit;
};
union {
 __IO uint32_t 	TRNG_FIFODEP_reg;
 __IO t_TRNG_FIFODEP_bits	 TRNG_FIFODEP_bit;
};
__IO uint32_t reserved0[4];
union {
 __IO uint32_t 	TRNG_TESTDATA_reg;
 __IO t_TRNG_TESTDATA_bits	 TRNG_TESTDATA_bit;
};
union {
 __IO uint32_t 	TRNG_REPTSTCUTOFF_reg;
 __IO t_TRNG_REPTSTCUTOFF_bits	 TRNG_REPTSTCUTOFF_bit;
};
union {
 __IO uint32_t 	TRNG_PROPTESTCUTOFF_reg;
 __IO t_TRNG_PROPTESTCUTOFF_bits	 TRNG_PROPTESTCUTOFF_bit;
};
union {
 __IO uint32_t 	TRNG_LFSRSEED_reg;
 __IO t_TRNG_LFSRSEED_bits	 TRNG_LFSRSEED_bit;
};
union {
 __IO uint32_t 	TRNG_STAT_reg;
 __IO t_TRNG_STAT_bits	 TRNG_STAT_bit;
};
union {
 __IO uint32_t 	TRNG_WARMPERIOD_reg;
 __IO t_TRNG_WARMPERIOD_bits	 TRNG_WARMPERIOD_bit;
};
union {
 __IO uint32_t 	TRNG_DISOSC_reg;
 __IO t_TRNG_DISOSC_bits	 TRNG_DISOSC_bit;
};
__IO uint32_t reserved1[2];
union {
 __IO uint32_t 	TRNG_SAMPERIOD_reg;
 __IO t_TRNG_SAMPERIOD_bits	 TRNG_SAMPERIOD_bit;
};
__IO uint32_t reserved2[4];
union {
 __IO uint32_t 	TRNG_HWCFG_reg;
 __IO t_TRNG_HWCFG_bits	 TRNG_HWCFG_bit;
};
union {
 __IO uint32_t 	TRNG_COOLDPERIOD_reg;
 __IO t_TRNG_COOLDPERIOD_bits	 TRNG_COOLDPERIOD_bit;
};
union {
 __IO uint32_t 	TRNG_AUTOCORRTESTCUTOFF0_reg;
 __IO t_TRNG_AUTOCORRTESTCUTOFF0_bits	 TRNG_AUTOCORRTESTCUTOFF0_bit;
};
union {
 __IO uint32_t 	TRNG_AUTOCORRTESTCUTOFF1_reg;
 __IO t_TRNG_AUTOCORRTESTCUTOFF1_bits	 TRNG_AUTOCORRTESTCUTOFF1_bit;
};
union {
 __IO uint32_t 	TRNG_CORRTESTCUTOFF0_reg;
 __IO t_TRNG_CORRTESTCUTOFF0_bits	 TRNG_CORRTESTCUTOFF0_bit;
};
union {
 __IO uint32_t 	TRNG_CORRTESTCUTOFF1_reg;
 __IO t_TRNG_CORRTESTCUTOFF1_bits	 TRNG_CORRTESTCUTOFF1_bit;
};
union {
 __IO uint32_t 	TRNG_AUTOCORRTESTFAILED_reg;
 __IO t_TRNG_AUTOCORRTESTFAILED_bits	 TRNG_AUTOCORRTESTFAILED_bit;
};
union {
 __IO uint32_t 	TRNG_CORRTESTFAILED_reg;
 __IO t_TRNG_CORRTESTFAILED_bits	 TRNG_CORRTESTFAILED_bit;
};
__IO uint32_t reserved3[1];
union {
 __IO uint32_t 	TRNG_HWVERSION_reg;
 __IO t_TRNG_HWVERSION_bits	 TRNG_HWVERSION_bit;
};
} t_TRNG_REG;



#define GPIO_DATA	0x28000000		 /*--  --*/

#define GPIO_DATA_VAL_pos	 	 	 	0	 	 /*--  --*/


#define GPIO_DATA_VAL_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	GPIO_DATA_VAL	 	:16;
uint32_t 	 	 	 	:16;
} t_GPIO_DATA_bits;





#define GPIO_DATAOUT	0x28000004		 /*--  --*/

#define GPIO_DATAOUT_VAL_pos	 	 	 	0	 	 /*--  --*/


#define GPIO_DATAOUT_VAL_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	GPIO_DATAOUT_VAL	 	:16;
uint32_t 	 	 	 	:16;
} t_GPIO_DATAOUT_bits;





#define GPIO_DATAOUTSET	0x28000008		 /*--  --*/

#define GPIO_DATAOUTSET_PIN0_pos	 	 	 	0	 	 /*--  --*/
#define GPIO_DATAOUTSET_PIN1_pos	 	 	 	1	 	 /*--  --*/
#define GPIO_DATAOUTSET_PIN2_pos	 	 	 	2	 	 /*--  --*/
#define GPIO_DATAOUTSET_PIN3_pos	 	 	 	3	 	 /*--  --*/
#define GPIO_DATAOUTSET_PIN4_pos	 	 	 	4	 	 /*--  --*/
#define GPIO_DATAOUTSET_PIN5_pos	 	 	 	5	 	 /*--  --*/
#define GPIO_DATAOUTSET_PIN6_pos	 	 	 	6	 	 /*--  --*/
#define GPIO_DATAOUTSET_PIN7_pos	 	 	 	7	 	 /*--  --*/
#define GPIO_DATAOUTSET_PIN8_pos	 	 	 	8	 	 /*--  --*/
#define GPIO_DATAOUTSET_PIN9_pos	 	 	 	9	 	 /*--  --*/
#define GPIO_DATAOUTSET_PIN10_pos	 	 	 	10	 	 /*--  --*/
#define GPIO_DATAOUTSET_PIN11_pos	 	 	 	11	 	 /*--  --*/
#define GPIO_DATAOUTSET_PIN12_pos	 	 	 	12	 	 /*--  --*/
#define GPIO_DATAOUTSET_PIN13_pos	 	 	 	13	 	 /*--  --*/
#define GPIO_DATAOUTSET_PIN14_pos	 	 	 	14	 	 /*--  --*/
#define GPIO_DATAOUTSET_PIN15_pos	 	 	 	15	 	 /*--  --*/


#define GPIO_DATAOUTSET_PIN0_msk	 	 	 	0x00000001UL
#define GPIO_DATAOUTSET_PIN1_msk	 	 	 	0x00000002UL
#define GPIO_DATAOUTSET_PIN2_msk	 	 	 	0x00000004UL
#define GPIO_DATAOUTSET_PIN3_msk	 	 	 	0x00000008UL
#define GPIO_DATAOUTSET_PIN4_msk	 	 	 	0x00000010UL
#define GPIO_DATAOUTSET_PIN5_msk	 	 	 	0x00000020UL
#define GPIO_DATAOUTSET_PIN6_msk	 	 	 	0x00000040UL
#define GPIO_DATAOUTSET_PIN7_msk	 	 	 	0x00000080UL
#define GPIO_DATAOUTSET_PIN8_msk	 	 	 	0x00000100UL
#define GPIO_DATAOUTSET_PIN9_msk	 	 	 	0x00000200UL
#define GPIO_DATAOUTSET_PIN10_msk	 	 	 	0x00000400UL
#define GPIO_DATAOUTSET_PIN11_msk	 	 	 	0x00000800UL
#define GPIO_DATAOUTSET_PIN12_msk	 	 	 	0x00001000UL
#define GPIO_DATAOUTSET_PIN13_msk	 	 	 	0x00002000UL
#define GPIO_DATAOUTSET_PIN14_msk	 	 	 	0x00004000UL
#define GPIO_DATAOUTSET_PIN15_msk	 	 	 	0x00008000UL


typedef struct {
uint32_t 	 	GPIO_DATAOUTSET_PIN0	 	:1;
uint32_t 	 	GPIO_DATAOUTSET_PIN1	 	:1;
uint32_t 	 	GPIO_DATAOUTSET_PIN2	 	:1;
uint32_t 	 	GPIO_DATAOUTSET_PIN3	 	:1;
uint32_t 	 	GPIO_DATAOUTSET_PIN4	 	:1;
uint32_t 	 	GPIO_DATAOUTSET_PIN5	 	:1;
uint32_t 	 	GPIO_DATAOUTSET_PIN6	 	:1;
uint32_t 	 	GPIO_DATAOUTSET_PIN7	 	:1;
uint32_t 	 	GPIO_DATAOUTSET_PIN8	 	:1;
uint32_t 	 	GPIO_DATAOUTSET_PIN9	 	:1;
uint32_t 	 	GPIO_DATAOUTSET_PIN10	 	:1;
uint32_t 	 	GPIO_DATAOUTSET_PIN11	 	:1;
uint32_t 	 	GPIO_DATAOUTSET_PIN12	 	:1;
uint32_t 	 	GPIO_DATAOUTSET_PIN13	 	:1;
uint32_t 	 	GPIO_DATAOUTSET_PIN14	 	:1;
uint32_t 	 	GPIO_DATAOUTSET_PIN15	 	:1;
uint32_t 	 	 	 	:16;
} t_GPIO_DATAOUTSET_bits;


typedef enum { 
 	GPIO_DATAOUTSET_PIN0_off		 = 0b0,
	GPIO_DATAOUTSET_PIN0_on		 = 0b1,
} t_GPIO_DATAOUTSET_PIN0_enum;

typedef enum { 
 	GPIO_DATAOUTSET_PIN1_off		 = 0b0,
	GPIO_DATAOUTSET_PIN1_on		 = 0b1,
} t_GPIO_DATAOUTSET_PIN1_enum;

typedef enum { 
 	GPIO_DATAOUTSET_PIN2_off		 = 0b0,
	GPIO_DATAOUTSET_PIN2_on		 = 0b1,
} t_GPIO_DATAOUTSET_PIN2_enum;

typedef enum { 
 	GPIO_DATAOUTSET_PIN3_off		 = 0b0,
	GPIO_DATAOUTSET_PIN3_on		 = 0b1,
} t_GPIO_DATAOUTSET_PIN3_enum;

typedef enum { 
 	GPIO_DATAOUTSET_PIN4_off		 = 0b0,
	GPIO_DATAOUTSET_PIN4_on		 = 0b1,
} t_GPIO_DATAOUTSET_PIN4_enum;

typedef enum { 
 	GPIO_DATAOUTSET_PIN5_off		 = 0b0,
	GPIO_DATAOUTSET_PIN5_on		 = 0b1,
} t_GPIO_DATAOUTSET_PIN5_enum;

typedef enum { 
 	GPIO_DATAOUTSET_PIN6_off		 = 0b0,
	GPIO_DATAOUTSET_PIN6_on		 = 0b1,
} t_GPIO_DATAOUTSET_PIN6_enum;

typedef enum { 
 	GPIO_DATAOUTSET_PIN7_off		 = 0b0,
	GPIO_DATAOUTSET_PIN7_on		 = 0b1,
} t_GPIO_DATAOUTSET_PIN7_enum;

typedef enum { 
 	GPIO_DATAOUTSET_PIN8_off		 = 0b0,
	GPIO_DATAOUTSET_PIN8_on		 = 0b1,
} t_GPIO_DATAOUTSET_PIN8_enum;

typedef enum { 
 	GPIO_DATAOUTSET_PIN9_off		 = 0b0,
	GPIO_DATAOUTSET_PIN9_on		 = 0b1,
} t_GPIO_DATAOUTSET_PIN9_enum;

typedef enum { 
 	GPIO_DATAOUTSET_PIN10_off		 = 0b0,
	GPIO_DATAOUTSET_PIN10_on		 = 0b1,
} t_GPIO_DATAOUTSET_PIN10_enum;

typedef enum { 
 	GPIO_DATAOUTSET_PIN11_off		 = 0b0,
	GPIO_DATAOUTSET_PIN11_on		 = 0b1,
} t_GPIO_DATAOUTSET_PIN11_enum;

typedef enum { 
 	GPIO_DATAOUTSET_PIN12_off		 = 0b0,
	GPIO_DATAOUTSET_PIN12_on		 = 0b1,
} t_GPIO_DATAOUTSET_PIN12_enum;

typedef enum { 
 	GPIO_DATAOUTSET_PIN13_off		 = 0b0,
	GPIO_DATAOUTSET_PIN13_on		 = 0b1,
} t_GPIO_DATAOUTSET_PIN13_enum;

typedef enum { 
 	GPIO_DATAOUTSET_PIN14_off		 = 0b0,
	GPIO_DATAOUTSET_PIN14_on		 = 0b1,
} t_GPIO_DATAOUTSET_PIN14_enum;

typedef enum { 
 	GPIO_DATAOUTSET_PIN15_off		 = 0b0,
	GPIO_DATAOUTSET_PIN15_on		 = 0b1,
} t_GPIO_DATAOUTSET_PIN15_enum;




#define GPIO_DATAOUTCLR	0x2800000c		 /*--  --*/

#define GPIO_DATAOUTCLR_VAL_pos	 	 	 	0	 	 /*--  --*/


#define GPIO_DATAOUTCLR_VAL_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	GPIO_DATAOUTCLR_VAL	 	:16;
uint32_t 	 	 	 	:16;
} t_GPIO_DATAOUTCLR_bits;





#define GPIO_DATAOUTTGL	0x28000010		 /*--  --*/

#define GPIO_DATAOUTTGL_VAL_pos	 	 	 	0	 	 /*--  --*/


#define GPIO_DATAOUTTGL_VAL_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	GPIO_DATAOUTTGL_VAL	 	:16;
uint32_t 	 	 	 	:16;
} t_GPIO_DATAOUTTGL_bits;





#define GPIO_INMODE	0x2800001c		 /*--  --*/

#define GPIO_INMODE_PIN0_pos	 	 	 	0	 	 /*--  --*/
#define GPIO_INMODE_PIN1_pos	 	 	 	2	 	 /*--  --*/
#define GPIO_INMODE_PIN2_pos	 	 	 	4	 	 /*--  --*/
#define GPIO_INMODE_PIN3_pos	 	 	 	6	 	 /*--  --*/
#define GPIO_INMODE_PIN4_pos	 	 	 	8	 	 /*--  --*/
#define GPIO_INMODE_PIN5_pos	 	 	 	10	 	 /*--  --*/
#define GPIO_INMODE_PIN6_pos	 	 	 	12	 	 /*--  --*/
#define GPIO_INMODE_PIN7_pos	 	 	 	14	 	 /*--  --*/
#define GPIO_INMODE_PIN8_pos	 	 	 	16	 	 /*--  --*/
#define GPIO_INMODE_PIN9_pos	 	 	 	18	 	 /*--  --*/
#define GPIO_INMODE_PIN10_pos	 	 	 	20	 	 /*--  --*/
#define GPIO_INMODE_PIN11_pos	 	 	 	22	 	 /*--  --*/
#define GPIO_INMODE_PIN12_pos	 	 	 	24	 	 /*--  --*/
#define GPIO_INMODE_PIN13_pos	 	 	 	26	 	 /*--  --*/
#define GPIO_INMODE_PIN14_pos	 	 	 	28	 	 /*--  --*/
#define GPIO_INMODE_PIN15_pos	 	 	 	30	 	 /*--  --*/


#define GPIO_INMODE_PIN0_msk	 	 	 	0x00000003UL
#define GPIO_INMODE_PIN1_msk	 	 	 	0x0000000cUL
#define GPIO_INMODE_PIN2_msk	 	 	 	0x00000030UL
#define GPIO_INMODE_PIN3_msk	 	 	 	0x000000c0UL
#define GPIO_INMODE_PIN4_msk	 	 	 	0x00000300UL
#define GPIO_INMODE_PIN5_msk	 	 	 	0x00000c00UL
#define GPIO_INMODE_PIN6_msk	 	 	 	0x00003000UL
#define GPIO_INMODE_PIN7_msk	 	 	 	0x0000c000UL
#define GPIO_INMODE_PIN8_msk	 	 	 	0x00030000UL
#define GPIO_INMODE_PIN9_msk	 	 	 	0x000c0000UL
#define GPIO_INMODE_PIN10_msk	 	 	 	0x00300000UL
#define GPIO_INMODE_PIN11_msk	 	 	 	0x00c00000UL
#define GPIO_INMODE_PIN12_msk	 	 	 	0x03000000UL
#define GPIO_INMODE_PIN13_msk	 	 	 	0x0c000000UL
#define GPIO_INMODE_PIN14_msk	 	 	 	0x30000000UL
#define GPIO_INMODE_PIN15_msk	 	 	 	0xc0000000UL


typedef struct {
uint32_t 	 	GPIO_INMODE_PIN0	 	:2;
uint32_t 	 	GPIO_INMODE_PIN1	 	:2;
uint32_t 	 	GPIO_INMODE_PIN2	 	:2;
uint32_t 	 	GPIO_INMODE_PIN3	 	:2;
uint32_t 	 	GPIO_INMODE_PIN4	 	:2;
uint32_t 	 	GPIO_INMODE_PIN5	 	:2;
uint32_t 	 	GPIO_INMODE_PIN6	 	:2;
uint32_t 	 	GPIO_INMODE_PIN7	 	:2;
uint32_t 	 	GPIO_INMODE_PIN8	 	:2;
uint32_t 	 	GPIO_INMODE_PIN9	 	:2;
uint32_t 	 	GPIO_INMODE_PIN10	 	:2;
uint32_t 	 	GPIO_INMODE_PIN11	 	:2;
uint32_t 	 	GPIO_INMODE_PIN12	 	:2;
uint32_t 	 	GPIO_INMODE_PIN13	 	:2;
uint32_t 	 	GPIO_INMODE_PIN14	 	:2;
uint32_t 	 	GPIO_INMODE_PIN15	 	:2;
} t_GPIO_INMODE_bits;


typedef enum { 
 	GPIO_INMODE_PIN0_schmitt		 = 0b00,
	GPIO_INMODE_PIN0_disable		 = 0b11,
} t_GPIO_INMODE_PIN0_enum;

typedef enum { 
 	GPIO_INMODE_PIN1_schmitt		 = 0b00,
	GPIO_INMODE_PIN1_disable		 = 0b11,
} t_GPIO_INMODE_PIN1_enum;

typedef enum { 
 	GPIO_INMODE_PIN2_schmitt		 = 0b00,
	GPIO_INMODE_PIN2_disable		 = 0b11,
} t_GPIO_INMODE_PIN2_enum;

typedef enum { 
 	GPIO_INMODE_PIN3_schmitt		 = 0b00,
	GPIO_INMODE_PIN3_disable		 = 0b11,
} t_GPIO_INMODE_PIN3_enum;

typedef enum { 
 	GPIO_INMODE_PIN4_schmitt		 = 0b00,
	GPIO_INMODE_PIN4_disable		 = 0b11,
} t_GPIO_INMODE_PIN4_enum;

typedef enum { 
 	GPIO_INMODE_PIN5_schmitt		 = 0b00,
	GPIO_INMODE_PIN5_disable		 = 0b11,
} t_GPIO_INMODE_PIN5_enum;

typedef enum { 
 	GPIO_INMODE_PIN6_schmitt		 = 0b00,
	GPIO_INMODE_PIN6_disable		 = 0b11,
} t_GPIO_INMODE_PIN6_enum;

typedef enum { 
 	GPIO_INMODE_PIN7_schmitt		 = 0b00,
	GPIO_INMODE_PIN7_disable		 = 0b11,
} t_GPIO_INMODE_PIN7_enum;

typedef enum { 
 	GPIO_INMODE_PIN8_schmitt		 = 0b00,
	GPIO_INMODE_PIN8_disable		 = 0b11,
} t_GPIO_INMODE_PIN8_enum;

typedef enum { 
 	GPIO_INMODE_PIN9_schmitt		 = 0b00,
	GPIO_INMODE_PIN9_disable		 = 0b11,
} t_GPIO_INMODE_PIN9_enum;

typedef enum { 
 	GPIO_INMODE_PIN10_schmitt		 = 0b00,
	GPIO_INMODE_PIN10_disable		 = 0b11,
} t_GPIO_INMODE_PIN10_enum;

typedef enum { 
 	GPIO_INMODE_PIN11_schmitt		 = 0b00,
	GPIO_INMODE_PIN11_disable		 = 0b11,
} t_GPIO_INMODE_PIN11_enum;

typedef enum { 
 	GPIO_INMODE_PIN12_schmitt		 = 0b00,
	GPIO_INMODE_PIN12_disable		 = 0b11,
} t_GPIO_INMODE_PIN12_enum;

typedef enum { 
 	GPIO_INMODE_PIN13_schmitt		 = 0b00,
	GPIO_INMODE_PIN13_disable		 = 0b11,
} t_GPIO_INMODE_PIN13_enum;

typedef enum { 
 	GPIO_INMODE_PIN14_schmitt		 = 0b00,
	GPIO_INMODE_PIN14_disable		 = 0b11,
} t_GPIO_INMODE_PIN14_enum;

typedef enum { 
 	GPIO_INMODE_PIN15_schmitt		 = 0b00,
	GPIO_INMODE_PIN15_disable		 = 0b11,
} t_GPIO_INMODE_PIN15_enum;




#define GPIO_PULLMODE	0x28000020		 /*--  --*/

#define GPIO_PULLMODE_PIN0_pos	 	 	 	0	 	 /*--  --*/
#define GPIO_PULLMODE_PIN1_pos	 	 	 	1	 	 /*--  --*/
#define GPIO_PULLMODE_PIN2_pos	 	 	 	2	 	 /*--  --*/
#define GPIO_PULLMODE_PIN3_pos	 	 	 	3	 	 /*--  --*/
#define GPIO_PULLMODE_PIN4_pos	 	 	 	4	 	 /*--  --*/
#define GPIO_PULLMODE_PIN5_pos	 	 	 	5	 	 /*--  --*/
#define GPIO_PULLMODE_PIN6_pos	 	 	 	6	 	 /*--  --*/
#define GPIO_PULLMODE_PIN7_pos	 	 	 	7	 	 /*--  --*/
#define GPIO_PULLMODE_PIN8_pos	 	 	 	8	 	 /*--  --*/
#define GPIO_PULLMODE_PIN9_pos	 	 	 	9	 	 /*--  --*/
#define GPIO_PULLMODE_PIN10_pos	 	 	 	10	 	 /*--  --*/
#define GPIO_GPIO_PULLMODE_PIN11_pos	 	 	 	11	 	 /*--  --*/
#define GPIO_PULLMODE_PIN12_pos	 	 	 	12	 	 /*--  --*/
#define GPIO_PULLMODE_PIN13_pos	 	 	 	13	 	 /*--  --*/
#define GPIO_PULLMODE_PIN14_pos	 	 	 	14	 	 /*--  --*/
#define GPIO_PULLMODE_PIN15_pos	 	 	 	15	 	 /*--  --*/


#define GPIO_PULLMODE_PIN0_msk	 	 	 	0x00000001UL
#define GPIO_PULLMODE_PIN1_msk	 	 	 	0x00000002UL
#define GPIO_PULLMODE_PIN2_msk	 	 	 	0x00000004UL
#define GPIO_PULLMODE_PIN3_msk	 	 	 	0x00000008UL
#define GPIO_PULLMODE_PIN4_msk	 	 	 	0x00000010UL
#define GPIO_PULLMODE_PIN5_msk	 	 	 	0x00000020UL
#define GPIO_PULLMODE_PIN6_msk	 	 	 	0x00000040UL
#define GPIO_PULLMODE_PIN7_msk	 	 	 	0x00000080UL
#define GPIO_PULLMODE_PIN8_msk	 	 	 	0x00000100UL
#define GPIO_PULLMODE_PIN9_msk	 	 	 	0x00000200UL
#define GPIO_PULLMODE_PIN10_msk	 	 	 	0x00000400UL
#define GPIO_GPIO_PULLMODE_PIN11_msk	 	 	 	0x00000800UL
#define GPIO_PULLMODE_PIN12_msk	 	 	 	0x00001000UL
#define GPIO_PULLMODE_PIN13_msk	 	 	 	0x00002000UL
#define GPIO_PULLMODE_PIN14_msk	 	 	 	0x00004000UL
#define GPIO_PULLMODE_PIN15_msk	 	 	 	0x00008000UL


typedef struct {
uint32_t 	 	GPIO_PULLMODE_PIN0	 	:1;
uint32_t 	 	GPIO_PULLMODE_PIN1	 	:1;
uint32_t 	 	GPIO_PULLMODE_PIN2	 	:1;
uint32_t 	 	GPIO_PULLMODE_PIN3	 	:1;
uint32_t 	 	GPIO_PULLMODE_PIN4	 	:1;
uint32_t 	 	GPIO_PULLMODE_PIN5	 	:1;
uint32_t 	 	GPIO_PULLMODE_PIN6	 	:1;
uint32_t 	 	GPIO_PULLMODE_PIN7	 	:1;
uint32_t 	 	GPIO_PULLMODE_PIN8	 	:1;
uint32_t 	 	GPIO_PULLMODE_PIN9	 	:1;
uint32_t 	 	GPIO_PULLMODE_PIN10	 	:1;
uint32_t 	 	GPIO_GPIO_PULLMODE_PIN11	 	:1;
uint32_t 	 	GPIO_PULLMODE_PIN12	 	:1;
uint32_t 	 	GPIO_PULLMODE_PIN13	 	:1;
uint32_t 	 	GPIO_PULLMODE_PIN14	 	:1;
uint32_t 	 	GPIO_PULLMODE_PIN15	 	:1;
uint32_t 	 	 	 	:16;
} t_GPIO_PULLMODE_bits;


typedef enum { 
 	GPIO_PULLMODE_PIN0_disable		 = 0b0,
	GPIO_PULLMODE_PIN0_pu		 = 0b1,
} t_GPIO_PULLMODE_PIN0_enum;

typedef enum { 
 	GPIO_PULLMODE_PIN1_disable		 = 0b0,
	GPIO_PULLMODE_PIN1_pu		 = 0b1,
} t_GPIO_PULLMODE_PIN1_enum;

typedef enum { 
 	GPIO_PULLMODE_PIN2_disable		 = 0b0,
	GPIO_PULLMODE_PIN2_pu		 = 0b1,
} t_GPIO_PULLMODE_PIN2_enum;

typedef enum { 
 	GPIO_PULLMODE_PIN3_disable		 = 0b0,
	GPIO_PULLMODE_PIN3_pu		 = 0b1,
} t_GPIO_PULLMODE_PIN3_enum;

typedef enum { 
 	GPIO_PULLMODE_PIN4_disable		 = 0b0,
	GPIO_PULLMODE_PIN4_pu		 = 0b1,
} t_GPIO_PULLMODE_PIN4_enum;

typedef enum { 
 	GPIO_PULLMODE_PIN5_disable		 = 0b0,
	GPIO_PULLMODE_PIN5_pu		 = 0b1,
} t_GPIO_PULLMODE_PIN5_enum;

typedef enum { 
 	GPIO_PULLMODE_PIN6_disable		 = 0b0,
	GPIO_PULLMODE_PIN6_pu		 = 0b1,
} t_GPIO_PULLMODE_PIN6_enum;

typedef enum { 
 	GPIO_PULLMODE_PIN7_disable		 = 0b0,
	GPIO_PULLMODE_PIN7_pu		 = 0b1,
} t_GPIO_PULLMODE_PIN7_enum;

typedef enum { 
 	GPIO_PULLMODE_PIN8_disable		 = 0b0,
	GPIO_PULLMODE_PIN8_pu		 = 0b1,
} t_GPIO_PULLMODE_PIN8_enum;

typedef enum { 
 	GPIO_PULLMODE_PIN9_disable		 = 0b0,
	GPIO_PULLMODE_PIN9_pu		 = 0b1,
} t_GPIO_PULLMODE_PIN9_enum;

typedef enum { 
 	GPIO_PULLMODE_PIN10_disable		 = 0b0,
	GPIO_PULLMODE_PIN10_pu		 = 0b1,
} t_GPIO_PULLMODE_PIN10_enum;

typedef enum { 
 	GPIO_GPIO_PULLMODE_PIN11_disable		 = 0b0,
	GPIO_GPIO_PULLMODE_PIN11_pu		 = 0b1,
} t_GPIO_GPIO_PULLMODE_PIN11_enum;

typedef enum { 
 	GPIO_PULLMODE_PIN12_disable		 = 0b0,
	GPIO_PULLMODE_PIN12_pu		 = 0b1,
} t_GPIO_PULLMODE_PIN12_enum;

typedef enum { 
 	GPIO_PULLMODE_PIN13_disable		 = 0b0,
	GPIO_PULLMODE_PIN13_pu		 = 0b1,
} t_GPIO_PULLMODE_PIN13_enum;

typedef enum { 
 	GPIO_PULLMODE_PIN14_disable		 = 0b0,
	GPIO_PULLMODE_PIN14_pu		 = 0b1,
} t_GPIO_PULLMODE_PIN14_enum;

typedef enum { 
 	GPIO_PULLMODE_PIN15_disable		 = 0b0,
	GPIO_PULLMODE_PIN15_pu		 = 0b1,
} t_GPIO_PULLMODE_PIN15_enum;




#define GPIO_OUTMODE	0x28000024		 /*--  --*/

#define GPIO_OUTMODE_PIN0_pos	 	 	 	0	 	 /*--  --*/
#define GPIO_OUTMODE_PIN1_pos	 	 	 	2	 	 /*--  --*/
#define GPIO_OUTMODE_PIN2_pos	 	 	 	4	 	 /*--  --*/
#define GPIO_OUTMODE_PIN3_pos	 	 	 	6	 	 /*--  --*/
#define GPIO_OUTMODE_PIN4_pos	 	 	 	8	 	 /*--  --*/
#define GPIO_OUTMODE_PIN5_pos	 	 	 	10	 	 /*--  --*/
#define GPIO_OUTMODE_PIN6_pos	 	 	 	12	 	 /*--  --*/
#define GPIO_OUTMODE_PIN7_pos	 	 	 	14	 	 /*--  --*/
#define GPIO_OUTMODE_PIN8_pos	 	 	 	16	 	 /*--  --*/
#define GPIO_OUTMODE_PIN9_pos	 	 	 	18	 	 /*--  --*/
#define GPIO_OUTMODE_PIN10_pos	 	 	 	20	 	 /*--  --*/
#define GPIO_OUTMODE_PIN11_pos	 	 	 	22	 	 /*--  --*/
#define GPIO_OUTMODE_PIN12_pos	 	 	 	24	 	 /*--  --*/
#define GPIO_OUTMODE_PIN13_pos	 	 	 	26	 	 /*--  --*/
#define GPIO_OUTMODE_PIN14_pos	 	 	 	28	 	 /*--  --*/
#define GPIO_OUTMODE_PIN15_pos	 	 	 	30	 	 /*--  --*/


#define GPIO_OUTMODE_PIN0_msk	 	 	 	0x00000003UL
#define GPIO_OUTMODE_PIN1_msk	 	 	 	0x0000000cUL
#define GPIO_OUTMODE_PIN2_msk	 	 	 	0x00000030UL
#define GPIO_OUTMODE_PIN3_msk	 	 	 	0x000000c0UL
#define GPIO_OUTMODE_PIN4_msk	 	 	 	0x00000300UL
#define GPIO_OUTMODE_PIN5_msk	 	 	 	0x00000c00UL
#define GPIO_OUTMODE_PIN6_msk	 	 	 	0x00003000UL
#define GPIO_OUTMODE_PIN7_msk	 	 	 	0x0000c000UL
#define GPIO_OUTMODE_PIN8_msk	 	 	 	0x00030000UL
#define GPIO_OUTMODE_PIN9_msk	 	 	 	0x000c0000UL
#define GPIO_OUTMODE_PIN10_msk	 	 	 	0x00300000UL
#define GPIO_OUTMODE_PIN11_msk	 	 	 	0x00c00000UL
#define GPIO_OUTMODE_PIN12_msk	 	 	 	0x03000000UL
#define GPIO_OUTMODE_PIN13_msk	 	 	 	0x0c000000UL
#define GPIO_OUTMODE_PIN14_msk	 	 	 	0x30000000UL
#define GPIO_OUTMODE_PIN15_msk	 	 	 	0xc0000000UL


typedef struct {
uint32_t 	 	GPIO_OUTMODE_PIN0	 	:2;
uint32_t 	 	GPIO_OUTMODE_PIN1	 	:2;
uint32_t 	 	GPIO_OUTMODE_PIN2	 	:2;
uint32_t 	 	GPIO_OUTMODE_PIN3	 	:2;
uint32_t 	 	GPIO_OUTMODE_PIN4	 	:2;
uint32_t 	 	GPIO_OUTMODE_PIN5	 	:2;
uint32_t 	 	GPIO_OUTMODE_PIN6	 	:2;
uint32_t 	 	GPIO_OUTMODE_PIN7	 	:2;
uint32_t 	 	GPIO_OUTMODE_PIN8	 	:2;
uint32_t 	 	GPIO_OUTMODE_PIN9	 	:2;
uint32_t 	 	GPIO_OUTMODE_PIN10	 	:2;
uint32_t 	 	GPIO_OUTMODE_PIN11	 	:2;
uint32_t 	 	GPIO_OUTMODE_PIN12	 	:2;
uint32_t 	 	GPIO_OUTMODE_PIN13	 	:2;
uint32_t 	 	GPIO_OUTMODE_PIN14	 	:2;
uint32_t 	 	GPIO_OUTMODE_PIN15	 	:2;
} t_GPIO_OUTMODE_bits;


typedef enum { 
 	GPIO_OUTMODE_PIN0_pp		 = 0b00,
	GPIO_OUTMODE_PIN0_od		 = 0b01,
	GPIO_OUTMODE_PIN0_os		 = 0b10,
} t_GPIO_OUTMODE_PIN0_enum;

typedef enum { 
 	GPIO_OUTMODE_PIN1_pp		 = 0b00,
	GPIO_OUTMODE_PIN1_od		 = 0b01,
	GPIO_OUTMODE_PIN1_os		 = 0b10,
} t_GPIO_OUTMODE_PIN1_enum;

typedef enum { 
 	GPIO_OUTMODE_PIN2_pp		 = 0b00,
	GPIO_OUTMODE_PIN2_od		 = 0b01,
	GPIO_OUTMODE_PIN2_os		 = 0b10,
} t_GPIO_OUTMODE_PIN2_enum;

typedef enum { 
 	GPIO_OUTMODE_PIN3_pp		 = 0b00,
	GPIO_OUTMODE_PIN3_od		 = 0b01,
	GPIO_OUTMODE_PIN3_os		 = 0b10,
} t_GPIO_OUTMODE_PIN3_enum;

typedef enum { 
 	GPIO_OUTMODE_PIN4_pp		 = 0b00,
	GPIO_OUTMODE_PIN4_od		 = 0b01,
	GPIO_OUTMODE_PIN4_os		 = 0b10,
} t_GPIO_OUTMODE_PIN4_enum;

typedef enum { 
 	GPIO_OUTMODE_PIN5_pp		 = 0b00,
	GPIO_OUTMODE_PIN5_od		 = 0b01,
	GPIO_OUTMODE_PIN5_os		 = 0b10,
} t_GPIO_OUTMODE_PIN5_enum;

typedef enum { 
 	GPIO_OUTMODE_PIN6_pp		 = 0b00,
	GPIO_OUTMODE_PIN6_od		 = 0b01,
	GPIO_OUTMODE_PIN6_os		 = 0b10,
} t_GPIO_OUTMODE_PIN6_enum;

typedef enum { 
 	GPIO_OUTMODE_PIN7_pp		 = 0b00,
	GPIO_OUTMODE_PIN7_od		 = 0b01,
	GPIO_OUTMODE_PIN7_os		 = 0b10,
} t_GPIO_OUTMODE_PIN7_enum;

typedef enum { 
 	GPIO_OUTMODE_PIN8_pp		 = 0b00,
	GPIO_OUTMODE_PIN8_od		 = 0b01,
	GPIO_OUTMODE_PIN8_os		 = 0b10,
} t_GPIO_OUTMODE_PIN8_enum;

typedef enum { 
 	GPIO_OUTMODE_PIN9_pp		 = 0b00,
	GPIO_OUTMODE_PIN9_od		 = 0b01,
	GPIO_OUTMODE_PIN9_os		 = 0b10,
} t_GPIO_OUTMODE_PIN9_enum;

typedef enum { 
 	GPIO_OUTMODE_PIN10_pp		 = 0b00,
	GPIO_OUTMODE_PIN10_od		 = 0b01,
	GPIO_OUTMODE_PIN10_os		 = 0b10,
} t_GPIO_OUTMODE_PIN10_enum;

typedef enum { 
 	GPIO_OUTMODE_PIN11_pp		 = 0b00,
	GPIO_OUTMODE_PIN11_od		 = 0b01,
	GPIO_OUTMODE_PIN11_os		 = 0b10,
} t_GPIO_OUTMODE_PIN11_enum;

typedef enum { 
 	GPIO_OUTMODE_PIN12_pp		 = 0b00,
	GPIO_OUTMODE_PIN12_od		 = 0b01,
	GPIO_OUTMODE_PIN12_os		 = 0b10,
} t_GPIO_OUTMODE_PIN12_enum;

typedef enum { 
 	GPIO_OUTMODE_PIN13_pp		 = 0b00,
	GPIO_OUTMODE_PIN13_od		 = 0b01,
	GPIO_OUTMODE_PIN13_os		 = 0b10,
} t_GPIO_OUTMODE_PIN13_enum;

typedef enum { 
 	GPIO_OUTMODE_PIN14_pp		 = 0b00,
	GPIO_OUTMODE_PIN14_od		 = 0b01,
	GPIO_OUTMODE_PIN14_os		 = 0b10,
} t_GPIO_OUTMODE_PIN14_enum;

typedef enum { 
 	GPIO_OUTMODE_PIN15_pp		 = 0b00,
	GPIO_OUTMODE_PIN15_od		 = 0b01,
	GPIO_OUTMODE_PIN15_os		 = 0b10,
} t_GPIO_OUTMODE_PIN15_enum;




#define GPIO_OUTENSET	0x2800002c		 /*--  --*/

#define GPIO_OUTENSET_PIN0_pos	 	 	 	0	 	 /*--  --*/
#define GPIO_OUTENSET_PIN1_pos	 	 	 	1	 	 /*--  --*/
#define GPIO_OUTENSET_PIN2_pos	 	 	 	2	 	 /*--  --*/
#define GPIO_OUTENSET_PIN3_pos	 	 	 	3	 	 /*--  --*/
#define GPIO_OUTENSET_PIN4_pos	 	 	 	4	 	 /*--  --*/
#define GPIO_OUTENSET_PIN5_pos	 	 	 	5	 	 /*--  --*/
#define GPIO_OUTENSET_PIN6_pos	 	 	 	6	 	 /*--  --*/
#define GPIO_OUTENSET_PIN7_pos	 	 	 	7	 	 /*--  --*/
#define GPIO_OUTENSET_PIN8_pos	 	 	 	8	 	 /*--  --*/
#define GPIO_OUTENSET_PIN9_pos	 	 	 	9	 	 /*--  --*/
#define GPIO_OUTENSET_PIN10_pos	 	 	 	10	 	 /*--  --*/
#define GPIO_OUTENSET_PIN11_pos	 	 	 	11	 	 /*--  --*/
#define GPIO_OUTENSET_PIN12_pos	 	 	 	12	 	 /*--  --*/
#define GPIO_OUTENSET_PIN13_pos	 	 	 	13	 	 /*--  --*/
#define GPIO_OUTENSET_PIN14_pos	 	 	 	14	 	 /*--  --*/
#define GPIO_OUTENSET_PIN15_pos	 	 	 	15	 	 /*--  --*/


#define GPIO_OUTENSET_PIN0_msk	 	 	 	0x00000001UL
#define GPIO_OUTENSET_PIN1_msk	 	 	 	0x00000002UL
#define GPIO_OUTENSET_PIN2_msk	 	 	 	0x00000004UL
#define GPIO_OUTENSET_PIN3_msk	 	 	 	0x00000008UL
#define GPIO_OUTENSET_PIN4_msk	 	 	 	0x00000010UL
#define GPIO_OUTENSET_PIN5_msk	 	 	 	0x00000020UL
#define GPIO_OUTENSET_PIN6_msk	 	 	 	0x00000040UL
#define GPIO_OUTENSET_PIN7_msk	 	 	 	0x00000080UL
#define GPIO_OUTENSET_PIN8_msk	 	 	 	0x00000100UL
#define GPIO_OUTENSET_PIN9_msk	 	 	 	0x00000200UL
#define GPIO_OUTENSET_PIN10_msk	 	 	 	0x00000400UL
#define GPIO_OUTENSET_PIN11_msk	 	 	 	0x00000800UL
#define GPIO_OUTENSET_PIN12_msk	 	 	 	0x00001000UL
#define GPIO_OUTENSET_PIN13_msk	 	 	 	0x00002000UL
#define GPIO_OUTENSET_PIN14_msk	 	 	 	0x00004000UL
#define GPIO_OUTENSET_PIN15_msk	 	 	 	0x00008000UL


typedef struct {
uint32_t 	 	GPIO_OUTENSET_PIN0	 	:1;
uint32_t 	 	GPIO_OUTENSET_PIN1	 	:1;
uint32_t 	 	GPIO_OUTENSET_PIN2	 	:1;
uint32_t 	 	GPIO_OUTENSET_PIN3	 	:1;
uint32_t 	 	GPIO_OUTENSET_PIN4	 	:1;
uint32_t 	 	GPIO_OUTENSET_PIN5	 	:1;
uint32_t 	 	GPIO_OUTENSET_PIN6	 	:1;
uint32_t 	 	GPIO_OUTENSET_PIN7	 	:1;
uint32_t 	 	GPIO_OUTENSET_PIN8	 	:1;
uint32_t 	 	GPIO_OUTENSET_PIN9	 	:1;
uint32_t 	 	GPIO_OUTENSET_PIN10	 	:1;
uint32_t 	 	GPIO_OUTENSET_PIN11	 	:1;
uint32_t 	 	GPIO_OUTENSET_PIN12	 	:1;
uint32_t 	 	GPIO_OUTENSET_PIN13	 	:1;
uint32_t 	 	GPIO_OUTENSET_PIN14	 	:1;
uint32_t 	 	GPIO_OUTENSET_PIN15	 	:1;
uint32_t 	 	 	 	:16;
} t_GPIO_OUTENSET_bits;


typedef enum { 
 	GPIO_OUTENSET_PIN0_off		 = 0b0,
	GPIO_OUTENSET_PIN0_on		 = 0b1,
} t_GPIO_OUTENSET_PIN0_enum;

typedef enum { 
 	GPIO_OUTENSET_PIN1_off		 = 0b0,
	GPIO_OUTENSET_PIN1_on		 = 0b1,
} t_GPIO_OUTENSET_PIN1_enum;

typedef enum { 
 	GPIO_OUTENSET_PIN2_off		 = 0b0,
	GPIO_OUTENSET_PIN2_on		 = 0b1,
} t_GPIO_OUTENSET_PIN2_enum;

typedef enum { 
 	GPIO_OUTENSET_PIN3_off		 = 0b0,
	GPIO_OUTENSET_PIN3_on		 = 0b1,
} t_GPIO_OUTENSET_PIN3_enum;

typedef enum { 
 	GPIO_OUTENSET_PIN4_off		 = 0b0,
	GPIO_OUTENSET_PIN4_on		 = 0b1,
} t_GPIO_OUTENSET_PIN4_enum;

typedef enum { 
 	GPIO_OUTENSET_PIN5_off		 = 0b0,
	GPIO_OUTENSET_PIN5_on		 = 0b1,
} t_GPIO_OUTENSET_PIN5_enum;

typedef enum { 
 	GPIO_OUTENSET_PIN6_off		 = 0b0,
	GPIO_OUTENSET_PIN6_on		 = 0b1,
} t_GPIO_OUTENSET_PIN6_enum;

typedef enum { 
 	GPIO_OUTENSET_PIN7_off		 = 0b0,
	GPIO_OUTENSET_PIN7_on		 = 0b1,
} t_GPIO_OUTENSET_PIN7_enum;

typedef enum { 
 	GPIO_OUTENSET_PIN8_off		 = 0b0,
	GPIO_OUTENSET_PIN8_on		 = 0b1,
} t_GPIO_OUTENSET_PIN8_enum;

typedef enum { 
 	GPIO_OUTENSET_PIN9_off		 = 0b0,
	GPIO_OUTENSET_PIN9_on		 = 0b1,
} t_GPIO_OUTENSET_PIN9_enum;

typedef enum { 
 	GPIO_OUTENSET_PIN10_off		 = 0b0,
	GPIO_OUTENSET_PIN10_on		 = 0b1,
} t_GPIO_OUTENSET_PIN10_enum;

typedef enum { 
 	GPIO_OUTENSET_PIN11_off		 = 0b0,
	GPIO_OUTENSET_PIN11_on		 = 0b1,
} t_GPIO_OUTENSET_PIN11_enum;

typedef enum { 
 	GPIO_OUTENSET_PIN12_off		 = 0b0,
	GPIO_OUTENSET_PIN12_on		 = 0b1,
} t_GPIO_OUTENSET_PIN12_enum;

typedef enum { 
 	GPIO_OUTENSET_PIN13_off		 = 0b0,
	GPIO_OUTENSET_PIN13_on		 = 0b1,
} t_GPIO_OUTENSET_PIN13_enum;

typedef enum { 
 	GPIO_OUTENSET_PIN14_off		 = 0b0,
	GPIO_OUTENSET_PIN14_on		 = 0b1,
} t_GPIO_OUTENSET_PIN14_enum;

typedef enum { 
 	GPIO_OUTENSET_PIN15_off		 = 0b0,
	GPIO_OUTENSET_PIN15_on		 = 0b1,
} t_GPIO_OUTENSET_PIN15_enum;




#define GPIO_OUTENCLR	0x28000030		 /*--  --*/

#define GPIO_OUTENCLR_VAL_pos	 	 	 	0	 	 /*--  --*/


#define GPIO_OUTENCLR_VAL_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	GPIO_OUTENCLR_VAL	 	:16;
uint32_t 	 	 	 	:16;
} t_GPIO_OUTENCLR_bits;





#define GPIO_ALTFUNCSET	0x28000034		 /*--  --*/

#define GPIO_ALTFUNCSET_PIN0_pos	 	 	 	0	 	 /*--  --*/
#define GPIO_ALTFUNCSET_PIN1_pos	 	 	 	1	 	 /*--  --*/
#define GPIO_ALTFUNCSET_PIN2_pos	 	 	 	2	 	 /*--  --*/
#define GPIO_ALTFUNCSET_PIN3_pos	 	 	 	3	 	 /*--  --*/
#define GPIO_ALTFUNCSET_PIN4_pos	 	 	 	4	 	 /*--  --*/
#define GPIO_ALTFUNCSET_PIN5_pos	 	 	 	5	 	 /*--  --*/
#define GPIO_ALTFUNCSET_PIN6_pos	 	 	 	6	 	 /*--  --*/
#define GPIO_ALTFUNCSET_PIN7_pos	 	 	 	7	 	 /*--  --*/
#define GPIO_ALTFUNCSET_PIN8_pos	 	 	 	8	 	 /*--  --*/
#define GPIO_ALTFUNCSET_PIN9_pos	 	 	 	9	 	 /*--  --*/
#define GPIO_ALTFUNCSET_PIN10_pos	 	 	 	10	 	 /*--  --*/
#define GPIO_ALTFUNCSET_PIN11_pos	 	 	 	11	 	 /*--  --*/
#define GPIO_ALTFUNCSET_PIN12_pos	 	 	 	12	 	 /*--  --*/
#define GPIO_ALTFUNCSET_PIN13_pos	 	 	 	13	 	 /*--  --*/
#define GPIO_ALTFUNCSET_PIN14_pos	 	 	 	14	 	 /*--  --*/
#define GPIO_ALTFUNCSET_PIN15_pos	 	 	 	15	 	 /*--  --*/


#define GPIO_ALTFUNCSET_PIN0_msk	 	 	 	0x00000001UL
#define GPIO_ALTFUNCSET_PIN1_msk	 	 	 	0x00000002UL
#define GPIO_ALTFUNCSET_PIN2_msk	 	 	 	0x00000004UL
#define GPIO_ALTFUNCSET_PIN3_msk	 	 	 	0x00000008UL
#define GPIO_ALTFUNCSET_PIN4_msk	 	 	 	0x00000010UL
#define GPIO_ALTFUNCSET_PIN5_msk	 	 	 	0x00000020UL
#define GPIO_ALTFUNCSET_PIN6_msk	 	 	 	0x00000040UL
#define GPIO_ALTFUNCSET_PIN7_msk	 	 	 	0x00000080UL
#define GPIO_ALTFUNCSET_PIN8_msk	 	 	 	0x00000100UL
#define GPIO_ALTFUNCSET_PIN9_msk	 	 	 	0x00000200UL
#define GPIO_ALTFUNCSET_PIN10_msk	 	 	 	0x00000400UL
#define GPIO_ALTFUNCSET_PIN11_msk	 	 	 	0x00000800UL
#define GPIO_ALTFUNCSET_PIN12_msk	 	 	 	0x00001000UL
#define GPIO_ALTFUNCSET_PIN13_msk	 	 	 	0x00002000UL
#define GPIO_ALTFUNCSET_PIN14_msk	 	 	 	0x00004000UL
#define GPIO_ALTFUNCSET_PIN15_msk	 	 	 	0x00008000UL


typedef struct {
uint32_t 	 	GPIO_ALTFUNCSET_PIN0	 	:1;
uint32_t 	 	GPIO_ALTFUNCSET_PIN1	 	:1;
uint32_t 	 	GPIO_ALTFUNCSET_PIN2	 	:1;
uint32_t 	 	GPIO_ALTFUNCSET_PIN3	 	:1;
uint32_t 	 	GPIO_ALTFUNCSET_PIN4	 	:1;
uint32_t 	 	GPIO_ALTFUNCSET_PIN5	 	:1;
uint32_t 	 	GPIO_ALTFUNCSET_PIN6	 	:1;
uint32_t 	 	GPIO_ALTFUNCSET_PIN7	 	:1;
uint32_t 	 	GPIO_ALTFUNCSET_PIN8	 	:1;
uint32_t 	 	GPIO_ALTFUNCSET_PIN9	 	:1;
uint32_t 	 	GPIO_ALTFUNCSET_PIN10	 	:1;
uint32_t 	 	GPIO_ALTFUNCSET_PIN11	 	:1;
uint32_t 	 	GPIO_ALTFUNCSET_PIN12	 	:1;
uint32_t 	 	GPIO_ALTFUNCSET_PIN13	 	:1;
uint32_t 	 	GPIO_ALTFUNCSET_PIN14	 	:1;
uint32_t 	 	GPIO_ALTFUNCSET_PIN15	 	:1;
uint32_t 	 	 	 	:16;
} t_GPIO_ALTFUNCSET_bits;


typedef enum { 
 	GPIO_ALTFUNCSET_PIN0_off		 = 0b0,
	GPIO_ALTFUNCSET_PIN0_on		 = 0b1,
} t_GPIO_ALTFUNCSET_PIN0_enum;

typedef enum { 
 	GPIO_ALTFUNCSET_PIN1_off		 = 0b0,
	GPIO_ALTFUNCSET_PIN1_on		 = 0b1,
} t_GPIO_ALTFUNCSET_PIN1_enum;

typedef enum { 
 	GPIO_ALTFUNCSET_PIN2_off		 = 0b0,
	GPIO_ALTFUNCSET_PIN2_on		 = 0b1,
} t_GPIO_ALTFUNCSET_PIN2_enum;

typedef enum { 
 	GPIO_ALTFUNCSET_PIN3_off		 = 0b0,
	GPIO_ALTFUNCSET_PIN3_on		 = 0b1,
} t_GPIO_ALTFUNCSET_PIN3_enum;

typedef enum { 
 	GPIO_ALTFUNCSET_PIN4_off		 = 0b0,
	GPIO_ALTFUNCSET_PIN4_on		 = 0b1,
} t_GPIO_ALTFUNCSET_PIN4_enum;

typedef enum { 
 	GPIO_ALTFUNCSET_PIN5_off		 = 0b0,
	GPIO_ALTFUNCSET_PIN5_on		 = 0b1,
} t_GPIO_ALTFUNCSET_PIN5_enum;

typedef enum { 
 	GPIO_ALTFUNCSET_PIN6_off		 = 0b0,
	GPIO_ALTFUNCSET_PIN6_on		 = 0b1,
} t_GPIO_ALTFUNCSET_PIN6_enum;

typedef enum { 
 	GPIO_ALTFUNCSET_PIN7_off		 = 0b0,
	GPIO_ALTFUNCSET_PIN7_on		 = 0b1,
} t_GPIO_ALTFUNCSET_PIN7_enum;

typedef enum { 
 	GPIO_ALTFUNCSET_PIN8_off		 = 0b0,
	GPIO_ALTFUNCSET_PIN8_on		 = 0b1,
} t_GPIO_ALTFUNCSET_PIN8_enum;

typedef enum { 
 	GPIO_ALTFUNCSET_PIN9_off		 = 0b0,
	GPIO_ALTFUNCSET_PIN9_on		 = 0b1,
} t_GPIO_ALTFUNCSET_PIN9_enum;

typedef enum { 
 	GPIO_ALTFUNCSET_PIN10_off		 = 0b0,
	GPIO_ALTFUNCSET_PIN10_on		 = 0b1,
} t_GPIO_ALTFUNCSET_PIN10_enum;

typedef enum { 
 	GPIO_ALTFUNCSET_PIN11_off		 = 0b0,
	GPIO_ALTFUNCSET_PIN11_on		 = 0b1,
} t_GPIO_ALTFUNCSET_PIN11_enum;

typedef enum { 
 	GPIO_ALTFUNCSET_PIN12_off		 = 0b0,
	GPIO_ALTFUNCSET_PIN12_on		 = 0b1,
} t_GPIO_ALTFUNCSET_PIN12_enum;

typedef enum { 
 	GPIO_ALTFUNCSET_PIN13_off		 = 0b0,
	GPIO_ALTFUNCSET_PIN13_on		 = 0b1,
} t_GPIO_ALTFUNCSET_PIN13_enum;

typedef enum { 
 	GPIO_ALTFUNCSET_PIN14_off		 = 0b0,
	GPIO_ALTFUNCSET_PIN14_on		 = 0b1,
} t_GPIO_ALTFUNCSET_PIN14_enum;

typedef enum { 
 	GPIO_ALTFUNCSET_PIN15_off		 = 0b0,
	GPIO_ALTFUNCSET_PIN15_on		 = 0b1,
} t_GPIO_ALTFUNCSET_PIN15_enum;




#define GPIO_ALTFUNCCLR	0x28000038		 /*--  --*/

#define GPIO_ALTFUNCCLR_VAL_pos	 	 	 	0	 	 /*--  --*/


#define GPIO_ALTFUNCCLR_VAL_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	GPIO_ALTFUNCCLR_VAL	 	:16;
uint32_t 	 	 	 	:16;
} t_GPIO_ALTFUNCCLR_bits;





#define GPIO_ALTFUNCNUM	0x2800003c		 /*--  --*/

#define GPIO_ALTFUNCNUM_PIN0_pos	 	 	 	0	 	 /*--  --*/
#define GPIO_ALTFUNCNUM_PIN1_pos	 	 	 	2	 	 /*--  --*/
#define GPIO_ALTFUNCNUM_PIN2_pos	 	 	 	4	 	 /*--  --*/
#define GPIO_ALTFUNCNUM_PIN3_pos	 	 	 	6	 	 /*--  --*/
#define GPIO_ALTFUNCNUM_PIN4_pos	 	 	 	8	 	 /*--  --*/
#define GPIO_ALTFUNCNUM_PIN5_pos	 	 	 	10	 	 /*--  --*/
#define GPIO_ALTFUNCNUM_PIN6_pos	 	 	 	12	 	 /*--  --*/
#define GPIO_ALTFUNCNUM_PIN7_pos	 	 	 	14	 	 /*--  --*/
#define GPIO_ALTFUNCNUM_PIN8_pos	 	 	 	16	 	 /*--  --*/
#define GPIO_ALTFUNCNUM_PIN9_pos	 	 	 	18	 	 /*--  --*/
#define GPIO_ALTFUNCNUM_PIN10_pos	 	 	 	20	 	 /*--  --*/
#define GPIO_ALTFUNCNUM_PIN11_pos	 	 	 	22	 	 /*--  --*/
#define GPIO_ALTFUNCNUM_PIN12_pos	 	 	 	24	 	 /*--  --*/
#define GPIO_ALTFUNCNUM_PIN13_pos	 	 	 	26	 	 /*--  --*/
#define GPIO_ALTFUNCNUM_PIN14_pos	 	 	 	28	 	 /*--  --*/
#define GPIO_ALTFUNCNUM_PIN15_pos	 	 	 	30	 	 /*--  --*/


#define GPIO_ALTFUNCNUM_PIN0_msk	 	 	 	0x00000003UL
#define GPIO_ALTFUNCNUM_PIN1_msk	 	 	 	0x0000000cUL
#define GPIO_ALTFUNCNUM_PIN2_msk	 	 	 	0x00000030UL
#define GPIO_ALTFUNCNUM_PIN3_msk	 	 	 	0x000000c0UL
#define GPIO_ALTFUNCNUM_PIN4_msk	 	 	 	0x00000300UL
#define GPIO_ALTFUNCNUM_PIN5_msk	 	 	 	0x00000c00UL
#define GPIO_ALTFUNCNUM_PIN6_msk	 	 	 	0x00003000UL
#define GPIO_ALTFUNCNUM_PIN7_msk	 	 	 	0x0000c000UL
#define GPIO_ALTFUNCNUM_PIN8_msk	 	 	 	0x00030000UL
#define GPIO_ALTFUNCNUM_PIN9_msk	 	 	 	0x000c0000UL
#define GPIO_ALTFUNCNUM_PIN10_msk	 	 	 	0x00300000UL
#define GPIO_ALTFUNCNUM_PIN11_msk	 	 	 	0x00c00000UL
#define GPIO_ALTFUNCNUM_PIN12_msk	 	 	 	0x03000000UL
#define GPIO_ALTFUNCNUM_PIN13_msk	 	 	 	0x0c000000UL
#define GPIO_ALTFUNCNUM_PIN14_msk	 	 	 	0x30000000UL
#define GPIO_ALTFUNCNUM_PIN15_msk	 	 	 	0xc0000000UL


typedef struct {
uint32_t 	 	GPIO_ALTFUNCNUM_PIN0	 	:2;
uint32_t 	 	GPIO_ALTFUNCNUM_PIN1	 	:2;
uint32_t 	 	GPIO_ALTFUNCNUM_PIN2	 	:2;
uint32_t 	 	GPIO_ALTFUNCNUM_PIN3	 	:2;
uint32_t 	 	GPIO_ALTFUNCNUM_PIN4	 	:2;
uint32_t 	 	GPIO_ALTFUNCNUM_PIN5	 	:2;
uint32_t 	 	GPIO_ALTFUNCNUM_PIN6	 	:2;
uint32_t 	 	GPIO_ALTFUNCNUM_PIN7	 	:2;
uint32_t 	 	GPIO_ALTFUNCNUM_PIN8	 	:2;
uint32_t 	 	GPIO_ALTFUNCNUM_PIN9	 	:2;
uint32_t 	 	GPIO_ALTFUNCNUM_PIN10	 	:2;
uint32_t 	 	GPIO_ALTFUNCNUM_PIN11	 	:2;
uint32_t 	 	GPIO_ALTFUNCNUM_PIN12	 	:2;
uint32_t 	 	GPIO_ALTFUNCNUM_PIN13	 	:2;
uint32_t 	 	GPIO_ALTFUNCNUM_PIN14	 	:2;
uint32_t 	 	GPIO_ALTFUNCNUM_PIN15	 	:2;
} t_GPIO_ALTFUNCNUM_bits;


typedef enum { 
 	GPIO_ALTFUNCNUM_PIN0_disable		 = 0b00,
	GPIO_ALTFUNCNUM_PIN0_af1		 = 0b01,
	GPIO_ALTFUNCNUM_PIN0_af2		 = 0b10,
	GPIO_ALTFUNCNUM_PIN0_af3		 = 0b11,
} t_GPIO_ALTFUNCNUM_PIN0_enum;

typedef enum { 
 	GPIO_ALTFUNCNUM_PIN1_disable		 = 0b00,
	GPIO_ALTFUNCNUM_PIN1_af1		 = 0b01,
	GPIO_ALTFUNCNUM_PIN1_af2		 = 0b10,
	GPIO_ALTFUNCNUM_PIN1_af3		 = 0b11,
} t_GPIO_ALTFUNCNUM_PIN1_enum;

typedef enum { 
 	GPIO_ALTFUNCNUM_PIN2_disable		 = 0b00,
	GPIO_ALTFUNCNUM_PIN2_af1		 = 0b01,
	GPIO_ALTFUNCNUM_PIN2_af2		 = 0b10,
	GPIO_ALTFUNCNUM_PIN2_af3		 = 0b11,
} t_GPIO_ALTFUNCNUM_PIN2_enum;

typedef enum { 
 	GPIO_ALTFUNCNUM_PIN3_disable		 = 0b00,
	GPIO_ALTFUNCNUM_PIN3_af1		 = 0b01,
	GPIO_ALTFUNCNUM_PIN3_af2		 = 0b10,
	GPIO_ALTFUNCNUM_PIN3_af3		 = 0b11,
} t_GPIO_ALTFUNCNUM_PIN3_enum;

typedef enum { 
 	GPIO_ALTFUNCNUM_PIN4_disable		 = 0b00,
	GPIO_ALTFUNCNUM_PIN4_af1		 = 0b01,
	GPIO_ALTFUNCNUM_PIN4_af2		 = 0b10,
	GPIO_ALTFUNCNUM_PIN4_af3		 = 0b11,
} t_GPIO_ALTFUNCNUM_PIN4_enum;

typedef enum { 
 	GPIO_ALTFUNCNUM_PIN5_disable		 = 0b00,
	GPIO_ALTFUNCNUM_PIN5_af1		 = 0b01,
	GPIO_ALTFUNCNUM_PIN5_af2		 = 0b10,
	GPIO_ALTFUNCNUM_PIN5_af3		 = 0b11,
} t_GPIO_ALTFUNCNUM_PIN5_enum;

typedef enum { 
 	GPIO_ALTFUNCNUM_PIN6_disable		 = 0b00,
	GPIO_ALTFUNCNUM_PIN6_af1		 = 0b01,
	GPIO_ALTFUNCNUM_PIN6_af2		 = 0b10,
	GPIO_ALTFUNCNUM_PIN6_af3		 = 0b11,
} t_GPIO_ALTFUNCNUM_PIN6_enum;

typedef enum { 
 	GPIO_ALTFUNCNUM_PIN7_disable		 = 0b00,
	GPIO_ALTFUNCNUM_PIN7_af1		 = 0b01,
	GPIO_ALTFUNCNUM_PIN7_af2		 = 0b10,
	GPIO_ALTFUNCNUM_PIN7_af3		 = 0b11,
} t_GPIO_ALTFUNCNUM_PIN7_enum;

typedef enum { 
 	GPIO_ALTFUNCNUM_PIN8_disable		 = 0b00,
	GPIO_ALTFUNCNUM_PIN8_af1		 = 0b01,
	GPIO_ALTFUNCNUM_PIN8_af2		 = 0b10,
	GPIO_ALTFUNCNUM_PIN8_af3		 = 0b11,
} t_GPIO_ALTFUNCNUM_PIN8_enum;

typedef enum { 
 	GPIO_ALTFUNCNUM_PIN9_disable		 = 0b00,
	GPIO_ALTFUNCNUM_PIN9_af1		 = 0b01,
	GPIO_ALTFUNCNUM_PIN9_af2		 = 0b10,
	GPIO_ALTFUNCNUM_PIN9_af3		 = 0b11,
} t_GPIO_ALTFUNCNUM_PIN9_enum;

typedef enum { 
 	GPIO_ALTFUNCNUM_PIN10_disable		 = 0b00,
	GPIO_ALTFUNCNUM_PIN10_af1		 = 0b01,
	GPIO_ALTFUNCNUM_PIN10_af2		 = 0b10,
	GPIO_ALTFUNCNUM_PIN10_af3		 = 0b11,
} t_GPIO_ALTFUNCNUM_PIN10_enum;

typedef enum { 
 	GPIO_ALTFUNCNUM_PIN11_disable		 = 0b00,
	GPIO_ALTFUNCNUM_PIN11_af1		 = 0b01,
	GPIO_ALTFUNCNUM_PIN11_af2		 = 0b10,
	GPIO_ALTFUNCNUM_PIN11_af3		 = 0b11,
} t_GPIO_ALTFUNCNUM_PIN11_enum;

typedef enum { 
 	GPIO_ALTFUNCNUM_PIN12_disable		 = 0b00,
	GPIO_ALTFUNCNUM_PIN12_af1		 = 0b01,
	GPIO_ALTFUNCNUM_PIN12_af2		 = 0b10,
	GPIO_ALTFUNCNUM_PIN12_af3		 = 0b11,
} t_GPIO_ALTFUNCNUM_PIN12_enum;

typedef enum { 
 	GPIO_ALTFUNCNUM_PIN13_disable		 = 0b00,
	GPIO_ALTFUNCNUM_PIN13_af1		 = 0b01,
	GPIO_ALTFUNCNUM_PIN13_af2		 = 0b10,
	GPIO_ALTFUNCNUM_PIN13_af3		 = 0b11,
} t_GPIO_ALTFUNCNUM_PIN13_enum;

typedef enum { 
 	GPIO_ALTFUNCNUM_PIN14_disable		 = 0b00,
	GPIO_ALTFUNCNUM_PIN14_af1		 = 0b01,
	GPIO_ALTFUNCNUM_PIN14_af2		 = 0b10,
	GPIO_ALTFUNCNUM_PIN14_af3		 = 0b11,
} t_GPIO_ALTFUNCNUM_PIN14_enum;

typedef enum { 
 	GPIO_ALTFUNCNUM_PIN15_disable		 = 0b00,
	GPIO_ALTFUNCNUM_PIN15_af1		 = 0b01,
	GPIO_ALTFUNCNUM_PIN15_af2		 = 0b10,
	GPIO_ALTFUNCNUM_PIN15_af3		 = 0b11,
} t_GPIO_ALTFUNCNUM_PIN15_enum;




#define GPIO_SYNCSET	0x28000044		 /*--  --*/

#define GPIO_SYNCSET_PIN0_pos	 	 	 	0	 	 /*--  --*/
#define GPIO_SYNCSET_PIN1_pos	 	 	 	1	 	 /*--  --*/
#define GPIO_SYNCSET_PIN2_pos	 	 	 	2	 	 /*--  --*/
#define GPIO_SYNCSET_PIN3_pos	 	 	 	3	 	 /*--  --*/
#define GPIO_SYNCSET_PIN4_pos	 	 	 	4	 	 /*--  --*/
#define GPIO_SYNCSET_PIN5_pos	 	 	 	5	 	 /*--  --*/
#define GPIO_SYNCSET_PIN6_pos	 	 	 	6	 	 /*--  --*/
#define GPIO_SYNCSET_PIN7_pos	 	 	 	7	 	 /*--  --*/
#define GPIO_SYNCSET_PIN8_pos	 	 	 	8	 	 /*--  --*/
#define GPIO_SYNCSET_PIN9_pos	 	 	 	9	 	 /*--  --*/
#define GPIO_SYNCSET_PIN10_pos	 	 	 	10	 	 /*--  --*/
#define GPIO_SYNCSET_PIN11_pos	 	 	 	11	 	 /*--  --*/
#define GPIO_SYNCSET_PIN12_pos	 	 	 	12	 	 /*--  --*/
#define GPIO_SYNCSET_PIN13_pos	 	 	 	13	 	 /*--  --*/
#define GPIO_SYNCSET_PIN14_pos	 	 	 	14	 	 /*--  --*/
#define GPIO_SYNCSET_PIN15_pos	 	 	 	15	 	 /*--  --*/


#define GPIO_SYNCSET_PIN0_msk	 	 	 	0x00000001UL
#define GPIO_SYNCSET_PIN1_msk	 	 	 	0x00000002UL
#define GPIO_SYNCSET_PIN2_msk	 	 	 	0x00000004UL
#define GPIO_SYNCSET_PIN3_msk	 	 	 	0x00000008UL
#define GPIO_SYNCSET_PIN4_msk	 	 	 	0x00000010UL
#define GPIO_SYNCSET_PIN5_msk	 	 	 	0x00000020UL
#define GPIO_SYNCSET_PIN6_msk	 	 	 	0x00000040UL
#define GPIO_SYNCSET_PIN7_msk	 	 	 	0x00000080UL
#define GPIO_SYNCSET_PIN8_msk	 	 	 	0x00000100UL
#define GPIO_SYNCSET_PIN9_msk	 	 	 	0x00000200UL
#define GPIO_SYNCSET_PIN10_msk	 	 	 	0x00000400UL
#define GPIO_SYNCSET_PIN11_msk	 	 	 	0x00000800UL
#define GPIO_SYNCSET_PIN12_msk	 	 	 	0x00001000UL
#define GPIO_SYNCSET_PIN13_msk	 	 	 	0x00002000UL
#define GPIO_SYNCSET_PIN14_msk	 	 	 	0x00004000UL
#define GPIO_SYNCSET_PIN15_msk	 	 	 	0x00008000UL


typedef struct {
uint32_t 	 	GPIO_SYNCSET_PIN0	 	:1;
uint32_t 	 	GPIO_SYNCSET_PIN1	 	:1;
uint32_t 	 	GPIO_SYNCSET_PIN2	 	:1;
uint32_t 	 	GPIO_SYNCSET_PIN3	 	:1;
uint32_t 	 	GPIO_SYNCSET_PIN4	 	:1;
uint32_t 	 	GPIO_SYNCSET_PIN5	 	:1;
uint32_t 	 	GPIO_SYNCSET_PIN6	 	:1;
uint32_t 	 	GPIO_SYNCSET_PIN7	 	:1;
uint32_t 	 	GPIO_SYNCSET_PIN8	 	:1;
uint32_t 	 	GPIO_SYNCSET_PIN9	 	:1;
uint32_t 	 	GPIO_SYNCSET_PIN10	 	:1;
uint32_t 	 	GPIO_SYNCSET_PIN11	 	:1;
uint32_t 	 	GPIO_SYNCSET_PIN12	 	:1;
uint32_t 	 	GPIO_SYNCSET_PIN13	 	:1;
uint32_t 	 	GPIO_SYNCSET_PIN14	 	:1;
uint32_t 	 	GPIO_SYNCSET_PIN15	 	:1;
uint32_t 	 	 	 	:16;
} t_GPIO_SYNCSET_bits;


typedef enum { 
 	GPIO_SYNCSET_PIN0_off		 = 0b0,
	GPIO_SYNCSET_PIN0_on		 = 0b1,
} t_GPIO_SYNCSET_PIN0_enum;

typedef enum { 
 	GPIO_SYNCSET_PIN1_off		 = 0b0,
	GPIO_SYNCSET_PIN1_on		 = 0b1,
} t_GPIO_SYNCSET_PIN1_enum;

typedef enum { 
 	GPIO_SYNCSET_PIN2_off		 = 0b0,
	GPIO_SYNCSET_PIN2_on		 = 0b1,
} t_GPIO_SYNCSET_PIN2_enum;

typedef enum { 
 	GPIO_SYNCSET_PIN3_off		 = 0b0,
	GPIO_SYNCSET_PIN3_on		 = 0b1,
} t_GPIO_SYNCSET_PIN3_enum;

typedef enum { 
 	GPIO_SYNCSET_PIN4_off		 = 0b0,
	GPIO_SYNCSET_PIN4_on		 = 0b1,
} t_GPIO_SYNCSET_PIN4_enum;

typedef enum { 
 	GPIO_SYNCSET_PIN5_off		 = 0b0,
	GPIO_SYNCSET_PIN5_on		 = 0b1,
} t_GPIO_SYNCSET_PIN5_enum;

typedef enum { 
 	GPIO_SYNCSET_PIN6_off		 = 0b0,
	GPIO_SYNCSET_PIN6_on		 = 0b1,
} t_GPIO_SYNCSET_PIN6_enum;

typedef enum { 
 	GPIO_SYNCSET_PIN7_off		 = 0b0,
	GPIO_SYNCSET_PIN7_on		 = 0b1,
} t_GPIO_SYNCSET_PIN7_enum;

typedef enum { 
 	GPIO_SYNCSET_PIN8_off		 = 0b0,
	GPIO_SYNCSET_PIN8_on		 = 0b1,
} t_GPIO_SYNCSET_PIN8_enum;

typedef enum { 
 	GPIO_SYNCSET_PIN9_off		 = 0b0,
	GPIO_SYNCSET_PIN9_on		 = 0b1,
} t_GPIO_SYNCSET_PIN9_enum;

typedef enum { 
 	GPIO_SYNCSET_PIN10_off		 = 0b0,
	GPIO_SYNCSET_PIN10_on		 = 0b1,
} t_GPIO_SYNCSET_PIN10_enum;

typedef enum { 
 	GPIO_SYNCSET_PIN11_off		 = 0b0,
	GPIO_SYNCSET_PIN11_on		 = 0b1,
} t_GPIO_SYNCSET_PIN11_enum;

typedef enum { 
 	GPIO_SYNCSET_PIN12_off		 = 0b0,
	GPIO_SYNCSET_PIN12_on		 = 0b1,
} t_GPIO_SYNCSET_PIN12_enum;

typedef enum { 
 	GPIO_SYNCSET_PIN13_off		 = 0b0,
	GPIO_SYNCSET_PIN13_on		 = 0b1,
} t_GPIO_SYNCSET_PIN13_enum;

typedef enum { 
 	GPIO_SYNCSET_PIN14_off		 = 0b0,
	GPIO_SYNCSET_PIN14_on		 = 0b1,
} t_GPIO_SYNCSET_PIN14_enum;

typedef enum { 
 	GPIO_SYNCSET_PIN15_off		 = 0b0,
	GPIO_SYNCSET_PIN15_on		 = 0b1,
} t_GPIO_SYNCSET_PIN15_enum;




#define GPIO_SYNCCLR	0x28000048		 /*--  --*/

#define GPIO_SYNCCLR_VAL_pos	 	 	 	0	 	 /*--  --*/


#define GPIO_SYNCCLR_VAL_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	GPIO_SYNCCLR_VAL	 	:16;
uint32_t 	 	 	 	:16;
} t_GPIO_SYNCCLR_bits;





#define GPIO_QUALSET	0x2800004c		 /*--  --*/

#define GPIO_QUALSET_PIN0_pos	 	 	 	0	 	 /*--  --*/
#define GPIO_QUALSET_PIN1_pos	 	 	 	1	 	 /*--  --*/
#define GPIO_QUALSET_PIN2_pos	 	 	 	2	 	 /*--  --*/
#define GPIO_QUALSET_PIN3_pos	 	 	 	3	 	 /*--  --*/
#define GPIO_QUALSET_PIN4_pos	 	 	 	4	 	 /*--  --*/
#define GPIO_QUALSET_PIN5_pos	 	 	 	5	 	 /*--  --*/
#define GPIO_QUALSET_PIN6_pos	 	 	 	6	 	 /*--  --*/
#define GPIO_QUALSET_PIN7_pos	 	 	 	7	 	 /*--  --*/
#define GPIO_QUALSET_PIN8_pos	 	 	 	8	 	 /*--  --*/
#define GPIO_QUALSET_PIN9_pos	 	 	 	9	 	 /*--  --*/
#define GPIO_QUALSET_PIN10_pos	 	 	 	10	 	 /*--  --*/
#define GPIO_QUALSET_PIN11_pos	 	 	 	11	 	 /*--  --*/
#define GPIO_QUALSET_PIN12_pos	 	 	 	12	 	 /*--  --*/
#define GPIO_QUALSET_PIN13_pos	 	 	 	13	 	 /*--  --*/
#define GPIO_QUALSET_PIN14_pos	 	 	 	14	 	 /*--  --*/
#define GPIO_QUALSET_PIN15_pos	 	 	 	15	 	 /*--  --*/


#define GPIO_QUALSET_PIN0_msk	 	 	 	0x00000001UL
#define GPIO_QUALSET_PIN1_msk	 	 	 	0x00000002UL
#define GPIO_QUALSET_PIN2_msk	 	 	 	0x00000004UL
#define GPIO_QUALSET_PIN3_msk	 	 	 	0x00000008UL
#define GPIO_QUALSET_PIN4_msk	 	 	 	0x00000010UL
#define GPIO_QUALSET_PIN5_msk	 	 	 	0x00000020UL
#define GPIO_QUALSET_PIN6_msk	 	 	 	0x00000040UL
#define GPIO_QUALSET_PIN7_msk	 	 	 	0x00000080UL
#define GPIO_QUALSET_PIN8_msk	 	 	 	0x00000100UL
#define GPIO_QUALSET_PIN9_msk	 	 	 	0x00000200UL
#define GPIO_QUALSET_PIN10_msk	 	 	 	0x00000400UL
#define GPIO_QUALSET_PIN11_msk	 	 	 	0x00000800UL
#define GPIO_QUALSET_PIN12_msk	 	 	 	0x00001000UL
#define GPIO_QUALSET_PIN13_msk	 	 	 	0x00002000UL
#define GPIO_QUALSET_PIN14_msk	 	 	 	0x00004000UL
#define GPIO_QUALSET_PIN15_msk	 	 	 	0x00008000UL


typedef struct {
uint32_t 	 	GPIO_QUALSET_PIN0	 	:1;
uint32_t 	 	GPIO_QUALSET_PIN1	 	:1;
uint32_t 	 	GPIO_QUALSET_PIN2	 	:1;
uint32_t 	 	GPIO_QUALSET_PIN3	 	:1;
uint32_t 	 	GPIO_QUALSET_PIN4	 	:1;
uint32_t 	 	GPIO_QUALSET_PIN5	 	:1;
uint32_t 	 	GPIO_QUALSET_PIN6	 	:1;
uint32_t 	 	GPIO_QUALSET_PIN7	 	:1;
uint32_t 	 	GPIO_QUALSET_PIN8	 	:1;
uint32_t 	 	GPIO_QUALSET_PIN9	 	:1;
uint32_t 	 	GPIO_QUALSET_PIN10	 	:1;
uint32_t 	 	GPIO_QUALSET_PIN11	 	:1;
uint32_t 	 	GPIO_QUALSET_PIN12	 	:1;
uint32_t 	 	GPIO_QUALSET_PIN13	 	:1;
uint32_t 	 	GPIO_QUALSET_PIN14	 	:1;
uint32_t 	 	GPIO_QUALSET_PIN15	 	:1;
uint32_t 	 	 	 	:16;
} t_GPIO_QUALSET_bits;


typedef enum { 
 	GPIO_QUALSET_PIN0_off		 = 0b0,
	GPIO_QUALSET_PIN0_on		 = 0b1,
} t_GPIO_QUALSET_PIN0_enum;

typedef enum { 
 	GPIO_QUALSET_PIN1_off		 = 0b0,
	GPIO_QUALSET_PIN1_on		 = 0b1,
} t_GPIO_QUALSET_PIN1_enum;

typedef enum { 
 	GPIO_QUALSET_PIN2_off		 = 0b0,
	GPIO_QUALSET_PIN2_on		 = 0b1,
} t_GPIO_QUALSET_PIN2_enum;

typedef enum { 
 	GPIO_QUALSET_PIN3_off		 = 0b0,
	GPIO_QUALSET_PIN3_on		 = 0b1,
} t_GPIO_QUALSET_PIN3_enum;

typedef enum { 
 	GPIO_QUALSET_PIN4_off		 = 0b0,
	GPIO_QUALSET_PIN4_on		 = 0b1,
} t_GPIO_QUALSET_PIN4_enum;

typedef enum { 
 	GPIO_QUALSET_PIN5_off		 = 0b0,
	GPIO_QUALSET_PIN5_on		 = 0b1,
} t_GPIO_QUALSET_PIN5_enum;

typedef enum { 
 	GPIO_QUALSET_PIN6_off		 = 0b0,
	GPIO_QUALSET_PIN6_on		 = 0b1,
} t_GPIO_QUALSET_PIN6_enum;

typedef enum { 
 	GPIO_QUALSET_PIN7_off		 = 0b0,
	GPIO_QUALSET_PIN7_on		 = 0b1,
} t_GPIO_QUALSET_PIN7_enum;

typedef enum { 
 	GPIO_QUALSET_PIN8_off		 = 0b0,
	GPIO_QUALSET_PIN8_on		 = 0b1,
} t_GPIO_QUALSET_PIN8_enum;

typedef enum { 
 	GPIO_QUALSET_PIN9_off		 = 0b0,
	GPIO_QUALSET_PIN9_on		 = 0b1,
} t_GPIO_QUALSET_PIN9_enum;

typedef enum { 
 	GPIO_QUALSET_PIN10_off		 = 0b0,
	GPIO_QUALSET_PIN10_on		 = 0b1,
} t_GPIO_QUALSET_PIN10_enum;

typedef enum { 
 	GPIO_QUALSET_PIN11_off		 = 0b0,
	GPIO_QUALSET_PIN11_on		 = 0b1,
} t_GPIO_QUALSET_PIN11_enum;

typedef enum { 
 	GPIO_QUALSET_PIN12_off		 = 0b0,
	GPIO_QUALSET_PIN12_on		 = 0b1,
} t_GPIO_QUALSET_PIN12_enum;

typedef enum { 
 	GPIO_QUALSET_PIN13_off		 = 0b0,
	GPIO_QUALSET_PIN13_on		 = 0b1,
} t_GPIO_QUALSET_PIN13_enum;

typedef enum { 
 	GPIO_QUALSET_PIN14_off		 = 0b0,
	GPIO_QUALSET_PIN14_on		 = 0b1,
} t_GPIO_QUALSET_PIN14_enum;

typedef enum { 
 	GPIO_QUALSET_PIN15_off		 = 0b0,
	GPIO_QUALSET_PIN15_on		 = 0b1,
} t_GPIO_QUALSET_PIN15_enum;




#define GPIO_QUALCLR	0x28000050		 /*--  --*/

#define GPIO_QUALCLR_VAL_pos	 	 	 	0	 	 /*--  --*/


#define GPIO_QUALCLR_VAL_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	GPIO_QUALCLR_VAL	 	:16;
uint32_t 	 	 	 	:16;
} t_GPIO_QUALCLR_bits;





#define GPIO_QUALMODESET	0x28000054		 /*--  --*/

#define GPIO_QUALMODESET_PIN0_pos	 	 	 	0	 	 /*--  --*/
#define GPIO_QUALMODESET_PIN1_pos	 	 	 	1	 	 /*--  --*/
#define GPIO_QUALMODESET_PIN2_pos	 	 	 	2	 	 /*--  --*/
#define GPIO_QUALMODESET_PIN3_pos	 	 	 	3	 	 /*--  --*/
#define GPIO_QUALMODESET_PIN4_pos	 	 	 	4	 	 /*--  --*/
#define GPIO_QUALMODESET_PIN5_pos	 	 	 	5	 	 /*--  --*/
#define GPIO_QUALMODESET_PIN6_pos	 	 	 	6	 	 /*--  --*/
#define GPIO_QUALMODESET_PIN7_pos	 	 	 	7	 	 /*--  --*/
#define GPIO_QUALMODESET_PIN8_pos	 	 	 	8	 	 /*--  --*/
#define GPIO_QUALMODESET_PIN9_pos	 	 	 	9	 	 /*--  --*/
#define GPIO_QUALMODESET_PIN10_pos	 	 	 	10	 	 /*--  --*/
#define GPIO_QUALMODESET_PIN11_pos	 	 	 	11	 	 /*--  --*/
#define GPIO_QUALMODESET_PIN12_pos	 	 	 	12	 	 /*--  --*/
#define GPIO_QUALMODESET_PIN13_pos	 	 	 	13	 	 /*--  --*/
#define GPIO_QUALMODESET_PIN14_pos	 	 	 	14	 	 /*--  --*/
#define GPIO_QUALMODESET_PIN15_pos	 	 	 	15	 	 /*--  --*/


#define GPIO_QUALMODESET_PIN0_msk	 	 	 	0x00000001UL
#define GPIO_QUALMODESET_PIN1_msk	 	 	 	0x00000002UL
#define GPIO_QUALMODESET_PIN2_msk	 	 	 	0x00000004UL
#define GPIO_QUALMODESET_PIN3_msk	 	 	 	0x00000008UL
#define GPIO_QUALMODESET_PIN4_msk	 	 	 	0x00000010UL
#define GPIO_QUALMODESET_PIN5_msk	 	 	 	0x00000020UL
#define GPIO_QUALMODESET_PIN6_msk	 	 	 	0x00000040UL
#define GPIO_QUALMODESET_PIN7_msk	 	 	 	0x00000080UL
#define GPIO_QUALMODESET_PIN8_msk	 	 	 	0x00000100UL
#define GPIO_QUALMODESET_PIN9_msk	 	 	 	0x00000200UL
#define GPIO_QUALMODESET_PIN10_msk	 	 	 	0x00000400UL
#define GPIO_QUALMODESET_PIN11_msk	 	 	 	0x00000800UL
#define GPIO_QUALMODESET_PIN12_msk	 	 	 	0x00001000UL
#define GPIO_QUALMODESET_PIN13_msk	 	 	 	0x00002000UL
#define GPIO_QUALMODESET_PIN14_msk	 	 	 	0x00004000UL
#define GPIO_QUALMODESET_PIN15_msk	 	 	 	0x00008000UL


typedef struct {
uint32_t 	 	GPIO_QUALMODESET_PIN0	 	:1;
uint32_t 	 	GPIO_QUALMODESET_PIN1	 	:1;
uint32_t 	 	GPIO_QUALMODESET_PIN2	 	:1;
uint32_t 	 	GPIO_QUALMODESET_PIN3	 	:1;
uint32_t 	 	GPIO_QUALMODESET_PIN4	 	:1;
uint32_t 	 	GPIO_QUALMODESET_PIN5	 	:1;
uint32_t 	 	GPIO_QUALMODESET_PIN6	 	:1;
uint32_t 	 	GPIO_QUALMODESET_PIN7	 	:1;
uint32_t 	 	GPIO_QUALMODESET_PIN8	 	:1;
uint32_t 	 	GPIO_QUALMODESET_PIN9	 	:1;
uint32_t 	 	GPIO_QUALMODESET_PIN10	 	:1;
uint32_t 	 	GPIO_QUALMODESET_PIN11	 	:1;
uint32_t 	 	GPIO_QUALMODESET_PIN12	 	:1;
uint32_t 	 	GPIO_QUALMODESET_PIN13	 	:1;
uint32_t 	 	GPIO_QUALMODESET_PIN14	 	:1;
uint32_t 	 	GPIO_QUALMODESET_PIN15	 	:1;
uint32_t 	 	 	 	:16;
} t_GPIO_QUALMODESET_bits;


typedef enum { 
 	GPIO_QUALMODESET_PIN0_off		 = 0b0,
	GPIO_QUALMODESET_PIN0_on		 = 0b1,
} t_GPIO_QUALMODESET_PIN0_enum;

typedef enum { 
 	GPIO_QUALMODESET_PIN1_off		 = 0b0,
	GPIO_QUALMODESET_PIN1_on		 = 0b1,
} t_GPIO_QUALMODESET_PIN1_enum;

typedef enum { 
 	GPIO_QUALMODESET_PIN2_off		 = 0b0,
	GPIO_QUALMODESET_PIN2_on		 = 0b1,
} t_GPIO_QUALMODESET_PIN2_enum;

typedef enum { 
 	GPIO_QUALMODESET_PIN3_off		 = 0b0,
	GPIO_QUALMODESET_PIN3_on		 = 0b1,
} t_GPIO_QUALMODESET_PIN3_enum;

typedef enum { 
 	GPIO_QUALMODESET_PIN4_off		 = 0b0,
	GPIO_QUALMODESET_PIN4_on		 = 0b1,
} t_GPIO_QUALMODESET_PIN4_enum;

typedef enum { 
 	GPIO_QUALMODESET_PIN5_off		 = 0b0,
	GPIO_QUALMODESET_PIN5_on		 = 0b1,
} t_GPIO_QUALMODESET_PIN5_enum;

typedef enum { 
 	GPIO_QUALMODESET_PIN6_off		 = 0b0,
	GPIO_QUALMODESET_PIN6_on		 = 0b1,
} t_GPIO_QUALMODESET_PIN6_enum;

typedef enum { 
 	GPIO_QUALMODESET_PIN7_off		 = 0b0,
	GPIO_QUALMODESET_PIN7_on		 = 0b1,
} t_GPIO_QUALMODESET_PIN7_enum;

typedef enum { 
 	GPIO_QUALMODESET_PIN8_off		 = 0b0,
	GPIO_QUALMODESET_PIN8_on		 = 0b1,
} t_GPIO_QUALMODESET_PIN8_enum;

typedef enum { 
 	GPIO_QUALMODESET_PIN9_off		 = 0b0,
	GPIO_QUALMODESET_PIN9_on		 = 0b1,
} t_GPIO_QUALMODESET_PIN9_enum;

typedef enum { 
 	GPIO_QUALMODESET_PIN10_off		 = 0b0,
	GPIO_QUALMODESET_PIN10_on		 = 0b1,
} t_GPIO_QUALMODESET_PIN10_enum;

typedef enum { 
 	GPIO_QUALMODESET_PIN11_off		 = 0b0,
	GPIO_QUALMODESET_PIN11_on		 = 0b1,
} t_GPIO_QUALMODESET_PIN11_enum;

typedef enum { 
 	GPIO_QUALMODESET_PIN12_off		 = 0b0,
	GPIO_QUALMODESET_PIN12_on		 = 0b1,
} t_GPIO_QUALMODESET_PIN12_enum;

typedef enum { 
 	GPIO_QUALMODESET_PIN13_off		 = 0b0,
	GPIO_QUALMODESET_PIN13_on		 = 0b1,
} t_GPIO_QUALMODESET_PIN13_enum;

typedef enum { 
 	GPIO_QUALMODESET_PIN14_off		 = 0b0,
	GPIO_QUALMODESET_PIN14_on		 = 0b1,
} t_GPIO_QUALMODESET_PIN14_enum;

typedef enum { 
 	GPIO_QUALMODESET_PIN15_off		 = 0b0,
	GPIO_QUALMODESET_PIN15_on		 = 0b1,
} t_GPIO_QUALMODESET_PIN15_enum;




#define GPIO_QUALMODECLR	0x28000058		 /*--  --*/

#define GPIO_QUALMODECLR_VAL_pos	 	 	 	0	 	 /*--  --*/


#define GPIO_QUALMODECLR_VAL_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	GPIO_QUALMODECLR_VAL	 	:16;
uint32_t 	 	 	 	:16;
} t_GPIO_QUALMODECLR_bits;





#define GPIO_QUALSAMPLE	0x2800005c		 /*--  --*/

#define GPIO_QUALSAMPLE_VAL_pos	 	 	 	0	 	 /*--  --*/


#define GPIO_QUALSAMPLE_VAL_msk	 	 	 	0x000fffffUL


typedef struct {
uint32_t 	 	GPIO_QUALSAMPLE_VAL	 	:20;
uint32_t 	 	 	 	:12;
} t_GPIO_QUALSAMPLE_bits;





#define GPIO_INTENSET	0x28000060		 /*--  --*/

#define GPIO_INTENSET_PIN0_pos	 	 	 	0	 	 /*--  --*/
#define GPIO_INTENSET_PIN1_pos	 	 	 	1	 	 /*--  --*/
#define GPIO_INTENSET_PIN2_pos	 	 	 	2	 	 /*--  --*/
#define GPIO_INTENSET_PIN3_pos	 	 	 	3	 	 /*--  --*/
#define GPIO_INTENSET_PIN4_pos	 	 	 	4	 	 /*--  --*/
#define GPIO_INTENSET_PIN5_pos	 	 	 	5	 	 /*--  --*/
#define GPIO_INTENSET_PIN6_pos	 	 	 	6	 	 /*--  --*/
#define GPIO_INTENSET_PIN7_pos	 	 	 	7	 	 /*--  --*/
#define GPIO_INTENSET_PIN8_pos	 	 	 	8	 	 /*--  --*/
#define GPIO_INTENSET_PIN9_pos	 	 	 	9	 	 /*--  --*/
#define GPIO_INTENSET_PIN10_pos	 	 	 	10	 	 /*--  --*/
#define GPIO_INTENSET_PIN11_pos	 	 	 	11	 	 /*--  --*/
#define GPIO_INTENSET_PIN12_pos	 	 	 	12	 	 /*--  --*/
#define GPIO_INTENSET_PIN13_pos	 	 	 	13	 	 /*--  --*/
#define GPIO_INTENSET_PIN14_pos	 	 	 	14	 	 /*--  --*/
#define GPIO_INTENSET_PIN15_pos	 	 	 	15	 	 /*--  --*/


#define GPIO_INTENSET_PIN0_msk	 	 	 	0x00000001UL
#define GPIO_INTENSET_PIN1_msk	 	 	 	0x00000002UL
#define GPIO_INTENSET_PIN2_msk	 	 	 	0x00000004UL
#define GPIO_INTENSET_PIN3_msk	 	 	 	0x00000008UL
#define GPIO_INTENSET_PIN4_msk	 	 	 	0x00000010UL
#define GPIO_INTENSET_PIN5_msk	 	 	 	0x00000020UL
#define GPIO_INTENSET_PIN6_msk	 	 	 	0x00000040UL
#define GPIO_INTENSET_PIN7_msk	 	 	 	0x00000080UL
#define GPIO_INTENSET_PIN8_msk	 	 	 	0x00000100UL
#define GPIO_INTENSET_PIN9_msk	 	 	 	0x00000200UL
#define GPIO_INTENSET_PIN10_msk	 	 	 	0x00000400UL
#define GPIO_INTENSET_PIN11_msk	 	 	 	0x00000800UL
#define GPIO_INTENSET_PIN12_msk	 	 	 	0x00001000UL
#define GPIO_INTENSET_PIN13_msk	 	 	 	0x00002000UL
#define GPIO_INTENSET_PIN14_msk	 	 	 	0x00004000UL
#define GPIO_INTENSET_PIN15_msk	 	 	 	0x00008000UL


typedef struct {
uint32_t 	 	GPIO_INTENSET_PIN0	 	:1;
uint32_t 	 	GPIO_INTENSET_PIN1	 	:1;
uint32_t 	 	GPIO_INTENSET_PIN2	 	:1;
uint32_t 	 	GPIO_INTENSET_PIN3	 	:1;
uint32_t 	 	GPIO_INTENSET_PIN4	 	:1;
uint32_t 	 	GPIO_INTENSET_PIN5	 	:1;
uint32_t 	 	GPIO_INTENSET_PIN6	 	:1;
uint32_t 	 	GPIO_INTENSET_PIN7	 	:1;
uint32_t 	 	GPIO_INTENSET_PIN8	 	:1;
uint32_t 	 	GPIO_INTENSET_PIN9	 	:1;
uint32_t 	 	GPIO_INTENSET_PIN10	 	:1;
uint32_t 	 	GPIO_INTENSET_PIN11	 	:1;
uint32_t 	 	GPIO_INTENSET_PIN12	 	:1;
uint32_t 	 	GPIO_INTENSET_PIN13	 	:1;
uint32_t 	 	GPIO_INTENSET_PIN14	 	:1;
uint32_t 	 	GPIO_INTENSET_PIN15	 	:1;
uint32_t 	 	 	 	:16;
} t_GPIO_INTENSET_bits;


typedef enum { 
 	GPIO_INTENSET_PIN0_off		 = 0b0,
	GPIO_INTENSET_PIN0_on		 = 0b1,
} t_GPIO_INTENSET_PIN0_enum;

typedef enum { 
 	GPIO_INTENSET_PIN1_off		 = 0b0,
	GPIO_INTENSET_PIN1_on		 = 0b1,
} t_GPIO_INTENSET_PIN1_enum;

typedef enum { 
 	GPIO_INTENSET_PIN2_off		 = 0b0,
	GPIO_INTENSET_PIN2_on		 = 0b1,
} t_GPIO_INTENSET_PIN2_enum;

typedef enum { 
 	GPIO_INTENSET_PIN3_off		 = 0b0,
	GPIO_INTENSET_PIN3_on		 = 0b1,
} t_GPIO_INTENSET_PIN3_enum;

typedef enum { 
 	GPIO_INTENSET_PIN4_off		 = 0b0,
	GPIO_INTENSET_PIN4_on		 = 0b1,
} t_GPIO_INTENSET_PIN4_enum;

typedef enum { 
 	GPIO_INTENSET_PIN5_off		 = 0b0,
	GPIO_INTENSET_PIN5_on		 = 0b1,
} t_GPIO_INTENSET_PIN5_enum;

typedef enum { 
 	GPIO_INTENSET_PIN6_off		 = 0b0,
	GPIO_INTENSET_PIN6_on		 = 0b1,
} t_GPIO_INTENSET_PIN6_enum;

typedef enum { 
 	GPIO_INTENSET_PIN7_off		 = 0b0,
	GPIO_INTENSET_PIN7_on		 = 0b1,
} t_GPIO_INTENSET_PIN7_enum;

typedef enum { 
 	GPIO_INTENSET_PIN8_off		 = 0b0,
	GPIO_INTENSET_PIN8_on		 = 0b1,
} t_GPIO_INTENSET_PIN8_enum;

typedef enum { 
 	GPIO_INTENSET_PIN9_off		 = 0b0,
	GPIO_INTENSET_PIN9_on		 = 0b1,
} t_GPIO_INTENSET_PIN9_enum;

typedef enum { 
 	GPIO_INTENSET_PIN10_off		 = 0b0,
	GPIO_INTENSET_PIN10_on		 = 0b1,
} t_GPIO_INTENSET_PIN10_enum;

typedef enum { 
 	GPIO_INTENSET_PIN11_off		 = 0b0,
	GPIO_INTENSET_PIN11_on		 = 0b1,
} t_GPIO_INTENSET_PIN11_enum;

typedef enum { 
 	GPIO_INTENSET_PIN12_off		 = 0b0,
	GPIO_INTENSET_PIN12_on		 = 0b1,
} t_GPIO_INTENSET_PIN12_enum;

typedef enum { 
 	GPIO_INTENSET_PIN13_off		 = 0b0,
	GPIO_INTENSET_PIN13_on		 = 0b1,
} t_GPIO_INTENSET_PIN13_enum;

typedef enum { 
 	GPIO_INTENSET_PIN14_off		 = 0b0,
	GPIO_INTENSET_PIN14_on		 = 0b1,
} t_GPIO_INTENSET_PIN14_enum;

typedef enum { 
 	GPIO_INTENSET_PIN15_off		 = 0b0,
	GPIO_INTENSET_PIN15_on		 = 0b1,
} t_GPIO_INTENSET_PIN15_enum;




#define GPIO_INTENCLR	0x28000064		 /*--  --*/

#define GPIO_INTENCLR_VAL_pos	 	 	 	0	 	 /*--  --*/


#define GPIO_INTENCLR_VAL_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	GPIO_INTENCLR_VAL	 	:16;
uint32_t 	 	 	 	:16;
} t_GPIO_INTENCLR_bits;





#define GPIO_INTTYPESET	0x28000068		 /*--  --*/

#define GPIO_INTTYPESET_PIN0_pos	 	 	 	0	 	 /*--  --*/
#define GPIO_INTTYPESET_PIN1_pos	 	 	 	1	 	 /*--  --*/
#define GPIO_INTTYPESET_PIN2_pos	 	 	 	2	 	 /*--  --*/
#define GPIO_INTTYPESET_PIN3_pos	 	 	 	3	 	 /*--  --*/
#define GPIO_INTTYPESET_PIN4_pos	 	 	 	4	 	 /*--  --*/
#define GPIO_INTTYPESET_PIN5_pos	 	 	 	5	 	 /*--  --*/
#define GPIO_INTTYPESET_PIN6_pos	 	 	 	6	 	 /*--  --*/
#define GPIO_INTTYPESET_PIN7_pos	 	 	 	7	 	 /*--  --*/
#define GPIO_INTTYPESET_PIN8_pos	 	 	 	8	 	 /*--  --*/
#define GPIO_INTTYPESET_PIN9_pos	 	 	 	9	 	 /*--  --*/
#define GPIO_INTTYPESET_PIN10_pos	 	 	 	10	 	 /*--  --*/
#define GPIO_INTTYPESET_PIN11_pos	 	 	 	11	 	 /*--  --*/
#define GPIO_INTTYPESET_PIN12_pos	 	 	 	12	 	 /*--  --*/
#define GPIO_INTTYPESET_PIN13_pos	 	 	 	13	 	 /*--  --*/
#define GPIO_INTTYPESET_PIN14_pos	 	 	 	14	 	 /*--  --*/
#define GPIO_INTTYPESET_PIN15_pos	 	 	 	15	 	 /*--  --*/


#define GPIO_INTTYPESET_PIN0_msk	 	 	 	0x00000001UL
#define GPIO_INTTYPESET_PIN1_msk	 	 	 	0x00000002UL
#define GPIO_INTTYPESET_PIN2_msk	 	 	 	0x00000004UL
#define GPIO_INTTYPESET_PIN3_msk	 	 	 	0x00000008UL
#define GPIO_INTTYPESET_PIN4_msk	 	 	 	0x00000010UL
#define GPIO_INTTYPESET_PIN5_msk	 	 	 	0x00000020UL
#define GPIO_INTTYPESET_PIN6_msk	 	 	 	0x00000040UL
#define GPIO_INTTYPESET_PIN7_msk	 	 	 	0x00000080UL
#define GPIO_INTTYPESET_PIN8_msk	 	 	 	0x00000100UL
#define GPIO_INTTYPESET_PIN9_msk	 	 	 	0x00000200UL
#define GPIO_INTTYPESET_PIN10_msk	 	 	 	0x00000400UL
#define GPIO_INTTYPESET_PIN11_msk	 	 	 	0x00000800UL
#define GPIO_INTTYPESET_PIN12_msk	 	 	 	0x00001000UL
#define GPIO_INTTYPESET_PIN13_msk	 	 	 	0x00002000UL
#define GPIO_INTTYPESET_PIN14_msk	 	 	 	0x00004000UL
#define GPIO_INTTYPESET_PIN15_msk	 	 	 	0x00008000UL


typedef struct {
uint32_t 	 	GPIO_INTTYPESET_PIN0	 	:1;
uint32_t 	 	GPIO_INTTYPESET_PIN1	 	:1;
uint32_t 	 	GPIO_INTTYPESET_PIN2	 	:1;
uint32_t 	 	GPIO_INTTYPESET_PIN3	 	:1;
uint32_t 	 	GPIO_INTTYPESET_PIN4	 	:1;
uint32_t 	 	GPIO_INTTYPESET_PIN5	 	:1;
uint32_t 	 	GPIO_INTTYPESET_PIN6	 	:1;
uint32_t 	 	GPIO_INTTYPESET_PIN7	 	:1;
uint32_t 	 	GPIO_INTTYPESET_PIN8	 	:1;
uint32_t 	 	GPIO_INTTYPESET_PIN9	 	:1;
uint32_t 	 	GPIO_INTTYPESET_PIN10	 	:1;
uint32_t 	 	GPIO_INTTYPESET_PIN11	 	:1;
uint32_t 	 	GPIO_INTTYPESET_PIN12	 	:1;
uint32_t 	 	GPIO_INTTYPESET_PIN13	 	:1;
uint32_t 	 	GPIO_INTTYPESET_PIN14	 	:1;
uint32_t 	 	GPIO_INTTYPESET_PIN15	 	:1;
uint32_t 	 	 	 	:16;
} t_GPIO_INTTYPESET_bits;


typedef enum { 
 	GPIO_INTTYPESET_PIN0_off		 = 0b0,
	GPIO_INTTYPESET_PIN0_on		 = 0b1,
} t_GPIO_INTTYPESET_PIN0_enum;

typedef enum { 
 	GPIO_INTTYPESET_PIN1_off		 = 0b0,
	GPIO_INTTYPESET_PIN1_on		 = 0b1,
} t_GPIO_INTTYPESET_PIN1_enum;

typedef enum { 
 	GPIO_INTTYPESET_PIN2_off		 = 0b0,
	GPIO_INTTYPESET_PIN2_on		 = 0b1,
} t_GPIO_INTTYPESET_PIN2_enum;

typedef enum { 
 	GPIO_INTTYPESET_PIN3_off		 = 0b0,
	GPIO_INTTYPESET_PIN3_on		 = 0b1,
} t_GPIO_INTTYPESET_PIN3_enum;

typedef enum { 
 	GPIO_INTTYPESET_PIN4_off		 = 0b0,
	GPIO_INTTYPESET_PIN4_on		 = 0b1,
} t_GPIO_INTTYPESET_PIN4_enum;

typedef enum { 
 	GPIO_INTTYPESET_PIN5_off		 = 0b0,
	GPIO_INTTYPESET_PIN5_on		 = 0b1,
} t_GPIO_INTTYPESET_PIN5_enum;

typedef enum { 
 	GPIO_INTTYPESET_PIN6_off		 = 0b0,
	GPIO_INTTYPESET_PIN6_on		 = 0b1,
} t_GPIO_INTTYPESET_PIN6_enum;

typedef enum { 
 	GPIO_INTTYPESET_PIN7_off		 = 0b0,
	GPIO_INTTYPESET_PIN7_on		 = 0b1,
} t_GPIO_INTTYPESET_PIN7_enum;

typedef enum { 
 	GPIO_INTTYPESET_PIN8_off		 = 0b0,
	GPIO_INTTYPESET_PIN8_on		 = 0b1,
} t_GPIO_INTTYPESET_PIN8_enum;

typedef enum { 
 	GPIO_INTTYPESET_PIN9_off		 = 0b0,
	GPIO_INTTYPESET_PIN9_on		 = 0b1,
} t_GPIO_INTTYPESET_PIN9_enum;

typedef enum { 
 	GPIO_INTTYPESET_PIN10_off		 = 0b0,
	GPIO_INTTYPESET_PIN10_on		 = 0b1,
} t_GPIO_INTTYPESET_PIN10_enum;

typedef enum { 
 	GPIO_INTTYPESET_PIN11_off		 = 0b0,
	GPIO_INTTYPESET_PIN11_on		 = 0b1,
} t_GPIO_INTTYPESET_PIN11_enum;

typedef enum { 
 	GPIO_INTTYPESET_PIN12_off		 = 0b0,
	GPIO_INTTYPESET_PIN12_on		 = 0b1,
} t_GPIO_INTTYPESET_PIN12_enum;

typedef enum { 
 	GPIO_INTTYPESET_PIN13_off		 = 0b0,
	GPIO_INTTYPESET_PIN13_on		 = 0b1,
} t_GPIO_INTTYPESET_PIN13_enum;

typedef enum { 
 	GPIO_INTTYPESET_PIN14_off		 = 0b0,
	GPIO_INTTYPESET_PIN14_on		 = 0b1,
} t_GPIO_INTTYPESET_PIN14_enum;

typedef enum { 
 	GPIO_INTTYPESET_PIN15_off		 = 0b0,
	GPIO_INTTYPESET_PIN15_on		 = 0b1,
} t_GPIO_INTTYPESET_PIN15_enum;




#define GPIO_INTTYPECLR	0x2800006c		 /*--  --*/

#define GPIO_INTTYPECLR_VAL_pos	 	 	 	0	 	 /*--  --*/


#define GPIO_INTTYPECLR_VAL_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	GPIO_INTTYPECLR_VAL	 	:16;
uint32_t 	 	 	 	:16;
} t_GPIO_INTTYPECLR_bits;





#define GPIO_INTPOLSET	0x28000070		 /*--  --*/

#define GPIO_INTPOLSET_PIN0_pos	 	 	 	0	 	 /*--  --*/
#define GPIO_INTPOLSET_PIN1_pos	 	 	 	1	 	 /*--  --*/
#define GPIO_INTPOLSET_PIN2_pos	 	 	 	2	 	 /*--  --*/
#define GPIO_INTPOLSET_PIN3_pos	 	 	 	3	 	 /*--  --*/
#define GPIO_INTPOLSET_PIN4_pos	 	 	 	4	 	 /*--  --*/
#define GPIO_INTPOLSET_PIN5_pos	 	 	 	5	 	 /*--  --*/
#define GPIO_INTPOLSET_PIN6_pos	 	 	 	6	 	 /*--  --*/
#define GPIO_INTPOLSET_PIN7_pos	 	 	 	7	 	 /*--  --*/
#define GPIO_INTPOLSET_PIN8_pos	 	 	 	8	 	 /*--  --*/
#define GPIO_INTPOLSET_PIN9_pos	 	 	 	9	 	 /*--  --*/
#define GPIO_INTPOLSET_PIN10_pos	 	 	 	10	 	 /*--  --*/
#define GPIO_INTPOLSET_PIN11_pos	 	 	 	11	 	 /*--  --*/
#define GPIO_INTPOLSET_PIN12_pos	 	 	 	12	 	 /*--  --*/
#define GPIO_INTPOLSET_PIN13_pos	 	 	 	13	 	 /*--  --*/
#define GPIO_INTPOLSET_PIN14_pos	 	 	 	14	 	 /*--  --*/
#define GPIO_INTPOLSET_PIN15_pos	 	 	 	15	 	 /*--  --*/


#define GPIO_INTPOLSET_PIN0_msk	 	 	 	0x00000001UL
#define GPIO_INTPOLSET_PIN1_msk	 	 	 	0x00000002UL
#define GPIO_INTPOLSET_PIN2_msk	 	 	 	0x00000004UL
#define GPIO_INTPOLSET_PIN3_msk	 	 	 	0x00000008UL
#define GPIO_INTPOLSET_PIN4_msk	 	 	 	0x00000010UL
#define GPIO_INTPOLSET_PIN5_msk	 	 	 	0x00000020UL
#define GPIO_INTPOLSET_PIN6_msk	 	 	 	0x00000040UL
#define GPIO_INTPOLSET_PIN7_msk	 	 	 	0x00000080UL
#define GPIO_INTPOLSET_PIN8_msk	 	 	 	0x00000100UL
#define GPIO_INTPOLSET_PIN9_msk	 	 	 	0x00000200UL
#define GPIO_INTPOLSET_PIN10_msk	 	 	 	0x00000400UL
#define GPIO_INTPOLSET_PIN11_msk	 	 	 	0x00000800UL
#define GPIO_INTPOLSET_PIN12_msk	 	 	 	0x00001000UL
#define GPIO_INTPOLSET_PIN13_msk	 	 	 	0x00002000UL
#define GPIO_INTPOLSET_PIN14_msk	 	 	 	0x00004000UL
#define GPIO_INTPOLSET_PIN15_msk	 	 	 	0x00008000UL


typedef struct {
uint32_t 	 	GPIO_INTPOLSET_PIN0	 	:1;
uint32_t 	 	GPIO_INTPOLSET_PIN1	 	:1;
uint32_t 	 	GPIO_INTPOLSET_PIN2	 	:1;
uint32_t 	 	GPIO_INTPOLSET_PIN3	 	:1;
uint32_t 	 	GPIO_INTPOLSET_PIN4	 	:1;
uint32_t 	 	GPIO_INTPOLSET_PIN5	 	:1;
uint32_t 	 	GPIO_INTPOLSET_PIN6	 	:1;
uint32_t 	 	GPIO_INTPOLSET_PIN7	 	:1;
uint32_t 	 	GPIO_INTPOLSET_PIN8	 	:1;
uint32_t 	 	GPIO_INTPOLSET_PIN9	 	:1;
uint32_t 	 	GPIO_INTPOLSET_PIN10	 	:1;
uint32_t 	 	GPIO_INTPOLSET_PIN11	 	:1;
uint32_t 	 	GPIO_INTPOLSET_PIN12	 	:1;
uint32_t 	 	GPIO_INTPOLSET_PIN13	 	:1;
uint32_t 	 	GPIO_INTPOLSET_PIN14	 	:1;
uint32_t 	 	GPIO_INTPOLSET_PIN15	 	:1;
uint32_t 	 	 	 	:16;
} t_GPIO_INTPOLSET_bits;


typedef enum { 
 	GPIO_INTPOLSET_PIN0_off		 = 0b0,
	GPIO_INTPOLSET_PIN0_on		 = 0b1,
} t_GPIO_INTPOLSET_PIN0_enum;

typedef enum { 
 	GPIO_INTPOLSET_PIN1_off		 = 0b0,
	GPIO_INTPOLSET_PIN1_on		 = 0b1,
} t_GPIO_INTPOLSET_PIN1_enum;

typedef enum { 
 	GPIO_INTPOLSET_PIN2_off		 = 0b0,
	GPIO_INTPOLSET_PIN2_on		 = 0b1,
} t_GPIO_INTPOLSET_PIN2_enum;

typedef enum { 
 	GPIO_INTPOLSET_PIN3_off		 = 0b0,
	GPIO_INTPOLSET_PIN3_on		 = 0b1,
} t_GPIO_INTPOLSET_PIN3_enum;

typedef enum { 
 	GPIO_INTPOLSET_PIN4_off		 = 0b0,
	GPIO_INTPOLSET_PIN4_on		 = 0b1,
} t_GPIO_INTPOLSET_PIN4_enum;

typedef enum { 
 	GPIO_INTPOLSET_PIN5_off		 = 0b0,
	GPIO_INTPOLSET_PIN5_on		 = 0b1,
} t_GPIO_INTPOLSET_PIN5_enum;

typedef enum { 
 	GPIO_INTPOLSET_PIN6_off		 = 0b0,
	GPIO_INTPOLSET_PIN6_on		 = 0b1,
} t_GPIO_INTPOLSET_PIN6_enum;

typedef enum { 
 	GPIO_INTPOLSET_PIN7_off		 = 0b0,
	GPIO_INTPOLSET_PIN7_on		 = 0b1,
} t_GPIO_INTPOLSET_PIN7_enum;

typedef enum { 
 	GPIO_INTPOLSET_PIN8_off		 = 0b0,
	GPIO_INTPOLSET_PIN8_on		 = 0b1,
} t_GPIO_INTPOLSET_PIN8_enum;

typedef enum { 
 	GPIO_INTPOLSET_PIN9_off		 = 0b0,
	GPIO_INTPOLSET_PIN9_on		 = 0b1,
} t_GPIO_INTPOLSET_PIN9_enum;

typedef enum { 
 	GPIO_INTPOLSET_PIN10_off		 = 0b0,
	GPIO_INTPOLSET_PIN10_on		 = 0b1,
} t_GPIO_INTPOLSET_PIN10_enum;

typedef enum { 
 	GPIO_INTPOLSET_PIN11_off		 = 0b0,
	GPIO_INTPOLSET_PIN11_on		 = 0b1,
} t_GPIO_INTPOLSET_PIN11_enum;

typedef enum { 
 	GPIO_INTPOLSET_PIN12_off		 = 0b0,
	GPIO_INTPOLSET_PIN12_on		 = 0b1,
} t_GPIO_INTPOLSET_PIN12_enum;

typedef enum { 
 	GPIO_INTPOLSET_PIN13_off		 = 0b0,
	GPIO_INTPOLSET_PIN13_on		 = 0b1,
} t_GPIO_INTPOLSET_PIN13_enum;

typedef enum { 
 	GPIO_INTPOLSET_PIN14_off		 = 0b0,
	GPIO_INTPOLSET_PIN14_on		 = 0b1,
} t_GPIO_INTPOLSET_PIN14_enum;

typedef enum { 
 	GPIO_INTPOLSET_PIN15_off		 = 0b0,
	GPIO_INTPOLSET_PIN15_on		 = 0b1,
} t_GPIO_INTPOLSET_PIN15_enum;




#define GPIO_INTPOLCLR	0x28000074		 /*--  --*/

#define GPIO_INTPOLCLR_VAL_pos	 	 	 	0	 	 /*--  --*/


#define GPIO_INTPOLCLR_VAL_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	GPIO_INTPOLCLR_VAL	 	:16;
uint32_t 	 	 	 	:16;
} t_GPIO_INTPOLCLR_bits;





#define GPIO_INTEDGESET	0x28000078		 /*--  --*/

#define GPIO_INTEDGESET_PIN0_pos	 	 	 	0	 	 /*--  --*/
#define GPIO_INTEDGESET_PIN1_pos	 	 	 	1	 	 /*--  --*/
#define GPIO_INTEDGESET_PIN2_pos	 	 	 	2	 	 /*--  --*/
#define GPIO_INTEDGESET_PIN3_pos	 	 	 	3	 	 /*--  --*/
#define GPIO_INTEDGESET_PIN4_pos	 	 	 	4	 	 /*--  --*/
#define GPIO_INTEDGESET_PIN5_pos	 	 	 	5	 	 /*--  --*/
#define GPIO_INTEDGESET_PIN6_pos	 	 	 	6	 	 /*--  --*/
#define GPIO_INTEDGESET_PIN7_pos	 	 	 	7	 	 /*--  --*/
#define GPIO_INTEDGESET_PIN8_pos	 	 	 	8	 	 /*--  --*/
#define GPIO_INTEDGESET_PIN9_pos	 	 	 	9	 	 /*--  --*/
#define GPIO_INTEDGESET_PIN10_pos	 	 	 	10	 	 /*--  --*/
#define GPIO_INTEDGESET_PIN11_pos	 	 	 	11	 	 /*--  --*/
#define GPIO_INTEDGESET_PIN12_pos	 	 	 	12	 	 /*--  --*/
#define GPIO_INTEDGESET_PIN13_pos	 	 	 	13	 	 /*--  --*/
#define GPIO_INTEDGESET_PIN14_pos	 	 	 	14	 	 /*--  --*/
#define GPIO_INTEDGESET_PIN15_pos	 	 	 	15	 	 /*--  --*/


#define GPIO_INTEDGESET_PIN0_msk	 	 	 	0x00000001UL
#define GPIO_INTEDGESET_PIN1_msk	 	 	 	0x00000002UL
#define GPIO_INTEDGESET_PIN2_msk	 	 	 	0x00000004UL
#define GPIO_INTEDGESET_PIN3_msk	 	 	 	0x00000008UL
#define GPIO_INTEDGESET_PIN4_msk	 	 	 	0x00000010UL
#define GPIO_INTEDGESET_PIN5_msk	 	 	 	0x00000020UL
#define GPIO_INTEDGESET_PIN6_msk	 	 	 	0x00000040UL
#define GPIO_INTEDGESET_PIN7_msk	 	 	 	0x00000080UL
#define GPIO_INTEDGESET_PIN8_msk	 	 	 	0x00000100UL
#define GPIO_INTEDGESET_PIN9_msk	 	 	 	0x00000200UL
#define GPIO_INTEDGESET_PIN10_msk	 	 	 	0x00000400UL
#define GPIO_INTEDGESET_PIN11_msk	 	 	 	0x00000800UL
#define GPIO_INTEDGESET_PIN12_msk	 	 	 	0x00001000UL
#define GPIO_INTEDGESET_PIN13_msk	 	 	 	0x00002000UL
#define GPIO_INTEDGESET_PIN14_msk	 	 	 	0x00004000UL
#define GPIO_INTEDGESET_PIN15_msk	 	 	 	0x00008000UL


typedef struct {
uint32_t 	 	GPIO_INTEDGESET_PIN0	 	:1;
uint32_t 	 	GPIO_INTEDGESET_PIN1	 	:1;
uint32_t 	 	GPIO_INTEDGESET_PIN2	 	:1;
uint32_t 	 	GPIO_INTEDGESET_PIN3	 	:1;
uint32_t 	 	GPIO_INTEDGESET_PIN4	 	:1;
uint32_t 	 	GPIO_INTEDGESET_PIN5	 	:1;
uint32_t 	 	GPIO_INTEDGESET_PIN6	 	:1;
uint32_t 	 	GPIO_INTEDGESET_PIN7	 	:1;
uint32_t 	 	GPIO_INTEDGESET_PIN8	 	:1;
uint32_t 	 	GPIO_INTEDGESET_PIN9	 	:1;
uint32_t 	 	GPIO_INTEDGESET_PIN10	 	:1;
uint32_t 	 	GPIO_INTEDGESET_PIN11	 	:1;
uint32_t 	 	GPIO_INTEDGESET_PIN12	 	:1;
uint32_t 	 	GPIO_INTEDGESET_PIN13	 	:1;
uint32_t 	 	GPIO_INTEDGESET_PIN14	 	:1;
uint32_t 	 	GPIO_INTEDGESET_PIN15	 	:1;
uint32_t 	 	 	 	:16;
} t_GPIO_INTEDGESET_bits;


typedef enum { 
 	GPIO_INTEDGESET_PIN0_off		 = 0b0,
	GPIO_INTEDGESET_PIN0_on		 = 0b1,
} t_GPIO_INTEDGESET_PIN0_enum;

typedef enum { 
 	GPIO_INTEDGESET_PIN1_off		 = 0b0,
	GPIO_INTEDGESET_PIN1_on		 = 0b1,
} t_GPIO_INTEDGESET_PIN1_enum;

typedef enum { 
 	GPIO_INTEDGESET_PIN2_off		 = 0b0,
	GPIO_INTEDGESET_PIN2_on		 = 0b1,
} t_GPIO_INTEDGESET_PIN2_enum;

typedef enum { 
 	GPIO_INTEDGESET_PIN3_off		 = 0b0,
	GPIO_INTEDGESET_PIN3_on		 = 0b1,
} t_GPIO_INTEDGESET_PIN3_enum;

typedef enum { 
 	GPIO_INTEDGESET_PIN4_off		 = 0b0,
	GPIO_INTEDGESET_PIN4_on		 = 0b1,
} t_GPIO_INTEDGESET_PIN4_enum;

typedef enum { 
 	GPIO_INTEDGESET_PIN5_off		 = 0b0,
	GPIO_INTEDGESET_PIN5_on		 = 0b1,
} t_GPIO_INTEDGESET_PIN5_enum;

typedef enum { 
 	GPIO_INTEDGESET_PIN6_off		 = 0b0,
	GPIO_INTEDGESET_PIN6_on		 = 0b1,
} t_GPIO_INTEDGESET_PIN6_enum;

typedef enum { 
 	GPIO_INTEDGESET_PIN7_off		 = 0b0,
	GPIO_INTEDGESET_PIN7_on		 = 0b1,
} t_GPIO_INTEDGESET_PIN7_enum;

typedef enum { 
 	GPIO_INTEDGESET_PIN8_off		 = 0b0,
	GPIO_INTEDGESET_PIN8_on		 = 0b1,
} t_GPIO_INTEDGESET_PIN8_enum;

typedef enum { 
 	GPIO_INTEDGESET_PIN9_off		 = 0b0,
	GPIO_INTEDGESET_PIN9_on		 = 0b1,
} t_GPIO_INTEDGESET_PIN9_enum;

typedef enum { 
 	GPIO_INTEDGESET_PIN10_off		 = 0b0,
	GPIO_INTEDGESET_PIN10_on		 = 0b1,
} t_GPIO_INTEDGESET_PIN10_enum;

typedef enum { 
 	GPIO_INTEDGESET_PIN11_off		 = 0b0,
	GPIO_INTEDGESET_PIN11_on		 = 0b1,
} t_GPIO_INTEDGESET_PIN11_enum;

typedef enum { 
 	GPIO_INTEDGESET_PIN12_off		 = 0b0,
	GPIO_INTEDGESET_PIN12_on		 = 0b1,
} t_GPIO_INTEDGESET_PIN12_enum;

typedef enum { 
 	GPIO_INTEDGESET_PIN13_off		 = 0b0,
	GPIO_INTEDGESET_PIN13_on		 = 0b1,
} t_GPIO_INTEDGESET_PIN13_enum;

typedef enum { 
 	GPIO_INTEDGESET_PIN14_off		 = 0b0,
	GPIO_INTEDGESET_PIN14_on		 = 0b1,
} t_GPIO_INTEDGESET_PIN14_enum;

typedef enum { 
 	GPIO_INTEDGESET_PIN15_off		 = 0b0,
	GPIO_INTEDGESET_PIN15_on		 = 0b1,
} t_GPIO_INTEDGESET_PIN15_enum;




#define GPIO_INTEDGECLR	0x2800007c		 /*--  --*/

#define GPIO_INTEDGECLR_VAL_pos	 	 	 	0	 	 /*--  --*/


#define GPIO_INTEDGECLR_VAL_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	GPIO_INTEDGECLR_VAL	 	:16;
uint32_t 	 	 	 	:16;
} t_GPIO_INTEDGECLR_bits;





#define GPIO_INTSTATUS	0x28000080		 /*--  --*/

#define GPIO_INTSTATUS_PIN0_pos	 	 	 	0	 	 /*--  --*/
#define GPIO_INTSTATUS_PIN1_pos	 	 	 	1	 	 /*--  --*/
#define GPIO_INTSTATUS_PIN2_pos	 	 	 	2	 	 /*--  --*/
#define GPIO_INTSTATUS_PIN3_pos	 	 	 	3	 	 /*--  --*/
#define GPIO_INTSTATUS_PIN4_pos	 	 	 	4	 	 /*--  --*/
#define GPIO_INTSTATUS_PIN5_pos	 	 	 	5	 	 /*--  --*/
#define GPIO_INTSTATUS_PIN6_pos	 	 	 	6	 	 /*--  --*/
#define GPIO_INTSTATUS_PIN7_pos	 	 	 	7	 	 /*--  --*/
#define GPIO_INTSTATUS_PIN8_pos	 	 	 	8	 	 /*--  --*/
#define GPIO_INTSTATUS_PIN9_pos	 	 	 	9	 	 /*--  --*/
#define GPIO_INTSTATUS_PIN10_pos	 	 	 	10	 	 /*--  --*/
#define GPIO_INTSTATUS_PIN11_pos	 	 	 	11	 	 /*--  --*/
#define GPIO_INTSTATUS_PIN12_pos	 	 	 	12	 	 /*--  --*/
#define GPIO_INTSTATUS_PIN13_pos	 	 	 	13	 	 /*--  --*/
#define GPIO_INTSTATUS_PIN14_pos	 	 	 	14	 	 /*--  --*/
#define GPIO_INTSTATUS_PIN15_pos	 	 	 	15	 	 /*--  --*/


#define GPIO_INTSTATUS_PIN0_msk	 	 	 	0x00000001UL
#define GPIO_INTSTATUS_PIN1_msk	 	 	 	0x00000002UL
#define GPIO_INTSTATUS_PIN2_msk	 	 	 	0x00000004UL
#define GPIO_INTSTATUS_PIN3_msk	 	 	 	0x00000008UL
#define GPIO_INTSTATUS_PIN4_msk	 	 	 	0x00000010UL
#define GPIO_INTSTATUS_PIN5_msk	 	 	 	0x00000020UL
#define GPIO_INTSTATUS_PIN6_msk	 	 	 	0x00000040UL
#define GPIO_INTSTATUS_PIN7_msk	 	 	 	0x00000080UL
#define GPIO_INTSTATUS_PIN8_msk	 	 	 	0x00000100UL
#define GPIO_INTSTATUS_PIN9_msk	 	 	 	0x00000200UL
#define GPIO_INTSTATUS_PIN10_msk	 	 	 	0x00000400UL
#define GPIO_INTSTATUS_PIN11_msk	 	 	 	0x00000800UL
#define GPIO_INTSTATUS_PIN12_msk	 	 	 	0x00001000UL
#define GPIO_INTSTATUS_PIN13_msk	 	 	 	0x00002000UL
#define GPIO_INTSTATUS_PIN14_msk	 	 	 	0x00004000UL
#define GPIO_INTSTATUS_PIN15_msk	 	 	 	0x00008000UL


typedef struct {
uint32_t 	 	GPIO_INTSTATUS_PIN0	 	:1;
uint32_t 	 	GPIO_INTSTATUS_PIN1	 	:1;
uint32_t 	 	GPIO_INTSTATUS_PIN2	 	:1;
uint32_t 	 	GPIO_INTSTATUS_PIN3	 	:1;
uint32_t 	 	GPIO_INTSTATUS_PIN4	 	:1;
uint32_t 	 	GPIO_INTSTATUS_PIN5	 	:1;
uint32_t 	 	GPIO_INTSTATUS_PIN6	 	:1;
uint32_t 	 	GPIO_INTSTATUS_PIN7	 	:1;
uint32_t 	 	GPIO_INTSTATUS_PIN8	 	:1;
uint32_t 	 	GPIO_INTSTATUS_PIN9	 	:1;
uint32_t 	 	GPIO_INTSTATUS_PIN10	 	:1;
uint32_t 	 	GPIO_INTSTATUS_PIN11	 	:1;
uint32_t 	 	GPIO_INTSTATUS_PIN12	 	:1;
uint32_t 	 	GPIO_INTSTATUS_PIN13	 	:1;
uint32_t 	 	GPIO_INTSTATUS_PIN14	 	:1;
uint32_t 	 	GPIO_INTSTATUS_PIN15	 	:1;
uint32_t 	 	 	 	:16;
} t_GPIO_INTSTATUS_bits;


typedef enum { 
 	GPIO_INTSTATUS_PIN0_off		 = 0b0,
	GPIO_INTSTATUS_PIN0_on		 = 0b1,
} t_GPIO_INTSTATUS_PIN0_enum;

typedef enum { 
 	GPIO_INTSTATUS_PIN1_off		 = 0b0,
	GPIO_INTSTATUS_PIN1_on		 = 0b1,
} t_GPIO_INTSTATUS_PIN1_enum;

typedef enum { 
 	GPIO_INTSTATUS_PIN2_off		 = 0b0,
	GPIO_INTSTATUS_PIN2_on		 = 0b1,
} t_GPIO_INTSTATUS_PIN2_enum;

typedef enum { 
 	GPIO_INTSTATUS_PIN3_off		 = 0b0,
	GPIO_INTSTATUS_PIN3_on		 = 0b1,
} t_GPIO_INTSTATUS_PIN3_enum;

typedef enum { 
 	GPIO_INTSTATUS_PIN4_off		 = 0b0,
	GPIO_INTSTATUS_PIN4_on		 = 0b1,
} t_GPIO_INTSTATUS_PIN4_enum;

typedef enum { 
 	GPIO_INTSTATUS_PIN5_off		 = 0b0,
	GPIO_INTSTATUS_PIN5_on		 = 0b1,
} t_GPIO_INTSTATUS_PIN5_enum;

typedef enum { 
 	GPIO_INTSTATUS_PIN6_off		 = 0b0,
	GPIO_INTSTATUS_PIN6_on		 = 0b1,
} t_GPIO_INTSTATUS_PIN6_enum;

typedef enum { 
 	GPIO_INTSTATUS_PIN7_off		 = 0b0,
	GPIO_INTSTATUS_PIN7_on		 = 0b1,
} t_GPIO_INTSTATUS_PIN7_enum;

typedef enum { 
 	GPIO_INTSTATUS_PIN8_off		 = 0b0,
	GPIO_INTSTATUS_PIN8_on		 = 0b1,
} t_GPIO_INTSTATUS_PIN8_enum;

typedef enum { 
 	GPIO_INTSTATUS_PIN9_off		 = 0b0,
	GPIO_INTSTATUS_PIN9_on		 = 0b1,
} t_GPIO_INTSTATUS_PIN9_enum;

typedef enum { 
 	GPIO_INTSTATUS_PIN10_off		 = 0b0,
	GPIO_INTSTATUS_PIN10_on		 = 0b1,
} t_GPIO_INTSTATUS_PIN10_enum;

typedef enum { 
 	GPIO_INTSTATUS_PIN11_off		 = 0b0,
	GPIO_INTSTATUS_PIN11_on		 = 0b1,
} t_GPIO_INTSTATUS_PIN11_enum;

typedef enum { 
 	GPIO_INTSTATUS_PIN12_off		 = 0b0,
	GPIO_INTSTATUS_PIN12_on		 = 0b1,
} t_GPIO_INTSTATUS_PIN12_enum;

typedef enum { 
 	GPIO_INTSTATUS_PIN13_off		 = 0b0,
	GPIO_INTSTATUS_PIN13_on		 = 0b1,
} t_GPIO_INTSTATUS_PIN13_enum;

typedef enum { 
 	GPIO_INTSTATUS_PIN14_off		 = 0b0,
	GPIO_INTSTATUS_PIN14_on		 = 0b1,
} t_GPIO_INTSTATUS_PIN14_enum;

typedef enum { 
 	GPIO_INTSTATUS_PIN15_off		 = 0b0,
	GPIO_INTSTATUS_PIN15_on		 = 0b1,
} t_GPIO_INTSTATUS_PIN15_enum;




#define GPIO_DMAREQSET	0x28000084		 /*--  --*/

#define GPIO_DMAREQSET_PIN0_pos	 	 	 	0	 	 /*--  --*/
#define GPIO_DMAREQSET_PIN1_pos	 	 	 	1	 	 /*--  --*/
#define GPIO_DMAREQSET_PIN2_pos	 	 	 	2	 	 /*--  --*/
#define GPIO_DMAREQSET_PIN3_pos	 	 	 	3	 	 /*--  --*/
#define GPIO_DMAREQSET_PIN4_pos	 	 	 	4	 	 /*--  --*/
#define GPIO_DMAREQSET_PIN5_pos	 	 	 	5	 	 /*--  --*/
#define GPIO_DMAREQSET_PIN6_pos	 	 	 	6	 	 /*--  --*/
#define GPIO_DMAREQSET_PIN7_pos	 	 	 	7	 	 /*--  --*/
#define GPIO_DMAREQSET_PIN8_pos	 	 	 	8	 	 /*--  --*/
#define GPIO_DMAREQSET_PIN9_pos	 	 	 	9	 	 /*--  --*/
#define GPIO_DMAREQSET_PIN10_pos	 	 	 	10	 	 /*--  --*/
#define GPIO_DMAREQSET_PIN11_pos	 	 	 	11	 	 /*--  --*/
#define GPIO_DMAREQSET_PIN12_pos	 	 	 	12	 	 /*--  --*/
#define GPIO_DMAREQSET_PIN13_pos	 	 	 	13	 	 /*--  --*/
#define GPIO_DMAREQSET_PIN14_pos	 	 	 	14	 	 /*--  --*/
#define GPIO_DMAREQSET_PIN15_pos	 	 	 	15	 	 /*--  --*/


#define GPIO_DMAREQSET_PIN0_msk	 	 	 	0x00000001UL
#define GPIO_DMAREQSET_PIN1_msk	 	 	 	0x00000002UL
#define GPIO_DMAREQSET_PIN2_msk	 	 	 	0x00000004UL
#define GPIO_DMAREQSET_PIN3_msk	 	 	 	0x00000008UL
#define GPIO_DMAREQSET_PIN4_msk	 	 	 	0x00000010UL
#define GPIO_DMAREQSET_PIN5_msk	 	 	 	0x00000020UL
#define GPIO_DMAREQSET_PIN6_msk	 	 	 	0x00000040UL
#define GPIO_DMAREQSET_PIN7_msk	 	 	 	0x00000080UL
#define GPIO_DMAREQSET_PIN8_msk	 	 	 	0x00000100UL
#define GPIO_DMAREQSET_PIN9_msk	 	 	 	0x00000200UL
#define GPIO_DMAREQSET_PIN10_msk	 	 	 	0x00000400UL
#define GPIO_DMAREQSET_PIN11_msk	 	 	 	0x00000800UL
#define GPIO_DMAREQSET_PIN12_msk	 	 	 	0x00001000UL
#define GPIO_DMAREQSET_PIN13_msk	 	 	 	0x00002000UL
#define GPIO_DMAREQSET_PIN14_msk	 	 	 	0x00004000UL
#define GPIO_DMAREQSET_PIN15_msk	 	 	 	0x00008000UL


typedef struct {
uint32_t 	 	GPIO_DMAREQSET_PIN0	 	:1;
uint32_t 	 	GPIO_DMAREQSET_PIN1	 	:1;
uint32_t 	 	GPIO_DMAREQSET_PIN2	 	:1;
uint32_t 	 	GPIO_DMAREQSET_PIN3	 	:1;
uint32_t 	 	GPIO_DMAREQSET_PIN4	 	:1;
uint32_t 	 	GPIO_DMAREQSET_PIN5	 	:1;
uint32_t 	 	GPIO_DMAREQSET_PIN6	 	:1;
uint32_t 	 	GPIO_DMAREQSET_PIN7	 	:1;
uint32_t 	 	GPIO_DMAREQSET_PIN8	 	:1;
uint32_t 	 	GPIO_DMAREQSET_PIN9	 	:1;
uint32_t 	 	GPIO_DMAREQSET_PIN10	 	:1;
uint32_t 	 	GPIO_DMAREQSET_PIN11	 	:1;
uint32_t 	 	GPIO_DMAREQSET_PIN12	 	:1;
uint32_t 	 	GPIO_DMAREQSET_PIN13	 	:1;
uint32_t 	 	GPIO_DMAREQSET_PIN14	 	:1;
uint32_t 	 	GPIO_DMAREQSET_PIN15	 	:1;
uint32_t 	 	 	 	:16;
} t_GPIO_DMAREQSET_bits;


typedef enum { 
 	GPIO_DMAREQSET_PIN0_off		 = 0b0,
	GPIO_DMAREQSET_PIN0_on		 = 0b1,
} t_GPIO_DMAREQSET_PIN0_enum;

typedef enum { 
 	GPIO_DMAREQSET_PIN1_off		 = 0b0,
	GPIO_DMAREQSET_PIN1_on		 = 0b1,
} t_GPIO_DMAREQSET_PIN1_enum;

typedef enum { 
 	GPIO_DMAREQSET_PIN2_off		 = 0b0,
	GPIO_DMAREQSET_PIN2_on		 = 0b1,
} t_GPIO_DMAREQSET_PIN2_enum;

typedef enum { 
 	GPIO_DMAREQSET_PIN3_off		 = 0b0,
	GPIO_DMAREQSET_PIN3_on		 = 0b1,
} t_GPIO_DMAREQSET_PIN3_enum;

typedef enum { 
 	GPIO_DMAREQSET_PIN4_off		 = 0b0,
	GPIO_DMAREQSET_PIN4_on		 = 0b1,
} t_GPIO_DMAREQSET_PIN4_enum;

typedef enum { 
 	GPIO_DMAREQSET_PIN5_off		 = 0b0,
	GPIO_DMAREQSET_PIN5_on		 = 0b1,
} t_GPIO_DMAREQSET_PIN5_enum;

typedef enum { 
 	GPIO_DMAREQSET_PIN6_off		 = 0b0,
	GPIO_DMAREQSET_PIN6_on		 = 0b1,
} t_GPIO_DMAREQSET_PIN6_enum;

typedef enum { 
 	GPIO_DMAREQSET_PIN7_off		 = 0b0,
	GPIO_DMAREQSET_PIN7_on		 = 0b1,
} t_GPIO_DMAREQSET_PIN7_enum;

typedef enum { 
 	GPIO_DMAREQSET_PIN8_off		 = 0b0,
	GPIO_DMAREQSET_PIN8_on		 = 0b1,
} t_GPIO_DMAREQSET_PIN8_enum;

typedef enum { 
 	GPIO_DMAREQSET_PIN9_off		 = 0b0,
	GPIO_DMAREQSET_PIN9_on		 = 0b1,
} t_GPIO_DMAREQSET_PIN9_enum;

typedef enum { 
 	GPIO_DMAREQSET_PIN10_off		 = 0b0,
	GPIO_DMAREQSET_PIN10_on		 = 0b1,
} t_GPIO_DMAREQSET_PIN10_enum;

typedef enum { 
 	GPIO_DMAREQSET_PIN11_off		 = 0b0,
	GPIO_DMAREQSET_PIN11_on		 = 0b1,
} t_GPIO_DMAREQSET_PIN11_enum;

typedef enum { 
 	GPIO_DMAREQSET_PIN12_off		 = 0b0,
	GPIO_DMAREQSET_PIN12_on		 = 0b1,
} t_GPIO_DMAREQSET_PIN12_enum;

typedef enum { 
 	GPIO_DMAREQSET_PIN13_off		 = 0b0,
	GPIO_DMAREQSET_PIN13_on		 = 0b1,
} t_GPIO_DMAREQSET_PIN13_enum;

typedef enum { 
 	GPIO_DMAREQSET_PIN14_off		 = 0b0,
	GPIO_DMAREQSET_PIN14_on		 = 0b1,
} t_GPIO_DMAREQSET_PIN14_enum;

typedef enum { 
 	GPIO_DMAREQSET_PIN15_off		 = 0b0,
	GPIO_DMAREQSET_PIN15_on		 = 0b1,
} t_GPIO_DMAREQSET_PIN15_enum;




#define GPIO_DMAREQCLR	0x28000088		 /*--  --*/

#define GPIO_DMAREQCLR_VAL_pos	 	 	 	0	 	 /*--  --*/


#define GPIO_DMAREQCLR_VAL_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	GPIO_DMAREQCLR_VAL	 	:16;
uint32_t 	 	 	 	:16;
} t_GPIO_DMAREQCLR_bits;





#define GPIO_ADCSOCSET	0x2800008c		 /*--  --*/

#define GPIO_ADCSOCSET_PIN0_pos	 	 	 	0	 	 /*--  --*/
#define GPIO_ADCSOCSET_PIN1_pos	 	 	 	1	 	 /*--  --*/
#define GPIO_ADCSOCSET_PIN2_pos	 	 	 	2	 	 /*--  --*/
#define GPIO_ADCSOCSET_PIN3_pos	 	 	 	3	 	 /*--  --*/
#define GPIO_ADCSOCSET_PIN4_pos	 	 	 	4	 	 /*--  --*/
#define GPIO_ADCSOCSET_PIN5_pos	 	 	 	5	 	 /*--  --*/
#define GPIO_ADCSOCSET_PIN6_pos	 	 	 	6	 	 /*--  --*/
#define GPIO_ADCSOCSET_PIN7_pos	 	 	 	7	 	 /*--  --*/
#define GPIO_ADCSOCSET_PIN8_pos	 	 	 	8	 	 /*--  --*/
#define GPIO_ADCSOCSET_PIN9_pos	 	 	 	9	 	 /*--  --*/
#define GPIO_ADCSOCSET_PIN10_pos	 	 	 	10	 	 /*--  --*/
#define GPIO_ADCSOCSET_PIN11_pos	 	 	 	11	 	 /*--  --*/
#define GPIO_ADCSOCSET_PIN12_pos	 	 	 	12	 	 /*--  --*/
#define GPIO_ADCSOCSET_PIN13_pos	 	 	 	13	 	 /*--  --*/
#define GPIO_ADCSOCSET_PIN14_pos	 	 	 	14	 	 /*--  --*/
#define GPIO_ADCSOCSET_PIN15_pos	 	 	 	15	 	 /*--  --*/


#define GPIO_ADCSOCSET_PIN0_msk	 	 	 	0x00000001UL
#define GPIO_ADCSOCSET_PIN1_msk	 	 	 	0x00000002UL
#define GPIO_ADCSOCSET_PIN2_msk	 	 	 	0x00000004UL
#define GPIO_ADCSOCSET_PIN3_msk	 	 	 	0x00000008UL
#define GPIO_ADCSOCSET_PIN4_msk	 	 	 	0x00000010UL
#define GPIO_ADCSOCSET_PIN5_msk	 	 	 	0x00000020UL
#define GPIO_ADCSOCSET_PIN6_msk	 	 	 	0x00000040UL
#define GPIO_ADCSOCSET_PIN7_msk	 	 	 	0x00000080UL
#define GPIO_ADCSOCSET_PIN8_msk	 	 	 	0x00000100UL
#define GPIO_ADCSOCSET_PIN9_msk	 	 	 	0x00000200UL
#define GPIO_ADCSOCSET_PIN10_msk	 	 	 	0x00000400UL
#define GPIO_ADCSOCSET_PIN11_msk	 	 	 	0x00000800UL
#define GPIO_ADCSOCSET_PIN12_msk	 	 	 	0x00001000UL
#define GPIO_ADCSOCSET_PIN13_msk	 	 	 	0x00002000UL
#define GPIO_ADCSOCSET_PIN14_msk	 	 	 	0x00004000UL
#define GPIO_ADCSOCSET_PIN15_msk	 	 	 	0x00008000UL


typedef struct {
uint32_t 	 	GPIO_ADCSOCSET_PIN0	 	:1;
uint32_t 	 	GPIO_ADCSOCSET_PIN1	 	:1;
uint32_t 	 	GPIO_ADCSOCSET_PIN2	 	:1;
uint32_t 	 	GPIO_ADCSOCSET_PIN3	 	:1;
uint32_t 	 	GPIO_ADCSOCSET_PIN4	 	:1;
uint32_t 	 	GPIO_ADCSOCSET_PIN5	 	:1;
uint32_t 	 	GPIO_ADCSOCSET_PIN6	 	:1;
uint32_t 	 	GPIO_ADCSOCSET_PIN7	 	:1;
uint32_t 	 	GPIO_ADCSOCSET_PIN8	 	:1;
uint32_t 	 	GPIO_ADCSOCSET_PIN9	 	:1;
uint32_t 	 	GPIO_ADCSOCSET_PIN10	 	:1;
uint32_t 	 	GPIO_ADCSOCSET_PIN11	 	:1;
uint32_t 	 	GPIO_ADCSOCSET_PIN12	 	:1;
uint32_t 	 	GPIO_ADCSOCSET_PIN13	 	:1;
uint32_t 	 	GPIO_ADCSOCSET_PIN14	 	:1;
uint32_t 	 	GPIO_ADCSOCSET_PIN15	 	:1;
uint32_t 	 	 	 	:16;
} t_GPIO_ADCSOCSET_bits;


typedef enum { 
 	GPIO_ADCSOCSET_PIN0_off		 = 0b0,
	GPIO_ADCSOCSET_PIN0_on		 = 0b1,
} t_GPIO_ADCSOCSET_PIN0_enum;

typedef enum { 
 	GPIO_ADCSOCSET_PIN1_off		 = 0b0,
	GPIO_ADCSOCSET_PIN1_on		 = 0b1,
} t_GPIO_ADCSOCSET_PIN1_enum;

typedef enum { 
 	GPIO_ADCSOCSET_PIN2_off		 = 0b0,
	GPIO_ADCSOCSET_PIN2_on		 = 0b1,
} t_GPIO_ADCSOCSET_PIN2_enum;

typedef enum { 
 	GPIO_ADCSOCSET_PIN3_off		 = 0b0,
	GPIO_ADCSOCSET_PIN3_on		 = 0b1,
} t_GPIO_ADCSOCSET_PIN3_enum;

typedef enum { 
 	GPIO_ADCSOCSET_PIN4_off		 = 0b0,
	GPIO_ADCSOCSET_PIN4_on		 = 0b1,
} t_GPIO_ADCSOCSET_PIN4_enum;

typedef enum { 
 	GPIO_ADCSOCSET_PIN5_off		 = 0b0,
	GPIO_ADCSOCSET_PIN5_on		 = 0b1,
} t_GPIO_ADCSOCSET_PIN5_enum;

typedef enum { 
 	GPIO_ADCSOCSET_PIN6_off		 = 0b0,
	GPIO_ADCSOCSET_PIN6_on		 = 0b1,
} t_GPIO_ADCSOCSET_PIN6_enum;

typedef enum { 
 	GPIO_ADCSOCSET_PIN7_off		 = 0b0,
	GPIO_ADCSOCSET_PIN7_on		 = 0b1,
} t_GPIO_ADCSOCSET_PIN7_enum;

typedef enum { 
 	GPIO_ADCSOCSET_PIN8_off		 = 0b0,
	GPIO_ADCSOCSET_PIN8_on		 = 0b1,
} t_GPIO_ADCSOCSET_PIN8_enum;

typedef enum { 
 	GPIO_ADCSOCSET_PIN9_off		 = 0b0,
	GPIO_ADCSOCSET_PIN9_on		 = 0b1,
} t_GPIO_ADCSOCSET_PIN9_enum;

typedef enum { 
 	GPIO_ADCSOCSET_PIN10_off		 = 0b0,
	GPIO_ADCSOCSET_PIN10_on		 = 0b1,
} t_GPIO_ADCSOCSET_PIN10_enum;

typedef enum { 
 	GPIO_ADCSOCSET_PIN11_off		 = 0b0,
	GPIO_ADCSOCSET_PIN11_on		 = 0b1,
} t_GPIO_ADCSOCSET_PIN11_enum;

typedef enum { 
 	GPIO_ADCSOCSET_PIN12_off		 = 0b0,
	GPIO_ADCSOCSET_PIN12_on		 = 0b1,
} t_GPIO_ADCSOCSET_PIN12_enum;

typedef enum { 
 	GPIO_ADCSOCSET_PIN13_off		 = 0b0,
	GPIO_ADCSOCSET_PIN13_on		 = 0b1,
} t_GPIO_ADCSOCSET_PIN13_enum;

typedef enum { 
 	GPIO_ADCSOCSET_PIN14_off		 = 0b0,
	GPIO_ADCSOCSET_PIN14_on		 = 0b1,
} t_GPIO_ADCSOCSET_PIN14_enum;

typedef enum { 
 	GPIO_ADCSOCSET_PIN15_off		 = 0b0,
	GPIO_ADCSOCSET_PIN15_on		 = 0b1,
} t_GPIO_ADCSOCSET_PIN15_enum;




#define GPIO_ADCSOCCLR	0x28000090		 /*--  --*/

#define GPIO_ADCSOCCLR_VAL_pos	 	 	 	0	 	 /*--  --*/


#define GPIO_ADCSOCCLR_VAL_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	GPIO_ADCSOCCLR_VAL	 	:16;
uint32_t 	 	 	 	:16;
} t_GPIO_ADCSOCCLR_bits;





#define GPIO_LOCKKEY	0x2800009c		 /*--  --*/

#define GPIO_LOCKKEY_VAL_pos	 	 	 	0	 	 /*--  --*/


#define GPIO_LOCKKEY_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	GPIO_LOCKKEY_VAL	 	:32;
} t_GPIO_LOCKKEY_bits;





#define GPIO_LOCKSET	0x280000a0		 /*--  --*/

#define GPIO_LOCKSET_PIN0_pos	 	 	 	0	 	 /*--  --*/
#define GPIO_LOCKSET_PIN1_pos	 	 	 	1	 	 /*--  --*/
#define GPIO_LOCKSET_PIN2_pos	 	 	 	2	 	 /*--  --*/
#define GPIO_LOCKSET_PIN3_pos	 	 	 	3	 	 /*--  --*/
#define GPIO_LOCKSET_PIN4_pos	 	 	 	4	 	 /*--  --*/
#define GPIO_LOCKSET_PIN5_pos	 	 	 	5	 	 /*--  --*/
#define GPIO_LOCKSET_PIN6_pos	 	 	 	6	 	 /*--  --*/
#define GPIO_LOCKSET_PIN7_pos	 	 	 	7	 	 /*--  --*/
#define GPIO_LOCKSET_PIN8_pos	 	 	 	8	 	 /*--  --*/
#define GPIO_LOCKSET_PIN9_pos	 	 	 	9	 	 /*--  --*/
#define GPIO_LOCKSET_PIN10_pos	 	 	 	10	 	 /*--  --*/
#define GPIO_LOCKSET_PIN11_pos	 	 	 	11	 	 /*--  --*/
#define GPIO_LOCKSET_PIN12_pos	 	 	 	12	 	 /*--  --*/
#define GPIO_LOCKSET_PIN13_pos	 	 	 	13	 	 /*--  --*/
#define GPIO_LOCKSET_PIN14_pos	 	 	 	14	 	 /*--  --*/
#define GPIO_LOCKSET_PIN15_pos	 	 	 	15	 	 /*--  --*/


#define GPIO_LOCKSET_PIN0_msk	 	 	 	0x00000001UL
#define GPIO_LOCKSET_PIN1_msk	 	 	 	0x00000002UL
#define GPIO_LOCKSET_PIN2_msk	 	 	 	0x00000004UL
#define GPIO_LOCKSET_PIN3_msk	 	 	 	0x00000008UL
#define GPIO_LOCKSET_PIN4_msk	 	 	 	0x00000010UL
#define GPIO_LOCKSET_PIN5_msk	 	 	 	0x00000020UL
#define GPIO_LOCKSET_PIN6_msk	 	 	 	0x00000040UL
#define GPIO_LOCKSET_PIN7_msk	 	 	 	0x00000080UL
#define GPIO_LOCKSET_PIN8_msk	 	 	 	0x00000100UL
#define GPIO_LOCKSET_PIN9_msk	 	 	 	0x00000200UL
#define GPIO_LOCKSET_PIN10_msk	 	 	 	0x00000400UL
#define GPIO_LOCKSET_PIN11_msk	 	 	 	0x00000800UL
#define GPIO_LOCKSET_PIN12_msk	 	 	 	0x00001000UL
#define GPIO_LOCKSET_PIN13_msk	 	 	 	0x00002000UL
#define GPIO_LOCKSET_PIN14_msk	 	 	 	0x00004000UL
#define GPIO_LOCKSET_PIN15_msk	 	 	 	0x00008000UL


typedef struct {
uint32_t 	 	GPIO_LOCKSET_PIN0	 	:1;
uint32_t 	 	GPIO_LOCKSET_PIN1	 	:1;
uint32_t 	 	GPIO_LOCKSET_PIN2	 	:1;
uint32_t 	 	GPIO_LOCKSET_PIN3	 	:1;
uint32_t 	 	GPIO_LOCKSET_PIN4	 	:1;
uint32_t 	 	GPIO_LOCKSET_PIN5	 	:1;
uint32_t 	 	GPIO_LOCKSET_PIN6	 	:1;
uint32_t 	 	GPIO_LOCKSET_PIN7	 	:1;
uint32_t 	 	GPIO_LOCKSET_PIN8	 	:1;
uint32_t 	 	GPIO_LOCKSET_PIN9	 	:1;
uint32_t 	 	GPIO_LOCKSET_PIN10	 	:1;
uint32_t 	 	GPIO_LOCKSET_PIN11	 	:1;
uint32_t 	 	GPIO_LOCKSET_PIN12	 	:1;
uint32_t 	 	GPIO_LOCKSET_PIN13	 	:1;
uint32_t 	 	GPIO_LOCKSET_PIN14	 	:1;
uint32_t 	 	GPIO_LOCKSET_PIN15	 	:1;
uint32_t 	 	 	 	:16;
} t_GPIO_LOCKSET_bits;


typedef enum { 
 	GPIO_LOCKSET_PIN0_off		 = 0b0,
	GPIO_LOCKSET_PIN0_on		 = 0b1,
} t_GPIO_LOCKSET_PIN0_enum;

typedef enum { 
 	GPIO_LOCKSET_PIN1_off		 = 0b0,
	GPIO_LOCKSET_PIN1_on		 = 0b1,
} t_GPIO_LOCKSET_PIN1_enum;

typedef enum { 
 	GPIO_LOCKSET_PIN2_off		 = 0b0,
	GPIO_LOCKSET_PIN2_on		 = 0b1,
} t_GPIO_LOCKSET_PIN2_enum;

typedef enum { 
 	GPIO_LOCKSET_PIN3_off		 = 0b0,
	GPIO_LOCKSET_PIN3_on		 = 0b1,
} t_GPIO_LOCKSET_PIN3_enum;

typedef enum { 
 	GPIO_LOCKSET_PIN4_off		 = 0b0,
	GPIO_LOCKSET_PIN4_on		 = 0b1,
} t_GPIO_LOCKSET_PIN4_enum;

typedef enum { 
 	GPIO_LOCKSET_PIN5_off		 = 0b0,
	GPIO_LOCKSET_PIN5_on		 = 0b1,
} t_GPIO_LOCKSET_PIN5_enum;

typedef enum { 
 	GPIO_LOCKSET_PIN6_off		 = 0b0,
	GPIO_LOCKSET_PIN6_on		 = 0b1,
} t_GPIO_LOCKSET_PIN6_enum;

typedef enum { 
 	GPIO_LOCKSET_PIN7_off		 = 0b0,
	GPIO_LOCKSET_PIN7_on		 = 0b1,
} t_GPIO_LOCKSET_PIN7_enum;

typedef enum { 
 	GPIO_LOCKSET_PIN8_off		 = 0b0,
	GPIO_LOCKSET_PIN8_on		 = 0b1,
} t_GPIO_LOCKSET_PIN8_enum;

typedef enum { 
 	GPIO_LOCKSET_PIN9_off		 = 0b0,
	GPIO_LOCKSET_PIN9_on		 = 0b1,
} t_GPIO_LOCKSET_PIN9_enum;

typedef enum { 
 	GPIO_LOCKSET_PIN10_off		 = 0b0,
	GPIO_LOCKSET_PIN10_on		 = 0b1,
} t_GPIO_LOCKSET_PIN10_enum;

typedef enum { 
 	GPIO_LOCKSET_PIN11_off		 = 0b0,
	GPIO_LOCKSET_PIN11_on		 = 0b1,
} t_GPIO_LOCKSET_PIN11_enum;

typedef enum { 
 	GPIO_LOCKSET_PIN12_off		 = 0b0,
	GPIO_LOCKSET_PIN12_on		 = 0b1,
} t_GPIO_LOCKSET_PIN12_enum;

typedef enum { 
 	GPIO_LOCKSET_PIN13_off		 = 0b0,
	GPIO_LOCKSET_PIN13_on		 = 0b1,
} t_GPIO_LOCKSET_PIN13_enum;

typedef enum { 
 	GPIO_LOCKSET_PIN14_off		 = 0b0,
	GPIO_LOCKSET_PIN14_on		 = 0b1,
} t_GPIO_LOCKSET_PIN14_enum;

typedef enum { 
 	GPIO_LOCKSET_PIN15_off		 = 0b0,
	GPIO_LOCKSET_PIN15_on		 = 0b1,
} t_GPIO_LOCKSET_PIN15_enum;




#define GPIO_LOCKCLR	0x280000a4		 /*--  --*/

#define GPIO_LOCKCLR_VAL_pos	 	 	 	0	 	 /*--  --*/


#define GPIO_LOCKCLR_VAL_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	GPIO_LOCKCLR_VAL	 	:16;
uint32_t 	 	 	 	:16;
} t_GPIO_LOCKCLR_bits;




typedef struct { 
union {
 __IO uint32_t 	GPIO_DATA_reg;
 __IO t_GPIO_DATA_bits	 GPIO_DATA_bit;
};
union {
 __IO uint32_t 	GPIO_DATAOUT_reg;
 __IO t_GPIO_DATAOUT_bits	 GPIO_DATAOUT_bit;
};
union {
 __IO uint32_t 	GPIO_DATAOUTSET_reg;
 __IO t_GPIO_DATAOUTSET_bits	 GPIO_DATAOUTSET_bit;
};
union {
 __IO uint32_t 	GPIO_DATAOUTCLR_reg;
 __IO t_GPIO_DATAOUTCLR_bits	 GPIO_DATAOUTCLR_bit;
};
union {
 __IO uint32_t 	GPIO_DATAOUTTGL_reg;
 __IO t_GPIO_DATAOUTTGL_bits	 GPIO_DATAOUTTGL_bit;
};
__IO uint32_t reserved0[2];
union {
 __IO uint32_t 	GPIO_INMODE_reg;
 __IO t_GPIO_INMODE_bits	 GPIO_INMODE_bit;
};
union {
 __IO uint32_t 	GPIO_PULLMODE_reg;
 __IO t_GPIO_PULLMODE_bits	 GPIO_PULLMODE_bit;
};
union {
 __IO uint32_t 	GPIO_OUTMODE_reg;
 __IO t_GPIO_OUTMODE_bits	 GPIO_OUTMODE_bit;
};
__IO uint32_t reserved1[1];
union {
 __IO uint32_t 	GPIO_OUTENSET_reg;
 __IO t_GPIO_OUTENSET_bits	 GPIO_OUTENSET_bit;
};
union {
 __IO uint32_t 	GPIO_OUTENCLR_reg;
 __IO t_GPIO_OUTENCLR_bits	 GPIO_OUTENCLR_bit;
};
union {
 __IO uint32_t 	GPIO_ALTFUNCSET_reg;
 __IO t_GPIO_ALTFUNCSET_bits	 GPIO_ALTFUNCSET_bit;
};
union {
 __IO uint32_t 	GPIO_ALTFUNCCLR_reg;
 __IO t_GPIO_ALTFUNCCLR_bits	 GPIO_ALTFUNCCLR_bit;
};
union {
 __IO uint32_t 	GPIO_ALTFUNCNUM_reg;
 __IO t_GPIO_ALTFUNCNUM_bits	 GPIO_ALTFUNCNUM_bit;
};
__IO uint32_t reserved2[1];
union {
 __IO uint32_t 	GPIO_SYNCSET_reg;
 __IO t_GPIO_SYNCSET_bits	 GPIO_SYNCSET_bit;
};
union {
 __IO uint32_t 	GPIO_SYNCCLR_reg;
 __IO t_GPIO_SYNCCLR_bits	 GPIO_SYNCCLR_bit;
};
union {
 __IO uint32_t 	GPIO_QUALSET_reg;
 __IO t_GPIO_QUALSET_bits	 GPIO_QUALSET_bit;
};
union {
 __IO uint32_t 	GPIO_QUALCLR_reg;
 __IO t_GPIO_QUALCLR_bits	 GPIO_QUALCLR_bit;
};
union {
 __IO uint32_t 	GPIO_QUALMODESET_reg;
 __IO t_GPIO_QUALMODESET_bits	 GPIO_QUALMODESET_bit;
};
union {
 __IO uint32_t 	GPIO_QUALMODECLR_reg;
 __IO t_GPIO_QUALMODECLR_bits	 GPIO_QUALMODECLR_bit;
};
union {
 __IO uint32_t 	GPIO_QUALSAMPLE_reg;
 __IO t_GPIO_QUALSAMPLE_bits	 GPIO_QUALSAMPLE_bit;
};
union {
 __IO uint32_t 	GPIO_INTENSET_reg;
 __IO t_GPIO_INTENSET_bits	 GPIO_INTENSET_bit;
};
union {
 __IO uint32_t 	GPIO_INTENCLR_reg;
 __IO t_GPIO_INTENCLR_bits	 GPIO_INTENCLR_bit;
};
union {
 __IO uint32_t 	GPIO_INTTYPESET_reg;
 __IO t_GPIO_INTTYPESET_bits	 GPIO_INTTYPESET_bit;
};
union {
 __IO uint32_t 	GPIO_INTTYPECLR_reg;
 __IO t_GPIO_INTTYPECLR_bits	 GPIO_INTTYPECLR_bit;
};
union {
 __IO uint32_t 	GPIO_INTPOLSET_reg;
 __IO t_GPIO_INTPOLSET_bits	 GPIO_INTPOLSET_bit;
};
union {
 __IO uint32_t 	GPIO_INTPOLCLR_reg;
 __IO t_GPIO_INTPOLCLR_bits	 GPIO_INTPOLCLR_bit;
};
union {
 __IO uint32_t 	GPIO_INTEDGESET_reg;
 __IO t_GPIO_INTEDGESET_bits	 GPIO_INTEDGESET_bit;
};
union {
 __IO uint32_t 	GPIO_INTEDGECLR_reg;
 __IO t_GPIO_INTEDGECLR_bits	 GPIO_INTEDGECLR_bit;
};
union {
 __IO uint32_t 	GPIO_INTSTATUS_reg;
 __IO t_GPIO_INTSTATUS_bits	 GPIO_INTSTATUS_bit;
};
union {
 __IO uint32_t 	GPIO_DMAREQSET_reg;
 __IO t_GPIO_DMAREQSET_bits	 GPIO_DMAREQSET_bit;
};
union {
 __IO uint32_t 	GPIO_DMAREQCLR_reg;
 __IO t_GPIO_DMAREQCLR_bits	 GPIO_DMAREQCLR_bit;
};
union {
 __IO uint32_t 	GPIO_ADCSOCSET_reg;
 __IO t_GPIO_ADCSOCSET_bits	 GPIO_ADCSOCSET_bit;
};
union {
 __IO uint32_t 	GPIO_ADCSOCCLR_reg;
 __IO t_GPIO_ADCSOCCLR_bits	 GPIO_ADCSOCCLR_bit;
};
__IO uint32_t reserved3[2];
union {
 __IO uint32_t 	GPIO_LOCKKEY_reg;
 __IO t_GPIO_LOCKKEY_bits	 GPIO_LOCKKEY_bit;
};
union {
 __IO uint32_t 	GPIO_LOCKSET_reg;
 __IO t_GPIO_LOCKSET_bits	 GPIO_LOCKSET_bit;
};
union {
 __IO uint32_t 	GPIO_LOCKCLR_reg;
 __IO t_GPIO_LOCKCLR_bits	 GPIO_LOCKCLR_bit;
};
} t_GPIO_REG;



#define TMR_CTRL	0x30001000		 /*--  --*/

#define TMR_CTRL_CLR_pos	 	 	 	2	 	 /*--  --*/
#define TMR_CTRL_MODE_pos	 	 	 	4	 	 /*--  --*/
#define TMR_CTRL_DIV_pos	 	 	 	6	 	 /*--  --*/
#define TMR_CTRL_CLKSEL_pos	 	 	 	8	 	 /*--  --*/


#define TMR_CTRL_CLR_msk	 	 	 	0x00000004UL
#define TMR_CTRL_MODE_msk	 	 	 	0x00000030UL
#define TMR_CTRL_DIV_msk	 	 	 	0x000000c0UL
#define TMR_CTRL_CLKSEL_msk	 	 	 	0x00000100UL


typedef struct {
uint32_t 	 	 	 	:2;
uint32_t 	 	TMR_CTRL_CLR	 	:1;
uint32_t 	 	 	 	:1;
uint32_t 	 	TMR_CTRL_MODE	 	:2;
uint32_t 	 	TMR_CTRL_DIV	 	:2;
uint32_t 	 	TMR_CTRL_CLKSEL	 	:1;
uint32_t 	 	 	 	:23;
} t_TMR_CTRL_bits;


typedef enum { 
 	TMR_CTRL_CLR_off		 = 0b0,
	TMR_CTRL_CLR_on		 = 0b1,
} t_TMR_CTRL_CLR_enum;

typedef enum { 
 	TMR_CTRL_MODE_stop		 = 0b00,
	TMR_CTRL_MODE_up		 = 0b01,
	TMR_CTRL_MODE_multiple		 = 0b10,
	TMR_CTRL_MODE_updown		 = 0b11,
} t_TMR_CTRL_MODE_enum;

typedef enum { 
 	TMR_CTRL_DIV_div1		 = 0b00,
	TMR_CTRL_DIV_div2		 = 0b01,
	TMR_CTRL_DIV_div4		 = 0b10,
	TMR_CTRL_DIV_div8		 = 0b11,
} t_TMR_CTRL_DIV_enum;

typedef enum { 
 	TMR_CTRL_CLKSEL_sysclk		 = 0b0,
	TMR_CTRL_CLKSEL_extclk		 = 0b1,
} t_TMR_CTRL_CLKSEL_enum;




#define TMR_COUNT	0x30001004		 /*--  --*/

#define TMR_COUNT_VAL_pos	 	 	 	0	 	 /*--  --*/


#define TMR_COUNT_VAL_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	TMR_COUNT_VAL	 	:16;
uint32_t 	 	 	 	:16;
} t_TMR_COUNT_bits;





#define TMR_IM	0x30001008		 /*--  --*/

#define TMR_IM_TMR_pos	 	 	 	0	 	 /*--  --*/
#define TMR_IM_CAP0_pos	 	 	 	1	 	 /*--  --*/
#define TMR_IM_CAP1_pos	 	 	 	2	 	 /*--  --*/
#define TMR_IM_CAP2_pos	 	 	 	3	 	 /*--  --*/
#define TMR_IM_CAP3_pos	 	 	 	4	 	 /*--  --*/


#define TMR_IM_TMR_msk	 	 	 	0x00000001UL
#define TMR_IM_CAP0_msk	 	 	 	0x00000002UL
#define TMR_IM_CAP1_msk	 	 	 	0x00000004UL
#define TMR_IM_CAP2_msk	 	 	 	0x00000008UL
#define TMR_IM_CAP3_msk	 	 	 	0x00000010UL


typedef struct {
uint32_t 	 	TMR_IM_TMR	 	:1;
uint32_t 	 	TMR_IM_CAP0	 	:1;
uint32_t 	 	TMR_IM_CAP1	 	:1;
uint32_t 	 	TMR_IM_CAP2	 	:1;
uint32_t 	 	TMR_IM_CAP3	 	:1;
uint32_t 	 	 	 	:27;
} t_TMR_IM_bits;


typedef enum { 
 	TMR_IM_TMR_off		 = 0b0,
	TMR_IM_TMR_on		 = 0b1,
} t_TMR_IM_TMR_enum;

typedef enum { 
 	TMR_IM_CAP0_off		 = 0b0,
	TMR_IM_CAP0_on		 = 0b1,
} t_TMR_IM_CAP0_enum;

typedef enum { 
 	TMR_IM_CAP1_off		 = 0b0,
	TMR_IM_CAP1_on		 = 0b1,
} t_TMR_IM_CAP1_enum;

typedef enum { 
 	TMR_IM_CAP2_off		 = 0b0,
	TMR_IM_CAP2_on		 = 0b1,
} t_TMR_IM_CAP2_enum;

typedef enum { 
 	TMR_IM_CAP3_off		 = 0b0,
	TMR_IM_CAP3_on		 = 0b1,
} t_TMR_IM_CAP3_enum;




#define TMR_RIS	0x3000100c		 /*--  --*/

#define TMR_RIS_TMR_pos	 	 	 	0	 	 /*--  --*/
#define TMR_RIS_CAP0_pos	 	 	 	1	 	 /*--  --*/
#define TMR_RIS_CAP1_pos	 	 	 	2	 	 /*--  --*/
#define TMR_RIS_CAP2_pos	 	 	 	3	 	 /*--  --*/
#define TMR_RIS_CAP3_pos	 	 	 	4	 	 /*--  --*/


#define TMR_RIS_TMR_msk	 	 	 	0x00000001UL
#define TMR_RIS_CAP0_msk	 	 	 	0x00000002UL
#define TMR_RIS_CAP1_msk	 	 	 	0x00000004UL
#define TMR_RIS_CAP2_msk	 	 	 	0x00000008UL
#define TMR_RIS_CAP3_msk	 	 	 	0x00000010UL


typedef struct {
uint32_t 	 	TMR_RIS_TMR	 	:1;
uint32_t 	 	TMR_RIS_CAP0	 	:1;
uint32_t 	 	TMR_RIS_CAP1	 	:1;
uint32_t 	 	TMR_RIS_CAP2	 	:1;
uint32_t 	 	TMR_RIS_CAP3	 	:1;
uint32_t 	 	 	 	:27;
} t_TMR_RIS_bits;


typedef enum { 
 	TMR_RIS_TMR_off		 = 0b0,
	TMR_RIS_TMR_on		 = 0b1,
} t_TMR_RIS_TMR_enum;

typedef enum { 
 	TMR_RIS_CAP0_off		 = 0b0,
	TMR_RIS_CAP0_on		 = 0b1,
} t_TMR_RIS_CAP0_enum;

typedef enum { 
 	TMR_RIS_CAP1_off		 = 0b0,
	TMR_RIS_CAP1_on		 = 0b1,
} t_TMR_RIS_CAP1_enum;

typedef enum { 
 	TMR_RIS_CAP2_off		 = 0b0,
	TMR_RIS_CAP2_on		 = 0b1,
} t_TMR_RIS_CAP2_enum;

typedef enum { 
 	TMR_RIS_CAP3_off		 = 0b0,
	TMR_RIS_CAP3_on		 = 0b1,
} t_TMR_RIS_CAP3_enum;




#define TMR_MIS	0x30001010		 /*--  --*/

#define TMR_MIS_TMR_pos	 	 	 	0	 	 /*--  --*/
#define TMR_MIS_CAP0_pos	 	 	 	1	 	 /*--  --*/
#define TMR_MIS_CAP1_pos	 	 	 	2	 	 /*--  --*/
#define TMR_MIS_CAP2_pos	 	 	 	3	 	 /*--  --*/
#define TMR_MIS_CAP3_pos	 	 	 	4	 	 /*--  --*/


#define TMR_MIS_TMR_msk	 	 	 	0x00000001UL
#define TMR_MIS_CAP0_msk	 	 	 	0x00000002UL
#define TMR_MIS_CAP1_msk	 	 	 	0x00000004UL
#define TMR_MIS_CAP2_msk	 	 	 	0x00000008UL
#define TMR_MIS_CAP3_msk	 	 	 	0x00000010UL


typedef struct {
uint32_t 	 	TMR_MIS_TMR	 	:1;
uint32_t 	 	TMR_MIS_CAP0	 	:1;
uint32_t 	 	TMR_MIS_CAP1	 	:1;
uint32_t 	 	TMR_MIS_CAP2	 	:1;
uint32_t 	 	TMR_MIS_CAP3	 	:1;
uint32_t 	 	 	 	:27;
} t_TMR_MIS_bits;


typedef enum { 
 	TMR_MIS_TMR_off		 = 0b0,
	TMR_MIS_TMR_on		 = 0b1,
} t_TMR_MIS_TMR_enum;

typedef enum { 
 	TMR_MIS_CAP0_off		 = 0b0,
	TMR_MIS_CAP0_on		 = 0b1,
} t_TMR_MIS_CAP0_enum;

typedef enum { 
 	TMR_MIS_CAP1_off		 = 0b0,
	TMR_MIS_CAP1_on		 = 0b1,
} t_TMR_MIS_CAP1_enum;

typedef enum { 
 	TMR_MIS_CAP2_off		 = 0b0,
	TMR_MIS_CAP2_on		 = 0b1,
} t_TMR_MIS_CAP2_enum;

typedef enum { 
 	TMR_MIS_CAP3_off		 = 0b0,
	TMR_MIS_CAP3_on		 = 0b1,
} t_TMR_MIS_CAP3_enum;




#define TMR_IC	0x30001014		 /*--  --*/

#define TMR_IC_TMR_pos	 	 	 	0	 	 /*--  --*/
#define TMR_IC_CAP0_pos	 	 	 	1	 	 /*--  --*/
#define TMR_IC_CAP1_pos	 	 	 	2	 	 /*--  --*/
#define TMR_IC_CAP2_pos	 	 	 	3	 	 /*--  --*/
#define TMR_IC_CAP3_pos	 	 	 	4	 	 /*--  --*/


#define TMR_IC_TMR_msk	 	 	 	0x00000001UL
#define TMR_IC_CAP0_msk	 	 	 	0x00000002UL
#define TMR_IC_CAP1_msk	 	 	 	0x00000004UL
#define TMR_IC_CAP2_msk	 	 	 	0x00000008UL
#define TMR_IC_CAP3_msk	 	 	 	0x00000010UL


typedef struct {
uint32_t 	 	TMR_IC_TMR	 	:1;
uint32_t 	 	TMR_IC_CAP0	 	:1;
uint32_t 	 	TMR_IC_CAP1	 	:1;
uint32_t 	 	TMR_IC_CAP2	 	:1;
uint32_t 	 	TMR_IC_CAP3	 	:1;
uint32_t 	 	 	 	:27;
} t_TMR_IC_bits;


typedef enum { 
 	TMR_IC_TMR_off		 = 0b0,
	TMR_IC_TMR_on		 = 0b1,
} t_TMR_IC_TMR_enum;

typedef enum { 
 	TMR_IC_CAP0_off		 = 0b0,
	TMR_IC_CAP0_on		 = 0b1,
} t_TMR_IC_CAP0_enum;

typedef enum { 
 	TMR_IC_CAP1_off		 = 0b0,
	TMR_IC_CAP1_on		 = 0b1,
} t_TMR_IC_CAP1_enum;

typedef enum { 
 	TMR_IC_CAP2_off		 = 0b0,
	TMR_IC_CAP2_on		 = 0b1,
} t_TMR_IC_CAP2_enum;

typedef enum { 
 	TMR_IC_CAP3_off		 = 0b0,
	TMR_IC_CAP3_on		 = 0b1,
} t_TMR_IC_CAP3_enum;




#define TMR_DMA_IM	0x30001038		 /*--  --*/

#define TMR_DMA_IM_TMR_pos	 	 	 	0	 	 /*--  --*/
#define TMR_DMA_IM_CAP0_pos	 	 	 	1	 	 /*--  --*/
#define TMR_DMA_IM_CAP1_pos	 	 	 	2	 	 /*--  --*/
#define TMR_DMA_IM_CAP2_pos	 	 	 	3	 	 /*--  --*/
#define TMR_DMA_IM_CAP3_pos	 	 	 	4	 	 /*--  --*/


#define TMR_DMA_IM_TMR_msk	 	 	 	0x00000001UL
#define TMR_DMA_IM_CAP0_msk	 	 	 	0x00000002UL
#define TMR_DMA_IM_CAP1_msk	 	 	 	0x00000004UL
#define TMR_DMA_IM_CAP2_msk	 	 	 	0x00000008UL
#define TMR_DMA_IM_CAP3_msk	 	 	 	0x00000010UL


typedef struct {
uint32_t 	 	TMR_DMA_IM_TMR	 	:1;
uint32_t 	 	TMR_DMA_IM_CAP0	 	:1;
uint32_t 	 	TMR_DMA_IM_CAP1	 	:1;
uint32_t 	 	TMR_DMA_IM_CAP2	 	:1;
uint32_t 	 	TMR_DMA_IM_CAP3	 	:1;
uint32_t 	 	 	 	:27;
} t_TMR_DMA_IM_bits;


typedef enum { 
 	TMR_DMA_IM_TMR_off		 = 0b0,
	TMR_DMA_IM_TMR_on		 = 0b1,
} t_TMR_DMA_IM_TMR_enum;

typedef enum { 
 	TMR_DMA_IM_CAP0_off		 = 0b0,
	TMR_DMA_IM_CAP0_on		 = 0b1,
} t_TMR_DMA_IM_CAP0_enum;

typedef enum { 
 	TMR_DMA_IM_CAP1_off		 = 0b0,
	TMR_DMA_IM_CAP1_on		 = 0b1,
} t_TMR_DMA_IM_CAP1_enum;

typedef enum { 
 	TMR_DMA_IM_CAP2_off		 = 0b0,
	TMR_DMA_IM_CAP2_on		 = 0b1,
} t_TMR_DMA_IM_CAP2_enum;

typedef enum { 
 	TMR_DMA_IM_CAP3_off		 = 0b0,
	TMR_DMA_IM_CAP3_on		 = 0b1,
} t_TMR_DMA_IM_CAP3_enum;




#define TMR_ADC_IM	0x3000103c		 /*--  --*/

#define TMR_ADC_IM_TMR_pos	 	 	 	0	 	 /*--  --*/
#define TMR_ADC_IM_CAP0_pos	 	 	 	1	 	 /*--  --*/
#define TMR_ADC_IM_CAP1_pos	 	 	 	2	 	 /*--  --*/
#define TMR_ADC_IM_CAP2_pos	 	 	 	3	 	 /*--  --*/
#define TMR_ADC_IM_CAP3_pos	 	 	 	4	 	 /*--  --*/


#define TMR_ADC_IM_TMR_msk	 	 	 	0x00000001UL
#define TMR_ADC_IM_CAP0_msk	 	 	 	0x00000002UL
#define TMR_ADC_IM_CAP1_msk	 	 	 	0x00000004UL
#define TMR_ADC_IM_CAP2_msk	 	 	 	0x00000008UL
#define TMR_ADC_IM_CAP3_msk	 	 	 	0x00000010UL


typedef struct {
uint32_t 	 	TMR_ADC_IM_TMR	 	:1;
uint32_t 	 	TMR_ADC_IM_CAP0	 	:1;
uint32_t 	 	TMR_ADC_IM_CAP1	 	:1;
uint32_t 	 	TMR_ADC_IM_CAP2	 	:1;
uint32_t 	 	TMR_ADC_IM_CAP3	 	:1;
uint32_t 	 	 	 	:27;
} t_TMR_ADC_IM_bits;


typedef enum { 
 	TMR_ADC_IM_TMR_off		 = 0b0,
	TMR_ADC_IM_TMR_on		 = 0b1,
} t_TMR_ADC_IM_TMR_enum;

typedef enum { 
 	TMR_ADC_IM_CAP0_off		 = 0b0,
	TMR_ADC_IM_CAP0_on		 = 0b1,
} t_TMR_ADC_IM_CAP0_enum;

typedef enum { 
 	TMR_ADC_IM_CAP1_off		 = 0b0,
	TMR_ADC_IM_CAP1_on		 = 0b1,
} t_TMR_ADC_IM_CAP1_enum;

typedef enum { 
 	TMR_ADC_IM_CAP2_off		 = 0b0,
	TMR_ADC_IM_CAP2_on		 = 0b1,
} t_TMR_ADC_IM_CAP2_enum;

typedef enum { 
 	TMR_ADC_IM_CAP3_off		 = 0b0,
	TMR_ADC_IM_CAP3_on		 = 0b1,
} t_TMR_ADC_IM_CAP3_enum;



typedef struct { 
union {
 __IO uint32_t 	TMR_CTRL_reg;
 __IO t_TMR_CTRL_bits	 TMR_CTRL_bit;
};
union {
 __IO uint32_t 	TMR_COUNT_reg;
 __IO t_TMR_COUNT_bits	 TMR_COUNT_bit;
};
union {
 __IO uint32_t 	TMR_IM_reg;
 __IO t_TMR_IM_bits	 TMR_IM_bit;
};
union {
 __IO uint32_t 	TMR_RIS_reg;
 __IO t_TMR_RIS_bits	 TMR_RIS_bit;
};
union {
 __IO uint32_t 	TMR_MIS_reg;
 __IO t_TMR_MIS_bits	 TMR_MIS_bit;
};
union {
 __IO uint32_t 	TMR_IC_reg;
 __IO t_TMR_IC_bits	 TMR_IC_bit;
};
__IO uint32_t reserved0[8];
union {
 __IO uint32_t 	TMR_DMA_IM_reg;
 __IO t_TMR_DMA_IM_bits	 TMR_DMA_IM_bit;
};
union {
 __IO uint32_t 	TMR_ADC_IM_reg;
 __IO t_TMR_ADC_IM_bits	 TMR_ADC_IM_bit;
};
} t_TMR_REG;



#define CRC_DR	0x20030000		 /*--  --*/

#define CRC_DR_VAL_pos	 	 	 	0	 	 /*--  --*/


#define CRC_DR_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	CRC_DR_VAL	 	:32;
} t_CRC_DR_bits;





#define CRC_POST	0x20030004		 /*--  --*/

#define CRC_POST_VAL_pos	 	 	 	0	 	 /*--  --*/


#define CRC_POST_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	CRC_POST_VAL	 	:32;
} t_CRC_POST_bits;





#define CRC_CR	0x20030008		 /*--  --*/

#define CRC_CR_RESET_pos	 	 	 	0	 	 /*--  --*/
#define CRC_CR_MODE_pos	 	 	 	1	 	 /*--  --*/
#define CRC_CR_XOROUT_pos	 	 	 	2	 	 /*--  --*/
#define CRC_CR_POLYSIZE_pos	 	 	 	3	 	 /*--  --*/
#define CRC_CR_REV_IN_pos	 	 	 	5	 	 /*--  --*/
#define CRC_CR_REV_OUT_pos	 	 	 	7	 	 /*--  --*/


#define CRC_CR_RESET_msk	 	 	 	0x00000001UL
#define CRC_CR_MODE_msk	 	 	 	0x00000002UL
#define CRC_CR_XOROUT_msk	 	 	 	0x00000004UL
#define CRC_CR_POLYSIZE_msk	 	 	 	0x00000018UL
#define CRC_CR_REV_IN_msk	 	 	 	0x00000060UL
#define CRC_CR_REV_OUT_msk	 	 	 	0x00000080UL


typedef struct {
uint32_t 	 	CRC_CR_RESET	 	:1;
uint32_t 	 	CRC_CR_MODE	 	:1;
uint32_t 	 	CRC_CR_XOROUT	 	:1;
uint32_t 	 	CRC_CR_POLYSIZE	 	:2;
uint32_t 	 	CRC_CR_REV_IN	 	:2;
uint32_t 	 	CRC_CR_REV_OUT	 	:1;
uint32_t 	 	 	 	:24;
} t_CRC_CR_bits;


typedef enum { 
 	CRC_CR_RESET_off		 = 0b0,
	CRC_CR_RESET_on		 = 0b1,
} t_CRC_CR_RESET_enum;

typedef enum { 
 	CRC_CR_MODE_standartcrc		 = 0b0,
	CRC_CR_MODE_stm32_crc		 = 0b1,
} t_CRC_CR_MODE_enum;

typedef enum { 
 	CRC_CR_XOROUT_disable		 = 0b0,
	CRC_CR_XOROUT_enable		 = 0b1,
} t_CRC_CR_XOROUT_enum;

typedef enum { 
 	CRC_CR_POLYSIZE_pol32		 = 0b00,
	CRC_CR_POLYSIZE_pol16		 = 0b01,
	CRC_CR_POLYSIZE_pol8		 = 0b10,
	CRC_CR_POLYSIZE_pol7		 = 0b11,
} t_CRC_CR_POLYSIZE_enum;

typedef enum { 
 	CRC_CR_REV_IN_disable		 = 0b00,
	CRC_CR_REV_IN_rev_byte		 = 0b01,
	CRC_CR_REV_IN_rev_halfword		 = 0b10,
	CRC_CR_REV_IN_rev_word		 = 0b11,
} t_CRC_CR_REV_IN_enum;

typedef enum { 
 	CRC_CR_REV_OUT_disable		 = 0b0,
	CRC_CR_REV_OUT_enable		 = 0b1,
} t_CRC_CR_REV_OUT_enum;




#define CRC_INIT	0x2003000c		 /*--  --*/

#define CRC_INIT_VAL_pos	 	 	 	0	 	 /*--  --*/


#define CRC_INIT_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	CRC_INIT_VAL	 	:32;
} t_CRC_INIT_bits;





#define CRC_POL	0x20030010		 /*--  --*/

#define CRC_POL_VAL_pos	 	 	 	0	 	 /*--  --*/


#define CRC_POL_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	CRC_POL_VAL	 	:32;
} t_CRC_POL_bits;




typedef struct { 
union {
 __IO uint32_t 	CRC_DR_reg;
 __IO t_CRC_DR_bits	 CRC_DR_bit;
};
union {
 __IO uint32_t 	CRC_POST_reg;
 __IO t_CRC_POST_bits	 CRC_POST_bit;
};
union {
 __IO uint32_t 	CRC_CR_reg;
 __IO t_CRC_CR_bits	 CRC_CR_bit;
};
union {
 __IO uint32_t 	CRC_INIT_reg;
 __IO t_CRC_INIT_bits	 CRC_INIT_bit;
};
union {
 __IO uint32_t 	CRC_POL_reg;
 __IO t_CRC_POL_bits	 CRC_POL_bit;
};
} t_CRC_REG;



#define TMR32_CTRL	0x30000000		 /*--  --*/

#define TMR32_CTRL_CLR_pos	 	 	 	2	 	 /*--  --*/
#define TMR32_CTRL_MODE_pos	 	 	 	4	 	 /*--  --*/
#define TMR32_CTRL_DIV_pos	 	 	 	6	 	 /*--  --*/
#define TMR32_CTRL_CLKSEL_pos	 	 	 	8	 	 /*--  --*/


#define TMR32_CTRL_CLR_msk	 	 	 	0x00000004UL
#define TMR32_CTRL_MODE_msk	 	 	 	0x00000030UL
#define TMR32_CTRL_DIV_msk	 	 	 	0x000000c0UL
#define TMR32_CTRL_CLKSEL_msk	 	 	 	0x00000100UL


typedef struct {
uint32_t 	 	 	 	:2;
uint32_t 	 	TMR32_CTRL_CLR	 	:1;
uint32_t 	 	 	 	:1;
uint32_t 	 	TMR32_CTRL_MODE	 	:2;
uint32_t 	 	TMR32_CTRL_DIV	 	:2;
uint32_t 	 	TMR32_CTRL_CLKSEL	 	:1;
uint32_t 	 	 	 	:23;
} t_TMR32_CTRL_bits;


typedef enum { 
 	TMR32_CTRL_CLR_off		 = 0b0,
	TMR32_CTRL_CLR_on		 = 0b1,
} t_TMR32_CTRL_CLR_enum;

typedef enum { 
 	TMR32_CTRL_MODE_stop		 = 0b00,
	TMR32_CTRL_MODE_up		 = 0b01,
	TMR32_CTRL_MODE_multiple		 = 0b10,
	TMR32_CTRL_MODE_updown		 = 0b11,
} t_TMR32_CTRL_MODE_enum;

typedef enum { 
 	TMR32_CTRL_DIV_div1		 = 0b00,
	TMR32_CTRL_DIV_div2		 = 0b01,
	TMR32_CTRL_DIV_div4		 = 0b10,
	TMR32_CTRL_DIV_div8		 = 0b11,
} t_TMR32_CTRL_DIV_enum;

typedef enum { 
 	TMR32_CTRL_CLKSEL_sysclk		 = 0b0,
	TMR32_CTRL_CLKSEL_extclk		 = 0b1,
} t_TMR32_CTRL_CLKSEL_enum;




#define TMR32_COUNT	0x30000004		 /*--  --*/

#define TMR32_COUNT_VAL_pos	 	 	 	0	 	 /*--  --*/


#define TMR32_COUNT_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	TMR32_COUNT_VAL	 	:32;
} t_TMR32_COUNT_bits;





#define TMR32_IM	0x30000008		 /*--  --*/

#define TMR32_IM_TMR_pos	 	 	 	0	 	 /*--  --*/
#define TMR32_IM_CAP0_pos	 	 	 	1	 	 /*--  --*/
#define TMR32_IM_CAP1_pos	 	 	 	2	 	 /*--  --*/
#define TMR32_IM_CAP2_pos	 	 	 	3	 	 /*--  --*/
#define TMR32_IM_CAP3_pos	 	 	 	4	 	 /*--  --*/


#define TMR32_IM_TMR_msk	 	 	 	0x00000001UL
#define TMR32_IM_CAP0_msk	 	 	 	0x00000002UL
#define TMR32_IM_CAP1_msk	 	 	 	0x00000004UL
#define TMR32_IM_CAP2_msk	 	 	 	0x00000008UL
#define TMR32_IM_CAP3_msk	 	 	 	0x00000010UL


typedef struct {
uint32_t 	 	TMR32_IM_TMR	 	:1;
uint32_t 	 	TMR32_IM_CAP0	 	:1;
uint32_t 	 	TMR32_IM_CAP1	 	:1;
uint32_t 	 	TMR32_IM_CAP2	 	:1;
uint32_t 	 	TMR32_IM_CAP3	 	:1;
uint32_t 	 	 	 	:27;
} t_TMR32_IM_bits;


typedef enum { 
 	TMR32_IM_TMR_off		 = 0b0,
	TMR32_IM_TMR_on		 = 0b1,
} t_TMR32_IM_TMR_enum;

typedef enum { 
 	TMR32_IM_CAP0_off		 = 0b0,
	TMR32_IM_CAP0_on		 = 0b1,
} t_TMR32_IM_CAP0_enum;

typedef enum { 
 	TMR32_IM_CAP1_off		 = 0b0,
	TMR32_IM_CAP1_on		 = 0b1,
} t_TMR32_IM_CAP1_enum;

typedef enum { 
 	TMR32_IM_CAP2_off		 = 0b0,
	TMR32_IM_CAP2_on		 = 0b1,
} t_TMR32_IM_CAP2_enum;

typedef enum { 
 	TMR32_IM_CAP3_off		 = 0b0,
	TMR32_IM_CAP3_on		 = 0b1,
} t_TMR32_IM_CAP3_enum;




#define TMR32_RIS	0x3000000c		 /*--  --*/

#define TMR32_RIS_TMR_pos	 	 	 	0	 	 /*--  --*/
#define TMR32_RIS_CAP0_pos	 	 	 	1	 	 /*--  --*/
#define TMR32_RIS_CAP1_pos	 	 	 	2	 	 /*--  --*/
#define TMR32_RIS_CAP2_pos	 	 	 	3	 	 /*--  --*/
#define TMR32_RIS_CAP3_pos	 	 	 	4	 	 /*--  --*/


#define TMR32_RIS_TMR_msk	 	 	 	0x00000001UL
#define TMR32_RIS_CAP0_msk	 	 	 	0x00000002UL
#define TMR32_RIS_CAP1_msk	 	 	 	0x00000004UL
#define TMR32_RIS_CAP2_msk	 	 	 	0x00000008UL
#define TMR32_RIS_CAP3_msk	 	 	 	0x00000010UL


typedef struct {
uint32_t 	 	TMR32_RIS_TMR	 	:1;
uint32_t 	 	TMR32_RIS_CAP0	 	:1;
uint32_t 	 	TMR32_RIS_CAP1	 	:1;
uint32_t 	 	TMR32_RIS_CAP2	 	:1;
uint32_t 	 	TMR32_RIS_CAP3	 	:1;
uint32_t 	 	 	 	:27;
} t_TMR32_RIS_bits;


typedef enum { 
 	TMR32_RIS_TMR_off		 = 0b0,
	TMR32_RIS_TMR_on		 = 0b1,
} t_TMR32_RIS_TMR_enum;

typedef enum { 
 	TMR32_RIS_CAP0_off		 = 0b0,
	TMR32_RIS_CAP0_on		 = 0b1,
} t_TMR32_RIS_CAP0_enum;

typedef enum { 
 	TMR32_RIS_CAP1_off		 = 0b0,
	TMR32_RIS_CAP1_on		 = 0b1,
} t_TMR32_RIS_CAP1_enum;

typedef enum { 
 	TMR32_RIS_CAP2_off		 = 0b0,
	TMR32_RIS_CAP2_on		 = 0b1,
} t_TMR32_RIS_CAP2_enum;

typedef enum { 
 	TMR32_RIS_CAP3_off		 = 0b0,
	TMR32_RIS_CAP3_on		 = 0b1,
} t_TMR32_RIS_CAP3_enum;




#define TMR32_MIS	0x30000010		 /*--  --*/

#define TMR32_MIS_TMR_pos	 	 	 	0	 	 /*--  --*/
#define TMR32_MIS_CAP0_pos	 	 	 	1	 	 /*--  --*/
#define TMR32_MIS_CAP1_pos	 	 	 	2	 	 /*--  --*/
#define TMR32_MIS_CAP2_pos	 	 	 	3	 	 /*--  --*/
#define TMR32_MIS_CAP3_pos	 	 	 	4	 	 /*--  --*/


#define TMR32_MIS_TMR_msk	 	 	 	0x00000001UL
#define TMR32_MIS_CAP0_msk	 	 	 	0x00000002UL
#define TMR32_MIS_CAP1_msk	 	 	 	0x00000004UL
#define TMR32_MIS_CAP2_msk	 	 	 	0x00000008UL
#define TMR32_MIS_CAP3_msk	 	 	 	0x00000010UL


typedef struct {
uint32_t 	 	TMR32_MIS_TMR	 	:1;
uint32_t 	 	TMR32_MIS_CAP0	 	:1;
uint32_t 	 	TMR32_MIS_CAP1	 	:1;
uint32_t 	 	TMR32_MIS_CAP2	 	:1;
uint32_t 	 	TMR32_MIS_CAP3	 	:1;
uint32_t 	 	 	 	:27;
} t_TMR32_MIS_bits;


typedef enum { 
 	TMR32_MIS_TMR_off		 = 0b0,
	TMR32_MIS_TMR_on		 = 0b1,
} t_TMR32_MIS_TMR_enum;

typedef enum { 
 	TMR32_MIS_CAP0_off		 = 0b0,
	TMR32_MIS_CAP0_on		 = 0b1,
} t_TMR32_MIS_CAP0_enum;

typedef enum { 
 	TMR32_MIS_CAP1_off		 = 0b0,
	TMR32_MIS_CAP1_on		 = 0b1,
} t_TMR32_MIS_CAP1_enum;

typedef enum { 
 	TMR32_MIS_CAP2_off		 = 0b0,
	TMR32_MIS_CAP2_on		 = 0b1,
} t_TMR32_MIS_CAP2_enum;

typedef enum { 
 	TMR32_MIS_CAP3_off		 = 0b0,
	TMR32_MIS_CAP3_on		 = 0b1,
} t_TMR32_MIS_CAP3_enum;




#define TMR32_IC	0x30000014		 /*--  --*/

#define TMR32_IC_TMR_pos	 	 	 	0	 	 /*--  --*/
#define TMR32_IC_CAP0_pos	 	 	 	1	 	 /*--  --*/
#define TMR32_IC_CAP1_pos	 	 	 	2	 	 /*--  --*/
#define TMR32_IC_CAP2_pos	 	 	 	3	 	 /*--  --*/
#define TMR32_IC_CAP3_pos	 	 	 	4	 	 /*--  --*/


#define TMR32_IC_TMR_msk	 	 	 	0x00000001UL
#define TMR32_IC_CAP0_msk	 	 	 	0x00000002UL
#define TMR32_IC_CAP1_msk	 	 	 	0x00000004UL
#define TMR32_IC_CAP2_msk	 	 	 	0x00000008UL
#define TMR32_IC_CAP3_msk	 	 	 	0x00000010UL


typedef struct {
uint32_t 	 	TMR32_IC_TMR	 	:1;
uint32_t 	 	TMR32_IC_CAP0	 	:1;
uint32_t 	 	TMR32_IC_CAP1	 	:1;
uint32_t 	 	TMR32_IC_CAP2	 	:1;
uint32_t 	 	TMR32_IC_CAP3	 	:1;
uint32_t 	 	 	 	:27;
} t_TMR32_IC_bits;


typedef enum { 
 	TMR32_IC_TMR_off		 = 0b0,
	TMR32_IC_TMR_on		 = 0b1,
} t_TMR32_IC_TMR_enum;

typedef enum { 
 	TMR32_IC_CAP0_off		 = 0b0,
	TMR32_IC_CAP0_on		 = 0b1,
} t_TMR32_IC_CAP0_enum;

typedef enum { 
 	TMR32_IC_CAP1_off		 = 0b0,
	TMR32_IC_CAP1_on		 = 0b1,
} t_TMR32_IC_CAP1_enum;

typedef enum { 
 	TMR32_IC_CAP2_off		 = 0b0,
	TMR32_IC_CAP2_on		 = 0b1,
} t_TMR32_IC_CAP2_enum;

typedef enum { 
 	TMR32_IC_CAP3_off		 = 0b0,
	TMR32_IC_CAP3_on		 = 0b1,
} t_TMR32_IC_CAP3_enum;




#define TMR32_DMA_IM	0x30000038		 /*--  --*/

#define TMR32_DMA_IM_TMR_pos	 	 	 	0	 	 /*--  --*/
#define TMR32_DMA_IM_CAP0_pos	 	 	 	1	 	 /*--  --*/
#define TMR32_DMA_IM_CAP1_pos	 	 	 	2	 	 /*--  --*/
#define TMR32_DMA_IM_CAP2_pos	 	 	 	3	 	 /*--  --*/
#define TMR32_DMA_IM_CAP3_pos	 	 	 	4	 	 /*--  --*/


#define TMR32_DMA_IM_TMR_msk	 	 	 	0x00000001UL
#define TMR32_DMA_IM_CAP0_msk	 	 	 	0x00000002UL
#define TMR32_DMA_IM_CAP1_msk	 	 	 	0x00000004UL
#define TMR32_DMA_IM_CAP2_msk	 	 	 	0x00000008UL
#define TMR32_DMA_IM_CAP3_msk	 	 	 	0x00000010UL


typedef struct {
uint32_t 	 	TMR32_DMA_IM_TMR	 	:1;
uint32_t 	 	TMR32_DMA_IM_CAP0	 	:1;
uint32_t 	 	TMR32_DMA_IM_CAP1	 	:1;
uint32_t 	 	TMR32_DMA_IM_CAP2	 	:1;
uint32_t 	 	TMR32_DMA_IM_CAP3	 	:1;
uint32_t 	 	 	 	:27;
} t_TMR32_DMA_IM_bits;


typedef enum { 
 	TMR32_DMA_IM_TMR_off		 = 0b0,
	TMR32_DMA_IM_TMR_on		 = 0b1,
} t_TMR32_DMA_IM_TMR_enum;

typedef enum { 
 	TMR32_DMA_IM_CAP0_off		 = 0b0,
	TMR32_DMA_IM_CAP0_on		 = 0b1,
} t_TMR32_DMA_IM_CAP0_enum;

typedef enum { 
 	TMR32_DMA_IM_CAP1_off		 = 0b0,
	TMR32_DMA_IM_CAP1_on		 = 0b1,
} t_TMR32_DMA_IM_CAP1_enum;

typedef enum { 
 	TMR32_DMA_IM_CAP2_off		 = 0b0,
	TMR32_DMA_IM_CAP2_on		 = 0b1,
} t_TMR32_DMA_IM_CAP2_enum;

typedef enum { 
 	TMR32_DMA_IM_CAP3_off		 = 0b0,
	TMR32_DMA_IM_CAP3_on		 = 0b1,
} t_TMR32_DMA_IM_CAP3_enum;




#define TMR32_ADC_IM	0x3000003c		 /*--  --*/

#define TMR32_ADC_IM_TMR_pos	 	 	 	0	 	 /*--  --*/
#define TMR32_ADC_IM_CAP0_pos	 	 	 	1	 	 /*--  --*/
#define TMR32_ADC_IM_CAP1_pos	 	 	 	2	 	 /*--  --*/
#define TMR32_ADC_IM_CAP2_pos	 	 	 	3	 	 /*--  --*/
#define TMR32_ADC_IM_CAP3_pos	 	 	 	4	 	 /*--  --*/


#define TMR32_ADC_IM_TMR_msk	 	 	 	0x00000001UL
#define TMR32_ADC_IM_CAP0_msk	 	 	 	0x00000002UL
#define TMR32_ADC_IM_CAP1_msk	 	 	 	0x00000004UL
#define TMR32_ADC_IM_CAP2_msk	 	 	 	0x00000008UL
#define TMR32_ADC_IM_CAP3_msk	 	 	 	0x00000010UL


typedef struct {
uint32_t 	 	TMR32_ADC_IM_TMR	 	:1;
uint32_t 	 	TMR32_ADC_IM_CAP0	 	:1;
uint32_t 	 	TMR32_ADC_IM_CAP1	 	:1;
uint32_t 	 	TMR32_ADC_IM_CAP2	 	:1;
uint32_t 	 	TMR32_ADC_IM_CAP3	 	:1;
uint32_t 	 	 	 	:27;
} t_TMR32_ADC_IM_bits;


typedef enum { 
 	TMR32_ADC_IM_TMR_off		 = 0b0,
	TMR32_ADC_IM_TMR_on		 = 0b1,
} t_TMR32_ADC_IM_TMR_enum;

typedef enum { 
 	TMR32_ADC_IM_CAP0_off		 = 0b0,
	TMR32_ADC_IM_CAP0_on		 = 0b1,
} t_TMR32_ADC_IM_CAP0_enum;

typedef enum { 
 	TMR32_ADC_IM_CAP1_off		 = 0b0,
	TMR32_ADC_IM_CAP1_on		 = 0b1,
} t_TMR32_ADC_IM_CAP1_enum;

typedef enum { 
 	TMR32_ADC_IM_CAP2_off		 = 0b0,
	TMR32_ADC_IM_CAP2_on		 = 0b1,
} t_TMR32_ADC_IM_CAP2_enum;

typedef enum { 
 	TMR32_ADC_IM_CAP3_off		 = 0b0,
	TMR32_ADC_IM_CAP3_on		 = 0b1,
} t_TMR32_ADC_IM_CAP3_enum;



typedef struct { 
union {
 __IO uint32_t 	TMR32_CTRL_reg;
 __IO t_TMR32_CTRL_bits	 TMR32_CTRL_bit;
};
union {
 __IO uint32_t 	TMR32_COUNT_reg;
 __IO t_TMR32_COUNT_bits	 TMR32_COUNT_bit;
};
union {
 __IO uint32_t 	TMR32_IM_reg;
 __IO t_TMR32_IM_bits	 TMR32_IM_bit;
};
union {
 __IO uint32_t 	TMR32_RIS_reg;
 __IO t_TMR32_RIS_bits	 TMR32_RIS_bit;
};
union {
 __IO uint32_t 	TMR32_MIS_reg;
 __IO t_TMR32_MIS_bits	 TMR32_MIS_bit;
};
union {
 __IO uint32_t 	TMR32_IC_reg;
 __IO t_TMR32_IC_bits	 TMR32_IC_bit;
};
__IO uint32_t reserved0[8];
union {
 __IO uint32_t 	TMR32_DMA_IM_reg;
 __IO t_TMR32_DMA_IM_bits	 TMR32_DMA_IM_bit;
};
union {
 __IO uint32_t 	TMR32_ADC_IM_reg;
 __IO t_TMR32_ADC_IM_bits	 TMR32_ADC_IM_bit;
};
} t_TMR32_REG;



#define UART_DR	0x30006000		 /*--  --*/

#define UART_DR_DATA_pos	 	 	 	0	 	 /*--  --*/
#define UART_DR_FE_pos	 	 	 	8	 	 /*--  --*/
#define UART_DR_PE_pos	 	 	 	9	 	 /*--  --*/
#define UART_DR_BE_pos	 	 	 	10	 	 /*--  --*/
#define UART_DR_OE_pos	 	 	 	11	 	 /*--  --*/


#define UART_DR_DATA_msk	 	 	 	0x000000ffUL
#define UART_DR_FE_msk	 	 	 	0x00000100UL
#define UART_DR_PE_msk	 	 	 	0x00000200UL
#define UART_DR_BE_msk	 	 	 	0x00000400UL
#define UART_DR_OE_msk	 	 	 	0x00000800UL


typedef struct {
uint32_t 	 	UART_DR_DATA	 	:8;
uint32_t 	 	UART_DR_FE	 	:1;
uint32_t 	 	UART_DR_PE	 	:1;
uint32_t 	 	UART_DR_BE	 	:1;
uint32_t 	 	UART_DR_OE	 	:1;
uint32_t 	 	 	 	:20;
} t_UART_DR_bits;


typedef enum { 
 	UART_DR_FE_off		 = 0b0,
	UART_DR_FE_on		 = 0b1,
} t_UART_DR_FE_enum;

typedef enum { 
 	UART_DR_PE_off		 = 0b0,
	UART_DR_PE_on		 = 0b1,
} t_UART_DR_PE_enum;

typedef enum { 
 	UART_DR_BE_off		 = 0b0,
	UART_DR_BE_on		 = 0b1,
} t_UART_DR_BE_enum;

typedef enum { 
 	UART_DR_OE_off		 = 0b0,
	UART_DR_OE_on		 = 0b1,
} t_UART_DR_OE_enum;




#define UART_RSR	0x30006004		 /*--  --*/

#define UART_RSR_FE_pos	 	 	 	0	 	 /*--  --*/
#define UART_RSR_PE_pos	 	 	 	1	 	 /*--  --*/
#define UART_RSR_BE_pos	 	 	 	2	 	 /*--  --*/
#define UART_RSR_OE_pos	 	 	 	3	 	 /*--  --*/


#define UART_RSR_FE_msk	 	 	 	0x00000001UL
#define UART_RSR_PE_msk	 	 	 	0x00000002UL
#define UART_RSR_BE_msk	 	 	 	0x00000004UL
#define UART_RSR_OE_msk	 	 	 	0x00000008UL


typedef struct {
uint32_t 	 	UART_RSR_FE	 	:1;
uint32_t 	 	UART_RSR_PE	 	:1;
uint32_t 	 	UART_RSR_BE	 	:1;
uint32_t 	 	UART_RSR_OE	 	:1;
uint32_t 	 	 	 	:28;
} t_UART_RSR_bits;


typedef enum { 
 	UART_RSR_FE_off		 = 0b0,
	UART_RSR_FE_on		 = 0b1,
} t_UART_RSR_FE_enum;

typedef enum { 
 	UART_RSR_PE_off		 = 0b0,
	UART_RSR_PE_on		 = 0b1,
} t_UART_RSR_PE_enum;

typedef enum { 
 	UART_RSR_BE_off		 = 0b0,
	UART_RSR_BE_on		 = 0b1,
} t_UART_RSR_BE_enum;

typedef enum { 
 	UART_RSR_OE_off		 = 0b0,
	UART_RSR_OE_on		 = 0b1,
} t_UART_RSR_OE_enum;




#define UART_FR	0x30006018		 /*--  --*/

#define UART_FR_CTS_pos	 	 	 	0	 	 /*--  --*/
#define UART_FR_DSR_pos	 	 	 	1	 	 /*--  --*/
#define UART_FR_DCD_pos	 	 	 	2	 	 /*--  --*/
#define UART_FR_BUSY_pos	 	 	 	3	 	 /*--  --*/
#define UART_FR_RXFE_pos	 	 	 	4	 	 /*--  --*/
#define UART_FR_TXFF_pos	 	 	 	5	 	 /*--  --*/
#define UART_FR_RXFF_pos	 	 	 	6	 	 /*--  --*/
#define UART_FR_TXFE_pos	 	 	 	7	 	 /*--  --*/
#define UART_FR_RI_pos	 	 	 	8	 	 /*--  --*/


#define UART_FR_CTS_msk	 	 	 	0x00000001UL
#define UART_FR_DSR_msk	 	 	 	0x00000002UL
#define UART_FR_DCD_msk	 	 	 	0x00000004UL
#define UART_FR_BUSY_msk	 	 	 	0x00000008UL
#define UART_FR_RXFE_msk	 	 	 	0x00000010UL
#define UART_FR_TXFF_msk	 	 	 	0x00000020UL
#define UART_FR_RXFF_msk	 	 	 	0x00000040UL
#define UART_FR_TXFE_msk	 	 	 	0x00000080UL
#define UART_FR_RI_msk	 	 	 	0x00000100UL


typedef struct {
uint32_t 	 	UART_FR_CTS	 	:1;
uint32_t 	 	UART_FR_DSR	 	:1;
uint32_t 	 	UART_FR_DCD	 	:1;
uint32_t 	 	UART_FR_BUSY	 	:1;
uint32_t 	 	UART_FR_RXFE	 	:1;
uint32_t 	 	UART_FR_TXFF	 	:1;
uint32_t 	 	UART_FR_RXFF	 	:1;
uint32_t 	 	UART_FR_TXFE	 	:1;
uint32_t 	 	UART_FR_RI	 	:1;
uint32_t 	 	 	 	:23;
} t_UART_FR_bits;


typedef enum { 
 	UART_FR_CTS_off		 = 0b0,
	UART_FR_CTS_on		 = 0b1,
} t_UART_FR_CTS_enum;

typedef enum { 
 	UART_FR_DSR_off		 = 0b0,
	UART_FR_DSR_on		 = 0b1,
} t_UART_FR_DSR_enum;

typedef enum { 
 	UART_FR_DCD_off		 = 0b0,
	UART_FR_DCD_on		 = 0b1,
} t_UART_FR_DCD_enum;

typedef enum { 
 	UART_FR_BUSY_off		 = 0b0,
	UART_FR_BUSY_on		 = 0b1,
} t_UART_FR_BUSY_enum;

typedef enum { 
 	UART_FR_RXFE_off		 = 0b0,
	UART_FR_RXFE_on		 = 0b1,
} t_UART_FR_RXFE_enum;

typedef enum { 
 	UART_FR_TXFF_off		 = 0b0,
	UART_FR_TXFF_on		 = 0b1,
} t_UART_FR_TXFF_enum;

typedef enum { 
 	UART_FR_RXFF_off		 = 0b0,
	UART_FR_RXFF_on		 = 0b1,
} t_UART_FR_RXFF_enum;

typedef enum { 
 	UART_FR_TXFE_off		 = 0b0,
	UART_FR_TXFE_on		 = 0b1,
} t_UART_FR_TXFE_enum;

typedef enum { 
 	UART_FR_RI_off		 = 0b0,
	UART_FR_RI_on		 = 0b1,
} t_UART_FR_RI_enum;




#define UART_ILPR	0x30006020		 /*--  --*/

#define UART_ILPR_ILPDVSR_pos	 	 	 	0	 	 /*--  --*/


#define UART_ILPR_ILPDVSR_msk	 	 	 	0x000000ffUL


typedef struct {
uint32_t 	 	UART_ILPR_ILPDVSR	 	:8;
uint32_t 	 	 	 	:24;
} t_UART_ILPR_bits;





#define UART_IBRD	0x30006024		 /*--  --*/

#define UART_IBRD_DIVINT_pos	 	 	 	0	 	 /*--  --*/


#define UART_IBRD_DIVINT_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	UART_IBRD_DIVINT	 	:16;
uint32_t 	 	 	 	:16;
} t_UART_IBRD_bits;





#define UART_FBRD	0x30006028		 /*--  --*/

#define UART_FBRD_DIVFRAC_pos	 	 	 	0	 	 /*--  --*/


#define UART_FBRD_DIVFRAC_msk	 	 	 	0x0000003fUL


typedef struct {
uint32_t 	 	UART_FBRD_DIVFRAC	 	:6;
uint32_t 	 	 	 	:26;
} t_UART_FBRD_bits;





#define UART_LCRH	0x3000602c		 /*--  --*/

#define UART_LCRH_BRK_pos	 	 	 	0	 	 /*--  --*/
#define UART_LCRH_PEN_pos	 	 	 	1	 	 /*--  --*/
#define UART_LCRH_EPS_pos	 	 	 	2	 	 /*--  --*/
#define UART_LCRH_STP2_pos	 	 	 	3	 	 /*--  --*/
#define UART_LCRH_FEN_pos	 	 	 	4	 	 /*--  --*/
#define UART_LCRH_WLEN_pos	 	 	 	5	 	 /*--  --*/
#define UART_LCRH_SPS_pos	 	 	 	7	 	 /*--  --*/


#define UART_LCRH_BRK_msk	 	 	 	0x00000001UL
#define UART_LCRH_PEN_msk	 	 	 	0x00000002UL
#define UART_LCRH_EPS_msk	 	 	 	0x00000004UL
#define UART_LCRH_STP2_msk	 	 	 	0x00000008UL
#define UART_LCRH_FEN_msk	 	 	 	0x00000010UL
#define UART_LCRH_WLEN_msk	 	 	 	0x00000060UL
#define UART_LCRH_SPS_msk	 	 	 	0x00000080UL


typedef struct {
uint32_t 	 	UART_LCRH_BRK	 	:1;
uint32_t 	 	UART_LCRH_PEN	 	:1;
uint32_t 	 	UART_LCRH_EPS	 	:1;
uint32_t 	 	UART_LCRH_STP2	 	:1;
uint32_t 	 	UART_LCRH_FEN	 	:1;
uint32_t 	 	UART_LCRH_WLEN	 	:2;
uint32_t 	 	UART_LCRH_SPS	 	:1;
uint32_t 	 	 	 	:24;
} t_UART_LCRH_bits;


typedef enum { 
 	UART_LCRH_BRK_off		 = 0b0,
	UART_LCRH_BRK_on		 = 0b1,
} t_UART_LCRH_BRK_enum;

typedef enum { 
 	UART_LCRH_PEN_off		 = 0b0,
	UART_LCRH_PEN_on		 = 0b1,
} t_UART_LCRH_PEN_enum;

typedef enum { 
 	UART_LCRH_EPS_off		 = 0b0,
	UART_LCRH_EPS_on		 = 0b1,
} t_UART_LCRH_EPS_enum;

typedef enum { 
 	UART_LCRH_STP2_off		 = 0b0,
	UART_LCRH_STP2_on		 = 0b1,
} t_UART_LCRH_STP2_enum;

typedef enum { 
 	UART_LCRH_FEN_off		 = 0b0,
	UART_LCRH_FEN_on		 = 0b1,
} t_UART_LCRH_FEN_enum;

typedef enum { 
 	UART_LCRH_WLEN_5bit		 = 0b00,
	UART_LCRH_WLEN_6bit		 = 0b01,
	UART_LCRH_WLEN_7bit		 = 0b10,
	UART_LCRH_WLEN_8bit		 = 0b11,
} t_UART_LCRH_WLEN_enum;

typedef enum { 
 	UART_LCRH_SPS_off		 = 0b0,
	UART_LCRH_SPS_on		 = 0b1,
} t_UART_LCRH_SPS_enum;




#define UART_CR	0x30006030		 /*--  --*/

#define UART_CR_UARTEN_pos	 	 	 	0	 	 /*--  --*/
#define UART_CR_SIREN_pos	 	 	 	1	 	 /*--  --*/
#define UART_CR_SIRLP_pos	 	 	 	2	 	 /*--  --*/
#define UART_CR_LBE_pos	 	 	 	7	 	 /*--  --*/
#define UART_CR_TXE_pos	 	 	 	8	 	 /*--  --*/
#define UART_CR_RXE_pos	 	 	 	9	 	 /*--  --*/
#define UART_CR_DTR_pos	 	 	 	10	 	 /*--  --*/
#define UART_CR_RTS_pos	 	 	 	11	 	 /*--  --*/
#define UART_CR_RTSEN_pos	 	 	 	14	 	 /*--  --*/
#define UART_CR_CTSEN_pos	 	 	 	15	 	 /*--  --*/


#define UART_CR_UARTEN_msk	 	 	 	0x00000001UL
#define UART_CR_SIREN_msk	 	 	 	0x00000002UL
#define UART_CR_SIRLP_msk	 	 	 	0x00000004UL
#define UART_CR_LBE_msk	 	 	 	0x00000080UL
#define UART_CR_TXE_msk	 	 	 	0x00000100UL
#define UART_CR_RXE_msk	 	 	 	0x00000200UL
#define UART_CR_DTR_msk	 	 	 	0x00000400UL
#define UART_CR_RTS_msk	 	 	 	0x00000800UL
#define UART_CR_RTSEN_msk	 	 	 	0x00004000UL
#define UART_CR_CTSEN_msk	 	 	 	0x00008000UL


typedef struct {
uint32_t 	 	UART_CR_UARTEN	 	:1;
uint32_t 	 	UART_CR_SIREN	 	:1;
uint32_t 	 	UART_CR_SIRLP	 	:1;
uint32_t 	 	 	 	:4;
uint32_t 	 	UART_CR_LBE	 	:1;
uint32_t 	 	UART_CR_TXE	 	:1;
uint32_t 	 	UART_CR_RXE	 	:1;
uint32_t 	 	UART_CR_DTR	 	:1;
uint32_t 	 	UART_CR_RTS	 	:1;
uint32_t 	 	 	 	:2;
uint32_t 	 	UART_CR_RTSEN	 	:1;
uint32_t 	 	UART_CR_CTSEN	 	:1;
uint32_t 	 	 	 	:16;
} t_UART_CR_bits;


typedef enum { 
 	UART_CR_UARTEN_off		 = 0b0,
	UART_CR_UARTEN_on		 = 0b1,
} t_UART_CR_UARTEN_enum;

typedef enum { 
 	UART_CR_SIREN_off		 = 0b0,
	UART_CR_SIREN_on		 = 0b1,
} t_UART_CR_SIREN_enum;

typedef enum { 
 	UART_CR_SIRLP_off		 = 0b0,
	UART_CR_SIRLP_on		 = 0b1,
} t_UART_CR_SIRLP_enum;

typedef enum { 
 	UART_CR_LBE_off		 = 0b0,
	UART_CR_LBE_on		 = 0b1,
} t_UART_CR_LBE_enum;

typedef enum { 
 	UART_CR_TXE_off		 = 0b0,
	UART_CR_TXE_on		 = 0b1,
} t_UART_CR_TXE_enum;

typedef enum { 
 	UART_CR_RXE_off		 = 0b0,
	UART_CR_RXE_on		 = 0b1,
} t_UART_CR_RXE_enum;

typedef enum { 
 	UART_CR_DTR_off		 = 0b0,
	UART_CR_DTR_on		 = 0b1,
} t_UART_CR_DTR_enum;

typedef enum { 
 	UART_CR_RTS_off		 = 0b0,
	UART_CR_RTS_on		 = 0b1,
} t_UART_CR_RTS_enum;

typedef enum { 
 	UART_CR_RTSEN_off		 = 0b0,
	UART_CR_RTSEN_on		 = 0b1,
} t_UART_CR_RTSEN_enum;

typedef enum { 
 	UART_CR_CTSEN_off		 = 0b0,
	UART_CR_CTSEN_on		 = 0b1,
} t_UART_CR_CTSEN_enum;




#define UART_IFLS	0x30006034		 /*--  --*/

#define UART_IFLS_TXIFLSEL_pos	 	 	 	0	 	 /*--  --*/
#define UART_IFLS_RXIFLSEL_pos	 	 	 	3	 	 /*--  --*/


#define UART_IFLS_TXIFLSEL_msk	 	 	 	0x00000007UL
#define UART_IFLS_RXIFLSEL_msk	 	 	 	0x00000038UL


typedef struct {
uint32_t 	 	UART_IFLS_TXIFLSEL	 	:3;
uint32_t 	 	UART_IFLS_RXIFLSEL	 	:3;
uint32_t 	 	 	 	:26;
} t_UART_IFLS_bits;


typedef enum { 
 	UART_IFLS_TXIFLSEL_lvl18		 = 0b000,
	UART_IFLS_TXIFLSEL_lvl14		 = 0b001,
	UART_IFLS_TXIFLSEL_lvl12		 = 0b010,
	UART_IFLS_TXIFLSEL_lvl34		 = 0b011,
	UART_IFLS_TXIFLSEL_lvl78		 = 0b100,
} t_UART_IFLS_TXIFLSEL_enum;

typedef enum { 
 	UART_IFLS_RXIFLSEL_lvl18		 = 0b000,
	UART_IFLS_RXIFLSEL_lvl14		 = 0b001,
	UART_IFLS_RXIFLSEL_lvl12		 = 0b010,
	UART_IFLS_RXIFLSEL_lvl34		 = 0b011,
	UART_IFLS_RXIFLSEL_lvl78		 = 0b100,
} t_UART_IFLS_RXIFLSEL_enum;




#define UART_IMSC	0x30006038		 /*--  --*/

#define UART_IMSC_RIMIM_pos	 	 	 	0	 	 /*--  --*/
#define UART_IMSC_CTSMIM_pos	 	 	 	1	 	 /*--  --*/
#define UART_IMSC_DCDMIM_pos	 	 	 	2	 	 /*--  --*/
#define UART_IMSC_DSRMIM_pos	 	 	 	3	 	 /*--  --*/
#define UART_IMSC_RXIM_pos	 	 	 	4	 	 /*--  --*/
#define UART_IMSC_TXIM_pos	 	 	 	5	 	 /*--  --*/
#define UART_IMSC_RTIM_pos	 	 	 	6	 	 /*--  --*/
#define UART_IMSC_FERIM_pos	 	 	 	7	 	 /*--  --*/
#define UART_IMSC_PERIM_pos	 	 	 	8	 	 /*--  --*/
#define UART_IMSC_BERIM_pos	 	 	 	9	 	 /*--  --*/
#define UART_IMSC_OERIM_pos	 	 	 	10	 	 /*--  --*/
#define UART_IMSC_TDIM_pos	 	 	 	11	 	 /*--  --*/


#define UART_IMSC_RIMIM_msk	 	 	 	0x00000001UL
#define UART_IMSC_CTSMIM_msk	 	 	 	0x00000002UL
#define UART_IMSC_DCDMIM_msk	 	 	 	0x00000004UL
#define UART_IMSC_DSRMIM_msk	 	 	 	0x00000008UL
#define UART_IMSC_RXIM_msk	 	 	 	0x00000010UL
#define UART_IMSC_TXIM_msk	 	 	 	0x00000020UL
#define UART_IMSC_RTIM_msk	 	 	 	0x00000040UL
#define UART_IMSC_FERIM_msk	 	 	 	0x00000080UL
#define UART_IMSC_PERIM_msk	 	 	 	0x00000100UL
#define UART_IMSC_BERIM_msk	 	 	 	0x00000200UL
#define UART_IMSC_OERIM_msk	 	 	 	0x00000400UL
#define UART_IMSC_TDIM_msk	 	 	 	0x00000800UL


typedef struct {
uint32_t 	 	UART_IMSC_RIMIM	 	:1;
uint32_t 	 	UART_IMSC_CTSMIM	 	:1;
uint32_t 	 	UART_IMSC_DCDMIM	 	:1;
uint32_t 	 	UART_IMSC_DSRMIM	 	:1;
uint32_t 	 	UART_IMSC_RXIM	 	:1;
uint32_t 	 	UART_IMSC_TXIM	 	:1;
uint32_t 	 	UART_IMSC_RTIM	 	:1;
uint32_t 	 	UART_IMSC_FERIM	 	:1;
uint32_t 	 	UART_IMSC_PERIM	 	:1;
uint32_t 	 	UART_IMSC_BERIM	 	:1;
uint32_t 	 	UART_IMSC_OERIM	 	:1;
uint32_t 	 	UART_IMSC_TDIM	 	:1;
uint32_t 	 	 	 	:20;
} t_UART_IMSC_bits;


typedef enum { 
 	UART_IMSC_RIMIM_off		 = 0b0,
	UART_IMSC_RIMIM_on		 = 0b1,
} t_UART_IMSC_RIMIM_enum;

typedef enum { 
 	UART_IMSC_CTSMIM_off		 = 0b0,
	UART_IMSC_CTSMIM_on		 = 0b1,
} t_UART_IMSC_CTSMIM_enum;

typedef enum { 
 	UART_IMSC_DCDMIM_off		 = 0b0,
	UART_IMSC_DCDMIM_on		 = 0b1,
} t_UART_IMSC_DCDMIM_enum;

typedef enum { 
 	UART_IMSC_DSRMIM_off		 = 0b0,
	UART_IMSC_DSRMIM_on		 = 0b1,
} t_UART_IMSC_DSRMIM_enum;

typedef enum { 
 	UART_IMSC_RXIM_off		 = 0b0,
	UART_IMSC_RXIM_on		 = 0b1,
} t_UART_IMSC_RXIM_enum;

typedef enum { 
 	UART_IMSC_TXIM_off		 = 0b0,
	UART_IMSC_TXIM_on		 = 0b1,
} t_UART_IMSC_TXIM_enum;

typedef enum { 
 	UART_IMSC_RTIM_off		 = 0b0,
	UART_IMSC_RTIM_on		 = 0b1,
} t_UART_IMSC_RTIM_enum;

typedef enum { 
 	UART_IMSC_FERIM_off		 = 0b0,
	UART_IMSC_FERIM_on		 = 0b1,
} t_UART_IMSC_FERIM_enum;

typedef enum { 
 	UART_IMSC_PERIM_off		 = 0b0,
	UART_IMSC_PERIM_on		 = 0b1,
} t_UART_IMSC_PERIM_enum;

typedef enum { 
 	UART_IMSC_BERIM_off		 = 0b0,
	UART_IMSC_BERIM_on		 = 0b1,
} t_UART_IMSC_BERIM_enum;

typedef enum { 
 	UART_IMSC_OERIM_off		 = 0b0,
	UART_IMSC_OERIM_on		 = 0b1,
} t_UART_IMSC_OERIM_enum;

typedef enum { 
 	UART_IMSC_TDIM_off		 = 0b0,
	UART_IMSC_TDIM_on		 = 0b1,
} t_UART_IMSC_TDIM_enum;




#define UART_RIS	0x3000603c		 /*--  --*/

#define UART_RIS_RIRMIS_pos	 	 	 	0	 	 /*--  --*/
#define UART_RIS_CTSRMIS_pos	 	 	 	1	 	 /*--  --*/
#define UART_RIS_DCDRMIS_pos	 	 	 	2	 	 /*--  --*/
#define UART_RIS_DSRRMIS_pos	 	 	 	3	 	 /*--  --*/
#define UART_RIS_RXRIS_pos	 	 	 	4	 	 /*--  --*/
#define UART_RIS_TXRIS_pos	 	 	 	5	 	 /*--  --*/
#define UART_RIS_RTRIS_pos	 	 	 	6	 	 /*--  --*/
#define UART_RIS_FERIS_pos	 	 	 	7	 	 /*--  --*/
#define UART_RIS_PERIS_pos	 	 	 	8	 	 /*--  --*/
#define UART_RIS_BERIS_pos	 	 	 	9	 	 /*--  --*/
#define UART_RIS_OERIS_pos	 	 	 	10	 	 /*--  --*/
#define UART_RIS_TDRIS_pos	 	 	 	11	 	 /*--  --*/


#define UART_RIS_RIRMIS_msk	 	 	 	0x00000001UL
#define UART_RIS_CTSRMIS_msk	 	 	 	0x00000002UL
#define UART_RIS_DCDRMIS_msk	 	 	 	0x00000004UL
#define UART_RIS_DSRRMIS_msk	 	 	 	0x00000008UL
#define UART_RIS_RXRIS_msk	 	 	 	0x00000010UL
#define UART_RIS_TXRIS_msk	 	 	 	0x00000020UL
#define UART_RIS_RTRIS_msk	 	 	 	0x00000040UL
#define UART_RIS_FERIS_msk	 	 	 	0x00000080UL
#define UART_RIS_PERIS_msk	 	 	 	0x00000100UL
#define UART_RIS_BERIS_msk	 	 	 	0x00000200UL
#define UART_RIS_OERIS_msk	 	 	 	0x00000400UL
#define UART_RIS_TDRIS_msk	 	 	 	0x00000800UL


typedef struct {
uint32_t 	 	UART_RIS_RIRMIS	 	:1;
uint32_t 	 	UART_RIS_CTSRMIS	 	:1;
uint32_t 	 	UART_RIS_DCDRMIS	 	:1;
uint32_t 	 	UART_RIS_DSRRMIS	 	:1;
uint32_t 	 	UART_RIS_RXRIS	 	:1;
uint32_t 	 	UART_RIS_TXRIS	 	:1;
uint32_t 	 	UART_RIS_RTRIS	 	:1;
uint32_t 	 	UART_RIS_FERIS	 	:1;
uint32_t 	 	UART_RIS_PERIS	 	:1;
uint32_t 	 	UART_RIS_BERIS	 	:1;
uint32_t 	 	UART_RIS_OERIS	 	:1;
uint32_t 	 	UART_RIS_TDRIS	 	:1;
uint32_t 	 	 	 	:20;
} t_UART_RIS_bits;


typedef enum { 
 	UART_RIS_RIRMIS_off		 = 0b0,
	UART_RIS_RIRMIS_on		 = 0b1,
} t_UART_RIS_RIRMIS_enum;

typedef enum { 
 	UART_RIS_CTSRMIS_off		 = 0b0,
	UART_RIS_CTSRMIS_on		 = 0b1,
} t_UART_RIS_CTSRMIS_enum;

typedef enum { 
 	UART_RIS_DCDRMIS_off		 = 0b0,
	UART_RIS_DCDRMIS_on		 = 0b1,
} t_UART_RIS_DCDRMIS_enum;

typedef enum { 
 	UART_RIS_DSRRMIS_off		 = 0b0,
	UART_RIS_DSRRMIS_on		 = 0b1,
} t_UART_RIS_DSRRMIS_enum;

typedef enum { 
 	UART_RIS_RXRIS_off		 = 0b0,
	UART_RIS_RXRIS_on		 = 0b1,
} t_UART_RIS_RXRIS_enum;

typedef enum { 
 	UART_RIS_TXRIS_off		 = 0b0,
	UART_RIS_TXRIS_on		 = 0b1,
} t_UART_RIS_TXRIS_enum;

typedef enum { 
 	UART_RIS_RTRIS_off		 = 0b0,
	UART_RIS_RTRIS_on		 = 0b1,
} t_UART_RIS_RTRIS_enum;

typedef enum { 
 	UART_RIS_FERIS_off		 = 0b0,
	UART_RIS_FERIS_on		 = 0b1,
} t_UART_RIS_FERIS_enum;

typedef enum { 
 	UART_RIS_PERIS_off		 = 0b0,
	UART_RIS_PERIS_on		 = 0b1,
} t_UART_RIS_PERIS_enum;

typedef enum { 
 	UART_RIS_BERIS_off		 = 0b0,
	UART_RIS_BERIS_on		 = 0b1,
} t_UART_RIS_BERIS_enum;

typedef enum { 
 	UART_RIS_OERIS_off		 = 0b0,
	UART_RIS_OERIS_on		 = 0b1,
} t_UART_RIS_OERIS_enum;

typedef enum { 
 	UART_RIS_TDRIS_off		 = 0b0,
	UART_RIS_TDRIS_on		 = 0b1,
} t_UART_RIS_TDRIS_enum;




#define UART_MIS	0x30006040		 /*--  --*/

#define UART_MIS_RIMMIS_pos	 	 	 	0	 	 /*--  --*/
#define UART_MIS_CTSMMIS_pos	 	 	 	1	 	 /*--  --*/
#define UART_MIS_DCDMMIS_pos	 	 	 	2	 	 /*--  --*/
#define UART_MIS_DSRMMIS_pos	 	 	 	3	 	 /*--  --*/
#define UART_MIS_RXMIS_pos	 	 	 	4	 	 /*--  --*/
#define UART_MIS_TXMIS_pos	 	 	 	5	 	 /*--  --*/
#define UART_MIS_RTMIS_pos	 	 	 	6	 	 /*--  --*/
#define UART_MIS_FEMIS_pos	 	 	 	7	 	 /*--  --*/
#define UART_MIS_PEMIS_pos	 	 	 	8	 	 /*--  --*/
#define UART_MIS_BEMIS_pos	 	 	 	9	 	 /*--  --*/
#define UART_MIS_OEMIS_pos	 	 	 	10	 	 /*--  --*/
#define UART_MIS_TDMIS_pos	 	 	 	11	 	 /*--  --*/


#define UART_MIS_RIMMIS_msk	 	 	 	0x00000001UL
#define UART_MIS_CTSMMIS_msk	 	 	 	0x00000002UL
#define UART_MIS_DCDMMIS_msk	 	 	 	0x00000004UL
#define UART_MIS_DSRMMIS_msk	 	 	 	0x00000008UL
#define UART_MIS_RXMIS_msk	 	 	 	0x00000010UL
#define UART_MIS_TXMIS_msk	 	 	 	0x00000020UL
#define UART_MIS_RTMIS_msk	 	 	 	0x00000040UL
#define UART_MIS_FEMIS_msk	 	 	 	0x00000080UL
#define UART_MIS_PEMIS_msk	 	 	 	0x00000100UL
#define UART_MIS_BEMIS_msk	 	 	 	0x00000200UL
#define UART_MIS_OEMIS_msk	 	 	 	0x00000400UL
#define UART_MIS_TDMIS_msk	 	 	 	0x00000800UL


typedef struct {
uint32_t 	 	UART_MIS_RIMMIS	 	:1;
uint32_t 	 	UART_MIS_CTSMMIS	 	:1;
uint32_t 	 	UART_MIS_DCDMMIS	 	:1;
uint32_t 	 	UART_MIS_DSRMMIS	 	:1;
uint32_t 	 	UART_MIS_RXMIS	 	:1;
uint32_t 	 	UART_MIS_TXMIS	 	:1;
uint32_t 	 	UART_MIS_RTMIS	 	:1;
uint32_t 	 	UART_MIS_FEMIS	 	:1;
uint32_t 	 	UART_MIS_PEMIS	 	:1;
uint32_t 	 	UART_MIS_BEMIS	 	:1;
uint32_t 	 	UART_MIS_OEMIS	 	:1;
uint32_t 	 	UART_MIS_TDMIS	 	:1;
uint32_t 	 	 	 	:20;
} t_UART_MIS_bits;


typedef enum { 
 	UART_MIS_RIMMIS_off		 = 0b0,
	UART_MIS_RIMMIS_on		 = 0b1,
} t_UART_MIS_RIMMIS_enum;

typedef enum { 
 	UART_MIS_CTSMMIS_off		 = 0b0,
	UART_MIS_CTSMMIS_on		 = 0b1,
} t_UART_MIS_CTSMMIS_enum;

typedef enum { 
 	UART_MIS_DCDMMIS_off		 = 0b0,
	UART_MIS_DCDMMIS_on		 = 0b1,
} t_UART_MIS_DCDMMIS_enum;

typedef enum { 
 	UART_MIS_DSRMMIS_off		 = 0b0,
	UART_MIS_DSRMMIS_on		 = 0b1,
} t_UART_MIS_DSRMMIS_enum;

typedef enum { 
 	UART_MIS_RXMIS_off		 = 0b0,
	UART_MIS_RXMIS_on		 = 0b1,
} t_UART_MIS_RXMIS_enum;

typedef enum { 
 	UART_MIS_TXMIS_off		 = 0b0,
	UART_MIS_TXMIS_on		 = 0b1,
} t_UART_MIS_TXMIS_enum;

typedef enum { 
 	UART_MIS_RTMIS_off		 = 0b0,
	UART_MIS_RTMIS_on		 = 0b1,
} t_UART_MIS_RTMIS_enum;

typedef enum { 
 	UART_MIS_FEMIS_off		 = 0b0,
	UART_MIS_FEMIS_on		 = 0b1,
} t_UART_MIS_FEMIS_enum;

typedef enum { 
 	UART_MIS_PEMIS_off		 = 0b0,
	UART_MIS_PEMIS_on		 = 0b1,
} t_UART_MIS_PEMIS_enum;

typedef enum { 
 	UART_MIS_BEMIS_off		 = 0b0,
	UART_MIS_BEMIS_on		 = 0b1,
} t_UART_MIS_BEMIS_enum;

typedef enum { 
 	UART_MIS_OEMIS_off		 = 0b0,
	UART_MIS_OEMIS_on		 = 0b1,
} t_UART_MIS_OEMIS_enum;

typedef enum { 
 	UART_MIS_TDMIS_off		 = 0b0,
	UART_MIS_TDMIS_on		 = 0b1,
} t_UART_MIS_TDMIS_enum;




#define UART_ICR	0x30006044		 /*--  --*/

#define UART_ICR_RIMIC_pos	 	 	 	0	 	 /*--  --*/
#define UART_ICR_CTSMIC_pos	 	 	 	1	 	 /*--  --*/
#define UART_ICR_DCDMIC_pos	 	 	 	2	 	 /*--  --*/
#define UART_ICR_DSRMIC_pos	 	 	 	3	 	 /*--  --*/
#define UART_ICR_RXIC_pos	 	 	 	4	 	 /*--  --*/
#define UART_ICR_TXIC_pos	 	 	 	5	 	 /*--  --*/
#define UART_ICR_RTIC_pos	 	 	 	6	 	 /*--  --*/
#define UART_ICR_FEIC_pos	 	 	 	7	 	 /*--  --*/
#define UART_ICR_PEIC_pos	 	 	 	8	 	 /*--  --*/
#define UART_ICR_BEIC_pos	 	 	 	9	 	 /*--  --*/
#define UART_ICR_OEIC_pos	 	 	 	10	 	 /*--  --*/
#define UART_ICR_TDIC_pos	 	 	 	11	 	 /*--  --*/


#define UART_ICR_RIMIC_msk	 	 	 	0x00000001UL
#define UART_ICR_CTSMIC_msk	 	 	 	0x00000002UL
#define UART_ICR_DCDMIC_msk	 	 	 	0x00000004UL
#define UART_ICR_DSRMIC_msk	 	 	 	0x00000008UL
#define UART_ICR_RXIC_msk	 	 	 	0x00000010UL
#define UART_ICR_TXIC_msk	 	 	 	0x00000020UL
#define UART_ICR_RTIC_msk	 	 	 	0x00000040UL
#define UART_ICR_FEIC_msk	 	 	 	0x00000080UL
#define UART_ICR_PEIC_msk	 	 	 	0x00000100UL
#define UART_ICR_BEIC_msk	 	 	 	0x00000200UL
#define UART_ICR_OEIC_msk	 	 	 	0x00000400UL
#define UART_ICR_TDIC_msk	 	 	 	0x00000800UL


typedef struct {
uint32_t 	 	UART_ICR_RIMIC	 	:1;
uint32_t 	 	UART_ICR_CTSMIC	 	:1;
uint32_t 	 	UART_ICR_DCDMIC	 	:1;
uint32_t 	 	UART_ICR_DSRMIC	 	:1;
uint32_t 	 	UART_ICR_RXIC	 	:1;
uint32_t 	 	UART_ICR_TXIC	 	:1;
uint32_t 	 	UART_ICR_RTIC	 	:1;
uint32_t 	 	UART_ICR_FEIC	 	:1;
uint32_t 	 	UART_ICR_PEIC	 	:1;
uint32_t 	 	UART_ICR_BEIC	 	:1;
uint32_t 	 	UART_ICR_OEIC	 	:1;
uint32_t 	 	UART_ICR_TDIC	 	:1;
uint32_t 	 	 	 	:20;
} t_UART_ICR_bits;


typedef enum { 
 	UART_ICR_RIMIC_off		 = 0b0,
	UART_ICR_RIMIC_on		 = 0b1,
} t_UART_ICR_RIMIC_enum;

typedef enum { 
 	UART_ICR_CTSMIC_off		 = 0b0,
	UART_ICR_CTSMIC_on		 = 0b1,
} t_UART_ICR_CTSMIC_enum;

typedef enum { 
 	UART_ICR_DCDMIC_off		 = 0b0,
	UART_ICR_DCDMIC_on		 = 0b1,
} t_UART_ICR_DCDMIC_enum;

typedef enum { 
 	UART_ICR_DSRMIC_off		 = 0b0,
	UART_ICR_DSRMIC_on		 = 0b1,
} t_UART_ICR_DSRMIC_enum;

typedef enum { 
 	UART_ICR_RXIC_off		 = 0b0,
	UART_ICR_RXIC_on		 = 0b1,
} t_UART_ICR_RXIC_enum;

typedef enum { 
 	UART_ICR_TXIC_off		 = 0b0,
	UART_ICR_TXIC_on		 = 0b1,
} t_UART_ICR_TXIC_enum;

typedef enum { 
 	UART_ICR_RTIC_off		 = 0b0,
	UART_ICR_RTIC_on		 = 0b1,
} t_UART_ICR_RTIC_enum;

typedef enum { 
 	UART_ICR_FEIC_off		 = 0b0,
	UART_ICR_FEIC_on		 = 0b1,
} t_UART_ICR_FEIC_enum;

typedef enum { 
 	UART_ICR_PEIC_off		 = 0b0,
	UART_ICR_PEIC_on		 = 0b1,
} t_UART_ICR_PEIC_enum;

typedef enum { 
 	UART_ICR_BEIC_off		 = 0b0,
	UART_ICR_BEIC_on		 = 0b1,
} t_UART_ICR_BEIC_enum;

typedef enum { 
 	UART_ICR_OEIC_off		 = 0b0,
	UART_ICR_OEIC_on		 = 0b1,
} t_UART_ICR_OEIC_enum;

typedef enum { 
 	UART_ICR_TDIC_off		 = 0b0,
	UART_ICR_TDIC_on		 = 0b1,
} t_UART_ICR_TDIC_enum;




#define UART_DMACR	0x30006048		 /*--  --*/

#define UART_DMACR_RXDMAE_pos	 	 	 	0	 	 /*--  --*/
#define UART_DMACR_TXDMAE_pos	 	 	 	1	 	 /*--  --*/
#define UART_DMACR_DMAONERR_pos	 	 	 	2	 	 /*--  --*/


#define UART_DMACR_RXDMAE_msk	 	 	 	0x00000001UL
#define UART_DMACR_TXDMAE_msk	 	 	 	0x00000002UL
#define UART_DMACR_DMAONERR_msk	 	 	 	0x00000004UL


typedef struct {
uint32_t 	 	UART_DMACR_RXDMAE	 	:1;
uint32_t 	 	UART_DMACR_TXDMAE	 	:1;
uint32_t 	 	UART_DMACR_DMAONERR	 	:1;
uint32_t 	 	 	 	:29;
} t_UART_DMACR_bits;


typedef enum { 
 	UART_DMACR_RXDMAE_off		 = 0b0,
	UART_DMACR_RXDMAE_on		 = 0b1,
} t_UART_DMACR_RXDMAE_enum;

typedef enum { 
 	UART_DMACR_TXDMAE_off		 = 0b0,
	UART_DMACR_TXDMAE_on		 = 0b1,
} t_UART_DMACR_TXDMAE_enum;

typedef enum { 
 	UART_DMACR_DMAONERR_off		 = 0b0,
	UART_DMACR_DMAONERR_on		 = 0b1,
} t_UART_DMACR_DMAONERR_enum;



typedef struct { 
union {
 __IO uint32_t 	UART_DR_reg;
 __IO t_UART_DR_bits	 UART_DR_bit;
};
union {
 __IO uint32_t 	UART_RSR_reg;
 __IO t_UART_RSR_bits	 UART_RSR_bit;
};
__IO uint32_t reserved0[4];
union {
 __IO uint32_t 	UART_FR_reg;
 __IO t_UART_FR_bits	 UART_FR_bit;
};
__IO uint32_t reserved1[1];
union {
 __IO uint32_t 	UART_ILPR_reg;
 __IO t_UART_ILPR_bits	 UART_ILPR_bit;
};
union {
 __IO uint32_t 	UART_IBRD_reg;
 __IO t_UART_IBRD_bits	 UART_IBRD_bit;
};
union {
 __IO uint32_t 	UART_FBRD_reg;
 __IO t_UART_FBRD_bits	 UART_FBRD_bit;
};
union {
 __IO uint32_t 	UART_LCRH_reg;
 __IO t_UART_LCRH_bits	 UART_LCRH_bit;
};
union {
 __IO uint32_t 	UART_CR_reg;
 __IO t_UART_CR_bits	 UART_CR_bit;
};
union {
 __IO uint32_t 	UART_IFLS_reg;
 __IO t_UART_IFLS_bits	 UART_IFLS_bit;
};
union {
 __IO uint32_t 	UART_IMSC_reg;
 __IO t_UART_IMSC_bits	 UART_IMSC_bit;
};
union {
 __IO uint32_t 	UART_RIS_reg;
 __IO t_UART_RIS_bits	 UART_RIS_bit;
};
union {
 __IO uint32_t 	UART_MIS_reg;
 __IO t_UART_MIS_bits	 UART_MIS_bit;
};
union {
 __IO uint32_t 	UART_ICR_reg;
 __IO t_UART_ICR_bits	 UART_ICR_bit;
};
union {
 __IO uint32_t 	UART_DMACR_reg;
 __IO t_UART_DMACR_bits	 UART_DMACR_bit;
};
} t_UART_REG;


typedef struct { 
} t_ADCSAR_REG;



#define USB_INTSTAT0	0x20010000		 /*--  --*/

#define USB_INTSTAT0_USBBUSINT_pos	 	 	 	0	 	 /*--  --*/
#define USB_INTSTAT0_CEP_INT_pos	 	 	 	1	 	 /*--  --*/
#define USB_INTSTAT0_EP0_INT_pos	 	 	 	2	 	 /*--  --*/
#define USB_INTSTAT0_EP1_INT_pos	 	 	 	3	 	 /*--  --*/
#define USB_INTSTAT0_EP2_INT_pos	 	 	 	4	 	 /*--  --*/
#define USB_INTSTAT0_EP3_INT_pos	 	 	 	5	 	 /*--  --*/


#define USB_INTSTAT0_USBBUSINT_msk	 	 	 	0x00000001UL
#define USB_INTSTAT0_CEP_INT_msk	 	 	 	0x00000002UL
#define USB_INTSTAT0_EP0_INT_msk	 	 	 	0x00000004UL
#define USB_INTSTAT0_EP1_INT_msk	 	 	 	0x00000008UL
#define USB_INTSTAT0_EP2_INT_msk	 	 	 	0x00000010UL
#define USB_INTSTAT0_EP3_INT_msk	 	 	 	0x00000020UL


typedef struct {
uint32_t 	 	USB_INTSTAT0_USBBUSINT	 	:1;
uint32_t 	 	USB_INTSTAT0_CEP_INT	 	:1;
uint32_t 	 	USB_INTSTAT0_EP0_INT	 	:1;
uint32_t 	 	USB_INTSTAT0_EP1_INT	 	:1;
uint32_t 	 	USB_INTSTAT0_EP2_INT	 	:1;
uint32_t 	 	USB_INTSTAT0_EP3_INT	 	:1;
uint32_t 	 	 	 	:26;
} t_USB_INTSTAT0_bits;


typedef enum { 
 	USB_INTSTAT0_USBBUSINT_off		 = 0b0,
	USB_INTSTAT0_USBBUSINT_on		 = 0b1,
} t_USB_INTSTAT0_USBBUSINT_enum;

typedef enum { 
 	USB_INTSTAT0_CEP_INT_off		 = 0b0,
	USB_INTSTAT0_CEP_INT_on		 = 0b1,
} t_USB_INTSTAT0_CEP_INT_enum;

typedef enum { 
 	USB_INTSTAT0_EP0_INT_off		 = 0b0,
	USB_INTSTAT0_EP0_INT_on		 = 0b1,
} t_USB_INTSTAT0_EP0_INT_enum;

typedef enum { 
 	USB_INTSTAT0_EP1_INT_off		 = 0b0,
	USB_INTSTAT0_EP1_INT_on		 = 0b1,
} t_USB_INTSTAT0_EP1_INT_enum;

typedef enum { 
 	USB_INTSTAT0_EP2_INT_off		 = 0b0,
	USB_INTSTAT0_EP2_INT_on		 = 0b1,
} t_USB_INTSTAT0_EP2_INT_enum;

typedef enum { 
 	USB_INTSTAT0_EP3_INT_off		 = 0b0,
	USB_INTSTAT0_EP3_INT_on		 = 0b1,
} t_USB_INTSTAT0_EP3_INT_enum;




#define USB_INTEN0	0x20010008		 /*--  --*/

#define USB_INTEN0_USBBUSINTEN_pos	 	 	 	0	 	 /*--  --*/
#define USB_INTEN0_CEP_INTEN_pos	 	 	 	1	 	 /*--  --*/
#define USB_INTEN0_EP0_INTEN_pos	 	 	 	2	 	 /*--  --*/
#define USB_INTEN0_EP1_INTEN_pos	 	 	 	3	 	 /*--  --*/
#define USB_INTEN0_EP2_INTEN_pos	 	 	 	4	 	 /*--  --*/
#define USB_INTEN0_EP3_INTEN_pos	 	 	 	5	 	 /*--  --*/


#define USB_INTEN0_USBBUSINTEN_msk	 	 	 	0x00000001UL
#define USB_INTEN0_CEP_INTEN_msk	 	 	 	0x00000002UL
#define USB_INTEN0_EP0_INTEN_msk	 	 	 	0x00000004UL
#define USB_INTEN0_EP1_INTEN_msk	 	 	 	0x00000008UL
#define USB_INTEN0_EP2_INTEN_msk	 	 	 	0x00000010UL
#define USB_INTEN0_EP3_INTEN_msk	 	 	 	0x00000020UL


typedef struct {
uint32_t 	 	USB_INTEN0_USBBUSINTEN	 	:1;
uint32_t 	 	USB_INTEN0_CEP_INTEN	 	:1;
uint32_t 	 	USB_INTEN0_EP0_INTEN	 	:1;
uint32_t 	 	USB_INTEN0_EP1_INTEN	 	:1;
uint32_t 	 	USB_INTEN0_EP2_INTEN	 	:1;
uint32_t 	 	USB_INTEN0_EP3_INTEN	 	:1;
uint32_t 	 	 	 	:26;
} t_USB_INTEN0_bits;


typedef enum { 
 	USB_INTEN0_USBBUSINTEN_off		 = 0b0,
	USB_INTEN0_USBBUSINTEN_on		 = 0b1,
} t_USB_INTEN0_USBBUSINTEN_enum;

typedef enum { 
 	USB_INTEN0_CEP_INTEN_off		 = 0b0,
	USB_INTEN0_CEP_INTEN_on		 = 0b1,
} t_USB_INTEN0_CEP_INTEN_enum;

typedef enum { 
 	USB_INTEN0_EP0_INTEN_off		 = 0b0,
	USB_INTEN0_EP0_INTEN_on		 = 0b1,
} t_USB_INTEN0_EP0_INTEN_enum;

typedef enum { 
 	USB_INTEN0_EP1_INTEN_off		 = 0b0,
	USB_INTEN0_EP1_INTEN_on		 = 0b1,
} t_USB_INTEN0_EP1_INTEN_enum;

typedef enum { 
 	USB_INTEN0_EP2_INTEN_off		 = 0b0,
	USB_INTEN0_EP2_INTEN_on		 = 0b1,
} t_USB_INTEN0_EP2_INTEN_enum;

typedef enum { 
 	USB_INTEN0_EP3_INTEN_off		 = 0b0,
	USB_INTEN0_EP3_INTEN_on		 = 0b1,
} t_USB_INTEN0_EP3_INTEN_enum;




#define USB_INTSTAT1	0x20010010		 /*--  --*/

#define USB_INTSTAT1_SOF_pos	 	 	 	0	 	 /*--  --*/
#define USB_INTSTAT1_RESSTATUS_pos	 	 	 	1	 	 /*--  --*/
#define USB_INTSTAT1_RESUME_pos	 	 	 	2	 	 /*--  --*/
#define USB_INTSTAT1_SUSPEND_pos	 	 	 	3	 	 /*--  --*/
#define USB_INTSTAT1_HSSETTLE_pos	 	 	 	4	 	 /*--  --*/
#define USB_INTSTAT1_DMACMPL_pos	 	 	 	5	 	 /*--  --*/
#define USB_INTSTAT1_CLKUNSTBL_pos	 	 	 	6	 	 /*--  --*/


#define USB_INTSTAT1_SOF_msk	 	 	 	0x00000001UL
#define USB_INTSTAT1_RESSTATUS_msk	 	 	 	0x00000002UL
#define USB_INTSTAT1_RESUME_msk	 	 	 	0x00000004UL
#define USB_INTSTAT1_SUSPEND_msk	 	 	 	0x00000008UL
#define USB_INTSTAT1_HSSETTLE_msk	 	 	 	0x00000010UL
#define USB_INTSTAT1_DMACMPL_msk	 	 	 	0x00000020UL
#define USB_INTSTAT1_CLKUNSTBL_msk	 	 	 	0x00000040UL


typedef struct {
uint32_t 	 	USB_INTSTAT1_SOF	 	:1;
uint32_t 	 	USB_INTSTAT1_RESSTATUS	 	:1;
uint32_t 	 	USB_INTSTAT1_RESUME	 	:1;
uint32_t 	 	USB_INTSTAT1_SUSPEND	 	:1;
uint32_t 	 	USB_INTSTAT1_HSSETTLE	 	:1;
uint32_t 	 	USB_INTSTAT1_DMACMPL	 	:1;
uint32_t 	 	USB_INTSTAT1_CLKUNSTBL	 	:1;
uint32_t 	 	 	 	:25;
} t_USB_INTSTAT1_bits;


typedef enum { 
 	USB_INTSTAT1_SOF_off		 = 0b0,
	USB_INTSTAT1_SOF_on		 = 0b1,
} t_USB_INTSTAT1_SOF_enum;

typedef enum { 
 	USB_INTSTAT1_RESSTATUS_off		 = 0b0,
	USB_INTSTAT1_RESSTATUS_on		 = 0b1,
} t_USB_INTSTAT1_RESSTATUS_enum;

typedef enum { 
 	USB_INTSTAT1_RESUME_off		 = 0b0,
	USB_INTSTAT1_RESUME_on		 = 0b1,
} t_USB_INTSTAT1_RESUME_enum;

typedef enum { 
 	USB_INTSTAT1_SUSPEND_off		 = 0b0,
	USB_INTSTAT1_SUSPEND_on		 = 0b1,
} t_USB_INTSTAT1_SUSPEND_enum;

typedef enum { 
 	USB_INTSTAT1_HSSETTLE_off		 = 0b0,
	USB_INTSTAT1_HSSETTLE_on		 = 0b1,
} t_USB_INTSTAT1_HSSETTLE_enum;

typedef enum { 
 	USB_INTSTAT1_DMACMPL_off		 = 0b0,
	USB_INTSTAT1_DMACMPL_on		 = 0b1,
} t_USB_INTSTAT1_DMACMPL_enum;

typedef enum { 
 	USB_INTSTAT1_CLKUNSTBL_off		 = 0b0,
	USB_INTSTAT1_CLKUNSTBL_on		 = 0b1,
} t_USB_INTSTAT1_CLKUNSTBL_enum;




#define USB_INTEN1	0x20010014		 /*--  --*/

#define USB_INTEN1_SOF_pos	 	 	 	0	 	 /*--  --*/
#define USB_INTEN1_RESSTATUS_pos	 	 	 	1	 	 /*--  --*/
#define USB_INTEN1_RESUME_pos	 	 	 	2	 	 /*--  --*/
#define USB_INTEN1_SUSPEND_pos	 	 	 	3	 	 /*--  --*/
#define USB_INTEN1_HISPEED_pos	 	 	 	4	 	 /*--  --*/
#define USB_INTEN1_DMACMPL_pos	 	 	 	5	 	 /*--  --*/
#define USB_INTEN1_CLKUNSTBL_pos	 	 	 	6	 	 /*--  --*/


#define USB_INTEN1_SOF_msk	 	 	 	0x00000001UL
#define USB_INTEN1_RESSTATUS_msk	 	 	 	0x00000002UL
#define USB_INTEN1_RESUME_msk	 	 	 	0x00000004UL
#define USB_INTEN1_SUSPEND_msk	 	 	 	0x00000008UL
#define USB_INTEN1_HISPEED_msk	 	 	 	0x00000010UL
#define USB_INTEN1_DMACMPL_msk	 	 	 	0x00000020UL
#define USB_INTEN1_CLKUNSTBL_msk	 	 	 	0x00000040UL


typedef struct {
uint32_t 	 	USB_INTEN1_SOF	 	:1;
uint32_t 	 	USB_INTEN1_RESSTATUS	 	:1;
uint32_t 	 	USB_INTEN1_RESUME	 	:1;
uint32_t 	 	USB_INTEN1_SUSPEND	 	:1;
uint32_t 	 	USB_INTEN1_HISPEED	 	:1;
uint32_t 	 	USB_INTEN1_DMACMPL	 	:1;
uint32_t 	 	USB_INTEN1_CLKUNSTBL	 	:1;
uint32_t 	 	 	 	:25;
} t_USB_INTEN1_bits;


typedef enum { 
 	USB_INTEN1_SOF_off		 = 0b0,
	USB_INTEN1_SOF_on		 = 0b1,
} t_USB_INTEN1_SOF_enum;

typedef enum { 
 	USB_INTEN1_RESSTATUS_off		 = 0b0,
	USB_INTEN1_RESSTATUS_on		 = 0b1,
} t_USB_INTEN1_RESSTATUS_enum;

typedef enum { 
 	USB_INTEN1_RESUME_off		 = 0b0,
	USB_INTEN1_RESUME_on		 = 0b1,
} t_USB_INTEN1_RESUME_enum;

typedef enum { 
 	USB_INTEN1_SUSPEND_off		 = 0b0,
	USB_INTEN1_SUSPEND_on		 = 0b1,
} t_USB_INTEN1_SUSPEND_enum;

typedef enum { 
 	USB_INTEN1_HISPEED_off		 = 0b0,
	USB_INTEN1_HISPEED_on		 = 0b1,
} t_USB_INTEN1_HISPEED_enum;

typedef enum { 
 	USB_INTEN1_DMACMPL_off		 = 0b0,
	USB_INTEN1_DMACMPL_on		 = 0b1,
} t_USB_INTEN1_DMACMPL_enum;

typedef enum { 
 	USB_INTEN1_CLKUNSTBL_off		 = 0b0,
	USB_INTEN1_CLKUNSTBL_on		 = 0b1,
} t_USB_INTEN1_CLKUNSTBL_enum;




#define USB_OPERATIONS	0x20010018		 /*--  --*/

#define USB_OPERATIONS_GEN_RESUME_pos	 	 	 	0	 	 /*--  --*/
#define USB_OPERATIONS_HIGHSPEED_pos	 	 	 	1	 	 /*--  --*/
#define USB_OPERATIONS_CURRENTSPEED_pos	 	 	 	2	 	 /*--  --*/


#define USB_OPERATIONS_GEN_RESUME_msk	 	 	 	0x00000001UL
#define USB_OPERATIONS_HIGHSPEED_msk	 	 	 	0x00000002UL
#define USB_OPERATIONS_CURRENTSPEED_msk	 	 	 	0x00000004UL


typedef struct {
uint32_t 	 	USB_OPERATIONS_GEN_RESUME	 	:1;
uint32_t 	 	USB_OPERATIONS_HIGHSPEED	 	:1;
uint32_t 	 	USB_OPERATIONS_CURRENTSPEED	 	:1;
uint32_t 	 	 	 	:29;
} t_USB_OPERATIONS_bits;


typedef enum { 
 	USB_OPERATIONS_GEN_RESUME_off		 = 0b0,
	USB_OPERATIONS_GEN_RESUME_on		 = 0b1,
} t_USB_OPERATIONS_GEN_RESUME_enum;

typedef enum { 
 	USB_OPERATIONS_HIGHSPEED_off		 = 0b0,
	USB_OPERATIONS_HIGHSPEED_on		 = 0b1,
} t_USB_OPERATIONS_HIGHSPEED_enum;

typedef enum { 
 	USB_OPERATIONS_CURRENTSPEED_off		 = 0b0,
	USB_OPERATIONS_CURRENTSPEED_on		 = 0b1,
} t_USB_OPERATIONS_CURRENTSPEED_enum;




#define USB_FRAMECNT	0x2001001c		 /*--  --*/

#define USB_FRAMECNT_MICRO_FRAME_COUNTER_pos	 	 	 	0	 	 /*--  --*/
#define USB_FRAMECNT_FRAME_COUNTER_pos	 	 	 	3	 	 /*--  --*/


#define USB_FRAMECNT_MICRO_FRAME_COUNTER_msk	 	 	 	0x00000007UL
#define USB_FRAMECNT_FRAME_COUNTER_msk	 	 	 	0x00003ff8UL


typedef struct {
uint32_t 	 	USB_FRAMECNT_MICRO_FRAME_COUNTER	 	:3;
uint32_t 	 	USB_FRAMECNT_FRAME_COUNTER	 	:11;
uint32_t 	 	 	 	:18;
} t_USB_FRAMECNT_bits;





#define USB_USBADDR	0x20010020		 /*--  --*/

#define USB_USBADDR_USBADDR_pos	 	 	 	0	 	 /*--  --*/


#define USB_USBADDR_USBADDR_msk	 	 	 	0x0000007fUL


typedef struct {
uint32_t 	 	USB_USBADDR_USBADDR	 	:7;
uint32_t 	 	 	 	:25;
} t_USB_USBADDR_bits;





#define USB_CEP_DATA_BUF	0x20010028		 /*--  --*/

#define USB_CEP_DATA_BUF_VAL_pos	 	 	 	0	 	 /*--  --*/


#define USB_CEP_DATA_BUF_VAL_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	USB_CEP_DATA_BUF_VAL	 	:16;
uint32_t 	 	 	 	:16;
} t_USB_CEP_DATA_BUF_bits;





#define USB_CEP_CTRL_STAT	0x2001002c		 /*--  --*/

#define USB_CEP_CTRL_STAT_NAKCLEAR_pos	 	 	 	0	 	 /*--  --*/
#define USB_CEP_CTRL_STAT_STALL_pos	 	 	 	1	 	 /*--  --*/
#define USB_CEP_CTRL_STAT_ZEROLEN_pos	 	 	 	2	 	 /*--  --*/
#define USB_CEP_CTRL_STAT_CEPFLUSH_pos	 	 	 	3	 	 /*--  --*/


#define USB_CEP_CTRL_STAT_NAKCLEAR_msk	 	 	 	0x00000001UL
#define USB_CEP_CTRL_STAT_STALL_msk	 	 	 	0x00000002UL
#define USB_CEP_CTRL_STAT_ZEROLEN_msk	 	 	 	0x00000004UL
#define USB_CEP_CTRL_STAT_CEPFLUSH_msk	 	 	 	0x00000008UL


typedef struct {
uint32_t 	 	USB_CEP_CTRL_STAT_NAKCLEAR	 	:1;
uint32_t 	 	USB_CEP_CTRL_STAT_STALL	 	:1;
uint32_t 	 	USB_CEP_CTRL_STAT_ZEROLEN	 	:1;
uint32_t 	 	USB_CEP_CTRL_STAT_CEPFLUSH	 	:1;
uint32_t 	 	 	 	:28;
} t_USB_CEP_CTRL_STAT_bits;


typedef enum { 
 	USB_CEP_CTRL_STAT_NAKCLEAR_off		 = 0b0,
	USB_CEP_CTRL_STAT_NAKCLEAR_on		 = 0b1,
} t_USB_CEP_CTRL_STAT_NAKCLEAR_enum;

typedef enum { 
 	USB_CEP_CTRL_STAT_STALL_off		 = 0b0,
	USB_CEP_CTRL_STAT_STALL_on		 = 0b1,
} t_USB_CEP_CTRL_STAT_STALL_enum;

typedef enum { 
 	USB_CEP_CTRL_STAT_ZEROLEN_off		 = 0b0,
	USB_CEP_CTRL_STAT_ZEROLEN_on		 = 0b1,
} t_USB_CEP_CTRL_STAT_ZEROLEN_enum;

typedef enum { 
 	USB_CEP_CTRL_STAT_CEPFLUSH_off		 = 0b0,
	USB_CEP_CTRL_STAT_CEPFLUSH_on		 = 0b1,
} t_USB_CEP_CTRL_STAT_CEPFLUSH_enum;




#define USB_CEP_IRQ_ENB	0x20010030		 /*--  --*/

#define USB_CEP_IRQ_ENB_SETUPTOKEN_pos	 	 	 	0	 	 /*--  --*/
#define USB_CEP_IRQ_ENB_SETUPPKT_pos	 	 	 	1	 	 /*--  --*/
#define USB_CEP_IRQ_ENB_OUTTOKEN_pos	 	 	 	2	 	 /*--  --*/
#define USB_CEP_IRQ_ENB_INTOKEN_pos	 	 	 	3	 	 /*--  --*/
#define USB_CEP_IRQ_ENB_PINGTOKEN_pos	 	 	 	4	 	 /*--  --*/
#define USB_CEP_IRQ_ENB_DATAPKTTR_pos	 	 	 	5	 	 /*--  --*/
#define USB_CEP_IRQ_ENB_DATAPKTREC_pos	 	 	 	6	 	 /*--  --*/
#define USB_CEP_IRQ_ENB_NAKSENT_pos	 	 	 	7	 	 /*--  --*/
#define USB_CEP_IRQ_ENB_STALLSENT_pos	 	 	 	8	 	 /*--  --*/
#define USB_CEP_IRQ_ENB_USBERR_pos	 	 	 	9	 	 /*--  --*/
#define USB_CEP_IRQ_ENB_STATCMPLN_pos	 	 	 	10	 	 /*--  --*/
#define USB_CEP_IRQ_ENB_BUFFFULL_pos	 	 	 	11	 	 /*--  --*/
#define USB_CEP_IRQ_ENB_BUFFEMPTY_pos	 	 	 	12	 	 /*--  --*/


#define USB_CEP_IRQ_ENB_SETUPTOKEN_msk	 	 	 	0x00000001UL
#define USB_CEP_IRQ_ENB_SETUPPKT_msk	 	 	 	0x00000002UL
#define USB_CEP_IRQ_ENB_OUTTOKEN_msk	 	 	 	0x00000004UL
#define USB_CEP_IRQ_ENB_INTOKEN_msk	 	 	 	0x00000008UL
#define USB_CEP_IRQ_ENB_PINGTOKEN_msk	 	 	 	0x00000010UL
#define USB_CEP_IRQ_ENB_DATAPKTTR_msk	 	 	 	0x00000020UL
#define USB_CEP_IRQ_ENB_DATAPKTREC_msk	 	 	 	0x00000040UL
#define USB_CEP_IRQ_ENB_NAKSENT_msk	 	 	 	0x00000080UL
#define USB_CEP_IRQ_ENB_STALLSENT_msk	 	 	 	0x00000100UL
#define USB_CEP_IRQ_ENB_USBERR_msk	 	 	 	0x00000200UL
#define USB_CEP_IRQ_ENB_STATCMPLN_msk	 	 	 	0x00000400UL
#define USB_CEP_IRQ_ENB_BUFFFULL_msk	 	 	 	0x00000800UL
#define USB_CEP_IRQ_ENB_BUFFEMPTY_msk	 	 	 	0x00001000UL


typedef struct {
uint32_t 	 	USB_CEP_IRQ_ENB_SETUPTOKEN	 	:1;
uint32_t 	 	USB_CEP_IRQ_ENB_SETUPPKT	 	:1;
uint32_t 	 	USB_CEP_IRQ_ENB_OUTTOKEN	 	:1;
uint32_t 	 	USB_CEP_IRQ_ENB_INTOKEN	 	:1;
uint32_t 	 	USB_CEP_IRQ_ENB_PINGTOKEN	 	:1;
uint32_t 	 	USB_CEP_IRQ_ENB_DATAPKTTR	 	:1;
uint32_t 	 	USB_CEP_IRQ_ENB_DATAPKTREC	 	:1;
uint32_t 	 	USB_CEP_IRQ_ENB_NAKSENT	 	:1;
uint32_t 	 	USB_CEP_IRQ_ENB_STALLSENT	 	:1;
uint32_t 	 	USB_CEP_IRQ_ENB_USBERR	 	:1;
uint32_t 	 	USB_CEP_IRQ_ENB_STATCMPLN	 	:1;
uint32_t 	 	USB_CEP_IRQ_ENB_BUFFFULL	 	:1;
uint32_t 	 	USB_CEP_IRQ_ENB_BUFFEMPTY	 	:1;
uint32_t 	 	 	 	:19;
} t_USB_CEP_IRQ_ENB_bits;


typedef enum { 
 	USB_CEP_IRQ_ENB_SETUPTOKEN_off		 = 0b0,
	USB_CEP_IRQ_ENB_SETUPTOKEN_on		 = 0b1,
} t_USB_CEP_IRQ_ENB_SETUPTOKEN_enum;

typedef enum { 
 	USB_CEP_IRQ_ENB_SETUPPKT_off		 = 0b0,
	USB_CEP_IRQ_ENB_SETUPPKT_on		 = 0b1,
} t_USB_CEP_IRQ_ENB_SETUPPKT_enum;

typedef enum { 
 	USB_CEP_IRQ_ENB_OUTTOKEN_off		 = 0b0,
	USB_CEP_IRQ_ENB_OUTTOKEN_on		 = 0b1,
} t_USB_CEP_IRQ_ENB_OUTTOKEN_enum;

typedef enum { 
 	USB_CEP_IRQ_ENB_INTOKEN_off		 = 0b0,
	USB_CEP_IRQ_ENB_INTOKEN_on		 = 0b1,
} t_USB_CEP_IRQ_ENB_INTOKEN_enum;

typedef enum { 
 	USB_CEP_IRQ_ENB_PINGTOKEN_off		 = 0b0,
	USB_CEP_IRQ_ENB_PINGTOKEN_on		 = 0b1,
} t_USB_CEP_IRQ_ENB_PINGTOKEN_enum;

typedef enum { 
 	USB_CEP_IRQ_ENB_DATAPKTTR_off		 = 0b0,
	USB_CEP_IRQ_ENB_DATAPKTTR_on		 = 0b1,
} t_USB_CEP_IRQ_ENB_DATAPKTTR_enum;

typedef enum { 
 	USB_CEP_IRQ_ENB_DATAPKTREC_off		 = 0b0,
	USB_CEP_IRQ_ENB_DATAPKTREC_on		 = 0b1,
} t_USB_CEP_IRQ_ENB_DATAPKTREC_enum;

typedef enum { 
 	USB_CEP_IRQ_ENB_NAKSENT_off		 = 0b0,
	USB_CEP_IRQ_ENB_NAKSENT_on		 = 0b1,
} t_USB_CEP_IRQ_ENB_NAKSENT_enum;

typedef enum { 
 	USB_CEP_IRQ_ENB_STALLSENT_off		 = 0b0,
	USB_CEP_IRQ_ENB_STALLSENT_on		 = 0b1,
} t_USB_CEP_IRQ_ENB_STALLSENT_enum;

typedef enum { 
 	USB_CEP_IRQ_ENB_USBERR_off		 = 0b0,
	USB_CEP_IRQ_ENB_USBERR_on		 = 0b1,
} t_USB_CEP_IRQ_ENB_USBERR_enum;

typedef enum { 
 	USB_CEP_IRQ_ENB_STATCMPLN_off		 = 0b0,
	USB_CEP_IRQ_ENB_STATCMPLN_on		 = 0b1,
} t_USB_CEP_IRQ_ENB_STATCMPLN_enum;

typedef enum { 
 	USB_CEP_IRQ_ENB_BUFFFULL_off		 = 0b0,
	USB_CEP_IRQ_ENB_BUFFFULL_on		 = 0b1,
} t_USB_CEP_IRQ_ENB_BUFFFULL_enum;

typedef enum { 
 	USB_CEP_IRQ_ENB_BUFFEMPTY_off		 = 0b0,
	USB_CEP_IRQ_ENB_BUFFEMPTY_on		 = 0b1,
} t_USB_CEP_IRQ_ENB_BUFFEMPTY_enum;




#define USB_CEP_IRQ_STAT	0x20010034		 /*--  --*/

#define USB_CEP_IRQ_STAT_SETUPTOKEN_pos	 	 	 	0	 	 /*--  --*/
#define USB_CEP_IRQ_STAT_SETUPPKT_pos	 	 	 	1	 	 /*--  --*/
#define USB_CEP_IRQ_STAT_OUTTOKEN_pos	 	 	 	2	 	 /*--  --*/
#define USB_CEP_IRQ_STAT_INTOKEN_pos	 	 	 	3	 	 /*--  --*/
#define USB_CEP_IRQ_STAT_PINGTOKEN_pos	 	 	 	4	 	 /*--  --*/
#define USB_CEP_IRQ_STAT_DATAPKTTR_pos	 	 	 	5	 	 /*--  --*/
#define USB_CEP_IRQ_STAT_DATAPKTREC_pos	 	 	 	6	 	 /*--  --*/
#define USB_CEP_IRQ_STAT_NAKSENT_pos	 	 	 	7	 	 /*--  --*/
#define USB_CEP_IRQ_STAT_STALLSENT_pos	 	 	 	8	 	 /*--  --*/
#define USB_CEP_IRQ_STAT_USBERR_pos	 	 	 	9	 	 /*--  --*/
#define USB_CEP_IRQ_STAT_STATCMPLN_pos	 	 	 	10	 	 /*--  --*/
#define USB_CEP_IRQ_STAT_BUFFFULL_pos	 	 	 	11	 	 /*--  --*/
#define USB_CEP_IRQ_STAT_BUFFEMPTY_pos	 	 	 	12	 	 /*--  --*/


#define USB_CEP_IRQ_STAT_SETUPTOKEN_msk	 	 	 	0x00000001UL
#define USB_CEP_IRQ_STAT_SETUPPKT_msk	 	 	 	0x00000002UL
#define USB_CEP_IRQ_STAT_OUTTOKEN_msk	 	 	 	0x00000004UL
#define USB_CEP_IRQ_STAT_INTOKEN_msk	 	 	 	0x00000008UL
#define USB_CEP_IRQ_STAT_PINGTOKEN_msk	 	 	 	0x00000010UL
#define USB_CEP_IRQ_STAT_DATAPKTTR_msk	 	 	 	0x00000020UL
#define USB_CEP_IRQ_STAT_DATAPKTREC_msk	 	 	 	0x00000040UL
#define USB_CEP_IRQ_STAT_NAKSENT_msk	 	 	 	0x00000080UL
#define USB_CEP_IRQ_STAT_STALLSENT_msk	 	 	 	0x00000100UL
#define USB_CEP_IRQ_STAT_USBERR_msk	 	 	 	0x00000200UL
#define USB_CEP_IRQ_STAT_STATCMPLN_msk	 	 	 	0x00000400UL
#define USB_CEP_IRQ_STAT_BUFFFULL_msk	 	 	 	0x00000800UL
#define USB_CEP_IRQ_STAT_BUFFEMPTY_msk	 	 	 	0x00001000UL


typedef struct {
uint32_t 	 	USB_CEP_IRQ_STAT_SETUPTOKEN	 	:1;
uint32_t 	 	USB_CEP_IRQ_STAT_SETUPPKT	 	:1;
uint32_t 	 	USB_CEP_IRQ_STAT_OUTTOKEN	 	:1;
uint32_t 	 	USB_CEP_IRQ_STAT_INTOKEN	 	:1;
uint32_t 	 	USB_CEP_IRQ_STAT_PINGTOKEN	 	:1;
uint32_t 	 	USB_CEP_IRQ_STAT_DATAPKTTR	 	:1;
uint32_t 	 	USB_CEP_IRQ_STAT_DATAPKTREC	 	:1;
uint32_t 	 	USB_CEP_IRQ_STAT_NAKSENT	 	:1;
uint32_t 	 	USB_CEP_IRQ_STAT_STALLSENT	 	:1;
uint32_t 	 	USB_CEP_IRQ_STAT_USBERR	 	:1;
uint32_t 	 	USB_CEP_IRQ_STAT_STATCMPLN	 	:1;
uint32_t 	 	USB_CEP_IRQ_STAT_BUFFFULL	 	:1;
uint32_t 	 	USB_CEP_IRQ_STAT_BUFFEMPTY	 	:1;
uint32_t 	 	 	 	:19;
} t_USB_CEP_IRQ_STAT_bits;


typedef enum { 
 	USB_CEP_IRQ_STAT_SETUPTOKEN_off		 = 0b0,
	USB_CEP_IRQ_STAT_SETUPTOKEN_on		 = 0b1,
} t_USB_CEP_IRQ_STAT_SETUPTOKEN_enum;

typedef enum { 
 	USB_CEP_IRQ_STAT_SETUPPKT_off		 = 0b0,
	USB_CEP_IRQ_STAT_SETUPPKT_on		 = 0b1,
} t_USB_CEP_IRQ_STAT_SETUPPKT_enum;

typedef enum { 
 	USB_CEP_IRQ_STAT_OUTTOKEN_off		 = 0b0,
	USB_CEP_IRQ_STAT_OUTTOKEN_on		 = 0b1,
} t_USB_CEP_IRQ_STAT_OUTTOKEN_enum;

typedef enum { 
 	USB_CEP_IRQ_STAT_INTOKEN_off		 = 0b0,
	USB_CEP_IRQ_STAT_INTOKEN_on		 = 0b1,
} t_USB_CEP_IRQ_STAT_INTOKEN_enum;

typedef enum { 
 	USB_CEP_IRQ_STAT_PINGTOKEN_off		 = 0b0,
	USB_CEP_IRQ_STAT_PINGTOKEN_on		 = 0b1,
} t_USB_CEP_IRQ_STAT_PINGTOKEN_enum;

typedef enum { 
 	USB_CEP_IRQ_STAT_DATAPKTTR_off		 = 0b0,
	USB_CEP_IRQ_STAT_DATAPKTTR_on		 = 0b1,
} t_USB_CEP_IRQ_STAT_DATAPKTTR_enum;

typedef enum { 
 	USB_CEP_IRQ_STAT_DATAPKTREC_off		 = 0b0,
	USB_CEP_IRQ_STAT_DATAPKTREC_on		 = 0b1,
} t_USB_CEP_IRQ_STAT_DATAPKTREC_enum;

typedef enum { 
 	USB_CEP_IRQ_STAT_NAKSENT_off		 = 0b0,
	USB_CEP_IRQ_STAT_NAKSENT_on		 = 0b1,
} t_USB_CEP_IRQ_STAT_NAKSENT_enum;

typedef enum { 
 	USB_CEP_IRQ_STAT_STALLSENT_off		 = 0b0,
	USB_CEP_IRQ_STAT_STALLSENT_on		 = 0b1,
} t_USB_CEP_IRQ_STAT_STALLSENT_enum;

typedef enum { 
 	USB_CEP_IRQ_STAT_USBERR_off		 = 0b0,
	USB_CEP_IRQ_STAT_USBERR_on		 = 0b1,
} t_USB_CEP_IRQ_STAT_USBERR_enum;

typedef enum { 
 	USB_CEP_IRQ_STAT_STATCMPLN_off		 = 0b0,
	USB_CEP_IRQ_STAT_STATCMPLN_on		 = 0b1,
} t_USB_CEP_IRQ_STAT_STATCMPLN_enum;

typedef enum { 
 	USB_CEP_IRQ_STAT_BUFFFULL_off		 = 0b0,
	USB_CEP_IRQ_STAT_BUFFFULL_on		 = 0b1,
} t_USB_CEP_IRQ_STAT_BUFFFULL_enum;

typedef enum { 
 	USB_CEP_IRQ_STAT_BUFFEMPTY_off		 = 0b0,
	USB_CEP_IRQ_STAT_BUFFEMPTY_on		 = 0b1,
} t_USB_CEP_IRQ_STAT_BUFFEMPTY_enum;




#define USB_CEP_IN_XFRCNT	0x20010038		 /*--  --*/

#define USB_CEP_IN_XFRCNT_DATACOUNT_pos	 	 	 	0	 	 /*--  --*/


#define USB_CEP_IN_XFRCNT_DATACOUNT_msk	 	 	 	0x000000ffUL


typedef struct {
uint32_t 	 	USB_CEP_IN_XFRCNT_DATACOUNT	 	:8;
uint32_t 	 	 	 	:24;
} t_USB_CEP_IN_XFRCNT_bits;





#define USB_CEP_OUT_XFRCNT	0x2001003c		 /*--  --*/

#define USB_CEP_OUT_XFRCNT_DATACOUNT_pos	 	 	 	0	 	 /*--  --*/


#define USB_CEP_OUT_XFRCNT_DATACOUNT_msk	 	 	 	0x000000ffUL


typedef struct {
uint32_t 	 	USB_CEP_OUT_XFRCNT_DATACOUNT	 	:8;
uint32_t 	 	 	 	:24;
} t_USB_CEP_OUT_XFRCNT_bits;





#define USB_CEP_DATA_AVL	0x20010040		 /*--  --*/

#define USB_CEP_DATA_AVL_NUM_BYTES_pos	 	 	 	0	 	 /*--  --*/


#define USB_CEP_DATA_AVL_NUM_BYTES_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	USB_CEP_DATA_AVL_NUM_BYTES	 	:16;
uint32_t 	 	 	 	:16;
} t_USB_CEP_DATA_AVL_bits;





#define USB_CEP_SETUP1_0	0x20010044		 /*--  --*/

#define USB_CEP_SETUP1_0_BYTE0_pos	 	 	 	0	 	 /*--  --*/
#define USB_CEP_SETUP1_0_BYTE1_pos	 	 	 	8	 	 /*--  --*/


#define USB_CEP_SETUP1_0_BYTE0_msk	 	 	 	0x000000ffUL
#define USB_CEP_SETUP1_0_BYTE1_msk	 	 	 	0x0000ff00UL


typedef struct {
uint32_t 	 	USB_CEP_SETUP1_0_BYTE0	 	:8;
uint32_t 	 	USB_CEP_SETUP1_0_BYTE1	 	:8;
uint32_t 	 	 	 	:16;
} t_USB_CEP_SETUP1_0_bits;





#define USB_CEP_SETUP3_2	0x20010048		 /*--  --*/

#define USB_CEP_SETUP3_2_BYTE2_pos	 	 	 	0	 	 /*--  --*/
#define USB_CEP_SETUP3_2_BYTE3_pos	 	 	 	8	 	 /*--  --*/


#define USB_CEP_SETUP3_2_BYTE2_msk	 	 	 	0x000000ffUL
#define USB_CEP_SETUP3_2_BYTE3_msk	 	 	 	0x0000ff00UL


typedef struct {
uint32_t 	 	USB_CEP_SETUP3_2_BYTE2	 	:8;
uint32_t 	 	USB_CEP_SETUP3_2_BYTE3	 	:8;
uint32_t 	 	 	 	:16;
} t_USB_CEP_SETUP3_2_bits;





#define USB_CEP_SETUP5_4	0x2001004c		 /*--  --*/

#define USB_CEP_SETUP5_4_BYTE4_pos	 	 	 	0	 	 /*--  --*/
#define USB_CEP_SETUP5_4_BYTE5_pos	 	 	 	8	 	 /*--  --*/


#define USB_CEP_SETUP5_4_BYTE4_msk	 	 	 	0x000000ffUL
#define USB_CEP_SETUP5_4_BYTE5_msk	 	 	 	0x0000ff00UL


typedef struct {
uint32_t 	 	USB_CEP_SETUP5_4_BYTE4	 	:8;
uint32_t 	 	USB_CEP_SETUP5_4_BYTE5	 	:8;
uint32_t 	 	 	 	:16;
} t_USB_CEP_SETUP5_4_bits;





#define USB_CEP_SETUP7_6	0x20010050		 /*--  --*/

#define USB_CEP_SETUP7_6_BYTE6_pos	 	 	 	0	 	 /*--  --*/
#define USB_CEP_SETUP7_6_BYTE7_pos	 	 	 	8	 	 /*--  --*/


#define USB_CEP_SETUP7_6_BYTE6_msk	 	 	 	0x000000ffUL
#define USB_CEP_SETUP7_6_BYTE7_msk	 	 	 	0x0000ff00UL


typedef struct {
uint32_t 	 	USB_CEP_SETUP7_6_BYTE6	 	:8;
uint32_t 	 	USB_CEP_SETUP7_6_BYTE7	 	:8;
uint32_t 	 	 	 	:16;
} t_USB_CEP_SETUP7_6_bits;





#define USB_CEP_START_ADDR	0x20010054		 /*--  --*/

#define USB_CEP_START_ADDR_VAL_pos	 	 	 	0	 	 /*--  --*/


#define USB_CEP_START_ADDR_VAL_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	USB_CEP_START_ADDR_VAL	 	:16;
uint32_t 	 	 	 	:16;
} t_USB_CEP_START_ADDR_bits;





#define USB_CEP_END_ADDR	0x20010058		 /*--  --*/

#define USB_CEP_END_ADDR_VAL_pos	 	 	 	0	 	 /*--  --*/


#define USB_CEP_END_ADDR_VAL_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	USB_CEP_END_ADDR_VAL	 	:16;
uint32_t 	 	 	 	:16;
} t_USB_CEP_END_ADDR_bits;





#define USB_DMA_CTRL_STS	0x2001005c		 /*--  --*/

#define USB_DMA_CTRL_STS_DMA_EP_ADDR_pos	 	 	 	0	 	 /*--  --*/
#define USB_DMA_CTRL_STS_DMA_RW_pos	 	 	 	4	 	 /*--  --*/
#define USB_DMA_CTRL_STS_DMA_EN_pos	 	 	 	5	 	 /*--  --*/


#define USB_DMA_CTRL_STS_DMA_EP_ADDR_msk	 	 	 	0x0000000fUL
#define USB_DMA_CTRL_STS_DMA_RW_msk	 	 	 	0x00000010UL
#define USB_DMA_CTRL_STS_DMA_EN_msk	 	 	 	0x00000020UL


typedef struct {
uint32_t 	 	USB_DMA_CTRL_STS_DMA_EP_ADDR	 	:4;
uint32_t 	 	USB_DMA_CTRL_STS_DMA_RW	 	:1;
uint32_t 	 	USB_DMA_CTRL_STS_DMA_EN	 	:1;
uint32_t 	 	 	 	:26;
} t_USB_DMA_CTRL_STS_bits;


typedef enum { 
 	USB_DMA_CTRL_STS_DMA_RW_off		 = 0b0,
	USB_DMA_CTRL_STS_DMA_RW_on		 = 0b1,
} t_USB_DMA_CTRL_STS_DMA_RW_enum;

typedef enum { 
 	USB_DMA_CTRL_STS_DMA_EN_off		 = 0b0,
	USB_DMA_CTRL_STS_DMA_EN_on		 = 0b1,
} t_USB_DMA_CTRL_STS_DMA_EN_enum;




#define USB_DMA_CNT	0x20010060		 /*--  --*/

#define USB_DMA_CNT_DMA_CNT_pos	 	 	 	0	 	 /*--  --*/


#define USB_DMA_CNT_DMA_CNT_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	USB_DMA_CNT_DMA_CNT	 	:16;
uint32_t 	 	 	 	:16;
} t_USB_DMA_CNT_bits;





#define USB_AHB_DMA_ADDR	0x20010700		 /*--  --*/

#define USB_AHB_DMA_ADDR_AHBADDR_pos	 	 	 	0	 	 /*--  --*/


#define USB_AHB_DMA_ADDR_AHBADDR_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	USB_AHB_DMA_ADDR_AHBADDR	 	:32;
} t_USB_AHB_DMA_ADDR_bits;





#define USB_PHY_PD	0x200107c0		 /*--  --*/

#define USB_PHY_PD_CMN_pos	 	 	 	0	 	 /*--  --*/
#define USB_PHY_PD_RX_pos	 	 	 	1	 	 /*--  --*/
#define USB_PHY_PD_TX_pos	 	 	 	2	 	 /*--  --*/


#define USB_PHY_PD_CMN_msk	 	 	 	0x00000001UL
#define USB_PHY_PD_RX_msk	 	 	 	0x00000002UL
#define USB_PHY_PD_TX_msk	 	 	 	0x00000004UL


typedef struct {
uint32_t 	 	USB_PHY_PD_CMN	 	:1;
uint32_t 	 	USB_PHY_PD_RX	 	:1;
uint32_t 	 	USB_PHY_PD_TX	 	:1;
uint32_t 	 	 	 	:29;
} t_USB_PHY_PD_bits;


typedef enum { 
 	USB_PHY_PD_CMN_off		 = 0b0,
	USB_PHY_PD_CMN_on		 = 0b1,
} t_USB_PHY_PD_CMN_enum;

typedef enum { 
 	USB_PHY_PD_RX_off		 = 0b0,
	USB_PHY_PD_RX_on		 = 0b1,
} t_USB_PHY_PD_RX_enum;

typedef enum { 
 	USB_PHY_PD_TX_off		 = 0b0,
	USB_PHY_PD_TX_on		 = 0b1,
} t_USB_PHY_PD_TX_enum;




#define USB_PLLUSBCFG0	0x20010800		 /*--  --*/

#define USB_PLLUSBCFG0_PLLEN_pos	 	 	 	0	 	 /*--  --*/
#define USB_PLLUSBCFG0_BYP_pos	 	 	 	1	 	 /*--  --*/
#define USB_PLLUSBCFG0_DACEN_pos	 	 	 	3	 	 /*--  --*/
#define USB_PLLUSBCFG0_DSMEN_pos	 	 	 	4	 	 /*--  --*/
#define USB_PLLUSBCFG0_FOUTEN_pos	 	 	 	5	 	 /*--  --*/
#define USB_PLLUSBCFG0_REFDIV_pos	 	 	 	7	 	 /*--  --*/
#define USB_PLLUSBCFG0_PD0A_pos	 	 	 	13	 	 /*--  --*/
#define USB_PLLUSBCFG0_PD0B_pos	 	 	 	16	 	 /*--  --*/
#define USB_PLLUSBCFG0_PD1A_pos	 	 	 	22	 	 /*--  --*/
#define USB_PLLUSBCFG0_PD1B_pos	 	 	 	25	 	 /*--  --*/


#define USB_PLLUSBCFG0_PLLEN_msk	 	 	 	0x00000001UL
#define USB_PLLUSBCFG0_BYP_msk	 	 	 	0x00000006UL
#define USB_PLLUSBCFG0_DACEN_msk	 	 	 	0x00000008UL
#define USB_PLLUSBCFG0_DSMEN_msk	 	 	 	0x00000010UL
#define USB_PLLUSBCFG0_FOUTEN_msk	 	 	 	0x00000060UL
#define USB_PLLUSBCFG0_REFDIV_msk	 	 	 	0x00001f80UL
#define USB_PLLUSBCFG0_PD0A_msk	 	 	 	0x0000e000UL
#define USB_PLLUSBCFG0_PD0B_msk	 	 	 	0x003f0000UL
#define USB_PLLUSBCFG0_PD1A_msk	 	 	 	0x01c00000UL
#define USB_PLLUSBCFG0_PD1B_msk	 	 	 	0x7e000000UL


typedef struct {
uint32_t 	 	USB_PLLUSBCFG0_PLLEN	 	:1;
uint32_t 	 	USB_PLLUSBCFG0_BYP	 	:2;
uint32_t 	 	USB_PLLUSBCFG0_DACEN	 	:1;
uint32_t 	 	USB_PLLUSBCFG0_DSMEN	 	:1;
uint32_t 	 	USB_PLLUSBCFG0_FOUTEN	 	:2;
uint32_t 	 	USB_PLLUSBCFG0_REFDIV	 	:6;
uint32_t 	 	USB_PLLUSBCFG0_PD0A	 	:3;
uint32_t 	 	USB_PLLUSBCFG0_PD0B	 	:6;
uint32_t 	 	USB_PLLUSBCFG0_PD1A	 	:3;
uint32_t 	 	USB_PLLUSBCFG0_PD1B	 	:6;
uint32_t 	 	 	 	:1;
} t_USB_PLLUSBCFG0_bits;


typedef enum { 
 	USB_PLLUSBCFG0_PLLEN_off		 = 0b0,
	USB_PLLUSBCFG0_PLLEN_on		 = 0b1,
} t_USB_PLLUSBCFG0_PLLEN_enum;

typedef enum { 
 	USB_PLLUSBCFG0_DACEN_off		 = 0b0,
	USB_PLLUSBCFG0_DACEN_on		 = 0b1,
} t_USB_PLLUSBCFG0_DACEN_enum;

typedef enum { 
 	USB_PLLUSBCFG0_DSMEN_off		 = 0b0,
	USB_PLLUSBCFG0_DSMEN_on		 = 0b1,
} t_USB_PLLUSBCFG0_DSMEN_enum;




#define USB_PLLUSBCFG1	0x20010804		 /*--  --*/

#define USB_PLLUSBCFG1_FRAC_pos	 	 	 	0	 	 /*--  --*/


#define USB_PLLUSBCFG1_FRAC_msk	 	 	 	0x00ffffffUL


typedef struct {
uint32_t 	 	USB_PLLUSBCFG1_FRAC	 	:24;
uint32_t 	 	 	 	:8;
} t_USB_PLLUSBCFG1_bits;





#define USB_PLLUSBCFG2	0x20010808		 /*--  --*/

#define USB_PLLUSBCFG2_FBDIV_pos	 	 	 	0	 	 /*--  --*/


#define USB_PLLUSBCFG2_FBDIV_msk	 	 	 	0x00000fffUL


typedef struct {
uint32_t 	 	USB_PLLUSBCFG2_FBDIV	 	:12;
uint32_t 	 	 	 	:20;
} t_USB_PLLUSBCFG2_bits;





#define USB_PLLUSBCFG3	0x2001080c		 /*--  --*/

#define USB_PLLUSBCFG3_DSKEWEN_pos	 	 	 	0	 	 /*--  --*/
#define USB_PLLUSBCFG3_DSKEWCALBYP_pos	 	 	 	1	 	 /*--  --*/
#define USB_PLLUSBCFG3_DSKEWCALCNT_pos	 	 	 	2	 	 /*--  --*/
#define USB_PLLUSBCFG3_DSKEWCALEN_pos	 	 	 	5	 	 /*--  --*/
#define USB_PLLUSBCFG3_DSKEWFASTCAL_pos	 	 	 	6	 	 /*--  --*/
#define USB_PLLUSBCFG3_DSKEWCALIN_pos	 	 	 	8	 	 /*--  --*/
#define USB_PLLUSBCFG3_USBCLKSEL_pos	 	 	 	24	 	 /*--  --*/


#define USB_PLLUSBCFG3_DSKEWEN_msk	 	 	 	0x00000001UL
#define USB_PLLUSBCFG3_DSKEWCALBYP_msk	 	 	 	0x00000002UL
#define USB_PLLUSBCFG3_DSKEWCALCNT_msk	 	 	 	0x0000001cUL
#define USB_PLLUSBCFG3_DSKEWCALEN_msk	 	 	 	0x00000020UL
#define USB_PLLUSBCFG3_DSKEWFASTCAL_msk	 	 	 	0x00000040UL
#define USB_PLLUSBCFG3_DSKEWCALIN_msk	 	 	 	0x000fff00UL
#define USB_PLLUSBCFG3_USBCLKSEL_msk	 	 	 	0x01000000UL


typedef struct {
uint32_t 	 	USB_PLLUSBCFG3_DSKEWEN	 	:1;
uint32_t 	 	USB_PLLUSBCFG3_DSKEWCALBYP	 	:1;
uint32_t 	 	USB_PLLUSBCFG3_DSKEWCALCNT	 	:3;
uint32_t 	 	USB_PLLUSBCFG3_DSKEWCALEN	 	:1;
uint32_t 	 	USB_PLLUSBCFG3_DSKEWFASTCAL	 	:1;
uint32_t 	 	 	 	:1;
uint32_t 	 	USB_PLLUSBCFG3_DSKEWCALIN	 	:12;
uint32_t 	 	 	 	:4;
uint32_t 	 	USB_PLLUSBCFG3_USBCLKSEL	 	:1;
uint32_t 	 	 	 	:7;
} t_USB_PLLUSBCFG3_bits;


typedef enum { 
 	USB_PLLUSBCFG3_DSKEWEN_off		 = 0b0,
	USB_PLLUSBCFG3_DSKEWEN_on		 = 0b1,
} t_USB_PLLUSBCFG3_DSKEWEN_enum;

typedef enum { 
 	USB_PLLUSBCFG3_DSKEWCALBYP_off		 = 0b0,
	USB_PLLUSBCFG3_DSKEWCALBYP_on		 = 0b1,
} t_USB_PLLUSBCFG3_DSKEWCALBYP_enum;

typedef enum { 
 	USB_PLLUSBCFG3_DSKEWCALEN_off		 = 0b0,
	USB_PLLUSBCFG3_DSKEWCALEN_on		 = 0b1,
} t_USB_PLLUSBCFG3_DSKEWCALEN_enum;

typedef enum { 
 	USB_PLLUSBCFG3_DSKEWFASTCAL_off		 = 0b0,
	USB_PLLUSBCFG3_DSKEWFASTCAL_on		 = 0b1,
} t_USB_PLLUSBCFG3_DSKEWFASTCAL_enum;

typedef enum { 
 	USB_PLLUSBCFG3_USBCLKSEL_off		 = 0b0,
	USB_PLLUSBCFG3_USBCLKSEL_on		 = 0b1,
} t_USB_PLLUSBCFG3_USBCLKSEL_enum;




#define USB_PLLUSBSTAT	0x20010810		 /*--  --*/

#define USB_PLLUSBSTAT_LOCK_pos	 	 	 	0	 	 /*--  --*/


#define USB_PLLUSBSTAT_LOCK_msk	 	 	 	0x00000001UL


typedef struct {
uint32_t 	 	USB_PLLUSBSTAT_LOCK	 	:1;
uint32_t 	 	 	 	:31;
} t_USB_PLLUSBSTAT_bits;


typedef enum { 
 	USB_PLLUSBSTAT_LOCK_off		 = 0b0,
	USB_PLLUSBSTAT_LOCK_on		 = 0b1,
} t_USB_PLLUSBSTAT_LOCK_enum;



typedef struct { 
union {
 __IO uint32_t 	USB_INTSTAT0_reg;
 __IO t_USB_INTSTAT0_bits	 USB_INTSTAT0_bit;
};
__IO uint32_t reserved0[1];
union {
 __IO uint32_t 	USB_INTEN0_reg;
 __IO t_USB_INTEN0_bits	 USB_INTEN0_bit;
};
__IO uint32_t reserved1[1];
union {
 __IO uint32_t 	USB_INTSTAT1_reg;
 __IO t_USB_INTSTAT1_bits	 USB_INTSTAT1_bit;
};
union {
 __IO uint32_t 	USB_INTEN1_reg;
 __IO t_USB_INTEN1_bits	 USB_INTEN1_bit;
};
union {
 __IO uint32_t 	USB_OPERATIONS_reg;
 __IO t_USB_OPERATIONS_bits	 USB_OPERATIONS_bit;
};
union {
 __IO uint32_t 	USB_FRAMECNT_reg;
 __IO t_USB_FRAMECNT_bits	 USB_FRAMECNT_bit;
};
union {
 __IO uint32_t 	USB_USBADDR_reg;
 __IO t_USB_USBADDR_bits	 USB_USBADDR_bit;
};
__IO uint32_t reserved2[1];
union {
 __IO uint32_t 	USB_CEP_DATA_BUF_reg;
 __IO t_USB_CEP_DATA_BUF_bits	 USB_CEP_DATA_BUF_bit;
};
union {
 __IO uint32_t 	USB_CEP_CTRL_STAT_reg;
 __IO t_USB_CEP_CTRL_STAT_bits	 USB_CEP_CTRL_STAT_bit;
};
union {
 __IO uint32_t 	USB_CEP_IRQ_ENB_reg;
 __IO t_USB_CEP_IRQ_ENB_bits	 USB_CEP_IRQ_ENB_bit;
};
union {
 __IO uint32_t 	USB_CEP_IRQ_STAT_reg;
 __IO t_USB_CEP_IRQ_STAT_bits	 USB_CEP_IRQ_STAT_bit;
};
union {
 __IO uint32_t 	USB_CEP_IN_XFRCNT_reg;
 __IO t_USB_CEP_IN_XFRCNT_bits	 USB_CEP_IN_XFRCNT_bit;
};
union {
 __IO uint32_t 	USB_CEP_OUT_XFRCNT_reg;
 __IO t_USB_CEP_OUT_XFRCNT_bits	 USB_CEP_OUT_XFRCNT_bit;
};
union {
 __IO uint32_t 	USB_CEP_DATA_AVL_reg;
 __IO t_USB_CEP_DATA_AVL_bits	 USB_CEP_DATA_AVL_bit;
};
union {
 __IO uint32_t 	USB_CEP_SETUP1_0_reg;
 __IO t_USB_CEP_SETUP1_0_bits	 USB_CEP_SETUP1_0_bit;
};
union {
 __IO uint32_t 	USB_CEP_SETUP3_2_reg;
 __IO t_USB_CEP_SETUP3_2_bits	 USB_CEP_SETUP3_2_bit;
};
union {
 __IO uint32_t 	USB_CEP_SETUP5_4_reg;
 __IO t_USB_CEP_SETUP5_4_bits	 USB_CEP_SETUP5_4_bit;
};
union {
 __IO uint32_t 	USB_CEP_SETUP7_6_reg;
 __IO t_USB_CEP_SETUP7_6_bits	 USB_CEP_SETUP7_6_bit;
};
union {
 __IO uint32_t 	USB_CEP_START_ADDR_reg;
 __IO t_USB_CEP_START_ADDR_bits	 USB_CEP_START_ADDR_bit;
};
union {
 __IO uint32_t 	USB_CEP_END_ADDR_reg;
 __IO t_USB_CEP_END_ADDR_bits	 USB_CEP_END_ADDR_bit;
};
union {
 __IO uint32_t 	USB_DMA_CTRL_STS_reg;
 __IO t_USB_DMA_CTRL_STS_bits	 USB_DMA_CTRL_STS_bit;
};
union {
 __IO uint32_t 	USB_DMA_CNT_reg;
 __IO t_USB_DMA_CNT_bits	 USB_DMA_CNT_bit;
};
__IO uint32_t reserved3[423];
union {
 __IO uint32_t 	USB_AHB_DMA_ADDR_reg;
 __IO t_USB_AHB_DMA_ADDR_bits	 USB_AHB_DMA_ADDR_bit;
};
__IO uint32_t reserved4[47];
union {
 __IO uint32_t 	USB_PHY_PD_reg;
 __IO t_USB_PHY_PD_bits	 USB_PHY_PD_bit;
};
__IO uint32_t reserved5[15];
union {
 __IO uint32_t 	USB_PLLUSBCFG0_reg;
 __IO t_USB_PLLUSBCFG0_bits	 USB_PLLUSBCFG0_bit;
};
union {
 __IO uint32_t 	USB_PLLUSBCFG1_reg;
 __IO t_USB_PLLUSBCFG1_bits	 USB_PLLUSBCFG1_bit;
};
union {
 __IO uint32_t 	USB_PLLUSBCFG2_reg;
 __IO t_USB_PLLUSBCFG2_bits	 USB_PLLUSBCFG2_bit;
};
union {
 __IO uint32_t 	USB_PLLUSBCFG3_reg;
 __IO t_USB_PLLUSBCFG3_bits	 USB_PLLUSBCFG3_bit;
};
union {
 __IO uint32_t 	USB_PLLUSBSTAT_reg;
 __IO t_USB_PLLUSBSTAT_bits	 USB_PLLUSBSTAT_bit;
};
} t_USB_REG;



#define CRYPTO_IRQ_ENABLE	0x20020040		 /*--  --*/

#define CRYPTO_IRQ_ENABLE_DONE_pos	 	 	 	0	 	 /*--  --*/
#define CRYPTO_IRQ_ENABLE_WR_IGNORED_pos	 	 	 	1	 	 /*--  --*/
#define CRYPTO_IRQ_ENABLE_DMA_DONE_pos	 	 	 	2	 	 /*--  --*/
#define CRYPTO_IRQ_ENABLE_DMA_FAIL_pos	 	 	 	3	 	 /*--  --*/


#define CRYPTO_IRQ_ENABLE_DONE_msk	 	 	 	0x00000001UL
#define CRYPTO_IRQ_ENABLE_WR_IGNORED_msk	 	 	 	0x00000002UL
#define CRYPTO_IRQ_ENABLE_DMA_DONE_msk	 	 	 	0x00000004UL
#define CRYPTO_IRQ_ENABLE_DMA_FAIL_msk	 	 	 	0x00000008UL


typedef struct {
uint32_t 	 	CRYPTO_IRQ_ENABLE_DONE	 	:1;
uint32_t 	 	CRYPTO_IRQ_ENABLE_WR_IGNORED	 	:1;
uint32_t 	 	CRYPTO_IRQ_ENABLE_DMA_DONE	 	:1;
uint32_t 	 	CRYPTO_IRQ_ENABLE_DMA_FAIL	 	:1;
uint32_t 	 	 	 	:28;
} t_CRYPTO_IRQ_ENABLE_bits;


typedef enum { 
 	CRYPTO_IRQ_ENABLE_DONE_off		 = 0b0,
	CRYPTO_IRQ_ENABLE_DONE_on		 = 0b1,
} t_CRYPTO_IRQ_ENABLE_DONE_enum;

typedef enum { 
 	CRYPTO_IRQ_ENABLE_WR_IGNORED_off		 = 0b0,
	CRYPTO_IRQ_ENABLE_WR_IGNORED_on		 = 0b1,
} t_CRYPTO_IRQ_ENABLE_WR_IGNORED_enum;

typedef enum { 
 	CRYPTO_IRQ_ENABLE_DMA_DONE_off		 = 0b0,
	CRYPTO_IRQ_ENABLE_DMA_DONE_on		 = 0b1,
} t_CRYPTO_IRQ_ENABLE_DMA_DONE_enum;

typedef enum { 
 	CRYPTO_IRQ_ENABLE_DMA_FAIL_off		 = 0b0,
	CRYPTO_IRQ_ENABLE_DMA_FAIL_on		 = 0b1,
} t_CRYPTO_IRQ_ENABLE_DMA_FAIL_enum;




#define CRYPTO_CONTROL	0x20020044		 /*--  --*/

#define CRYPTO_CONTROL_UPDATE_KEY_pos	 	 	 	0	 	 /*--  --*/
#define CRYPTO_CONTROL_START_pos	 	 	 	1	 	 /*--  --*/
#define CRYPTO_CONTROL_DIRECTION_pos	 	 	 	2	 	 /*--  --*/
#define CRYPTO_CONTROL_ALGORITHM_pos	 	 	 	3	 	 /*--  --*/
#define CRYPTO_CONTROL_MODE_pos	 	 	 	5	 	 /*--  --*/
#define CRYPTO_CONTROL_SELF_UPDATE_pos	 	 	 	8	 	 /*--  --*/
#define CRYPTO_CONTROL_GCM_PHASE_pos	 	 	 	9	 	 /*--  --*/


#define CRYPTO_CONTROL_UPDATE_KEY_msk	 	 	 	0x00000001UL
#define CRYPTO_CONTROL_START_msk	 	 	 	0x00000002UL
#define CRYPTO_CONTROL_DIRECTION_msk	 	 	 	0x00000004UL
#define CRYPTO_CONTROL_ALGORITHM_msk	 	 	 	0x00000018UL
#define CRYPTO_CONTROL_MODE_msk	 	 	 	0x00000060UL
#define CRYPTO_CONTROL_SELF_UPDATE_msk	 	 	 	0x00000100UL
#define CRYPTO_CONTROL_GCM_PHASE_msk	 	 	 	0x00000600UL


typedef struct {
uint32_t 	 	CRYPTO_CONTROL_UPDATE_KEY	 	:1;
uint32_t 	 	CRYPTO_CONTROL_START	 	:1;
uint32_t 	 	CRYPTO_CONTROL_DIRECTION	 	:1;
uint32_t 	 	CRYPTO_CONTROL_ALGORITHM	 	:2;
uint32_t 	 	CRYPTO_CONTROL_MODE	 	:2;
uint32_t 	 	 	 	:1;
uint32_t 	 	CRYPTO_CONTROL_SELF_UPDATE	 	:1;
uint32_t 	 	CRYPTO_CONTROL_GCM_PHASE	 	:2;
uint32_t 	 	 	 	:21;
} t_CRYPTO_CONTROL_bits;


typedef enum { 
 	CRYPTO_CONTROL_UPDATE_KEY_off		 = 0b0,
	CRYPTO_CONTROL_UPDATE_KEY_on		 = 0b1,
} t_CRYPTO_CONTROL_UPDATE_KEY_enum;

typedef enum { 
 	CRYPTO_CONTROL_START_off		 = 0b0,
	CRYPTO_CONTROL_START_on		 = 0b1,
} t_CRYPTO_CONTROL_START_enum;

typedef enum { 
 	CRYPTO_CONTROL_DIRECTION_encrypt		 = 0b0,
	CRYPTO_CONTROL_DIRECTION_decrypt		 = 0b1,
} t_CRYPTO_CONTROL_DIRECTION_enum;

typedef enum { 
 	CRYPTO_CONTROL_ALGORITHM_aes_128		 = 0b00,
	CRYPTO_CONTROL_ALGORITHM_aes_256		 = 0b01,
	CRYPTO_CONTROL_ALGORITHM_magma		 = 0b10,
	CRYPTO_CONTROL_ALGORITHM_kuznechik		 = 0b11,
} t_CRYPTO_CONTROL_ALGORITHM_enum;

typedef enum { 
 	CRYPTO_CONTROL_MODE_ecb		 = 0b00,
	CRYPTO_CONTROL_MODE_cbc		 = 0b01,
	CRYPTO_CONTROL_MODE_ctr		 = 0b10,
	CRYPTO_CONTROL_MODE_gcm		 = 0b11,
} t_CRYPTO_CONTROL_MODE_enum;

typedef enum { 
 	CRYPTO_CONTROL_SELF_UPDATE_off		 = 0b0,
	CRYPTO_CONTROL_SELF_UPDATE_on		 = 0b1,
} t_CRYPTO_CONTROL_SELF_UPDATE_enum;

typedef enum { 
 	CRYPTO_CONTROL_GCM_PHASE_gcm_init		 = 0b00,
	CRYPTO_CONTROL_GCM_PHASE_gcm_header		 = 0b01,
	CRYPTO_CONTROL_GCM_PHASE_gcm_payload		 = 0b10,
	CRYPTO_CONTROL_GCM_PHASE_gcm_last_block		 = 0b11,
} t_CRYPTO_CONTROL_GCM_PHASE_enum;




#define CRYPTO_BASE_DESCRIPTOR	0x20020048		 /*--  --*/

#define CRYPTO_BASE_DESCRIPTOR_ZEROES_pos	 	 	 	0	 	 /*--  --*/
#define CRYPTO_BASE_DESCRIPTOR_ADDRESS_pos	 	 	 	4	 	 /*--  --*/


#define CRYPTO_BASE_DESCRIPTOR_ZEROES_msk	 	 	 	0x0000000fUL
#define CRYPTO_BASE_DESCRIPTOR_ADDRESS_msk	 	 	 	0xfffffff0UL


typedef struct {
uint32_t 	 	CRYPTO_BASE_DESCRIPTOR_ZEROES	 	:4;
uint32_t 	 	CRYPTO_BASE_DESCRIPTOR_ADDRESS	 	:28;
} t_CRYPTO_BASE_DESCRIPTOR_bits;





#define CRYPTO_DMA_CONTROL	0x2002004c		 /*--  --*/

#define CRYPTO_DMA_CONTROL_START_pos	 	 	 	0	 	 /*--  --*/
#define CRYPTO_DMA_CONTROL_BYTES_SWAP_pos	 	 	 	1	 	 /*--  --*/
#define CRYPTO_DMA_CONTROL_WORDS_SWAP_pos	 	 	 	2	 	 /*--  --*/


#define CRYPTO_DMA_CONTROL_START_msk	 	 	 	0x00000001UL
#define CRYPTO_DMA_CONTROL_BYTES_SWAP_msk	 	 	 	0x00000002UL
#define CRYPTO_DMA_CONTROL_WORDS_SWAP_msk	 	 	 	0x00000004UL


typedef struct {
uint32_t 	 	CRYPTO_DMA_CONTROL_START	 	:1;
uint32_t 	 	CRYPTO_DMA_CONTROL_BYTES_SWAP	 	:1;
uint32_t 	 	CRYPTO_DMA_CONTROL_WORDS_SWAP	 	:1;
uint32_t 	 	 	 	:29;
} t_CRYPTO_DMA_CONTROL_bits;


typedef enum { 
 	CRYPTO_DMA_CONTROL_START_off		 = 0b0,
	CRYPTO_DMA_CONTROL_START_on		 = 0b1,
} t_CRYPTO_DMA_CONTROL_START_enum;

typedef enum { 
 	CRYPTO_DMA_CONTROL_BYTES_SWAP_off		 = 0b0,
	CRYPTO_DMA_CONTROL_BYTES_SWAP_on		 = 0b1,
} t_CRYPTO_DMA_CONTROL_BYTES_SWAP_enum;

typedef enum { 
 	CRYPTO_DMA_CONTROL_WORDS_SWAP_off		 = 0b0,
	CRYPTO_DMA_CONTROL_WORDS_SWAP_on		 = 0b1,
} t_CRYPTO_DMA_CONTROL_WORDS_SWAP_enum;




#define CRYPTO_TERMINATE	0x20020050		 /*--  --*/

#define CRYPTO_TERMINATE_CODE_pos	 	 	 	0	 	 /*--  --*/


#define CRYPTO_TERMINATE_CODE_msk	 	 	 	0x000000ffUL


typedef struct {
uint32_t 	 	CRYPTO_TERMINATE_CODE	 	:8;
uint32_t 	 	 	 	:24;
} t_CRYPTO_TERMINATE_bits;





#define CRYPTO_IRQ	0x20020060		 /*--  --*/

#define CRYPTO_IRQ_DONE_pos	 	 	 	0	 	 /*--  --*/
#define CRYPTO_IRQ_WR_IGNORED_pos	 	 	 	1	 	 /*--  --*/
#define CRYPTO_IRQ_DMA_DONE_pos	 	 	 	2	 	 /*--  --*/
#define CRYPTO_IRQ_DMA_FAIL_pos	 	 	 	3	 	 /*--  --*/


#define CRYPTO_IRQ_DONE_msk	 	 	 	0x00000001UL
#define CRYPTO_IRQ_WR_IGNORED_msk	 	 	 	0x00000002UL
#define CRYPTO_IRQ_DMA_DONE_msk	 	 	 	0x00000004UL
#define CRYPTO_IRQ_DMA_FAIL_msk	 	 	 	0x00000008UL


typedef struct {
uint32_t 	 	CRYPTO_IRQ_DONE	 	:1;
uint32_t 	 	CRYPTO_IRQ_WR_IGNORED	 	:1;
uint32_t 	 	CRYPTO_IRQ_DMA_DONE	 	:1;
uint32_t 	 	CRYPTO_IRQ_DMA_FAIL	 	:1;
uint32_t 	 	 	 	:28;
} t_CRYPTO_IRQ_bits;


typedef enum { 
 	CRYPTO_IRQ_DONE_off		 = 0b0,
	CRYPTO_IRQ_DONE_on		 = 0b1,
} t_CRYPTO_IRQ_DONE_enum;

typedef enum { 
 	CRYPTO_IRQ_WR_IGNORED_off		 = 0b0,
	CRYPTO_IRQ_WR_IGNORED_on		 = 0b1,
} t_CRYPTO_IRQ_WR_IGNORED_enum;

typedef enum { 
 	CRYPTO_IRQ_DMA_DONE_off		 = 0b0,
	CRYPTO_IRQ_DMA_DONE_on		 = 0b1,
} t_CRYPTO_IRQ_DMA_DONE_enum;

typedef enum { 
 	CRYPTO_IRQ_DMA_FAIL_off		 = 0b0,
	CRYPTO_IRQ_DMA_FAIL_on		 = 0b1,
} t_CRYPTO_IRQ_DMA_FAIL_enum;




#define CRYPTO_STATUS	0x20020080		 /*--  --*/

#define CRYPTO_STATUS_READY_pos	 	 	 	0	 	 /*--  --*/
#define CRYPTO_STATUS_KEYS_READY_pos	 	 	 	1	 	 /*--  --*/
#define CRYPTO_STATUS_OUT_VALID_pos	 	 	 	2	 	 /*--  --*/
#define CRYPTO_STATUS_IRQ_PENDING_pos	 	 	 	3	 	 /*--  --*/
#define CRYPTO_STATUS_KEYS_STORED_pos	 	 	 	4	 	 /*--  --*/
#define CRYPTO_STATUS_DMA_ACTIVE_pos	 	 	 	8	 	 /*--  --*/
#define CRYPTO_STATUS_AHB_ERROR_pos	 	 	 	9	 	 /*--  --*/
#define CRYPTO_STATUS_BAD_DESCR_pos	 	 	 	12	 	 /*--  --*/
#define CRYPTO_STATUS_DMA_COUNTER_pos	 	 	 	16	 	 /*--  --*/
#define CRYPTO_STATUS_DMA_LAST_pos	 	 	 	31	 	 /*--  --*/


#define CRYPTO_STATUS_READY_msk	 	 	 	0x00000001UL
#define CRYPTO_STATUS_KEYS_READY_msk	 	 	 	0x00000002UL
#define CRYPTO_STATUS_OUT_VALID_msk	 	 	 	0x00000004UL
#define CRYPTO_STATUS_IRQ_PENDING_msk	 	 	 	0x00000008UL
#define CRYPTO_STATUS_KEYS_STORED_msk	 	 	 	0x000000f0UL
#define CRYPTO_STATUS_DMA_ACTIVE_msk	 	 	 	0x00000100UL
#define CRYPTO_STATUS_AHB_ERROR_msk	 	 	 	0x00000e00UL
#define CRYPTO_STATUS_BAD_DESCR_msk	 	 	 	0x0000f000UL
#define CRYPTO_STATUS_DMA_COUNTER_msk	 	 	 	0x0fff0000UL
#define CRYPTO_STATUS_DMA_LAST_msk	 	 	 	0x80000000UL


typedef struct {
uint32_t 	 	CRYPTO_STATUS_READY	 	:1;
uint32_t 	 	CRYPTO_STATUS_KEYS_READY	 	:1;
uint32_t 	 	CRYPTO_STATUS_OUT_VALID	 	:1;
uint32_t 	 	CRYPTO_STATUS_IRQ_PENDING	 	:1;
uint32_t 	 	CRYPTO_STATUS_KEYS_STORED	 	:4;
uint32_t 	 	CRYPTO_STATUS_DMA_ACTIVE	 	:1;
uint32_t 	 	CRYPTO_STATUS_AHB_ERROR	 	:3;
uint32_t 	 	CRYPTO_STATUS_BAD_DESCR	 	:4;
uint32_t 	 	CRYPTO_STATUS_DMA_COUNTER	 	:12;
uint32_t 	 	 	 	:3;
uint32_t 	 	CRYPTO_STATUS_DMA_LAST	 	:1;
} t_CRYPTO_STATUS_bits;


typedef enum { 
 	CRYPTO_STATUS_READY_off		 = 0b0,
	CRYPTO_STATUS_READY_on		 = 0b1,
} t_CRYPTO_STATUS_READY_enum;

typedef enum { 
 	CRYPTO_STATUS_KEYS_READY_off		 = 0b0,
	CRYPTO_STATUS_KEYS_READY_on		 = 0b1,
} t_CRYPTO_STATUS_KEYS_READY_enum;

typedef enum { 
 	CRYPTO_STATUS_OUT_VALID_off		 = 0b0,
	CRYPTO_STATUS_OUT_VALID_on		 = 0b1,
} t_CRYPTO_STATUS_OUT_VALID_enum;

typedef enum { 
 	CRYPTO_STATUS_IRQ_PENDING_off		 = 0b0,
	CRYPTO_STATUS_IRQ_PENDING_on		 = 0b1,
} t_CRYPTO_STATUS_IRQ_PENDING_enum;

typedef enum { 
 	CRYPTO_STATUS_DMA_ACTIVE_off		 = 0b0,
	CRYPTO_STATUS_DMA_ACTIVE_on		 = 0b1,
} t_CRYPTO_STATUS_DMA_ACTIVE_enum;

typedef enum { 
 	CRYPTO_STATUS_DMA_LAST_off		 = 0b0,
	CRYPTO_STATUS_DMA_LAST_on		 = 0b1,
} t_CRYPTO_STATUS_DMA_LAST_enum;




#define CRYPTO_CURRENT_DESCRIPTOR	0x20020084		 /*--  --*/

#define CRYPTO_CURRENT_DESCRIPTOR_ZEROES_pos	 	 	 	0	 	 /*--  --*/
#define CRYPTO_CURRENT_DESCRIPTOR_ADDRESS_pos	 	 	 	4	 	 /*--  --*/


#define CRYPTO_CURRENT_DESCRIPTOR_ZEROES_msk	 	 	 	0x0000000fUL
#define CRYPTO_CURRENT_DESCRIPTOR_ADDRESS_msk	 	 	 	0xfffffff0UL


typedef struct {
uint32_t 	 	CRYPTO_CURRENT_DESCRIPTOR_ZEROES	 	:4;
uint32_t 	 	CRYPTO_CURRENT_DESCRIPTOR_ADDRESS	 	:28;
} t_CRYPTO_CURRENT_DESCRIPTOR_bits;





#define CRYPTO_NEXT_DESCRIPTOR	0x20020088		 /*--  --*/

#define CRYPTO_NEXT_DESCRIPTOR_ZEROES_pos	 	 	 	0	 	 /*--  --*/
#define CRYPTO_NEXT_DESCRIPTOR_ADDRESS_pos	 	 	 	4	 	 /*--  --*/


#define CRYPTO_NEXT_DESCRIPTOR_ZEROES_msk	 	 	 	0x0000000fUL
#define CRYPTO_NEXT_DESCRIPTOR_ADDRESS_msk	 	 	 	0xfffffff0UL


typedef struct {
uint32_t 	 	CRYPTO_NEXT_DESCRIPTOR_ZEROES	 	:4;
uint32_t 	 	CRYPTO_NEXT_DESCRIPTOR_ADDRESS	 	:28;
} t_CRYPTO_NEXT_DESCRIPTOR_bits;




typedef struct { 
union {
 __IO uint32_t 	CRYPTO_IRQ_ENABLE_reg;
 __IO t_CRYPTO_IRQ_ENABLE_bits	 CRYPTO_IRQ_ENABLE_bit;
};
union {
 __IO uint32_t 	CRYPTO_CONTROL_reg;
 __IO t_CRYPTO_CONTROL_bits	 CRYPTO_CONTROL_bit;
};
union {
 __IO uint32_t 	CRYPTO_BASE_DESCRIPTOR_reg;
 __IO t_CRYPTO_BASE_DESCRIPTOR_bits	 CRYPTO_BASE_DESCRIPTOR_bit;
};
union {
 __IO uint32_t 	CRYPTO_DMA_CONTROL_reg;
 __IO t_CRYPTO_DMA_CONTROL_bits	 CRYPTO_DMA_CONTROL_bit;
};
union {
 __IO uint32_t 	CRYPTO_TERMINATE_reg;
 __IO t_CRYPTO_TERMINATE_bits	 CRYPTO_TERMINATE_bit;
};
__IO uint32_t reserved0[3];
union {
 __IO uint32_t 	CRYPTO_IRQ_reg;
 __IO t_CRYPTO_IRQ_bits	 CRYPTO_IRQ_bit;
};
__IO uint32_t reserved1[7];
union {
 __IO uint32_t 	CRYPTO_STATUS_reg;
 __IO t_CRYPTO_STATUS_bits	 CRYPTO_STATUS_bit;
};
union {
 __IO uint32_t 	CRYPTO_CURRENT_DESCRIPTOR_reg;
 __IO t_CRYPTO_CURRENT_DESCRIPTOR_bits	 CRYPTO_CURRENT_DESCRIPTOR_bit;
};
union {
 __IO uint32_t 	CRYPTO_NEXT_DESCRIPTOR_reg;
 __IO t_CRYPTO_NEXT_DESCRIPTOR_bits	 CRYPTO_NEXT_DESCRIPTOR_bit;
};
} t_CRYPTO_REG;


typedef struct { 
} t_TSENS_REG;



#define CMP_DACCTL	0x38010000		 /*--  --*/

#define CMP_DACCTL_REF0_pos	 	 	 	0	 	 /*--  --*/
#define CMP_DACCTL_REF1_pos	 	 	 	8	 	 /*--  --*/
#define CMP_DACCTL_EN_pos	 	 	 	16	 	 /*--  --*/


#define CMP_DACCTL_REF0_msk	 	 	 	0x0000000fUL
#define CMP_DACCTL_REF1_msk	 	 	 	0x00000f00UL
#define CMP_DACCTL_EN_msk	 	 	 	0x00010000UL


typedef struct {
uint32_t 	 	CMP_DACCTL_REF0	 	:4;
uint32_t 	 	 	 	:4;
uint32_t 	 	CMP_DACCTL_REF1	 	:4;
uint32_t 	 	 	 	:4;
uint32_t 	 	CMP_DACCTL_EN	 	:1;
uint32_t 	 	 	 	:15;
} t_CMP_DACCTL_bits;


typedef enum { 
 	CMP_DACCTL_EN_off		 = 0b0,
	CMP_DACCTL_EN_on		 = 0b1,
} t_CMP_DACCTL_EN_enum;




#define CMP_ACMP0CTL	0x38010004		 /*--  --*/

#define CMP_ACMP0CTL_EN_pos	 	 	 	0	 	 /*--  --*/
#define CMP_ACMP0CTL_RST_pos	 	 	 	1	 	 /*--  --*/
#define CMP_ACMP0CTL_INV_pos	 	 	 	2	 	 /*--  --*/
#define CMP_ACMP0CTL_SELREF_pos	 	 	 	4	 	 /*--  --*/
#define CMP_ACMP0CTL_INTSRC_pos	 	 	 	8	 	 /*--  --*/
#define CMP_ACMP0CTL_TRIGSRC_pos	 	 	 	12	 	 /*--  --*/


#define CMP_ACMP0CTL_EN_msk	 	 	 	0x00000001UL
#define CMP_ACMP0CTL_RST_msk	 	 	 	0x00000002UL
#define CMP_ACMP0CTL_INV_msk	 	 	 	0x00000004UL
#define CMP_ACMP0CTL_SELREF_msk	 	 	 	0x00000030UL
#define CMP_ACMP0CTL_INTSRC_msk	 	 	 	0x00000700UL
#define CMP_ACMP0CTL_TRIGSRC_msk	 	 	 	0x00007000UL


typedef struct {
uint32_t 	 	CMP_ACMP0CTL_EN	 	:1;
uint32_t 	 	CMP_ACMP0CTL_RST	 	:1;
uint32_t 	 	CMP_ACMP0CTL_INV	 	:1;
uint32_t 	 	 	 	:1;
uint32_t 	 	CMP_ACMP0CTL_SELREF	 	:2;
uint32_t 	 	 	 	:2;
uint32_t 	 	CMP_ACMP0CTL_INTSRC	 	:3;
uint32_t 	 	 	 	:1;
uint32_t 	 	CMP_ACMP0CTL_TRIGSRC	 	:3;
uint32_t 	 	 	 	:17;
} t_CMP_ACMP0CTL_bits;


typedef enum { 
 	CMP_ACMP0CTL_EN_off		 = 0b0,
	CMP_ACMP0CTL_EN_on		 = 0b1,
} t_CMP_ACMP0CTL_EN_enum;

typedef enum { 
 	CMP_ACMP0CTL_RST_off		 = 0b0,
	CMP_ACMP0CTL_RST_on		 = 0b1,
} t_CMP_ACMP0CTL_RST_enum;

typedef enum { 
 	CMP_ACMP0CTL_INV_off		 = 0b0,
	CMP_ACMP0CTL_INV_on		 = 0b1,
} t_CMP_ACMP0CTL_INV_enum;




#define CMP_ACMP1CTL	0x38010008		 /*--  --*/

#define CMP_ACMP1CTL_EN_pos	 	 	 	0	 	 /*--  --*/
#define CMP_ACMP1CTL_RST_pos	 	 	 	1	 	 /*--  --*/
#define CMP_ACMP1CTL_INV_pos	 	 	 	2	 	 /*--  --*/
#define CMP_ACMP1CTL_SELREF_pos	 	 	 	4	 	 /*--  --*/
#define CMP_ACMP1CTL_INTSRC_pos	 	 	 	8	 	 /*--  --*/
#define CMP_ACMP1CTL_TRIGSRC_pos	 	 	 	12	 	 /*--  --*/


#define CMP_ACMP1CTL_EN_msk	 	 	 	0x00000001UL
#define CMP_ACMP1CTL_RST_msk	 	 	 	0x00000002UL
#define CMP_ACMP1CTL_INV_msk	 	 	 	0x00000004UL
#define CMP_ACMP1CTL_SELREF_msk	 	 	 	0x00000030UL
#define CMP_ACMP1CTL_INTSRC_msk	 	 	 	0x00000700UL
#define CMP_ACMP1CTL_TRIGSRC_msk	 	 	 	0x00007000UL


typedef struct {
uint32_t 	 	CMP_ACMP1CTL_EN	 	:1;
uint32_t 	 	CMP_ACMP1CTL_RST	 	:1;
uint32_t 	 	CMP_ACMP1CTL_INV	 	:1;
uint32_t 	 	 	 	:1;
uint32_t 	 	CMP_ACMP1CTL_SELREF	 	:2;
uint32_t 	 	 	 	:2;
uint32_t 	 	CMP_ACMP1CTL_INTSRC	 	:3;
uint32_t 	 	 	 	:1;
uint32_t 	 	CMP_ACMP1CTL_TRIGSRC	 	:3;
uint32_t 	 	 	 	:17;
} t_CMP_ACMP1CTL_bits;


typedef enum { 
 	CMP_ACMP1CTL_EN_off		 = 0b0,
	CMP_ACMP1CTL_EN_on		 = 0b1,
} t_CMP_ACMP1CTL_EN_enum;

typedef enum { 
 	CMP_ACMP1CTL_RST_off		 = 0b0,
	CMP_ACMP1CTL_RST_on		 = 0b1,
} t_CMP_ACMP1CTL_RST_enum;

typedef enum { 
 	CMP_ACMP1CTL_INV_off		 = 0b0,
	CMP_ACMP1CTL_INV_on		 = 0b1,
} t_CMP_ACMP1CTL_INV_enum;




#define CMP_ACSTATUS	0x3801000c		 /*--  --*/

#define CMP_ACSTATUS_STATE0_pos	 	 	 	0	 	 /*--  --*/
#define CMP_ACSTATUS_STATE1_pos	 	 	 	1	 	 /*--  --*/


#define CMP_ACSTATUS_STATE0_msk	 	 	 	0x00000001UL
#define CMP_ACSTATUS_STATE1_msk	 	 	 	0x00000002UL


typedef struct {
uint32_t 	 	CMP_ACSTATUS_STATE0	 	:1;
uint32_t 	 	CMP_ACSTATUS_STATE1	 	:1;
uint32_t 	 	 	 	:30;
} t_CMP_ACSTATUS_bits;


typedef enum { 
 	CMP_ACSTATUS_STATE0_off		 = 0b0,
	CMP_ACSTATUS_STATE0_on		 = 0b1,
} t_CMP_ACSTATUS_STATE0_enum;

typedef enum { 
 	CMP_ACSTATUS_STATE1_off		 = 0b0,
	CMP_ACSTATUS_STATE1_on		 = 0b1,
} t_CMP_ACSTATUS_STATE1_enum;




#define CMP_INTEN	0x38010010		 /*--  --*/

#define CMP_INTEN_CMP0_pos	 	 	 	0	 	 /*--  --*/
#define CMP_INTEN_CMP1_pos	 	 	 	1	 	 /*--  --*/


#define CMP_INTEN_CMP0_msk	 	 	 	0x00000001UL
#define CMP_INTEN_CMP1_msk	 	 	 	0x00000002UL


typedef struct {
uint32_t 	 	CMP_INTEN_CMP0	 	:1;
uint32_t 	 	CMP_INTEN_CMP1	 	:1;
uint32_t 	 	 	 	:30;
} t_CMP_INTEN_bits;


typedef enum { 
 	CMP_INTEN_CMP0_off		 = 0b0,
	CMP_INTEN_CMP0_on		 = 0b1,
} t_CMP_INTEN_CMP0_enum;

typedef enum { 
 	CMP_INTEN_CMP1_off		 = 0b0,
	CMP_INTEN_CMP1_on		 = 0b1,
} t_CMP_INTEN_CMP1_enum;




#define CMP_RIS	0x38010014		 /*--  --*/

#define CMP_RIS_CMP0_pos	 	 	 	0	 	 /*--  --*/
#define CMP_RIS_CMP1_pos	 	 	 	1	 	 /*--  --*/


#define CMP_RIS_CMP0_msk	 	 	 	0x00000001UL
#define CMP_RIS_CMP1_msk	 	 	 	0x00000002UL


typedef struct {
uint32_t 	 	CMP_RIS_CMP0	 	:1;
uint32_t 	 	CMP_RIS_CMP1	 	:1;
uint32_t 	 	 	 	:30;
} t_CMP_RIS_bits;


typedef enum { 
 	CMP_RIS_CMP0_off		 = 0b0,
	CMP_RIS_CMP0_on		 = 0b1,
} t_CMP_RIS_CMP0_enum;

typedef enum { 
 	CMP_RIS_CMP1_off		 = 0b0,
	CMP_RIS_CMP1_on		 = 0b1,
} t_CMP_RIS_CMP1_enum;




#define CMP_MIS	0x38010018		 /*--  --*/

#define CMP_MIS_CMP0_pos	 	 	 	0	 	 /*--  --*/
#define CMP_MIS_CMP1_pos	 	 	 	1	 	 /*--  --*/


#define CMP_MIS_CMP0_msk	 	 	 	0x00000001UL
#define CMP_MIS_CMP1_msk	 	 	 	0x00000002UL


typedef struct {
uint32_t 	 	CMP_MIS_CMP0	 	:1;
uint32_t 	 	CMP_MIS_CMP1	 	:1;
uint32_t 	 	 	 	:30;
} t_CMP_MIS_bits;


typedef enum { 
 	CMP_MIS_CMP0_off		 = 0b0,
	CMP_MIS_CMP0_on		 = 0b1,
} t_CMP_MIS_CMP0_enum;

typedef enum { 
 	CMP_MIS_CMP1_off		 = 0b0,
	CMP_MIS_CMP1_on		 = 0b1,
} t_CMP_MIS_CMP1_enum;




#define CMP_ICLR	0x3801001c		 /*--  --*/

#define CMP_ICLR_CMP0_pos	 	 	 	0	 	 /*--  --*/
#define CMP_ICLR_CMP1_pos	 	 	 	1	 	 /*--  --*/


#define CMP_ICLR_CMP0_msk	 	 	 	0x00000001UL
#define CMP_ICLR_CMP1_msk	 	 	 	0x00000002UL


typedef struct {
uint32_t 	 	CMP_ICLR_CMP0	 	:1;
uint32_t 	 	CMP_ICLR_CMP1	 	:1;
uint32_t 	 	 	 	:30;
} t_CMP_ICLR_bits;


typedef enum { 
 	CMP_ICLR_CMP0_off		 = 0b0,
	CMP_ICLR_CMP0_on		 = 0b1,
} t_CMP_ICLR_CMP0_enum;

typedef enum { 
 	CMP_ICLR_CMP1_off		 = 0b0,
	CMP_ICLR_CMP1_on		 = 0b1,
} t_CMP_ICLR_CMP1_enum;



typedef struct { 
union {
 __IO uint32_t 	CMP_DACCTL_reg;
 __IO t_CMP_DACCTL_bits	 CMP_DACCTL_bit;
};
union {
 __IO uint32_t 	CMP_ACMP0CTL_reg;
 __IO t_CMP_ACMP0CTL_bits	 CMP_ACMP0CTL_bit;
};
union {
 __IO uint32_t 	CMP_ACMP1CTL_reg;
 __IO t_CMP_ACMP1CTL_bits	 CMP_ACMP1CTL_bit;
};
union {
 __IO uint32_t 	CMP_ACSTATUS_reg;
 __IO t_CMP_ACSTATUS_bits	 CMP_ACSTATUS_bit;
};
union {
 __IO uint32_t 	CMP_INTEN_reg;
 __IO t_CMP_INTEN_bits	 CMP_INTEN_bit;
};
union {
 __IO uint32_t 	CMP_RIS_reg;
 __IO t_CMP_RIS_bits	 CMP_RIS_bit;
};
union {
 __IO uint32_t 	CMP_MIS_reg;
 __IO t_CMP_MIS_bits	 CMP_MIS_bit;
};
union {
 __IO uint32_t 	CMP_ICLR_reg;
 __IO t_CMP_ICLR_bits	 CMP_ICLR_bit;
};
} t_CMP_REG;



#define CAN_CLC	0x20000000		 /*--  --*/

#define CAN_CLC_DISR_pos	 	 	 	0	 	 /*--  --*/
#define CAN_CLC_DISS_pos	 	 	 	1	 	 /*--  --*/


#define CAN_CLC_DISR_msk	 	 	 	0x00000001UL
#define CAN_CLC_DISS_msk	 	 	 	0x00000002UL


typedef struct {
uint32_t 	 	CAN_CLC_DISR	 	:1;
uint32_t 	 	CAN_CLC_DISS	 	:1;
uint32_t 	 	 	 	:30;
} t_CAN_CLC_bits;


typedef enum { 
 	CAN_CLC_DISR_off		 = 0b0,
	CAN_CLC_DISR_on		 = 0b1,
} t_CAN_CLC_DISR_enum;

typedef enum { 
 	CAN_CLC_DISS_off		 = 0b0,
	CAN_CLC_DISS_on		 = 0b1,
} t_CAN_CLC_DISS_enum;




#define CAN_ID	0x20000008		 /*--  --*/

#define CAN_ID_MODREV_pos	 	 	 	0	 	 /*--  --*/
#define CAN_ID_MODTYPE_pos	 	 	 	8	 	 /*--  --*/
#define CAN_ID_MODNUM_pos	 	 	 	16	 	 /*--  --*/


#define CAN_ID_MODREV_msk	 	 	 	0x000000ffUL
#define CAN_ID_MODTYPE_msk	 	 	 	0x0000ff00UL
#define CAN_ID_MODNUM_msk	 	 	 	0xffff0000UL


typedef struct {
uint32_t 	 	CAN_ID_MODREV	 	:8;
uint32_t 	 	CAN_ID_MODTYPE	 	:8;
uint32_t 	 	CAN_ID_MODNUM	 	:16;
} t_CAN_ID_bits;





#define CAN_FDR	0x2000000c		 /*--  --*/

#define CAN_FDR_STEP_pos	 	 	 	0	 	 /*--  --*/
#define CAN_FDR_DM_pos	 	 	 	14	 	 /*--  --*/
#define CAN_FDR_RESULT_pos	 	 	 	16	 	 /*--  --*/
#define CAN_FDR_ENHW_pos	 	 	 	30	 	 /*--  --*/
#define CAN_FDR_DISCLK_pos	 	 	 	31	 	 /*--  --*/


#define CAN_FDR_STEP_msk	 	 	 	0x000003ffUL
#define CAN_FDR_DM_msk	 	 	 	0x0000c000UL
#define CAN_FDR_RESULT_msk	 	 	 	0x03ff0000UL
#define CAN_FDR_ENHW_msk	 	 	 	0x40000000UL
#define CAN_FDR_DISCLK_msk	 	 	 	0x80000000UL


typedef struct {
uint32_t 	 	CAN_FDR_STEP	 	:10;
uint32_t 	 	 	 	:4;
uint32_t 	 	CAN_FDR_DM	 	:2;
uint32_t 	 	CAN_FDR_RESULT	 	:10;
uint32_t 	 	 	 	:4;
uint32_t 	 	CAN_FDR_ENHW	 	:1;
uint32_t 	 	CAN_FDR_DISCLK	 	:1;
} t_CAN_FDR_bits;


typedef enum { 
 	CAN_FDR_DM_disable		 = 0b00,
	CAN_FDR_DM_normalmode		 = 0b01,
	CAN_FDR_DM_dividermode		 = 0b10,
} t_CAN_FDR_DM_enum;

typedef enum { 
 	CAN_FDR_ENHW_off		 = 0b0,
	CAN_FDR_ENHW_on		 = 0b1,
} t_CAN_FDR_ENHW_enum;

typedef enum { 
 	CAN_FDR_DISCLK_off		 = 0b0,
	CAN_FDR_DISCLK_on		 = 0b1,
} t_CAN_FDR_DISCLK_enum;




#define CAN_MSIMASK	0x200001c0		 /*--  --*/

#define CAN_MSIMASK_IM_pos	 	 	 	0	 	 /*--  --*/


#define CAN_MSIMASK_IM_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	CAN_MSIMASK_IM	 	:32;
} t_CAN_MSIMASK_bits;





#define CAN_PANCTR	0x200001c4		 /*--  --*/

#define CAN_PANCTR_PANCMD_pos	 	 	 	0	 	 /*--  --*/
#define CAN_PANCTR_BUSY_pos	 	 	 	8	 	 /*--  --*/
#define CAN_PANCTR_RBUSY_pos	 	 	 	9	 	 /*--  --*/
#define CAN_PANCTR_PANAR1_pos	 	 	 	16	 	 /*--  --*/
#define CAN_PANCTR_PANAR2_pos	 	 	 	24	 	 /*--  --*/


#define CAN_PANCTR_PANCMD_msk	 	 	 	0x000000ffUL
#define CAN_PANCTR_BUSY_msk	 	 	 	0x00000100UL
#define CAN_PANCTR_RBUSY_msk	 	 	 	0x00000200UL
#define CAN_PANCTR_PANAR1_msk	 	 	 	0x00ff0000UL
#define CAN_PANCTR_PANAR2_msk	 	 	 	0xff000000UL


typedef struct {
uint32_t 	 	CAN_PANCTR_PANCMD	 	:8;
uint32_t 	 	CAN_PANCTR_BUSY	 	:1;
uint32_t 	 	CAN_PANCTR_RBUSY	 	:1;
uint32_t 	 	 	 	:6;
uint32_t 	 	CAN_PANCTR_PANAR1	 	:8;
uint32_t 	 	CAN_PANCTR_PANAR2	 	:8;
} t_CAN_PANCTR_bits;


typedef enum { 
 	CAN_PANCTR_BUSY_off		 = 0b0,
	CAN_PANCTR_BUSY_on		 = 0b1,
} t_CAN_PANCTR_BUSY_enum;

typedef enum { 
 	CAN_PANCTR_RBUSY_off		 = 0b0,
	CAN_PANCTR_RBUSY_on		 = 0b1,
} t_CAN_PANCTR_RBUSY_enum;




#define CAN_MCR	0x200001c8		 /*--  --*/

#define CAN_MCR_MPSEL_pos	 	 	 	12	 	 /*--  --*/


#define CAN_MCR_MPSEL_msk	 	 	 	0x0000f000UL


typedef struct {
uint32_t 	 	 	 	:12;
uint32_t 	 	CAN_MCR_MPSEL	 	:4;
uint32_t 	 	 	 	:16;
} t_CAN_MCR_bits;





#define CAN_MITR	0x200001cc		 /*--  --*/

#define CAN_MITR_IT_pos	 	 	 	0	 	 /*--  --*/


#define CAN_MITR_IT_msk	 	 	 	0x0000ffffUL


typedef struct {
uint32_t 	 	CAN_MITR_IT	 	:16;
uint32_t 	 	 	 	:16;
} t_CAN_MITR_bits;




typedef struct { 
union {
 __IO uint32_t 	CAN_CLC_reg;
 __IO t_CAN_CLC_bits	 CAN_CLC_bit;
};
__IO uint32_t reserved0[1];
union {
 __IO uint32_t 	CAN_ID_reg;
 __IO t_CAN_ID_bits	 CAN_ID_bit;
};
union {
 __IO uint32_t 	CAN_FDR_reg;
 __IO t_CAN_FDR_bits	 CAN_FDR_bit;
};
__IO uint32_t reserved1[108];
union {
 __IO uint32_t 	CAN_MSIMASK_reg;
 __IO t_CAN_MSIMASK_bits	 CAN_MSIMASK_bit;
};
union {
 __IO uint32_t 	CAN_PANCTR_reg;
 __IO t_CAN_PANCTR_bits	 CAN_PANCTR_bit;
};
union {
 __IO uint32_t 	CAN_MCR_reg;
 __IO t_CAN_MCR_bits	 CAN_MCR_bit;
};
union {
 __IO uint32_t 	CAN_MITR_reg;
 __IO t_CAN_MITR_bits	 CAN_MITR_bit;
};
} t_CAN_REG;



#define DMA_STATUS	0x3000c000		 /*--  --*/

#define DMA_STATUS_STATE_pos	 	 	 	0	 	 /*--  --*/
#define DMA_STATUS_MASTEREN_pos	 	 	 	4	 	 /*--  --*/
#define DMA_STATUS_CHNLS_pos	 	 	 	5	 	 /*--  --*/


#define DMA_STATUS_STATE_msk	 	 	 	0x0000000fUL
#define DMA_STATUS_MASTEREN_msk	 	 	 	0x00000010UL
#define DMA_STATUS_CHNLS_msk	 	 	 	0x000003e0UL


typedef struct {
uint32_t 	 	DMA_STATUS_STATE	 	:4;
uint32_t 	 	DMA_STATUS_MASTEREN	 	:1;
uint32_t 	 	DMA_STATUS_CHNLS	 	:5;
uint32_t 	 	 	 	:22;
} t_DMA_STATUS_bits;


typedef enum { 
 	DMA_STATUS_MASTEREN_free		 = 0b0,
	DMA_STATUS_MASTEREN_readconfigdata		 = 0b1,
} t_DMA_STATUS_MASTEREN_enum;

typedef enum { 
 	DMA_STATUS_CHNLS_free		 = 0b00000,
	DMA_STATUS_CHNLS_readconfigdata		 = 0b00001,
	DMA_STATUS_CHNLS_readsrcdataendptr		 = 0b00010,
	DMA_STATUS_CHNLS_readdstdataendptr		 = 0b00011,
	DMA_STATUS_CHNLS_readsrcdata		 = 0b00100,
	DMA_STATUS_CHNLS_wriredstdata		 = 0b00101,
	DMA_STATUS_CHNLS_waitreq		 = 0b00110,
	DMA_STATUS_CHNLS_writeconfigdata		 = 0b00111,
	DMA_STATUS_CHNLS_pause		 = 0b01000,
	DMA_STATUS_CHNLS_done		 = 0b01001,
	DMA_STATUS_CHNLS_periphscatgath		 = 0b01010,
} t_DMA_STATUS_CHNLS_enum;




#define DMA_CFG	0x3000c004		 /*--  --*/

#define DMA_CFG_CHPROT_pos	 	 	 	0	 	 /*--  --*/
#define DMA_CFG_MASTEREN_pos	 	 	 	3	 	 /*--  --*/


#define DMA_CFG_CHPROT_msk	 	 	 	0x00000007UL
#define DMA_CFG_MASTEREN_msk	 	 	 	0x00000008UL


typedef struct {
uint32_t 	 	DMA_CFG_CHPROT	 	:3;
uint32_t 	 	DMA_CFG_MASTEREN	 	:1;
uint32_t 	 	 	 	:28;
} t_DMA_CFG_bits;


typedef enum { 
 	DMA_CFG_MASTEREN_off		 = 0b0,
	DMA_CFG_MASTEREN_on		 = 0b1,
} t_DMA_CFG_MASTEREN_enum;




#define DMA_BASEPTR	0x3000c008		 /*--  --*/

#define DMA_BASEPTR_VAL_pos	 	 	 	0	 	 /*--  --*/


#define DMA_BASEPTR_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	DMA_BASEPTR_VAL	 	:32;
} t_DMA_BASEPTR_bits;





#define DMA_ALTBASEPTR	0x3000c00c		 /*--  --*/

#define DMA_ALTBASEPTR_VAL_pos	 	 	 	0	 	 /*--  --*/


#define DMA_ALTBASEPTR_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	DMA_ALTBASEPTR_VAL	 	:32;
} t_DMA_ALTBASEPTR_bits;





#define DMA_WAITONREQ	0x3000c010		 /*--  --*/

#define DMA_WAITONREQ_CH0_pos	 	 	 	0	 	 /*--  --*/
#define DMA_WAITONREQ_CH1_pos	 	 	 	1	 	 /*--  --*/
#define DMA_WAITONREQ_CH2_pos	 	 	 	2	 	 /*--  --*/
#define DMA_WAITONREQ_CH3_pos	 	 	 	3	 	 /*--  --*/
#define DMA_WAITONREQ_CH4_pos	 	 	 	4	 	 /*--  --*/
#define DMA_WAITONREQ_CH5_pos	 	 	 	5	 	 /*--  --*/
#define DMA_WAITONREQ_CH6_pos	 	 	 	6	 	 /*--  --*/
#define DMA_WAITONREQ_CH7_pos	 	 	 	7	 	 /*--  --*/
#define DMA_WAITONREQ_CH8_pos	 	 	 	8	 	 /*--  --*/
#define DMA_WAITONREQ_CH9_pos	 	 	 	9	 	 /*--  --*/
#define DMA_WAITONREQ_CH10_pos	 	 	 	10	 	 /*--  --*/
#define DMA_WAITONREQ_CH11_pos	 	 	 	11	 	 /*--  --*/
#define DMA_WAITONREQ_CH12_pos	 	 	 	12	 	 /*--  --*/
#define DMA_WAITONREQ_CH13_pos	 	 	 	13	 	 /*--  --*/
#define DMA_WAITONREQ_CH14_pos	 	 	 	14	 	 /*--  --*/
#define DMA_WAITONREQ_CH15_pos	 	 	 	15	 	 /*--  --*/
#define DMA_WAITONREQ_CH16_pos	 	 	 	16	 	 /*--  --*/
#define DMA_WAITONREQ_CH17_pos	 	 	 	17	 	 /*--  --*/
#define DMA_WAITONREQ_CH18_pos	 	 	 	18	 	 /*--  --*/
#define DMA_WAITONREQ_CH19_pos	 	 	 	19	 	 /*--  --*/
#define DMA_WAITONREQ_CH20_pos	 	 	 	20	 	 /*--  --*/
#define DMA_WAITONREQ_CH21_pos	 	 	 	21	 	 /*--  --*/
#define DMA_WAITONREQ_CH22_pos	 	 	 	22	 	 /*--  --*/
#define DMA_WAITONREQ_CH23_pos	 	 	 	23	 	 /*--  --*/


#define DMA_WAITONREQ_CH0_msk	 	 	 	0x00000001UL
#define DMA_WAITONREQ_CH1_msk	 	 	 	0x00000002UL
#define DMA_WAITONREQ_CH2_msk	 	 	 	0x00000004UL
#define DMA_WAITONREQ_CH3_msk	 	 	 	0x00000008UL
#define DMA_WAITONREQ_CH4_msk	 	 	 	0x00000010UL
#define DMA_WAITONREQ_CH5_msk	 	 	 	0x00000020UL
#define DMA_WAITONREQ_CH6_msk	 	 	 	0x00000040UL
#define DMA_WAITONREQ_CH7_msk	 	 	 	0x00000080UL
#define DMA_WAITONREQ_CH8_msk	 	 	 	0x00000100UL
#define DMA_WAITONREQ_CH9_msk	 	 	 	0x00000200UL
#define DMA_WAITONREQ_CH10_msk	 	 	 	0x00000400UL
#define DMA_WAITONREQ_CH11_msk	 	 	 	0x00000800UL
#define DMA_WAITONREQ_CH12_msk	 	 	 	0x00001000UL
#define DMA_WAITONREQ_CH13_msk	 	 	 	0x00002000UL
#define DMA_WAITONREQ_CH14_msk	 	 	 	0x00004000UL
#define DMA_WAITONREQ_CH15_msk	 	 	 	0x00008000UL
#define DMA_WAITONREQ_CH16_msk	 	 	 	0x00010000UL
#define DMA_WAITONREQ_CH17_msk	 	 	 	0x00020000UL
#define DMA_WAITONREQ_CH18_msk	 	 	 	0x00040000UL
#define DMA_WAITONREQ_CH19_msk	 	 	 	0x00080000UL
#define DMA_WAITONREQ_CH20_msk	 	 	 	0x00100000UL
#define DMA_WAITONREQ_CH21_msk	 	 	 	0x00200000UL
#define DMA_WAITONREQ_CH22_msk	 	 	 	0x00400000UL
#define DMA_WAITONREQ_CH23_msk	 	 	 	0x00800000UL


typedef struct {
uint32_t 	 	DMA_WAITONREQ_CH0	 	:1;
uint32_t 	 	DMA_WAITONREQ_CH1	 	:1;
uint32_t 	 	DMA_WAITONREQ_CH2	 	:1;
uint32_t 	 	DMA_WAITONREQ_CH3	 	:1;
uint32_t 	 	DMA_WAITONREQ_CH4	 	:1;
uint32_t 	 	DMA_WAITONREQ_CH5	 	:1;
uint32_t 	 	DMA_WAITONREQ_CH6	 	:1;
uint32_t 	 	DMA_WAITONREQ_CH7	 	:1;
uint32_t 	 	DMA_WAITONREQ_CH8	 	:1;
uint32_t 	 	DMA_WAITONREQ_CH9	 	:1;
uint32_t 	 	DMA_WAITONREQ_CH10	 	:1;
uint32_t 	 	DMA_WAITONREQ_CH11	 	:1;
uint32_t 	 	DMA_WAITONREQ_CH12	 	:1;
uint32_t 	 	DMA_WAITONREQ_CH13	 	:1;
uint32_t 	 	DMA_WAITONREQ_CH14	 	:1;
uint32_t 	 	DMA_WAITONREQ_CH15	 	:1;
uint32_t 	 	DMA_WAITONREQ_CH16	 	:1;
uint32_t 	 	DMA_WAITONREQ_CH17	 	:1;
uint32_t 	 	DMA_WAITONREQ_CH18	 	:1;
uint32_t 	 	DMA_WAITONREQ_CH19	 	:1;
uint32_t 	 	DMA_WAITONREQ_CH20	 	:1;
uint32_t 	 	DMA_WAITONREQ_CH21	 	:1;
uint32_t 	 	DMA_WAITONREQ_CH22	 	:1;
uint32_t 	 	DMA_WAITONREQ_CH23	 	:1;
uint32_t 	 	 	 	:8;
} t_DMA_WAITONREQ_bits;


typedef enum { 
 	DMA_WAITONREQ_CH0_off		 = 0b0,
	DMA_WAITONREQ_CH0_on		 = 0b1,
} t_DMA_WAITONREQ_CH0_enum;

typedef enum { 
 	DMA_WAITONREQ_CH1_off		 = 0b0,
	DMA_WAITONREQ_CH1_on		 = 0b1,
} t_DMA_WAITONREQ_CH1_enum;

typedef enum { 
 	DMA_WAITONREQ_CH2_off		 = 0b0,
	DMA_WAITONREQ_CH2_on		 = 0b1,
} t_DMA_WAITONREQ_CH2_enum;

typedef enum { 
 	DMA_WAITONREQ_CH3_off		 = 0b0,
	DMA_WAITONREQ_CH3_on		 = 0b1,
} t_DMA_WAITONREQ_CH3_enum;

typedef enum { 
 	DMA_WAITONREQ_CH4_off		 = 0b0,
	DMA_WAITONREQ_CH4_on		 = 0b1,
} t_DMA_WAITONREQ_CH4_enum;

typedef enum { 
 	DMA_WAITONREQ_CH5_off		 = 0b0,
	DMA_WAITONREQ_CH5_on		 = 0b1,
} t_DMA_WAITONREQ_CH5_enum;

typedef enum { 
 	DMA_WAITONREQ_CH6_off		 = 0b0,
	DMA_WAITONREQ_CH6_on		 = 0b1,
} t_DMA_WAITONREQ_CH6_enum;

typedef enum { 
 	DMA_WAITONREQ_CH7_off		 = 0b0,
	DMA_WAITONREQ_CH7_on		 = 0b1,
} t_DMA_WAITONREQ_CH7_enum;

typedef enum { 
 	DMA_WAITONREQ_CH8_off		 = 0b0,
	DMA_WAITONREQ_CH8_on		 = 0b1,
} t_DMA_WAITONREQ_CH8_enum;

typedef enum { 
 	DMA_WAITONREQ_CH9_off		 = 0b0,
	DMA_WAITONREQ_CH9_on		 = 0b1,
} t_DMA_WAITONREQ_CH9_enum;

typedef enum { 
 	DMA_WAITONREQ_CH10_off		 = 0b0,
	DMA_WAITONREQ_CH10_on		 = 0b1,
} t_DMA_WAITONREQ_CH10_enum;

typedef enum { 
 	DMA_WAITONREQ_CH11_off		 = 0b0,
	DMA_WAITONREQ_CH11_on		 = 0b1,
} t_DMA_WAITONREQ_CH11_enum;

typedef enum { 
 	DMA_WAITONREQ_CH12_off		 = 0b0,
	DMA_WAITONREQ_CH12_on		 = 0b1,
} t_DMA_WAITONREQ_CH12_enum;

typedef enum { 
 	DMA_WAITONREQ_CH13_off		 = 0b0,
	DMA_WAITONREQ_CH13_on		 = 0b1,
} t_DMA_WAITONREQ_CH13_enum;

typedef enum { 
 	DMA_WAITONREQ_CH14_off		 = 0b0,
	DMA_WAITONREQ_CH14_on		 = 0b1,
} t_DMA_WAITONREQ_CH14_enum;

typedef enum { 
 	DMA_WAITONREQ_CH15_off		 = 0b0,
	DMA_WAITONREQ_CH15_on		 = 0b1,
} t_DMA_WAITONREQ_CH15_enum;

typedef enum { 
 	DMA_WAITONREQ_CH16_off		 = 0b0,
	DMA_WAITONREQ_CH16_on		 = 0b1,
} t_DMA_WAITONREQ_CH16_enum;

typedef enum { 
 	DMA_WAITONREQ_CH17_off		 = 0b0,
	DMA_WAITONREQ_CH17_on		 = 0b1,
} t_DMA_WAITONREQ_CH17_enum;

typedef enum { 
 	DMA_WAITONREQ_CH18_off		 = 0b0,
	DMA_WAITONREQ_CH18_on		 = 0b1,
} t_DMA_WAITONREQ_CH18_enum;

typedef enum { 
 	DMA_WAITONREQ_CH19_off		 = 0b0,
	DMA_WAITONREQ_CH19_on		 = 0b1,
} t_DMA_WAITONREQ_CH19_enum;

typedef enum { 
 	DMA_WAITONREQ_CH20_off		 = 0b0,
	DMA_WAITONREQ_CH20_on		 = 0b1,
} t_DMA_WAITONREQ_CH20_enum;

typedef enum { 
 	DMA_WAITONREQ_CH21_off		 = 0b0,
	DMA_WAITONREQ_CH21_on		 = 0b1,
} t_DMA_WAITONREQ_CH21_enum;

typedef enum { 
 	DMA_WAITONREQ_CH22_off		 = 0b0,
	DMA_WAITONREQ_CH22_on		 = 0b1,
} t_DMA_WAITONREQ_CH22_enum;

typedef enum { 
 	DMA_WAITONREQ_CH23_off		 = 0b0,
	DMA_WAITONREQ_CH23_on		 = 0b1,
} t_DMA_WAITONREQ_CH23_enum;




#define DMA_SWREQ	0x3000c014		 /*--  --*/

#define DMA_SWREQ_CH0_pos	 	 	 	0	 	 /*--  --*/
#define DMA_SWREQ_CH1_pos	 	 	 	1	 	 /*--  --*/
#define DMA_SWREQ_CH2_pos	 	 	 	2	 	 /*--  --*/
#define DMA_SWREQ_CH3_pos	 	 	 	3	 	 /*--  --*/
#define DMA_SWREQ_CH4_pos	 	 	 	4	 	 /*--  --*/
#define DMA_SWREQ_CH5_pos	 	 	 	5	 	 /*--  --*/
#define DMA_SWREQ_CH6_pos	 	 	 	6	 	 /*--  --*/
#define DMA_SWREQ_CH7_pos	 	 	 	7	 	 /*--  --*/
#define DMA_SWREQ_CH8_pos	 	 	 	8	 	 /*--  --*/
#define DMA_SWREQ_CH9_pos	 	 	 	9	 	 /*--  --*/
#define DMA_SWREQ_CH10_pos	 	 	 	10	 	 /*--  --*/
#define DMA_SWREQ_CH11_pos	 	 	 	11	 	 /*--  --*/
#define DMA_SWREQ_CH12_pos	 	 	 	12	 	 /*--  --*/
#define DMA_SWREQ_CH13_pos	 	 	 	13	 	 /*--  --*/
#define DMA_SWREQ_CH14_pos	 	 	 	14	 	 /*--  --*/
#define DMA_SWREQ_CH15_pos	 	 	 	15	 	 /*--  --*/
#define DMA_SWREQ_CH16_pos	 	 	 	16	 	 /*--  --*/
#define DMA_SWREQ_CH17_pos	 	 	 	17	 	 /*--  --*/
#define DMA_SWREQ_CH18_pos	 	 	 	18	 	 /*--  --*/
#define DMA_SWREQ_CH19_pos	 	 	 	19	 	 /*--  --*/
#define DMA_SWREQ_CH20_pos	 	 	 	20	 	 /*--  --*/
#define DMA_SWREQ_CH21_pos	 	 	 	21	 	 /*--  --*/
#define DMA_SWREQ_CH22_pos	 	 	 	22	 	 /*--  --*/
#define DMA_SWREQ_CH23_pos	 	 	 	23	 	 /*--  --*/


#define DMA_SWREQ_CH0_msk	 	 	 	0x00000001UL
#define DMA_SWREQ_CH1_msk	 	 	 	0x00000002UL
#define DMA_SWREQ_CH2_msk	 	 	 	0x00000004UL
#define DMA_SWREQ_CH3_msk	 	 	 	0x00000008UL
#define DMA_SWREQ_CH4_msk	 	 	 	0x00000010UL
#define DMA_SWREQ_CH5_msk	 	 	 	0x00000020UL
#define DMA_SWREQ_CH6_msk	 	 	 	0x00000040UL
#define DMA_SWREQ_CH7_msk	 	 	 	0x00000080UL
#define DMA_SWREQ_CH8_msk	 	 	 	0x00000100UL
#define DMA_SWREQ_CH9_msk	 	 	 	0x00000200UL
#define DMA_SWREQ_CH10_msk	 	 	 	0x00000400UL
#define DMA_SWREQ_CH11_msk	 	 	 	0x00000800UL
#define DMA_SWREQ_CH12_msk	 	 	 	0x00001000UL
#define DMA_SWREQ_CH13_msk	 	 	 	0x00002000UL
#define DMA_SWREQ_CH14_msk	 	 	 	0x00004000UL
#define DMA_SWREQ_CH15_msk	 	 	 	0x00008000UL
#define DMA_SWREQ_CH16_msk	 	 	 	0x00010000UL
#define DMA_SWREQ_CH17_msk	 	 	 	0x00020000UL
#define DMA_SWREQ_CH18_msk	 	 	 	0x00040000UL
#define DMA_SWREQ_CH19_msk	 	 	 	0x00080000UL
#define DMA_SWREQ_CH20_msk	 	 	 	0x00100000UL
#define DMA_SWREQ_CH21_msk	 	 	 	0x00200000UL
#define DMA_SWREQ_CH22_msk	 	 	 	0x00400000UL
#define DMA_SWREQ_CH23_msk	 	 	 	0x00800000UL


typedef struct {
uint32_t 	 	DMA_SWREQ_CH0	 	:1;
uint32_t 	 	DMA_SWREQ_CH1	 	:1;
uint32_t 	 	DMA_SWREQ_CH2	 	:1;
uint32_t 	 	DMA_SWREQ_CH3	 	:1;
uint32_t 	 	DMA_SWREQ_CH4	 	:1;
uint32_t 	 	DMA_SWREQ_CH5	 	:1;
uint32_t 	 	DMA_SWREQ_CH6	 	:1;
uint32_t 	 	DMA_SWREQ_CH7	 	:1;
uint32_t 	 	DMA_SWREQ_CH8	 	:1;
uint32_t 	 	DMA_SWREQ_CH9	 	:1;
uint32_t 	 	DMA_SWREQ_CH10	 	:1;
uint32_t 	 	DMA_SWREQ_CH11	 	:1;
uint32_t 	 	DMA_SWREQ_CH12	 	:1;
uint32_t 	 	DMA_SWREQ_CH13	 	:1;
uint32_t 	 	DMA_SWREQ_CH14	 	:1;
uint32_t 	 	DMA_SWREQ_CH15	 	:1;
uint32_t 	 	DMA_SWREQ_CH16	 	:1;
uint32_t 	 	DMA_SWREQ_CH17	 	:1;
uint32_t 	 	DMA_SWREQ_CH18	 	:1;
uint32_t 	 	DMA_SWREQ_CH19	 	:1;
uint32_t 	 	DMA_SWREQ_CH20	 	:1;
uint32_t 	 	DMA_SWREQ_CH21	 	:1;
uint32_t 	 	DMA_SWREQ_CH22	 	:1;
uint32_t 	 	DMA_SWREQ_CH23	 	:1;
uint32_t 	 	 	 	:8;
} t_DMA_SWREQ_bits;


typedef enum { 
 	DMA_SWREQ_CH0_off		 = 0b0,
	DMA_SWREQ_CH0_on		 = 0b1,
} t_DMA_SWREQ_CH0_enum;

typedef enum { 
 	DMA_SWREQ_CH1_off		 = 0b0,
	DMA_SWREQ_CH1_on		 = 0b1,
} t_DMA_SWREQ_CH1_enum;

typedef enum { 
 	DMA_SWREQ_CH2_off		 = 0b0,
	DMA_SWREQ_CH2_on		 = 0b1,
} t_DMA_SWREQ_CH2_enum;

typedef enum { 
 	DMA_SWREQ_CH3_off		 = 0b0,
	DMA_SWREQ_CH3_on		 = 0b1,
} t_DMA_SWREQ_CH3_enum;

typedef enum { 
 	DMA_SWREQ_CH4_off		 = 0b0,
	DMA_SWREQ_CH4_on		 = 0b1,
} t_DMA_SWREQ_CH4_enum;

typedef enum { 
 	DMA_SWREQ_CH5_off		 = 0b0,
	DMA_SWREQ_CH5_on		 = 0b1,
} t_DMA_SWREQ_CH5_enum;

typedef enum { 
 	DMA_SWREQ_CH6_off		 = 0b0,
	DMA_SWREQ_CH6_on		 = 0b1,
} t_DMA_SWREQ_CH6_enum;

typedef enum { 
 	DMA_SWREQ_CH7_off		 = 0b0,
	DMA_SWREQ_CH7_on		 = 0b1,
} t_DMA_SWREQ_CH7_enum;

typedef enum { 
 	DMA_SWREQ_CH8_off		 = 0b0,
	DMA_SWREQ_CH8_on		 = 0b1,
} t_DMA_SWREQ_CH8_enum;

typedef enum { 
 	DMA_SWREQ_CH9_off		 = 0b0,
	DMA_SWREQ_CH9_on		 = 0b1,
} t_DMA_SWREQ_CH9_enum;

typedef enum { 
 	DMA_SWREQ_CH10_off		 = 0b0,
	DMA_SWREQ_CH10_on		 = 0b1,
} t_DMA_SWREQ_CH10_enum;

typedef enum { 
 	DMA_SWREQ_CH11_off		 = 0b0,
	DMA_SWREQ_CH11_on		 = 0b1,
} t_DMA_SWREQ_CH11_enum;

typedef enum { 
 	DMA_SWREQ_CH12_off		 = 0b0,
	DMA_SWREQ_CH12_on		 = 0b1,
} t_DMA_SWREQ_CH12_enum;

typedef enum { 
 	DMA_SWREQ_CH13_off		 = 0b0,
	DMA_SWREQ_CH13_on		 = 0b1,
} t_DMA_SWREQ_CH13_enum;

typedef enum { 
 	DMA_SWREQ_CH14_off		 = 0b0,
	DMA_SWREQ_CH14_on		 = 0b1,
} t_DMA_SWREQ_CH14_enum;

typedef enum { 
 	DMA_SWREQ_CH15_off		 = 0b0,
	DMA_SWREQ_CH15_on		 = 0b1,
} t_DMA_SWREQ_CH15_enum;

typedef enum { 
 	DMA_SWREQ_CH16_off		 = 0b0,
	DMA_SWREQ_CH16_on		 = 0b1,
} t_DMA_SWREQ_CH16_enum;

typedef enum { 
 	DMA_SWREQ_CH17_off		 = 0b0,
	DMA_SWREQ_CH17_on		 = 0b1,
} t_DMA_SWREQ_CH17_enum;

typedef enum { 
 	DMA_SWREQ_CH18_off		 = 0b0,
	DMA_SWREQ_CH18_on		 = 0b1,
} t_DMA_SWREQ_CH18_enum;

typedef enum { 
 	DMA_SWREQ_CH19_off		 = 0b0,
	DMA_SWREQ_CH19_on		 = 0b1,
} t_DMA_SWREQ_CH19_enum;

typedef enum { 
 	DMA_SWREQ_CH20_off		 = 0b0,
	DMA_SWREQ_CH20_on		 = 0b1,
} t_DMA_SWREQ_CH20_enum;

typedef enum { 
 	DMA_SWREQ_CH21_off		 = 0b0,
	DMA_SWREQ_CH21_on		 = 0b1,
} t_DMA_SWREQ_CH21_enum;

typedef enum { 
 	DMA_SWREQ_CH22_off		 = 0b0,
	DMA_SWREQ_CH22_on		 = 0b1,
} t_DMA_SWREQ_CH22_enum;

typedef enum { 
 	DMA_SWREQ_CH23_off		 = 0b0,
	DMA_SWREQ_CH23_on		 = 0b1,
} t_DMA_SWREQ_CH23_enum;




#define DMA_USEBURSTSET	0x3000c018		 /*--  --*/

#define DMA_USEBURSTSET_CH0_pos	 	 	 	0	 	 /*--  --*/
#define DMA_USEBURSTSET_CH1_pos	 	 	 	1	 	 /*--  --*/
#define DMA_USEBURSTSET_CH2_pos	 	 	 	2	 	 /*--  --*/
#define DMA_USEBURSTSET_CH3_pos	 	 	 	3	 	 /*--  --*/
#define DMA_USEBURSTSET_CH4_pos	 	 	 	4	 	 /*--  --*/
#define DMA_USEBURSTSET_CH5_pos	 	 	 	5	 	 /*--  --*/
#define DMA_USEBURSTSET_CH6_pos	 	 	 	6	 	 /*--  --*/
#define DMA_USEBURSTSET_CH7_pos	 	 	 	7	 	 /*--  --*/
#define DMA_USEBURSTSET_CH8_pos	 	 	 	8	 	 /*--  --*/
#define DMA_USEBURSTSET_CH9_pos	 	 	 	9	 	 /*--  --*/
#define DMA_USEBURSTSET_CH10_pos	 	 	 	10	 	 /*--  --*/
#define DMA_USEBURSTSET_CH11_pos	 	 	 	11	 	 /*--  --*/
#define DMA_USEBURSTSET_CH12_pos	 	 	 	12	 	 /*--  --*/
#define DMA_USEBURSTSET_CH13_pos	 	 	 	13	 	 /*--  --*/
#define DMA_USEBURSTSET_CH14_pos	 	 	 	14	 	 /*--  --*/
#define DMA_USEBURSTSET_CH15_pos	 	 	 	15	 	 /*--  --*/
#define DMA_USEBURSTSET_CH16_pos	 	 	 	16	 	 /*--  --*/
#define DMA_USEBURSTSET_CH17_pos	 	 	 	17	 	 /*--  --*/
#define DMA_USEBURSTSET_CH18_pos	 	 	 	18	 	 /*--  --*/
#define DMA_USEBURSTSET_CH19_pos	 	 	 	19	 	 /*--  --*/
#define DMA_USEBURSTSET_CH20_pos	 	 	 	20	 	 /*--  --*/
#define DMA_USEBURSTSET_CH21_pos	 	 	 	21	 	 /*--  --*/
#define DMA_USEBURSTSET_CH22_pos	 	 	 	22	 	 /*--  --*/
#define DMA_USEBURSTSET_CH23_pos	 	 	 	23	 	 /*--  --*/


#define DMA_USEBURSTSET_CH0_msk	 	 	 	0x00000001UL
#define DMA_USEBURSTSET_CH1_msk	 	 	 	0x00000002UL
#define DMA_USEBURSTSET_CH2_msk	 	 	 	0x00000004UL
#define DMA_USEBURSTSET_CH3_msk	 	 	 	0x00000008UL
#define DMA_USEBURSTSET_CH4_msk	 	 	 	0x00000010UL
#define DMA_USEBURSTSET_CH5_msk	 	 	 	0x00000020UL
#define DMA_USEBURSTSET_CH6_msk	 	 	 	0x00000040UL
#define DMA_USEBURSTSET_CH7_msk	 	 	 	0x00000080UL
#define DMA_USEBURSTSET_CH8_msk	 	 	 	0x00000100UL
#define DMA_USEBURSTSET_CH9_msk	 	 	 	0x00000200UL
#define DMA_USEBURSTSET_CH10_msk	 	 	 	0x00000400UL
#define DMA_USEBURSTSET_CH11_msk	 	 	 	0x00000800UL
#define DMA_USEBURSTSET_CH12_msk	 	 	 	0x00001000UL
#define DMA_USEBURSTSET_CH13_msk	 	 	 	0x00002000UL
#define DMA_USEBURSTSET_CH14_msk	 	 	 	0x00004000UL
#define DMA_USEBURSTSET_CH15_msk	 	 	 	0x00008000UL
#define DMA_USEBURSTSET_CH16_msk	 	 	 	0x00010000UL
#define DMA_USEBURSTSET_CH17_msk	 	 	 	0x00020000UL
#define DMA_USEBURSTSET_CH18_msk	 	 	 	0x00040000UL
#define DMA_USEBURSTSET_CH19_msk	 	 	 	0x00080000UL
#define DMA_USEBURSTSET_CH20_msk	 	 	 	0x00100000UL
#define DMA_USEBURSTSET_CH21_msk	 	 	 	0x00200000UL
#define DMA_USEBURSTSET_CH22_msk	 	 	 	0x00400000UL
#define DMA_USEBURSTSET_CH23_msk	 	 	 	0x00800000UL


typedef struct {
uint32_t 	 	DMA_USEBURSTSET_CH0	 	:1;
uint32_t 	 	DMA_USEBURSTSET_CH1	 	:1;
uint32_t 	 	DMA_USEBURSTSET_CH2	 	:1;
uint32_t 	 	DMA_USEBURSTSET_CH3	 	:1;
uint32_t 	 	DMA_USEBURSTSET_CH4	 	:1;
uint32_t 	 	DMA_USEBURSTSET_CH5	 	:1;
uint32_t 	 	DMA_USEBURSTSET_CH6	 	:1;
uint32_t 	 	DMA_USEBURSTSET_CH7	 	:1;
uint32_t 	 	DMA_USEBURSTSET_CH8	 	:1;
uint32_t 	 	DMA_USEBURSTSET_CH9	 	:1;
uint32_t 	 	DMA_USEBURSTSET_CH10	 	:1;
uint32_t 	 	DMA_USEBURSTSET_CH11	 	:1;
uint32_t 	 	DMA_USEBURSTSET_CH12	 	:1;
uint32_t 	 	DMA_USEBURSTSET_CH13	 	:1;
uint32_t 	 	DMA_USEBURSTSET_CH14	 	:1;
uint32_t 	 	DMA_USEBURSTSET_CH15	 	:1;
uint32_t 	 	DMA_USEBURSTSET_CH16	 	:1;
uint32_t 	 	DMA_USEBURSTSET_CH17	 	:1;
uint32_t 	 	DMA_USEBURSTSET_CH18	 	:1;
uint32_t 	 	DMA_USEBURSTSET_CH19	 	:1;
uint32_t 	 	DMA_USEBURSTSET_CH20	 	:1;
uint32_t 	 	DMA_USEBURSTSET_CH21	 	:1;
uint32_t 	 	DMA_USEBURSTSET_CH22	 	:1;
uint32_t 	 	DMA_USEBURSTSET_CH23	 	:1;
uint32_t 	 	 	 	:8;
} t_DMA_USEBURSTSET_bits;


typedef enum { 
 	DMA_USEBURSTSET_CH0_off		 = 0b0,
	DMA_USEBURSTSET_CH0_on		 = 0b1,
} t_DMA_USEBURSTSET_CH0_enum;

typedef enum { 
 	DMA_USEBURSTSET_CH1_off		 = 0b0,
	DMA_USEBURSTSET_CH1_on		 = 0b1,
} t_DMA_USEBURSTSET_CH1_enum;

typedef enum { 
 	DMA_USEBURSTSET_CH2_off		 = 0b0,
	DMA_USEBURSTSET_CH2_on		 = 0b1,
} t_DMA_USEBURSTSET_CH2_enum;

typedef enum { 
 	DMA_USEBURSTSET_CH3_off		 = 0b0,
	DMA_USEBURSTSET_CH3_on		 = 0b1,
} t_DMA_USEBURSTSET_CH3_enum;

typedef enum { 
 	DMA_USEBURSTSET_CH4_off		 = 0b0,
	DMA_USEBURSTSET_CH4_on		 = 0b1,
} t_DMA_USEBURSTSET_CH4_enum;

typedef enum { 
 	DMA_USEBURSTSET_CH5_off		 = 0b0,
	DMA_USEBURSTSET_CH5_on		 = 0b1,
} t_DMA_USEBURSTSET_CH5_enum;

typedef enum { 
 	DMA_USEBURSTSET_CH6_off		 = 0b0,
	DMA_USEBURSTSET_CH6_on		 = 0b1,
} t_DMA_USEBURSTSET_CH6_enum;

typedef enum { 
 	DMA_USEBURSTSET_CH7_off		 = 0b0,
	DMA_USEBURSTSET_CH7_on		 = 0b1,
} t_DMA_USEBURSTSET_CH7_enum;

typedef enum { 
 	DMA_USEBURSTSET_CH8_off		 = 0b0,
	DMA_USEBURSTSET_CH8_on		 = 0b1,
} t_DMA_USEBURSTSET_CH8_enum;

typedef enum { 
 	DMA_USEBURSTSET_CH9_off		 = 0b0,
	DMA_USEBURSTSET_CH9_on		 = 0b1,
} t_DMA_USEBURSTSET_CH9_enum;

typedef enum { 
 	DMA_USEBURSTSET_CH10_off		 = 0b0,
	DMA_USEBURSTSET_CH10_on		 = 0b1,
} t_DMA_USEBURSTSET_CH10_enum;

typedef enum { 
 	DMA_USEBURSTSET_CH11_off		 = 0b0,
	DMA_USEBURSTSET_CH11_on		 = 0b1,
} t_DMA_USEBURSTSET_CH11_enum;

typedef enum { 
 	DMA_USEBURSTSET_CH12_off		 = 0b0,
	DMA_USEBURSTSET_CH12_on		 = 0b1,
} t_DMA_USEBURSTSET_CH12_enum;

typedef enum { 
 	DMA_USEBURSTSET_CH13_off		 = 0b0,
	DMA_USEBURSTSET_CH13_on		 = 0b1,
} t_DMA_USEBURSTSET_CH13_enum;

typedef enum { 
 	DMA_USEBURSTSET_CH14_off		 = 0b0,
	DMA_USEBURSTSET_CH14_on		 = 0b1,
} t_DMA_USEBURSTSET_CH14_enum;

typedef enum { 
 	DMA_USEBURSTSET_CH15_off		 = 0b0,
	DMA_USEBURSTSET_CH15_on		 = 0b1,
} t_DMA_USEBURSTSET_CH15_enum;

typedef enum { 
 	DMA_USEBURSTSET_CH16_off		 = 0b0,
	DMA_USEBURSTSET_CH16_on		 = 0b1,
} t_DMA_USEBURSTSET_CH16_enum;

typedef enum { 
 	DMA_USEBURSTSET_CH17_off		 = 0b0,
	DMA_USEBURSTSET_CH17_on		 = 0b1,
} t_DMA_USEBURSTSET_CH17_enum;

typedef enum { 
 	DMA_USEBURSTSET_CH18_off		 = 0b0,
	DMA_USEBURSTSET_CH18_on		 = 0b1,
} t_DMA_USEBURSTSET_CH18_enum;

typedef enum { 
 	DMA_USEBURSTSET_CH19_off		 = 0b0,
	DMA_USEBURSTSET_CH19_on		 = 0b1,
} t_DMA_USEBURSTSET_CH19_enum;

typedef enum { 
 	DMA_USEBURSTSET_CH20_off		 = 0b0,
	DMA_USEBURSTSET_CH20_on		 = 0b1,
} t_DMA_USEBURSTSET_CH20_enum;

typedef enum { 
 	DMA_USEBURSTSET_CH21_off		 = 0b0,
	DMA_USEBURSTSET_CH21_on		 = 0b1,
} t_DMA_USEBURSTSET_CH21_enum;

typedef enum { 
 	DMA_USEBURSTSET_CH22_off		 = 0b0,
	DMA_USEBURSTSET_CH22_on		 = 0b1,
} t_DMA_USEBURSTSET_CH22_enum;

typedef enum { 
 	DMA_USEBURSTSET_CH23_off		 = 0b0,
	DMA_USEBURSTSET_CH23_on		 = 0b1,
} t_DMA_USEBURSTSET_CH23_enum;




#define DMA_USEBURSTCLR	0x3000c01c		 /*--  --*/

#define DMA_USEBURSTCLR_CH0_pos	 	 	 	0	 	 /*--  --*/
#define DMA_USEBURSTCLR_CH1_pos	 	 	 	1	 	 /*--  --*/
#define DMA_USEBURSTCLR_CH2_pos	 	 	 	2	 	 /*--  --*/
#define DMA_USEBURSTCLR_CH3_pos	 	 	 	3	 	 /*--  --*/
#define DMA_USEBURSTCLR_CH4_pos	 	 	 	4	 	 /*--  --*/
#define DMA_USEBURSTCLR_CH5_pos	 	 	 	5	 	 /*--  --*/
#define DMA_USEBURSTCLR_CH6_pos	 	 	 	6	 	 /*--  --*/
#define DMA_USEBURSTCLR_CH7_pos	 	 	 	7	 	 /*--  --*/
#define DMA_USEBURSTCLR_CH8_pos	 	 	 	8	 	 /*--  --*/
#define DMA_USEBURSTCLR_CH9_pos	 	 	 	9	 	 /*--  --*/
#define DMA_USEBURSTCLR_CH10_pos	 	 	 	10	 	 /*--  --*/
#define DMA_USEBURSTCLR_CH11_pos	 	 	 	11	 	 /*--  --*/
#define DMA_USEBURSTCLR_CH12_pos	 	 	 	12	 	 /*--  --*/
#define DMA_USEBURSTCLR_CH13_pos	 	 	 	13	 	 /*--  --*/
#define DMA_USEBURSTCLR_CH14_pos	 	 	 	14	 	 /*--  --*/
#define DMA_USEBURSTCLR_CH15_pos	 	 	 	15	 	 /*--  --*/
#define DMA_USEBURSTCLR_CH16_pos	 	 	 	16	 	 /*--  --*/
#define DMA_USEBURSTCLR_CH17_pos	 	 	 	17	 	 /*--  --*/
#define DMA_USEBURSTCLR_CH18_pos	 	 	 	18	 	 /*--  --*/
#define DMA_USEBURSTCLR_CH19_pos	 	 	 	19	 	 /*--  --*/
#define DMA_USEBURSTCLR_CH20_pos	 	 	 	20	 	 /*--  --*/
#define DMA_USEBURSTCLR_CH21_pos	 	 	 	21	 	 /*--  --*/
#define DMA_USEBURSTCLR_CH22_pos	 	 	 	22	 	 /*--  --*/
#define DMA_USEBURSTCLR_CH23_pos	 	 	 	23	 	 /*--  --*/


#define DMA_USEBURSTCLR_CH0_msk	 	 	 	0x00000001UL
#define DMA_USEBURSTCLR_CH1_msk	 	 	 	0x00000002UL
#define DMA_USEBURSTCLR_CH2_msk	 	 	 	0x00000004UL
#define DMA_USEBURSTCLR_CH3_msk	 	 	 	0x00000008UL
#define DMA_USEBURSTCLR_CH4_msk	 	 	 	0x00000010UL
#define DMA_USEBURSTCLR_CH5_msk	 	 	 	0x00000020UL
#define DMA_USEBURSTCLR_CH6_msk	 	 	 	0x00000040UL
#define DMA_USEBURSTCLR_CH7_msk	 	 	 	0x00000080UL
#define DMA_USEBURSTCLR_CH8_msk	 	 	 	0x00000100UL
#define DMA_USEBURSTCLR_CH9_msk	 	 	 	0x00000200UL
#define DMA_USEBURSTCLR_CH10_msk	 	 	 	0x00000400UL
#define DMA_USEBURSTCLR_CH11_msk	 	 	 	0x00000800UL
#define DMA_USEBURSTCLR_CH12_msk	 	 	 	0x00001000UL
#define DMA_USEBURSTCLR_CH13_msk	 	 	 	0x00002000UL
#define DMA_USEBURSTCLR_CH14_msk	 	 	 	0x00004000UL
#define DMA_USEBURSTCLR_CH15_msk	 	 	 	0x00008000UL
#define DMA_USEBURSTCLR_CH16_msk	 	 	 	0x00010000UL
#define DMA_USEBURSTCLR_CH17_msk	 	 	 	0x00020000UL
#define DMA_USEBURSTCLR_CH18_msk	 	 	 	0x00040000UL
#define DMA_USEBURSTCLR_CH19_msk	 	 	 	0x00080000UL
#define DMA_USEBURSTCLR_CH20_msk	 	 	 	0x00100000UL
#define DMA_USEBURSTCLR_CH21_msk	 	 	 	0x00200000UL
#define DMA_USEBURSTCLR_CH22_msk	 	 	 	0x00400000UL
#define DMA_USEBURSTCLR_CH23_msk	 	 	 	0x00800000UL


typedef struct {
uint32_t 	 	DMA_USEBURSTCLR_CH0	 	:1;
uint32_t 	 	DMA_USEBURSTCLR_CH1	 	:1;
uint32_t 	 	DMA_USEBURSTCLR_CH2	 	:1;
uint32_t 	 	DMA_USEBURSTCLR_CH3	 	:1;
uint32_t 	 	DMA_USEBURSTCLR_CH4	 	:1;
uint32_t 	 	DMA_USEBURSTCLR_CH5	 	:1;
uint32_t 	 	DMA_USEBURSTCLR_CH6	 	:1;
uint32_t 	 	DMA_USEBURSTCLR_CH7	 	:1;
uint32_t 	 	DMA_USEBURSTCLR_CH8	 	:1;
uint32_t 	 	DMA_USEBURSTCLR_CH9	 	:1;
uint32_t 	 	DMA_USEBURSTCLR_CH10	 	:1;
uint32_t 	 	DMA_USEBURSTCLR_CH11	 	:1;
uint32_t 	 	DMA_USEBURSTCLR_CH12	 	:1;
uint32_t 	 	DMA_USEBURSTCLR_CH13	 	:1;
uint32_t 	 	DMA_USEBURSTCLR_CH14	 	:1;
uint32_t 	 	DMA_USEBURSTCLR_CH15	 	:1;
uint32_t 	 	DMA_USEBURSTCLR_CH16	 	:1;
uint32_t 	 	DMA_USEBURSTCLR_CH17	 	:1;
uint32_t 	 	DMA_USEBURSTCLR_CH18	 	:1;
uint32_t 	 	DMA_USEBURSTCLR_CH19	 	:1;
uint32_t 	 	DMA_USEBURSTCLR_CH20	 	:1;
uint32_t 	 	DMA_USEBURSTCLR_CH21	 	:1;
uint32_t 	 	DMA_USEBURSTCLR_CH22	 	:1;
uint32_t 	 	DMA_USEBURSTCLR_CH23	 	:1;
uint32_t 	 	 	 	:8;
} t_DMA_USEBURSTCLR_bits;


typedef enum { 
 	DMA_USEBURSTCLR_CH0_off		 = 0b0,
	DMA_USEBURSTCLR_CH0_on		 = 0b1,
} t_DMA_USEBURSTCLR_CH0_enum;

typedef enum { 
 	DMA_USEBURSTCLR_CH1_off		 = 0b0,
	DMA_USEBURSTCLR_CH1_on		 = 0b1,
} t_DMA_USEBURSTCLR_CH1_enum;

typedef enum { 
 	DMA_USEBURSTCLR_CH2_off		 = 0b0,
	DMA_USEBURSTCLR_CH2_on		 = 0b1,
} t_DMA_USEBURSTCLR_CH2_enum;

typedef enum { 
 	DMA_USEBURSTCLR_CH3_off		 = 0b0,
	DMA_USEBURSTCLR_CH3_on		 = 0b1,
} t_DMA_USEBURSTCLR_CH3_enum;

typedef enum { 
 	DMA_USEBURSTCLR_CH4_off		 = 0b0,
	DMA_USEBURSTCLR_CH4_on		 = 0b1,
} t_DMA_USEBURSTCLR_CH4_enum;

typedef enum { 
 	DMA_USEBURSTCLR_CH5_off		 = 0b0,
	DMA_USEBURSTCLR_CH5_on		 = 0b1,
} t_DMA_USEBURSTCLR_CH5_enum;

typedef enum { 
 	DMA_USEBURSTCLR_CH6_off		 = 0b0,
	DMA_USEBURSTCLR_CH6_on		 = 0b1,
} t_DMA_USEBURSTCLR_CH6_enum;

typedef enum { 
 	DMA_USEBURSTCLR_CH7_off		 = 0b0,
	DMA_USEBURSTCLR_CH7_on		 = 0b1,
} t_DMA_USEBURSTCLR_CH7_enum;

typedef enum { 
 	DMA_USEBURSTCLR_CH8_off		 = 0b0,
	DMA_USEBURSTCLR_CH8_on		 = 0b1,
} t_DMA_USEBURSTCLR_CH8_enum;

typedef enum { 
 	DMA_USEBURSTCLR_CH9_off		 = 0b0,
	DMA_USEBURSTCLR_CH9_on		 = 0b1,
} t_DMA_USEBURSTCLR_CH9_enum;

typedef enum { 
 	DMA_USEBURSTCLR_CH10_off		 = 0b0,
	DMA_USEBURSTCLR_CH10_on		 = 0b1,
} t_DMA_USEBURSTCLR_CH10_enum;

typedef enum { 
 	DMA_USEBURSTCLR_CH11_off		 = 0b0,
	DMA_USEBURSTCLR_CH11_on		 = 0b1,
} t_DMA_USEBURSTCLR_CH11_enum;

typedef enum { 
 	DMA_USEBURSTCLR_CH12_off		 = 0b0,
	DMA_USEBURSTCLR_CH12_on		 = 0b1,
} t_DMA_USEBURSTCLR_CH12_enum;

typedef enum { 
 	DMA_USEBURSTCLR_CH13_off		 = 0b0,
	DMA_USEBURSTCLR_CH13_on		 = 0b1,
} t_DMA_USEBURSTCLR_CH13_enum;

typedef enum { 
 	DMA_USEBURSTCLR_CH14_off		 = 0b0,
	DMA_USEBURSTCLR_CH14_on		 = 0b1,
} t_DMA_USEBURSTCLR_CH14_enum;

typedef enum { 
 	DMA_USEBURSTCLR_CH15_off		 = 0b0,
	DMA_USEBURSTCLR_CH15_on		 = 0b1,
} t_DMA_USEBURSTCLR_CH15_enum;

typedef enum { 
 	DMA_USEBURSTCLR_CH16_off		 = 0b0,
	DMA_USEBURSTCLR_CH16_on		 = 0b1,
} t_DMA_USEBURSTCLR_CH16_enum;

typedef enum { 
 	DMA_USEBURSTCLR_CH17_off		 = 0b0,
	DMA_USEBURSTCLR_CH17_on		 = 0b1,
} t_DMA_USEBURSTCLR_CH17_enum;

typedef enum { 
 	DMA_USEBURSTCLR_CH18_off		 = 0b0,
	DMA_USEBURSTCLR_CH18_on		 = 0b1,
} t_DMA_USEBURSTCLR_CH18_enum;

typedef enum { 
 	DMA_USEBURSTCLR_CH19_off		 = 0b0,
	DMA_USEBURSTCLR_CH19_on		 = 0b1,
} t_DMA_USEBURSTCLR_CH19_enum;

typedef enum { 
 	DMA_USEBURSTCLR_CH20_off		 = 0b0,
	DMA_USEBURSTCLR_CH20_on		 = 0b1,
} t_DMA_USEBURSTCLR_CH20_enum;

typedef enum { 
 	DMA_USEBURSTCLR_CH21_off		 = 0b0,
	DMA_USEBURSTCLR_CH21_on		 = 0b1,
} t_DMA_USEBURSTCLR_CH21_enum;

typedef enum { 
 	DMA_USEBURSTCLR_CH22_off		 = 0b0,
	DMA_USEBURSTCLR_CH22_on		 = 0b1,
} t_DMA_USEBURSTCLR_CH22_enum;

typedef enum { 
 	DMA_USEBURSTCLR_CH23_off		 = 0b0,
	DMA_USEBURSTCLR_CH23_on		 = 0b1,
} t_DMA_USEBURSTCLR_CH23_enum;




#define DMA_REQMASKSET	0x3000c020		 /*--  --*/

#define DMA_REQMASKSET_CH0_pos	 	 	 	0	 	 /*--  --*/
#define DMA_REQMASKSET_CH1_pos	 	 	 	1	 	 /*--  --*/
#define DMA_REQMASKSET_CH2_pos	 	 	 	2	 	 /*--  --*/
#define DMA_REQMASKSET_CH3_pos	 	 	 	3	 	 /*--  --*/
#define DMA_REQMASKSET_CH4_pos	 	 	 	4	 	 /*--  --*/
#define DMA_REQMASKSET_CH5_pos	 	 	 	5	 	 /*--  --*/
#define DMA_REQMASKSET_CH6_pos	 	 	 	6	 	 /*--  --*/
#define DMA_REQMASKSET_CH7_pos	 	 	 	7	 	 /*--  --*/
#define DMA_REQMASKSET_CH8_pos	 	 	 	8	 	 /*--  --*/
#define DMA_REQMASKSET_CH9_pos	 	 	 	9	 	 /*--  --*/
#define DMA_REQMASKSET_CH10_pos	 	 	 	10	 	 /*--  --*/
#define DMA_REQMASKSET_CH11_pos	 	 	 	11	 	 /*--  --*/
#define DMA_REQMASKSET_CH12_pos	 	 	 	12	 	 /*--  --*/
#define DMA_REQMASKSET_CH13_pos	 	 	 	13	 	 /*--  --*/
#define DMA_REQMASKSET_CH14_pos	 	 	 	14	 	 /*--  --*/
#define DMA_REQMASKSET_CH15_pos	 	 	 	15	 	 /*--  --*/
#define DMA_REQMASKSET_CH16_pos	 	 	 	16	 	 /*--  --*/
#define DMA_REQMASKSET_CH17_pos	 	 	 	17	 	 /*--  --*/
#define DMA_REQMASKSET_CH18_pos	 	 	 	18	 	 /*--  --*/
#define DMA_REQMASKSET_CH19_pos	 	 	 	19	 	 /*--  --*/
#define DMA_REQMASKSET_CH20_pos	 	 	 	20	 	 /*--  --*/
#define DMA_REQMASKSET_CH21_pos	 	 	 	21	 	 /*--  --*/
#define DMA_REQMASKSET_CH22_pos	 	 	 	22	 	 /*--  --*/
#define DMA_REQMASKSET_CH23_pos	 	 	 	23	 	 /*--  --*/


#define DMA_REQMASKSET_CH0_msk	 	 	 	0x00000001UL
#define DMA_REQMASKSET_CH1_msk	 	 	 	0x00000002UL
#define DMA_REQMASKSET_CH2_msk	 	 	 	0x00000004UL
#define DMA_REQMASKSET_CH3_msk	 	 	 	0x00000008UL
#define DMA_REQMASKSET_CH4_msk	 	 	 	0x00000010UL
#define DMA_REQMASKSET_CH5_msk	 	 	 	0x00000020UL
#define DMA_REQMASKSET_CH6_msk	 	 	 	0x00000040UL
#define DMA_REQMASKSET_CH7_msk	 	 	 	0x00000080UL
#define DMA_REQMASKSET_CH8_msk	 	 	 	0x00000100UL
#define DMA_REQMASKSET_CH9_msk	 	 	 	0x00000200UL
#define DMA_REQMASKSET_CH10_msk	 	 	 	0x00000400UL
#define DMA_REQMASKSET_CH11_msk	 	 	 	0x00000800UL
#define DMA_REQMASKSET_CH12_msk	 	 	 	0x00001000UL
#define DMA_REQMASKSET_CH13_msk	 	 	 	0x00002000UL
#define DMA_REQMASKSET_CH14_msk	 	 	 	0x00004000UL
#define DMA_REQMASKSET_CH15_msk	 	 	 	0x00008000UL
#define DMA_REQMASKSET_CH16_msk	 	 	 	0x00010000UL
#define DMA_REQMASKSET_CH17_msk	 	 	 	0x00020000UL
#define DMA_REQMASKSET_CH18_msk	 	 	 	0x00040000UL
#define DMA_REQMASKSET_CH19_msk	 	 	 	0x00080000UL
#define DMA_REQMASKSET_CH20_msk	 	 	 	0x00100000UL
#define DMA_REQMASKSET_CH21_msk	 	 	 	0x00200000UL
#define DMA_REQMASKSET_CH22_msk	 	 	 	0x00400000UL
#define DMA_REQMASKSET_CH23_msk	 	 	 	0x00800000UL


typedef struct {
uint32_t 	 	DMA_REQMASKSET_CH0	 	:1;
uint32_t 	 	DMA_REQMASKSET_CH1	 	:1;
uint32_t 	 	DMA_REQMASKSET_CH2	 	:1;
uint32_t 	 	DMA_REQMASKSET_CH3	 	:1;
uint32_t 	 	DMA_REQMASKSET_CH4	 	:1;
uint32_t 	 	DMA_REQMASKSET_CH5	 	:1;
uint32_t 	 	DMA_REQMASKSET_CH6	 	:1;
uint32_t 	 	DMA_REQMASKSET_CH7	 	:1;
uint32_t 	 	DMA_REQMASKSET_CH8	 	:1;
uint32_t 	 	DMA_REQMASKSET_CH9	 	:1;
uint32_t 	 	DMA_REQMASKSET_CH10	 	:1;
uint32_t 	 	DMA_REQMASKSET_CH11	 	:1;
uint32_t 	 	DMA_REQMASKSET_CH12	 	:1;
uint32_t 	 	DMA_REQMASKSET_CH13	 	:1;
uint32_t 	 	DMA_REQMASKSET_CH14	 	:1;
uint32_t 	 	DMA_REQMASKSET_CH15	 	:1;
uint32_t 	 	DMA_REQMASKSET_CH16	 	:1;
uint32_t 	 	DMA_REQMASKSET_CH17	 	:1;
uint32_t 	 	DMA_REQMASKSET_CH18	 	:1;
uint32_t 	 	DMA_REQMASKSET_CH19	 	:1;
uint32_t 	 	DMA_REQMASKSET_CH20	 	:1;
uint32_t 	 	DMA_REQMASKSET_CH21	 	:1;
uint32_t 	 	DMA_REQMASKSET_CH22	 	:1;
uint32_t 	 	DMA_REQMASKSET_CH23	 	:1;
uint32_t 	 	 	 	:8;
} t_DMA_REQMASKSET_bits;


typedef enum { 
 	DMA_REQMASKSET_CH0_off		 = 0b0,
	DMA_REQMASKSET_CH0_on		 = 0b1,
} t_DMA_REQMASKSET_CH0_enum;

typedef enum { 
 	DMA_REQMASKSET_CH1_off		 = 0b0,
	DMA_REQMASKSET_CH1_on		 = 0b1,
} t_DMA_REQMASKSET_CH1_enum;

typedef enum { 
 	DMA_REQMASKSET_CH2_off		 = 0b0,
	DMA_REQMASKSET_CH2_on		 = 0b1,
} t_DMA_REQMASKSET_CH2_enum;

typedef enum { 
 	DMA_REQMASKSET_CH3_off		 = 0b0,
	DMA_REQMASKSET_CH3_on		 = 0b1,
} t_DMA_REQMASKSET_CH3_enum;

typedef enum { 
 	DMA_REQMASKSET_CH4_off		 = 0b0,
	DMA_REQMASKSET_CH4_on		 = 0b1,
} t_DMA_REQMASKSET_CH4_enum;

typedef enum { 
 	DMA_REQMASKSET_CH5_off		 = 0b0,
	DMA_REQMASKSET_CH5_on		 = 0b1,
} t_DMA_REQMASKSET_CH5_enum;

typedef enum { 
 	DMA_REQMASKSET_CH6_off		 = 0b0,
	DMA_REQMASKSET_CH6_on		 = 0b1,
} t_DMA_REQMASKSET_CH6_enum;

typedef enum { 
 	DMA_REQMASKSET_CH7_off		 = 0b0,
	DMA_REQMASKSET_CH7_on		 = 0b1,
} t_DMA_REQMASKSET_CH7_enum;

typedef enum { 
 	DMA_REQMASKSET_CH8_off		 = 0b0,
	DMA_REQMASKSET_CH8_on		 = 0b1,
} t_DMA_REQMASKSET_CH8_enum;

typedef enum { 
 	DMA_REQMASKSET_CH9_off		 = 0b0,
	DMA_REQMASKSET_CH9_on		 = 0b1,
} t_DMA_REQMASKSET_CH9_enum;

typedef enum { 
 	DMA_REQMASKSET_CH10_off		 = 0b0,
	DMA_REQMASKSET_CH10_on		 = 0b1,
} t_DMA_REQMASKSET_CH10_enum;

typedef enum { 
 	DMA_REQMASKSET_CH11_off		 = 0b0,
	DMA_REQMASKSET_CH11_on		 = 0b1,
} t_DMA_REQMASKSET_CH11_enum;

typedef enum { 
 	DMA_REQMASKSET_CH12_off		 = 0b0,
	DMA_REQMASKSET_CH12_on		 = 0b1,
} t_DMA_REQMASKSET_CH12_enum;

typedef enum { 
 	DMA_REQMASKSET_CH13_off		 = 0b0,
	DMA_REQMASKSET_CH13_on		 = 0b1,
} t_DMA_REQMASKSET_CH13_enum;

typedef enum { 
 	DMA_REQMASKSET_CH14_off		 = 0b0,
	DMA_REQMASKSET_CH14_on		 = 0b1,
} t_DMA_REQMASKSET_CH14_enum;

typedef enum { 
 	DMA_REQMASKSET_CH15_off		 = 0b0,
	DMA_REQMASKSET_CH15_on		 = 0b1,
} t_DMA_REQMASKSET_CH15_enum;

typedef enum { 
 	DMA_REQMASKSET_CH16_off		 = 0b0,
	DMA_REQMASKSET_CH16_on		 = 0b1,
} t_DMA_REQMASKSET_CH16_enum;

typedef enum { 
 	DMA_REQMASKSET_CH17_off		 = 0b0,
	DMA_REQMASKSET_CH17_on		 = 0b1,
} t_DMA_REQMASKSET_CH17_enum;

typedef enum { 
 	DMA_REQMASKSET_CH18_off		 = 0b0,
	DMA_REQMASKSET_CH18_on		 = 0b1,
} t_DMA_REQMASKSET_CH18_enum;

typedef enum { 
 	DMA_REQMASKSET_CH19_off		 = 0b0,
	DMA_REQMASKSET_CH19_on		 = 0b1,
} t_DMA_REQMASKSET_CH19_enum;

typedef enum { 
 	DMA_REQMASKSET_CH20_off		 = 0b0,
	DMA_REQMASKSET_CH20_on		 = 0b1,
} t_DMA_REQMASKSET_CH20_enum;

typedef enum { 
 	DMA_REQMASKSET_CH21_off		 = 0b0,
	DMA_REQMASKSET_CH21_on		 = 0b1,
} t_DMA_REQMASKSET_CH21_enum;

typedef enum { 
 	DMA_REQMASKSET_CH22_off		 = 0b0,
	DMA_REQMASKSET_CH22_on		 = 0b1,
} t_DMA_REQMASKSET_CH22_enum;

typedef enum { 
 	DMA_REQMASKSET_CH23_off		 = 0b0,
	DMA_REQMASKSET_CH23_on		 = 0b1,
} t_DMA_REQMASKSET_CH23_enum;




#define DMA_REQMASKCLR	0x3000c024		 /*--  --*/

#define DMA_REQMASKCLR_CH0_pos	 	 	 	0	 	 /*--  --*/
#define DMA_REQMASKCLR_CH1_pos	 	 	 	1	 	 /*--  --*/
#define DMA_REQMASKCLR_CH2_pos	 	 	 	2	 	 /*--  --*/
#define DMA_REQMASKCLR_CH3_pos	 	 	 	3	 	 /*--  --*/
#define DMA_REQMASKCLR_CH4_pos	 	 	 	4	 	 /*--  --*/
#define DMA_REQMASKCLR_CH5_pos	 	 	 	5	 	 /*--  --*/
#define DMA_REQMASKCLR_CH6_pos	 	 	 	6	 	 /*--  --*/
#define DMA_REQMASKCLR_CH7_pos	 	 	 	7	 	 /*--  --*/
#define DMA_REQMASKCLR_CH8_pos	 	 	 	8	 	 /*--  --*/
#define DMA_REQMASKCLR_CH9_pos	 	 	 	9	 	 /*--  --*/
#define DMA_REQMASKCLR_CH10_pos	 	 	 	10	 	 /*--  --*/
#define DMA_REQMASKCLR_CH11_pos	 	 	 	11	 	 /*--  --*/
#define DMA_REQMASKCLR_CH12_pos	 	 	 	12	 	 /*--  --*/
#define DMA_REQMASKCLR_CH13_pos	 	 	 	13	 	 /*--  --*/
#define DMA_REQMASKCLR_CH14_pos	 	 	 	14	 	 /*--  --*/
#define DMA_REQMASKCLR_CH15_pos	 	 	 	15	 	 /*--  --*/
#define DMA_REQMASKCLR_CH16_pos	 	 	 	16	 	 /*--  --*/
#define DMA_REQMASKCLR_CH17_pos	 	 	 	17	 	 /*--  --*/
#define DMA_REQMASKCLR_CH18_pos	 	 	 	18	 	 /*--  --*/
#define DMA_REQMASKCLR_CH19_pos	 	 	 	19	 	 /*--  --*/
#define DMA_REQMASKCLR_CH20_pos	 	 	 	20	 	 /*--  --*/
#define DMA_REQMASKCLR_CH21_pos	 	 	 	21	 	 /*--  --*/
#define DMA_REQMASKCLR_CH22_pos	 	 	 	22	 	 /*--  --*/
#define DMA_REQMASKCLR_CH23_pos	 	 	 	23	 	 /*--  --*/


#define DMA_REQMASKCLR_CH0_msk	 	 	 	0x00000001UL
#define DMA_REQMASKCLR_CH1_msk	 	 	 	0x00000002UL
#define DMA_REQMASKCLR_CH2_msk	 	 	 	0x00000004UL
#define DMA_REQMASKCLR_CH3_msk	 	 	 	0x00000008UL
#define DMA_REQMASKCLR_CH4_msk	 	 	 	0x00000010UL
#define DMA_REQMASKCLR_CH5_msk	 	 	 	0x00000020UL
#define DMA_REQMASKCLR_CH6_msk	 	 	 	0x00000040UL
#define DMA_REQMASKCLR_CH7_msk	 	 	 	0x00000080UL
#define DMA_REQMASKCLR_CH8_msk	 	 	 	0x00000100UL
#define DMA_REQMASKCLR_CH9_msk	 	 	 	0x00000200UL
#define DMA_REQMASKCLR_CH10_msk	 	 	 	0x00000400UL
#define DMA_REQMASKCLR_CH11_msk	 	 	 	0x00000800UL
#define DMA_REQMASKCLR_CH12_msk	 	 	 	0x00001000UL
#define DMA_REQMASKCLR_CH13_msk	 	 	 	0x00002000UL
#define DMA_REQMASKCLR_CH14_msk	 	 	 	0x00004000UL
#define DMA_REQMASKCLR_CH15_msk	 	 	 	0x00008000UL
#define DMA_REQMASKCLR_CH16_msk	 	 	 	0x00010000UL
#define DMA_REQMASKCLR_CH17_msk	 	 	 	0x00020000UL
#define DMA_REQMASKCLR_CH18_msk	 	 	 	0x00040000UL
#define DMA_REQMASKCLR_CH19_msk	 	 	 	0x00080000UL
#define DMA_REQMASKCLR_CH20_msk	 	 	 	0x00100000UL
#define DMA_REQMASKCLR_CH21_msk	 	 	 	0x00200000UL
#define DMA_REQMASKCLR_CH22_msk	 	 	 	0x00400000UL
#define DMA_REQMASKCLR_CH23_msk	 	 	 	0x00800000UL


typedef struct {
uint32_t 	 	DMA_REQMASKCLR_CH0	 	:1;
uint32_t 	 	DMA_REQMASKCLR_CH1	 	:1;
uint32_t 	 	DMA_REQMASKCLR_CH2	 	:1;
uint32_t 	 	DMA_REQMASKCLR_CH3	 	:1;
uint32_t 	 	DMA_REQMASKCLR_CH4	 	:1;
uint32_t 	 	DMA_REQMASKCLR_CH5	 	:1;
uint32_t 	 	DMA_REQMASKCLR_CH6	 	:1;
uint32_t 	 	DMA_REQMASKCLR_CH7	 	:1;
uint32_t 	 	DMA_REQMASKCLR_CH8	 	:1;
uint32_t 	 	DMA_REQMASKCLR_CH9	 	:1;
uint32_t 	 	DMA_REQMASKCLR_CH10	 	:1;
uint32_t 	 	DMA_REQMASKCLR_CH11	 	:1;
uint32_t 	 	DMA_REQMASKCLR_CH12	 	:1;
uint32_t 	 	DMA_REQMASKCLR_CH13	 	:1;
uint32_t 	 	DMA_REQMASKCLR_CH14	 	:1;
uint32_t 	 	DMA_REQMASKCLR_CH15	 	:1;
uint32_t 	 	DMA_REQMASKCLR_CH16	 	:1;
uint32_t 	 	DMA_REQMASKCLR_CH17	 	:1;
uint32_t 	 	DMA_REQMASKCLR_CH18	 	:1;
uint32_t 	 	DMA_REQMASKCLR_CH19	 	:1;
uint32_t 	 	DMA_REQMASKCLR_CH20	 	:1;
uint32_t 	 	DMA_REQMASKCLR_CH21	 	:1;
uint32_t 	 	DMA_REQMASKCLR_CH22	 	:1;
uint32_t 	 	DMA_REQMASKCLR_CH23	 	:1;
uint32_t 	 	 	 	:8;
} t_DMA_REQMASKCLR_bits;


typedef enum { 
 	DMA_REQMASKCLR_CH0_off		 = 0b0,
	DMA_REQMASKCLR_CH0_on		 = 0b1,
} t_DMA_REQMASKCLR_CH0_enum;

typedef enum { 
 	DMA_REQMASKCLR_CH1_off		 = 0b0,
	DMA_REQMASKCLR_CH1_on		 = 0b1,
} t_DMA_REQMASKCLR_CH1_enum;

typedef enum { 
 	DMA_REQMASKCLR_CH2_off		 = 0b0,
	DMA_REQMASKCLR_CH2_on		 = 0b1,
} t_DMA_REQMASKCLR_CH2_enum;

typedef enum { 
 	DMA_REQMASKCLR_CH3_off		 = 0b0,
	DMA_REQMASKCLR_CH3_on		 = 0b1,
} t_DMA_REQMASKCLR_CH3_enum;

typedef enum { 
 	DMA_REQMASKCLR_CH4_off		 = 0b0,
	DMA_REQMASKCLR_CH4_on		 = 0b1,
} t_DMA_REQMASKCLR_CH4_enum;

typedef enum { 
 	DMA_REQMASKCLR_CH5_off		 = 0b0,
	DMA_REQMASKCLR_CH5_on		 = 0b1,
} t_DMA_REQMASKCLR_CH5_enum;

typedef enum { 
 	DMA_REQMASKCLR_CH6_off		 = 0b0,
	DMA_REQMASKCLR_CH6_on		 = 0b1,
} t_DMA_REQMASKCLR_CH6_enum;

typedef enum { 
 	DMA_REQMASKCLR_CH7_off		 = 0b0,
	DMA_REQMASKCLR_CH7_on		 = 0b1,
} t_DMA_REQMASKCLR_CH7_enum;

typedef enum { 
 	DMA_REQMASKCLR_CH8_off		 = 0b0,
	DMA_REQMASKCLR_CH8_on		 = 0b1,
} t_DMA_REQMASKCLR_CH8_enum;

typedef enum { 
 	DMA_REQMASKCLR_CH9_off		 = 0b0,
	DMA_REQMASKCLR_CH9_on		 = 0b1,
} t_DMA_REQMASKCLR_CH9_enum;

typedef enum { 
 	DMA_REQMASKCLR_CH10_off		 = 0b0,
	DMA_REQMASKCLR_CH10_on		 = 0b1,
} t_DMA_REQMASKCLR_CH10_enum;

typedef enum { 
 	DMA_REQMASKCLR_CH11_off		 = 0b0,
	DMA_REQMASKCLR_CH11_on		 = 0b1,
} t_DMA_REQMASKCLR_CH11_enum;

typedef enum { 
 	DMA_REQMASKCLR_CH12_off		 = 0b0,
	DMA_REQMASKCLR_CH12_on		 = 0b1,
} t_DMA_REQMASKCLR_CH12_enum;

typedef enum { 
 	DMA_REQMASKCLR_CH13_off		 = 0b0,
	DMA_REQMASKCLR_CH13_on		 = 0b1,
} t_DMA_REQMASKCLR_CH13_enum;

typedef enum { 
 	DMA_REQMASKCLR_CH14_off		 = 0b0,
	DMA_REQMASKCLR_CH14_on		 = 0b1,
} t_DMA_REQMASKCLR_CH14_enum;

typedef enum { 
 	DMA_REQMASKCLR_CH15_off		 = 0b0,
	DMA_REQMASKCLR_CH15_on		 = 0b1,
} t_DMA_REQMASKCLR_CH15_enum;

typedef enum { 
 	DMA_REQMASKCLR_CH16_off		 = 0b0,
	DMA_REQMASKCLR_CH16_on		 = 0b1,
} t_DMA_REQMASKCLR_CH16_enum;

typedef enum { 
 	DMA_REQMASKCLR_CH17_off		 = 0b0,
	DMA_REQMASKCLR_CH17_on		 = 0b1,
} t_DMA_REQMASKCLR_CH17_enum;

typedef enum { 
 	DMA_REQMASKCLR_CH18_off		 = 0b0,
	DMA_REQMASKCLR_CH18_on		 = 0b1,
} t_DMA_REQMASKCLR_CH18_enum;

typedef enum { 
 	DMA_REQMASKCLR_CH19_off		 = 0b0,
	DMA_REQMASKCLR_CH19_on		 = 0b1,
} t_DMA_REQMASKCLR_CH19_enum;

typedef enum { 
 	DMA_REQMASKCLR_CH20_off		 = 0b0,
	DMA_REQMASKCLR_CH20_on		 = 0b1,
} t_DMA_REQMASKCLR_CH20_enum;

typedef enum { 
 	DMA_REQMASKCLR_CH21_off		 = 0b0,
	DMA_REQMASKCLR_CH21_on		 = 0b1,
} t_DMA_REQMASKCLR_CH21_enum;

typedef enum { 
 	DMA_REQMASKCLR_CH22_off		 = 0b0,
	DMA_REQMASKCLR_CH22_on		 = 0b1,
} t_DMA_REQMASKCLR_CH22_enum;

typedef enum { 
 	DMA_REQMASKCLR_CH23_off		 = 0b0,
	DMA_REQMASKCLR_CH23_on		 = 0b1,
} t_DMA_REQMASKCLR_CH23_enum;




#define DMA_ENSET	0x3000c028		 /*--  --*/

#define DMA_ENSET_CH0_pos	 	 	 	0	 	 /*--  --*/
#define DMA_ENSET_CH1_pos	 	 	 	1	 	 /*--  --*/
#define DMA_ENSET_CH2_pos	 	 	 	2	 	 /*--  --*/
#define DMA_ENSET_CH3_pos	 	 	 	3	 	 /*--  --*/
#define DMA_ENSET_CH4_pos	 	 	 	4	 	 /*--  --*/
#define DMA_ENSET_CH5_pos	 	 	 	5	 	 /*--  --*/
#define DMA_ENSET_CH6_pos	 	 	 	6	 	 /*--  --*/
#define DMA_ENSET_CH7_pos	 	 	 	7	 	 /*--  --*/
#define DMA_ENSET_CH8_pos	 	 	 	8	 	 /*--  --*/
#define DMA_ENSET_CH9_pos	 	 	 	9	 	 /*--  --*/
#define DMA_ENSET_CH10_pos	 	 	 	10	 	 /*--  --*/
#define DMA_ENSET_CH11_pos	 	 	 	11	 	 /*--  --*/
#define DMA_ENSET_CH12_pos	 	 	 	12	 	 /*--  --*/
#define DMA_ENSET_CH13_pos	 	 	 	13	 	 /*--  --*/
#define DMA_ENSET_CH14_pos	 	 	 	14	 	 /*--  --*/
#define DMA_ENSET_CH15_pos	 	 	 	15	 	 /*--  --*/
#define DMA_ENSET_CH16_pos	 	 	 	16	 	 /*--  --*/
#define DMA_ENSET_CH17_pos	 	 	 	17	 	 /*--  --*/
#define DMA_ENSET_CH18_pos	 	 	 	18	 	 /*--  --*/
#define DMA_ENSET_CH19_pos	 	 	 	19	 	 /*--  --*/
#define DMA_ENSET_CH20_pos	 	 	 	20	 	 /*--  --*/
#define DMA_ENSET_CH21_pos	 	 	 	21	 	 /*--  --*/
#define DMA_ENSET_CH22_pos	 	 	 	22	 	 /*--  --*/
#define DMA_ENSET_CH23_pos	 	 	 	23	 	 /*--  --*/


#define DMA_ENSET_CH0_msk	 	 	 	0x00000001UL
#define DMA_ENSET_CH1_msk	 	 	 	0x00000002UL
#define DMA_ENSET_CH2_msk	 	 	 	0x00000004UL
#define DMA_ENSET_CH3_msk	 	 	 	0x00000008UL
#define DMA_ENSET_CH4_msk	 	 	 	0x00000010UL
#define DMA_ENSET_CH5_msk	 	 	 	0x00000020UL
#define DMA_ENSET_CH6_msk	 	 	 	0x00000040UL
#define DMA_ENSET_CH7_msk	 	 	 	0x00000080UL
#define DMA_ENSET_CH8_msk	 	 	 	0x00000100UL
#define DMA_ENSET_CH9_msk	 	 	 	0x00000200UL
#define DMA_ENSET_CH10_msk	 	 	 	0x00000400UL
#define DMA_ENSET_CH11_msk	 	 	 	0x00000800UL
#define DMA_ENSET_CH12_msk	 	 	 	0x00001000UL
#define DMA_ENSET_CH13_msk	 	 	 	0x00002000UL
#define DMA_ENSET_CH14_msk	 	 	 	0x00004000UL
#define DMA_ENSET_CH15_msk	 	 	 	0x00008000UL
#define DMA_ENSET_CH16_msk	 	 	 	0x00010000UL
#define DMA_ENSET_CH17_msk	 	 	 	0x00020000UL
#define DMA_ENSET_CH18_msk	 	 	 	0x00040000UL
#define DMA_ENSET_CH19_msk	 	 	 	0x00080000UL
#define DMA_ENSET_CH20_msk	 	 	 	0x00100000UL
#define DMA_ENSET_CH21_msk	 	 	 	0x00200000UL
#define DMA_ENSET_CH22_msk	 	 	 	0x00400000UL
#define DMA_ENSET_CH23_msk	 	 	 	0x00800000UL


typedef struct {
uint32_t 	 	DMA_ENSET_CH0	 	:1;
uint32_t 	 	DMA_ENSET_CH1	 	:1;
uint32_t 	 	DMA_ENSET_CH2	 	:1;
uint32_t 	 	DMA_ENSET_CH3	 	:1;
uint32_t 	 	DMA_ENSET_CH4	 	:1;
uint32_t 	 	DMA_ENSET_CH5	 	:1;
uint32_t 	 	DMA_ENSET_CH6	 	:1;
uint32_t 	 	DMA_ENSET_CH7	 	:1;
uint32_t 	 	DMA_ENSET_CH8	 	:1;
uint32_t 	 	DMA_ENSET_CH9	 	:1;
uint32_t 	 	DMA_ENSET_CH10	 	:1;
uint32_t 	 	DMA_ENSET_CH11	 	:1;
uint32_t 	 	DMA_ENSET_CH12	 	:1;
uint32_t 	 	DMA_ENSET_CH13	 	:1;
uint32_t 	 	DMA_ENSET_CH14	 	:1;
uint32_t 	 	DMA_ENSET_CH15	 	:1;
uint32_t 	 	DMA_ENSET_CH16	 	:1;
uint32_t 	 	DMA_ENSET_CH17	 	:1;
uint32_t 	 	DMA_ENSET_CH18	 	:1;
uint32_t 	 	DMA_ENSET_CH19	 	:1;
uint32_t 	 	DMA_ENSET_CH20	 	:1;
uint32_t 	 	DMA_ENSET_CH21	 	:1;
uint32_t 	 	DMA_ENSET_CH22	 	:1;
uint32_t 	 	DMA_ENSET_CH23	 	:1;
uint32_t 	 	 	 	:8;
} t_DMA_ENSET_bits;


typedef enum { 
 	DMA_ENSET_CH0_off		 = 0b0,
	DMA_ENSET_CH0_on		 = 0b1,
} t_DMA_ENSET_CH0_enum;

typedef enum { 
 	DMA_ENSET_CH1_off		 = 0b0,
	DMA_ENSET_CH1_on		 = 0b1,
} t_DMA_ENSET_CH1_enum;

typedef enum { 
 	DMA_ENSET_CH2_off		 = 0b0,
	DMA_ENSET_CH2_on		 = 0b1,
} t_DMA_ENSET_CH2_enum;

typedef enum { 
 	DMA_ENSET_CH3_off		 = 0b0,
	DMA_ENSET_CH3_on		 = 0b1,
} t_DMA_ENSET_CH3_enum;

typedef enum { 
 	DMA_ENSET_CH4_off		 = 0b0,
	DMA_ENSET_CH4_on		 = 0b1,
} t_DMA_ENSET_CH4_enum;

typedef enum { 
 	DMA_ENSET_CH5_off		 = 0b0,
	DMA_ENSET_CH5_on		 = 0b1,
} t_DMA_ENSET_CH5_enum;

typedef enum { 
 	DMA_ENSET_CH6_off		 = 0b0,
	DMA_ENSET_CH6_on		 = 0b1,
} t_DMA_ENSET_CH6_enum;

typedef enum { 
 	DMA_ENSET_CH7_off		 = 0b0,
	DMA_ENSET_CH7_on		 = 0b1,
} t_DMA_ENSET_CH7_enum;

typedef enum { 
 	DMA_ENSET_CH8_off		 = 0b0,
	DMA_ENSET_CH8_on		 = 0b1,
} t_DMA_ENSET_CH8_enum;

typedef enum { 
 	DMA_ENSET_CH9_off		 = 0b0,
	DMA_ENSET_CH9_on		 = 0b1,
} t_DMA_ENSET_CH9_enum;

typedef enum { 
 	DMA_ENSET_CH10_off		 = 0b0,
	DMA_ENSET_CH10_on		 = 0b1,
} t_DMA_ENSET_CH10_enum;

typedef enum { 
 	DMA_ENSET_CH11_off		 = 0b0,
	DMA_ENSET_CH11_on		 = 0b1,
} t_DMA_ENSET_CH11_enum;

typedef enum { 
 	DMA_ENSET_CH12_off		 = 0b0,
	DMA_ENSET_CH12_on		 = 0b1,
} t_DMA_ENSET_CH12_enum;

typedef enum { 
 	DMA_ENSET_CH13_off		 = 0b0,
	DMA_ENSET_CH13_on		 = 0b1,
} t_DMA_ENSET_CH13_enum;

typedef enum { 
 	DMA_ENSET_CH14_off		 = 0b0,
	DMA_ENSET_CH14_on		 = 0b1,
} t_DMA_ENSET_CH14_enum;

typedef enum { 
 	DMA_ENSET_CH15_off		 = 0b0,
	DMA_ENSET_CH15_on		 = 0b1,
} t_DMA_ENSET_CH15_enum;

typedef enum { 
 	DMA_ENSET_CH16_off		 = 0b0,
	DMA_ENSET_CH16_on		 = 0b1,
} t_DMA_ENSET_CH16_enum;

typedef enum { 
 	DMA_ENSET_CH17_off		 = 0b0,
	DMA_ENSET_CH17_on		 = 0b1,
} t_DMA_ENSET_CH17_enum;

typedef enum { 
 	DMA_ENSET_CH18_off		 = 0b0,
	DMA_ENSET_CH18_on		 = 0b1,
} t_DMA_ENSET_CH18_enum;

typedef enum { 
 	DMA_ENSET_CH19_off		 = 0b0,
	DMA_ENSET_CH19_on		 = 0b1,
} t_DMA_ENSET_CH19_enum;

typedef enum { 
 	DMA_ENSET_CH20_off		 = 0b0,
	DMA_ENSET_CH20_on		 = 0b1,
} t_DMA_ENSET_CH20_enum;

typedef enum { 
 	DMA_ENSET_CH21_off		 = 0b0,
	DMA_ENSET_CH21_on		 = 0b1,
} t_DMA_ENSET_CH21_enum;

typedef enum { 
 	DMA_ENSET_CH22_off		 = 0b0,
	DMA_ENSET_CH22_on		 = 0b1,
} t_DMA_ENSET_CH22_enum;

typedef enum { 
 	DMA_ENSET_CH23_off		 = 0b0,
	DMA_ENSET_CH23_on		 = 0b1,
} t_DMA_ENSET_CH23_enum;




#define DMA_ENCLR	0x3000c02c		 /*--  --*/

#define DMA_ENCLR_CH0_pos	 	 	 	0	 	 /*--  --*/
#define DMA_ENCLR_CH1_pos	 	 	 	1	 	 /*--  --*/
#define DMA_ENCLR_CH2_pos	 	 	 	2	 	 /*--  --*/
#define DMA_ENCLR_CH3_pos	 	 	 	3	 	 /*--  --*/
#define DMA_ENCLR_CH4_pos	 	 	 	4	 	 /*--  --*/
#define DMA_ENCLR_CH5_pos	 	 	 	5	 	 /*--  --*/
#define DMA_ENCLR_CH6_pos	 	 	 	6	 	 /*--  --*/
#define DMA_ENCLR_CH7_pos	 	 	 	7	 	 /*--  --*/
#define DMA_ENCLR_CH8_pos	 	 	 	8	 	 /*--  --*/
#define DMA_ENCLR_CH9_pos	 	 	 	9	 	 /*--  --*/
#define DMA_ENCLR_CH10_pos	 	 	 	10	 	 /*--  --*/
#define DMA_ENCLR_CH11_pos	 	 	 	11	 	 /*--  --*/
#define DMA_ENCLR_CH12_pos	 	 	 	12	 	 /*--  --*/
#define DMA_ENCLR_CH13_pos	 	 	 	13	 	 /*--  --*/
#define DMA_ENCLR_CH14_pos	 	 	 	14	 	 /*--  --*/
#define DMA_ENCLR_CH15_pos	 	 	 	15	 	 /*--  --*/
#define DMA_ENCLR_CH16_pos	 	 	 	16	 	 /*--  --*/
#define DMA_ENCLR_CH17_pos	 	 	 	17	 	 /*--  --*/
#define DMA_ENCLR_CH18_pos	 	 	 	18	 	 /*--  --*/
#define DMA_ENCLR_CH19_pos	 	 	 	19	 	 /*--  --*/
#define DMA_ENCLR_CH20_pos	 	 	 	20	 	 /*--  --*/
#define DMA_ENCLR_CH21_pos	 	 	 	21	 	 /*--  --*/
#define DMA_ENCLR_CH22_pos	 	 	 	22	 	 /*--  --*/
#define DMA_ENCLR_CH23_pos	 	 	 	23	 	 /*--  --*/


#define DMA_ENCLR_CH0_msk	 	 	 	0x00000001UL
#define DMA_ENCLR_CH1_msk	 	 	 	0x00000002UL
#define DMA_ENCLR_CH2_msk	 	 	 	0x00000004UL
#define DMA_ENCLR_CH3_msk	 	 	 	0x00000008UL
#define DMA_ENCLR_CH4_msk	 	 	 	0x00000010UL
#define DMA_ENCLR_CH5_msk	 	 	 	0x00000020UL
#define DMA_ENCLR_CH6_msk	 	 	 	0x00000040UL
#define DMA_ENCLR_CH7_msk	 	 	 	0x00000080UL
#define DMA_ENCLR_CH8_msk	 	 	 	0x00000100UL
#define DMA_ENCLR_CH9_msk	 	 	 	0x00000200UL
#define DMA_ENCLR_CH10_msk	 	 	 	0x00000400UL
#define DMA_ENCLR_CH11_msk	 	 	 	0x00000800UL
#define DMA_ENCLR_CH12_msk	 	 	 	0x00001000UL
#define DMA_ENCLR_CH13_msk	 	 	 	0x00002000UL
#define DMA_ENCLR_CH14_msk	 	 	 	0x00004000UL
#define DMA_ENCLR_CH15_msk	 	 	 	0x00008000UL
#define DMA_ENCLR_CH16_msk	 	 	 	0x00010000UL
#define DMA_ENCLR_CH17_msk	 	 	 	0x00020000UL
#define DMA_ENCLR_CH18_msk	 	 	 	0x00040000UL
#define DMA_ENCLR_CH19_msk	 	 	 	0x00080000UL
#define DMA_ENCLR_CH20_msk	 	 	 	0x00100000UL
#define DMA_ENCLR_CH21_msk	 	 	 	0x00200000UL
#define DMA_ENCLR_CH22_msk	 	 	 	0x00400000UL
#define DMA_ENCLR_CH23_msk	 	 	 	0x00800000UL


typedef struct {
uint32_t 	 	DMA_ENCLR_CH0	 	:1;
uint32_t 	 	DMA_ENCLR_CH1	 	:1;
uint32_t 	 	DMA_ENCLR_CH2	 	:1;
uint32_t 	 	DMA_ENCLR_CH3	 	:1;
uint32_t 	 	DMA_ENCLR_CH4	 	:1;
uint32_t 	 	DMA_ENCLR_CH5	 	:1;
uint32_t 	 	DMA_ENCLR_CH6	 	:1;
uint32_t 	 	DMA_ENCLR_CH7	 	:1;
uint32_t 	 	DMA_ENCLR_CH8	 	:1;
uint32_t 	 	DMA_ENCLR_CH9	 	:1;
uint32_t 	 	DMA_ENCLR_CH10	 	:1;
uint32_t 	 	DMA_ENCLR_CH11	 	:1;
uint32_t 	 	DMA_ENCLR_CH12	 	:1;
uint32_t 	 	DMA_ENCLR_CH13	 	:1;
uint32_t 	 	DMA_ENCLR_CH14	 	:1;
uint32_t 	 	DMA_ENCLR_CH15	 	:1;
uint32_t 	 	DMA_ENCLR_CH16	 	:1;
uint32_t 	 	DMA_ENCLR_CH17	 	:1;
uint32_t 	 	DMA_ENCLR_CH18	 	:1;
uint32_t 	 	DMA_ENCLR_CH19	 	:1;
uint32_t 	 	DMA_ENCLR_CH20	 	:1;
uint32_t 	 	DMA_ENCLR_CH21	 	:1;
uint32_t 	 	DMA_ENCLR_CH22	 	:1;
uint32_t 	 	DMA_ENCLR_CH23	 	:1;
uint32_t 	 	 	 	:8;
} t_DMA_ENCLR_bits;


typedef enum { 
 	DMA_ENCLR_CH0_off		 = 0b0,
	DMA_ENCLR_CH0_on		 = 0b1,
} t_DMA_ENCLR_CH0_enum;

typedef enum { 
 	DMA_ENCLR_CH1_off		 = 0b0,
	DMA_ENCLR_CH1_on		 = 0b1,
} t_DMA_ENCLR_CH1_enum;

typedef enum { 
 	DMA_ENCLR_CH2_off		 = 0b0,
	DMA_ENCLR_CH2_on		 = 0b1,
} t_DMA_ENCLR_CH2_enum;

typedef enum { 
 	DMA_ENCLR_CH3_off		 = 0b0,
	DMA_ENCLR_CH3_on		 = 0b1,
} t_DMA_ENCLR_CH3_enum;

typedef enum { 
 	DMA_ENCLR_CH4_off		 = 0b0,
	DMA_ENCLR_CH4_on		 = 0b1,
} t_DMA_ENCLR_CH4_enum;

typedef enum { 
 	DMA_ENCLR_CH5_off		 = 0b0,
	DMA_ENCLR_CH5_on		 = 0b1,
} t_DMA_ENCLR_CH5_enum;

typedef enum { 
 	DMA_ENCLR_CH6_off		 = 0b0,
	DMA_ENCLR_CH6_on		 = 0b1,
} t_DMA_ENCLR_CH6_enum;

typedef enum { 
 	DMA_ENCLR_CH7_off		 = 0b0,
	DMA_ENCLR_CH7_on		 = 0b1,
} t_DMA_ENCLR_CH7_enum;

typedef enum { 
 	DMA_ENCLR_CH8_off		 = 0b0,
	DMA_ENCLR_CH8_on		 = 0b1,
} t_DMA_ENCLR_CH8_enum;

typedef enum { 
 	DMA_ENCLR_CH9_off		 = 0b0,
	DMA_ENCLR_CH9_on		 = 0b1,
} t_DMA_ENCLR_CH9_enum;

typedef enum { 
 	DMA_ENCLR_CH10_off		 = 0b0,
	DMA_ENCLR_CH10_on		 = 0b1,
} t_DMA_ENCLR_CH10_enum;

typedef enum { 
 	DMA_ENCLR_CH11_off		 = 0b0,
	DMA_ENCLR_CH11_on		 = 0b1,
} t_DMA_ENCLR_CH11_enum;

typedef enum { 
 	DMA_ENCLR_CH12_off		 = 0b0,
	DMA_ENCLR_CH12_on		 = 0b1,
} t_DMA_ENCLR_CH12_enum;

typedef enum { 
 	DMA_ENCLR_CH13_off		 = 0b0,
	DMA_ENCLR_CH13_on		 = 0b1,
} t_DMA_ENCLR_CH13_enum;

typedef enum { 
 	DMA_ENCLR_CH14_off		 = 0b0,
	DMA_ENCLR_CH14_on		 = 0b1,
} t_DMA_ENCLR_CH14_enum;

typedef enum { 
 	DMA_ENCLR_CH15_off		 = 0b0,
	DMA_ENCLR_CH15_on		 = 0b1,
} t_DMA_ENCLR_CH15_enum;

typedef enum { 
 	DMA_ENCLR_CH16_off		 = 0b0,
	DMA_ENCLR_CH16_on		 = 0b1,
} t_DMA_ENCLR_CH16_enum;

typedef enum { 
 	DMA_ENCLR_CH17_off		 = 0b0,
	DMA_ENCLR_CH17_on		 = 0b1,
} t_DMA_ENCLR_CH17_enum;

typedef enum { 
 	DMA_ENCLR_CH18_off		 = 0b0,
	DMA_ENCLR_CH18_on		 = 0b1,
} t_DMA_ENCLR_CH18_enum;

typedef enum { 
 	DMA_ENCLR_CH19_off		 = 0b0,
	DMA_ENCLR_CH19_on		 = 0b1,
} t_DMA_ENCLR_CH19_enum;

typedef enum { 
 	DMA_ENCLR_CH20_off		 = 0b0,
	DMA_ENCLR_CH20_on		 = 0b1,
} t_DMA_ENCLR_CH20_enum;

typedef enum { 
 	DMA_ENCLR_CH21_off		 = 0b0,
	DMA_ENCLR_CH21_on		 = 0b1,
} t_DMA_ENCLR_CH21_enum;

typedef enum { 
 	DMA_ENCLR_CH22_off		 = 0b0,
	DMA_ENCLR_CH22_on		 = 0b1,
} t_DMA_ENCLR_CH22_enum;

typedef enum { 
 	DMA_ENCLR_CH23_off		 = 0b0,
	DMA_ENCLR_CH23_on		 = 0b1,
} t_DMA_ENCLR_CH23_enum;




#define DMA_PRIALTSET	0x3000c030		 /*--  --*/

#define DMA_PRIALTSET_CH0_pos	 	 	 	0	 	 /*--  --*/
#define DMA_PRIALTSET_CH1_pos	 	 	 	1	 	 /*--  --*/
#define DMA_PRIALTSET_CH2_pos	 	 	 	2	 	 /*--  --*/
#define DMA_PRIALTSET_CH3_pos	 	 	 	3	 	 /*--  --*/
#define DMA_PRIALTSET_CH4_pos	 	 	 	4	 	 /*--  --*/
#define DMA_PRIALTSET_CH5_pos	 	 	 	5	 	 /*--  --*/
#define DMA_PRIALTSET_CH6_pos	 	 	 	6	 	 /*--  --*/
#define DMA_PRIALTSET_CH7_pos	 	 	 	7	 	 /*--  --*/
#define DMA_PRIALTSET_CH8_pos	 	 	 	8	 	 /*--  --*/
#define DMA_PRIALTSET_CH9_pos	 	 	 	9	 	 /*--  --*/
#define DMA_PRIALTSET_CH10_pos	 	 	 	10	 	 /*--  --*/
#define DMA_PRIALTSET_CH11_pos	 	 	 	11	 	 /*--  --*/
#define DMA_PRIALTSET_CH12_pos	 	 	 	12	 	 /*--  --*/
#define DMA_PRIALTSET_CH13_pos	 	 	 	13	 	 /*--  --*/
#define DMA_PRIALTSET_CH14_pos	 	 	 	14	 	 /*--  --*/
#define DMA_PRIALTSET_CH15_pos	 	 	 	15	 	 /*--  --*/
#define DMA_PRIALTSET_CH16_pos	 	 	 	16	 	 /*--  --*/
#define DMA_PRIALTSET_CH17_pos	 	 	 	17	 	 /*--  --*/
#define DMA_PRIALTSET_CH18_pos	 	 	 	18	 	 /*--  --*/
#define DMA_PRIALTSET_CH19_pos	 	 	 	19	 	 /*--  --*/
#define DMA_PRIALTSET_CH20_pos	 	 	 	20	 	 /*--  --*/
#define DMA_PRIALTSET_CH21_pos	 	 	 	21	 	 /*--  --*/
#define DMA_PRIALTSET_CH22_pos	 	 	 	22	 	 /*--  --*/
#define DMA_PRIALTSET_CH23_pos	 	 	 	23	 	 /*--  --*/


#define DMA_PRIALTSET_CH0_msk	 	 	 	0x00000001UL
#define DMA_PRIALTSET_CH1_msk	 	 	 	0x00000002UL
#define DMA_PRIALTSET_CH2_msk	 	 	 	0x00000004UL
#define DMA_PRIALTSET_CH3_msk	 	 	 	0x00000008UL
#define DMA_PRIALTSET_CH4_msk	 	 	 	0x00000010UL
#define DMA_PRIALTSET_CH5_msk	 	 	 	0x00000020UL
#define DMA_PRIALTSET_CH6_msk	 	 	 	0x00000040UL
#define DMA_PRIALTSET_CH7_msk	 	 	 	0x00000080UL
#define DMA_PRIALTSET_CH8_msk	 	 	 	0x00000100UL
#define DMA_PRIALTSET_CH9_msk	 	 	 	0x00000200UL
#define DMA_PRIALTSET_CH10_msk	 	 	 	0x00000400UL
#define DMA_PRIALTSET_CH11_msk	 	 	 	0x00000800UL
#define DMA_PRIALTSET_CH12_msk	 	 	 	0x00001000UL
#define DMA_PRIALTSET_CH13_msk	 	 	 	0x00002000UL
#define DMA_PRIALTSET_CH14_msk	 	 	 	0x00004000UL
#define DMA_PRIALTSET_CH15_msk	 	 	 	0x00008000UL
#define DMA_PRIALTSET_CH16_msk	 	 	 	0x00010000UL
#define DMA_PRIALTSET_CH17_msk	 	 	 	0x00020000UL
#define DMA_PRIALTSET_CH18_msk	 	 	 	0x00040000UL
#define DMA_PRIALTSET_CH19_msk	 	 	 	0x00080000UL
#define DMA_PRIALTSET_CH20_msk	 	 	 	0x00100000UL
#define DMA_PRIALTSET_CH21_msk	 	 	 	0x00200000UL
#define DMA_PRIALTSET_CH22_msk	 	 	 	0x00400000UL
#define DMA_PRIALTSET_CH23_msk	 	 	 	0x00800000UL


typedef struct {
uint32_t 	 	DMA_PRIALTSET_CH0	 	:1;
uint32_t 	 	DMA_PRIALTSET_CH1	 	:1;
uint32_t 	 	DMA_PRIALTSET_CH2	 	:1;
uint32_t 	 	DMA_PRIALTSET_CH3	 	:1;
uint32_t 	 	DMA_PRIALTSET_CH4	 	:1;
uint32_t 	 	DMA_PRIALTSET_CH5	 	:1;
uint32_t 	 	DMA_PRIALTSET_CH6	 	:1;
uint32_t 	 	DMA_PRIALTSET_CH7	 	:1;
uint32_t 	 	DMA_PRIALTSET_CH8	 	:1;
uint32_t 	 	DMA_PRIALTSET_CH9	 	:1;
uint32_t 	 	DMA_PRIALTSET_CH10	 	:1;
uint32_t 	 	DMA_PRIALTSET_CH11	 	:1;
uint32_t 	 	DMA_PRIALTSET_CH12	 	:1;
uint32_t 	 	DMA_PRIALTSET_CH13	 	:1;
uint32_t 	 	DMA_PRIALTSET_CH14	 	:1;
uint32_t 	 	DMA_PRIALTSET_CH15	 	:1;
uint32_t 	 	DMA_PRIALTSET_CH16	 	:1;
uint32_t 	 	DMA_PRIALTSET_CH17	 	:1;
uint32_t 	 	DMA_PRIALTSET_CH18	 	:1;
uint32_t 	 	DMA_PRIALTSET_CH19	 	:1;
uint32_t 	 	DMA_PRIALTSET_CH20	 	:1;
uint32_t 	 	DMA_PRIALTSET_CH21	 	:1;
uint32_t 	 	DMA_PRIALTSET_CH22	 	:1;
uint32_t 	 	DMA_PRIALTSET_CH23	 	:1;
uint32_t 	 	 	 	:8;
} t_DMA_PRIALTSET_bits;


typedef enum { 
 	DMA_PRIALTSET_CH0_off		 = 0b0,
	DMA_PRIALTSET_CH0_on		 = 0b1,
} t_DMA_PRIALTSET_CH0_enum;

typedef enum { 
 	DMA_PRIALTSET_CH1_off		 = 0b0,
	DMA_PRIALTSET_CH1_on		 = 0b1,
} t_DMA_PRIALTSET_CH1_enum;

typedef enum { 
 	DMA_PRIALTSET_CH2_off		 = 0b0,
	DMA_PRIALTSET_CH2_on		 = 0b1,
} t_DMA_PRIALTSET_CH2_enum;

typedef enum { 
 	DMA_PRIALTSET_CH3_off		 = 0b0,
	DMA_PRIALTSET_CH3_on		 = 0b1,
} t_DMA_PRIALTSET_CH3_enum;

typedef enum { 
 	DMA_PRIALTSET_CH4_off		 = 0b0,
	DMA_PRIALTSET_CH4_on		 = 0b1,
} t_DMA_PRIALTSET_CH4_enum;

typedef enum { 
 	DMA_PRIALTSET_CH5_off		 = 0b0,
	DMA_PRIALTSET_CH5_on		 = 0b1,
} t_DMA_PRIALTSET_CH5_enum;

typedef enum { 
 	DMA_PRIALTSET_CH6_off		 = 0b0,
	DMA_PRIALTSET_CH6_on		 = 0b1,
} t_DMA_PRIALTSET_CH6_enum;

typedef enum { 
 	DMA_PRIALTSET_CH7_off		 = 0b0,
	DMA_PRIALTSET_CH7_on		 = 0b1,
} t_DMA_PRIALTSET_CH7_enum;

typedef enum { 
 	DMA_PRIALTSET_CH8_off		 = 0b0,
	DMA_PRIALTSET_CH8_on		 = 0b1,
} t_DMA_PRIALTSET_CH8_enum;

typedef enum { 
 	DMA_PRIALTSET_CH9_off		 = 0b0,
	DMA_PRIALTSET_CH9_on		 = 0b1,
} t_DMA_PRIALTSET_CH9_enum;

typedef enum { 
 	DMA_PRIALTSET_CH10_off		 = 0b0,
	DMA_PRIALTSET_CH10_on		 = 0b1,
} t_DMA_PRIALTSET_CH10_enum;

typedef enum { 
 	DMA_PRIALTSET_CH11_off		 = 0b0,
	DMA_PRIALTSET_CH11_on		 = 0b1,
} t_DMA_PRIALTSET_CH11_enum;

typedef enum { 
 	DMA_PRIALTSET_CH12_off		 = 0b0,
	DMA_PRIALTSET_CH12_on		 = 0b1,
} t_DMA_PRIALTSET_CH12_enum;

typedef enum { 
 	DMA_PRIALTSET_CH13_off		 = 0b0,
	DMA_PRIALTSET_CH13_on		 = 0b1,
} t_DMA_PRIALTSET_CH13_enum;

typedef enum { 
 	DMA_PRIALTSET_CH14_off		 = 0b0,
	DMA_PRIALTSET_CH14_on		 = 0b1,
} t_DMA_PRIALTSET_CH14_enum;

typedef enum { 
 	DMA_PRIALTSET_CH15_off		 = 0b0,
	DMA_PRIALTSET_CH15_on		 = 0b1,
} t_DMA_PRIALTSET_CH15_enum;

typedef enum { 
 	DMA_PRIALTSET_CH16_off		 = 0b0,
	DMA_PRIALTSET_CH16_on		 = 0b1,
} t_DMA_PRIALTSET_CH16_enum;

typedef enum { 
 	DMA_PRIALTSET_CH17_off		 = 0b0,
	DMA_PRIALTSET_CH17_on		 = 0b1,
} t_DMA_PRIALTSET_CH17_enum;

typedef enum { 
 	DMA_PRIALTSET_CH18_off		 = 0b0,
	DMA_PRIALTSET_CH18_on		 = 0b1,
} t_DMA_PRIALTSET_CH18_enum;

typedef enum { 
 	DMA_PRIALTSET_CH19_off		 = 0b0,
	DMA_PRIALTSET_CH19_on		 = 0b1,
} t_DMA_PRIALTSET_CH19_enum;

typedef enum { 
 	DMA_PRIALTSET_CH20_off		 = 0b0,
	DMA_PRIALTSET_CH20_on		 = 0b1,
} t_DMA_PRIALTSET_CH20_enum;

typedef enum { 
 	DMA_PRIALTSET_CH21_off		 = 0b0,
	DMA_PRIALTSET_CH21_on		 = 0b1,
} t_DMA_PRIALTSET_CH21_enum;

typedef enum { 
 	DMA_PRIALTSET_CH22_off		 = 0b0,
	DMA_PRIALTSET_CH22_on		 = 0b1,
} t_DMA_PRIALTSET_CH22_enum;

typedef enum { 
 	DMA_PRIALTSET_CH23_off		 = 0b0,
	DMA_PRIALTSET_CH23_on		 = 0b1,
} t_DMA_PRIALTSET_CH23_enum;




#define DMA_PRIALTCLR	0x3000c034		 /*--  --*/

#define DMA_PRIALTCLR_CH0_pos	 	 	 	0	 	 /*--  --*/
#define DMA_PRIALTCLR_CH1_pos	 	 	 	1	 	 /*--  --*/
#define DMA_PRIALTCLR_CH2_pos	 	 	 	2	 	 /*--  --*/
#define DMA_PRIALTCLR_CH3_pos	 	 	 	3	 	 /*--  --*/
#define DMA_PRIALTCLR_CH4_pos	 	 	 	4	 	 /*--  --*/
#define DMA_PRIALTCLR_CH5_pos	 	 	 	5	 	 /*--  --*/
#define DMA_PRIALTCLR_CH6_pos	 	 	 	6	 	 /*--  --*/
#define DMA_PRIALTCLR_CH7_pos	 	 	 	7	 	 /*--  --*/
#define DMA_PRIALTCLR_CH8_pos	 	 	 	8	 	 /*--  --*/
#define DMA_PRIALTCLR_CH9_pos	 	 	 	9	 	 /*--  --*/
#define DMA_PRIALTCLR_CH10_pos	 	 	 	10	 	 /*--  --*/
#define DMA_PRIALTCLR_CH11_pos	 	 	 	11	 	 /*--  --*/
#define DMA_PRIALTCLR_CH12_pos	 	 	 	12	 	 /*--  --*/
#define DMA_PRIALTCLR_CH13_pos	 	 	 	13	 	 /*--  --*/
#define DMA_PRIALTCLR_CH14_pos	 	 	 	14	 	 /*--  --*/
#define DMA_PRIALTCLR_CH15_pos	 	 	 	15	 	 /*--  --*/
#define DMA_PRIALTCLR_CH16_pos	 	 	 	16	 	 /*--  --*/
#define DMA_PRIALTCLR_CH17_pos	 	 	 	17	 	 /*--  --*/
#define DMA_PRIALTCLR_CH18_pos	 	 	 	18	 	 /*--  --*/
#define DMA_PRIALTCLR_CH19_pos	 	 	 	19	 	 /*--  --*/
#define DMA_PRIALTCLR_CH20_pos	 	 	 	20	 	 /*--  --*/
#define DMA_PRIALTCLR_CH21_pos	 	 	 	21	 	 /*--  --*/
#define DMA_PRIALTCLR_CH22_pos	 	 	 	22	 	 /*--  --*/
#define DMA_PRIALTCLR_CH23_pos	 	 	 	23	 	 /*--  --*/


#define DMA_PRIALTCLR_CH0_msk	 	 	 	0x00000001UL
#define DMA_PRIALTCLR_CH1_msk	 	 	 	0x00000002UL
#define DMA_PRIALTCLR_CH2_msk	 	 	 	0x00000004UL
#define DMA_PRIALTCLR_CH3_msk	 	 	 	0x00000008UL
#define DMA_PRIALTCLR_CH4_msk	 	 	 	0x00000010UL
#define DMA_PRIALTCLR_CH5_msk	 	 	 	0x00000020UL
#define DMA_PRIALTCLR_CH6_msk	 	 	 	0x00000040UL
#define DMA_PRIALTCLR_CH7_msk	 	 	 	0x00000080UL
#define DMA_PRIALTCLR_CH8_msk	 	 	 	0x00000100UL
#define DMA_PRIALTCLR_CH9_msk	 	 	 	0x00000200UL
#define DMA_PRIALTCLR_CH10_msk	 	 	 	0x00000400UL
#define DMA_PRIALTCLR_CH11_msk	 	 	 	0x00000800UL
#define DMA_PRIALTCLR_CH12_msk	 	 	 	0x00001000UL
#define DMA_PRIALTCLR_CH13_msk	 	 	 	0x00002000UL
#define DMA_PRIALTCLR_CH14_msk	 	 	 	0x00004000UL
#define DMA_PRIALTCLR_CH15_msk	 	 	 	0x00008000UL
#define DMA_PRIALTCLR_CH16_msk	 	 	 	0x00010000UL
#define DMA_PRIALTCLR_CH17_msk	 	 	 	0x00020000UL
#define DMA_PRIALTCLR_CH18_msk	 	 	 	0x00040000UL
#define DMA_PRIALTCLR_CH19_msk	 	 	 	0x00080000UL
#define DMA_PRIALTCLR_CH20_msk	 	 	 	0x00100000UL
#define DMA_PRIALTCLR_CH21_msk	 	 	 	0x00200000UL
#define DMA_PRIALTCLR_CH22_msk	 	 	 	0x00400000UL
#define DMA_PRIALTCLR_CH23_msk	 	 	 	0x00800000UL


typedef struct {
uint32_t 	 	DMA_PRIALTCLR_CH0	 	:1;
uint32_t 	 	DMA_PRIALTCLR_CH1	 	:1;
uint32_t 	 	DMA_PRIALTCLR_CH2	 	:1;
uint32_t 	 	DMA_PRIALTCLR_CH3	 	:1;
uint32_t 	 	DMA_PRIALTCLR_CH4	 	:1;
uint32_t 	 	DMA_PRIALTCLR_CH5	 	:1;
uint32_t 	 	DMA_PRIALTCLR_CH6	 	:1;
uint32_t 	 	DMA_PRIALTCLR_CH7	 	:1;
uint32_t 	 	DMA_PRIALTCLR_CH8	 	:1;
uint32_t 	 	DMA_PRIALTCLR_CH9	 	:1;
uint32_t 	 	DMA_PRIALTCLR_CH10	 	:1;
uint32_t 	 	DMA_PRIALTCLR_CH11	 	:1;
uint32_t 	 	DMA_PRIALTCLR_CH12	 	:1;
uint32_t 	 	DMA_PRIALTCLR_CH13	 	:1;
uint32_t 	 	DMA_PRIALTCLR_CH14	 	:1;
uint32_t 	 	DMA_PRIALTCLR_CH15	 	:1;
uint32_t 	 	DMA_PRIALTCLR_CH16	 	:1;
uint32_t 	 	DMA_PRIALTCLR_CH17	 	:1;
uint32_t 	 	DMA_PRIALTCLR_CH18	 	:1;
uint32_t 	 	DMA_PRIALTCLR_CH19	 	:1;
uint32_t 	 	DMA_PRIALTCLR_CH20	 	:1;
uint32_t 	 	DMA_PRIALTCLR_CH21	 	:1;
uint32_t 	 	DMA_PRIALTCLR_CH22	 	:1;
uint32_t 	 	DMA_PRIALTCLR_CH23	 	:1;
uint32_t 	 	 	 	:8;
} t_DMA_PRIALTCLR_bits;


typedef enum { 
 	DMA_PRIALTCLR_CH0_off		 = 0b0,
	DMA_PRIALTCLR_CH0_on		 = 0b1,
} t_DMA_PRIALTCLR_CH0_enum;

typedef enum { 
 	DMA_PRIALTCLR_CH1_off		 = 0b0,
	DMA_PRIALTCLR_CH1_on		 = 0b1,
} t_DMA_PRIALTCLR_CH1_enum;

typedef enum { 
 	DMA_PRIALTCLR_CH2_off		 = 0b0,
	DMA_PRIALTCLR_CH2_on		 = 0b1,
} t_DMA_PRIALTCLR_CH2_enum;

typedef enum { 
 	DMA_PRIALTCLR_CH3_off		 = 0b0,
	DMA_PRIALTCLR_CH3_on		 = 0b1,
} t_DMA_PRIALTCLR_CH3_enum;

typedef enum { 
 	DMA_PRIALTCLR_CH4_off		 = 0b0,
	DMA_PRIALTCLR_CH4_on		 = 0b1,
} t_DMA_PRIALTCLR_CH4_enum;

typedef enum { 
 	DMA_PRIALTCLR_CH5_off		 = 0b0,
	DMA_PRIALTCLR_CH5_on		 = 0b1,
} t_DMA_PRIALTCLR_CH5_enum;

typedef enum { 
 	DMA_PRIALTCLR_CH6_off		 = 0b0,
	DMA_PRIALTCLR_CH6_on		 = 0b1,
} t_DMA_PRIALTCLR_CH6_enum;

typedef enum { 
 	DMA_PRIALTCLR_CH7_off		 = 0b0,
	DMA_PRIALTCLR_CH7_on		 = 0b1,
} t_DMA_PRIALTCLR_CH7_enum;

typedef enum { 
 	DMA_PRIALTCLR_CH8_off		 = 0b0,
	DMA_PRIALTCLR_CH8_on		 = 0b1,
} t_DMA_PRIALTCLR_CH8_enum;

typedef enum { 
 	DMA_PRIALTCLR_CH9_off		 = 0b0,
	DMA_PRIALTCLR_CH9_on		 = 0b1,
} t_DMA_PRIALTCLR_CH9_enum;

typedef enum { 
 	DMA_PRIALTCLR_CH10_off		 = 0b0,
	DMA_PRIALTCLR_CH10_on		 = 0b1,
} t_DMA_PRIALTCLR_CH10_enum;

typedef enum { 
 	DMA_PRIALTCLR_CH11_off		 = 0b0,
	DMA_PRIALTCLR_CH11_on		 = 0b1,
} t_DMA_PRIALTCLR_CH11_enum;

typedef enum { 
 	DMA_PRIALTCLR_CH12_off		 = 0b0,
	DMA_PRIALTCLR_CH12_on		 = 0b1,
} t_DMA_PRIALTCLR_CH12_enum;

typedef enum { 
 	DMA_PRIALTCLR_CH13_off		 = 0b0,
	DMA_PRIALTCLR_CH13_on		 = 0b1,
} t_DMA_PRIALTCLR_CH13_enum;

typedef enum { 
 	DMA_PRIALTCLR_CH14_off		 = 0b0,
	DMA_PRIALTCLR_CH14_on		 = 0b1,
} t_DMA_PRIALTCLR_CH14_enum;

typedef enum { 
 	DMA_PRIALTCLR_CH15_off		 = 0b0,
	DMA_PRIALTCLR_CH15_on		 = 0b1,
} t_DMA_PRIALTCLR_CH15_enum;

typedef enum { 
 	DMA_PRIALTCLR_CH16_off		 = 0b0,
	DMA_PRIALTCLR_CH16_on		 = 0b1,
} t_DMA_PRIALTCLR_CH16_enum;

typedef enum { 
 	DMA_PRIALTCLR_CH17_off		 = 0b0,
	DMA_PRIALTCLR_CH17_on		 = 0b1,
} t_DMA_PRIALTCLR_CH17_enum;

typedef enum { 
 	DMA_PRIALTCLR_CH18_off		 = 0b0,
	DMA_PRIALTCLR_CH18_on		 = 0b1,
} t_DMA_PRIALTCLR_CH18_enum;

typedef enum { 
 	DMA_PRIALTCLR_CH19_off		 = 0b0,
	DMA_PRIALTCLR_CH19_on		 = 0b1,
} t_DMA_PRIALTCLR_CH19_enum;

typedef enum { 
 	DMA_PRIALTCLR_CH20_off		 = 0b0,
	DMA_PRIALTCLR_CH20_on		 = 0b1,
} t_DMA_PRIALTCLR_CH20_enum;

typedef enum { 
 	DMA_PRIALTCLR_CH21_off		 = 0b0,
	DMA_PRIALTCLR_CH21_on		 = 0b1,
} t_DMA_PRIALTCLR_CH21_enum;

typedef enum { 
 	DMA_PRIALTCLR_CH22_off		 = 0b0,
	DMA_PRIALTCLR_CH22_on		 = 0b1,
} t_DMA_PRIALTCLR_CH22_enum;

typedef enum { 
 	DMA_PRIALTCLR_CH23_off		 = 0b0,
	DMA_PRIALTCLR_CH23_on		 = 0b1,
} t_DMA_PRIALTCLR_CH23_enum;




#define DMA_PRIORITYSET	0x3000c038		 /*--  --*/

#define DMA_PRIORITYSET_CH0_pos	 	 	 	0	 	 /*--  --*/
#define DMA_PRIORITYSET_CH1_pos	 	 	 	1	 	 /*--  --*/
#define DMA_PRIORITYSET_CH2_pos	 	 	 	2	 	 /*--  --*/
#define DMA_PRIORITYSET_CH3_pos	 	 	 	3	 	 /*--  --*/
#define DMA_PRIORITYSET_CH4_pos	 	 	 	4	 	 /*--  --*/
#define DMA_PRIORITYSET_CH5_pos	 	 	 	5	 	 /*--  --*/
#define DMA_PRIORITYSET_CH6_pos	 	 	 	6	 	 /*--  --*/
#define DMA_PRIORITYSET_CH7_pos	 	 	 	7	 	 /*--  --*/
#define DMA_PRIORITYSET_CH8_pos	 	 	 	8	 	 /*--  --*/
#define DMA_PRIORITYSET_CH9_pos	 	 	 	9	 	 /*--  --*/
#define DMA_PRIORITYSET_CH10_pos	 	 	 	10	 	 /*--  --*/
#define DMA_PRIORITYSET_CH11_pos	 	 	 	11	 	 /*--  --*/
#define DMA_PRIORITYSET_CH12_pos	 	 	 	12	 	 /*--  --*/
#define DMA_PRIORITYSET_CH13_pos	 	 	 	13	 	 /*--  --*/
#define DMA_PRIORITYSET_CH14_pos	 	 	 	14	 	 /*--  --*/
#define DMA_PRIORITYSET_CH15_pos	 	 	 	15	 	 /*--  --*/
#define DMA_PRIORITYSET_CH16_pos	 	 	 	16	 	 /*--  --*/
#define DMA_PRIORITYSET_CH17_pos	 	 	 	17	 	 /*--  --*/
#define DMA_PRIORITYSET_CH18_pos	 	 	 	18	 	 /*--  --*/
#define DMA_PRIORITYSET_CH19_pos	 	 	 	19	 	 /*--  --*/
#define DMA_PRIORITYSET_CH20_pos	 	 	 	20	 	 /*--  --*/
#define DMA_PRIORITYSET_CH21_pos	 	 	 	21	 	 /*--  --*/
#define DMA_PRIORITYSET_CH22_pos	 	 	 	22	 	 /*--  --*/
#define DMA_PRIORITYSET_CH23_pos	 	 	 	23	 	 /*--  --*/


#define DMA_PRIORITYSET_CH0_msk	 	 	 	0x00000001UL
#define DMA_PRIORITYSET_CH1_msk	 	 	 	0x00000002UL
#define DMA_PRIORITYSET_CH2_msk	 	 	 	0x00000004UL
#define DMA_PRIORITYSET_CH3_msk	 	 	 	0x00000008UL
#define DMA_PRIORITYSET_CH4_msk	 	 	 	0x00000010UL
#define DMA_PRIORITYSET_CH5_msk	 	 	 	0x00000020UL
#define DMA_PRIORITYSET_CH6_msk	 	 	 	0x00000040UL
#define DMA_PRIORITYSET_CH7_msk	 	 	 	0x00000080UL
#define DMA_PRIORITYSET_CH8_msk	 	 	 	0x00000100UL
#define DMA_PRIORITYSET_CH9_msk	 	 	 	0x00000200UL
#define DMA_PRIORITYSET_CH10_msk	 	 	 	0x00000400UL
#define DMA_PRIORITYSET_CH11_msk	 	 	 	0x00000800UL
#define DMA_PRIORITYSET_CH12_msk	 	 	 	0x00001000UL
#define DMA_PRIORITYSET_CH13_msk	 	 	 	0x00002000UL
#define DMA_PRIORITYSET_CH14_msk	 	 	 	0x00004000UL
#define DMA_PRIORITYSET_CH15_msk	 	 	 	0x00008000UL
#define DMA_PRIORITYSET_CH16_msk	 	 	 	0x00010000UL
#define DMA_PRIORITYSET_CH17_msk	 	 	 	0x00020000UL
#define DMA_PRIORITYSET_CH18_msk	 	 	 	0x00040000UL
#define DMA_PRIORITYSET_CH19_msk	 	 	 	0x00080000UL
#define DMA_PRIORITYSET_CH20_msk	 	 	 	0x00100000UL
#define DMA_PRIORITYSET_CH21_msk	 	 	 	0x00200000UL
#define DMA_PRIORITYSET_CH22_msk	 	 	 	0x00400000UL
#define DMA_PRIORITYSET_CH23_msk	 	 	 	0x00800000UL


typedef struct {
uint32_t 	 	DMA_PRIORITYSET_CH0	 	:1;
uint32_t 	 	DMA_PRIORITYSET_CH1	 	:1;
uint32_t 	 	DMA_PRIORITYSET_CH2	 	:1;
uint32_t 	 	DMA_PRIORITYSET_CH3	 	:1;
uint32_t 	 	DMA_PRIORITYSET_CH4	 	:1;
uint32_t 	 	DMA_PRIORITYSET_CH5	 	:1;
uint32_t 	 	DMA_PRIORITYSET_CH6	 	:1;
uint32_t 	 	DMA_PRIORITYSET_CH7	 	:1;
uint32_t 	 	DMA_PRIORITYSET_CH8	 	:1;
uint32_t 	 	DMA_PRIORITYSET_CH9	 	:1;
uint32_t 	 	DMA_PRIORITYSET_CH10	 	:1;
uint32_t 	 	DMA_PRIORITYSET_CH11	 	:1;
uint32_t 	 	DMA_PRIORITYSET_CH12	 	:1;
uint32_t 	 	DMA_PRIORITYSET_CH13	 	:1;
uint32_t 	 	DMA_PRIORITYSET_CH14	 	:1;
uint32_t 	 	DMA_PRIORITYSET_CH15	 	:1;
uint32_t 	 	DMA_PRIORITYSET_CH16	 	:1;
uint32_t 	 	DMA_PRIORITYSET_CH17	 	:1;
uint32_t 	 	DMA_PRIORITYSET_CH18	 	:1;
uint32_t 	 	DMA_PRIORITYSET_CH19	 	:1;
uint32_t 	 	DMA_PRIORITYSET_CH20	 	:1;
uint32_t 	 	DMA_PRIORITYSET_CH21	 	:1;
uint32_t 	 	DMA_PRIORITYSET_CH22	 	:1;
uint32_t 	 	DMA_PRIORITYSET_CH23	 	:1;
uint32_t 	 	 	 	:8;
} t_DMA_PRIORITYSET_bits;


typedef enum { 
 	DMA_PRIORITYSET_CH0_off		 = 0b0,
	DMA_PRIORITYSET_CH0_on		 = 0b1,
} t_DMA_PRIORITYSET_CH0_enum;

typedef enum { 
 	DMA_PRIORITYSET_CH1_off		 = 0b0,
	DMA_PRIORITYSET_CH1_on		 = 0b1,
} t_DMA_PRIORITYSET_CH1_enum;

typedef enum { 
 	DMA_PRIORITYSET_CH2_off		 = 0b0,
	DMA_PRIORITYSET_CH2_on		 = 0b1,
} t_DMA_PRIORITYSET_CH2_enum;

typedef enum { 
 	DMA_PRIORITYSET_CH3_off		 = 0b0,
	DMA_PRIORITYSET_CH3_on		 = 0b1,
} t_DMA_PRIORITYSET_CH3_enum;

typedef enum { 
 	DMA_PRIORITYSET_CH4_off		 = 0b0,
	DMA_PRIORITYSET_CH4_on		 = 0b1,
} t_DMA_PRIORITYSET_CH4_enum;

typedef enum { 
 	DMA_PRIORITYSET_CH5_off		 = 0b0,
	DMA_PRIORITYSET_CH5_on		 = 0b1,
} t_DMA_PRIORITYSET_CH5_enum;

typedef enum { 
 	DMA_PRIORITYSET_CH6_off		 = 0b0,
	DMA_PRIORITYSET_CH6_on		 = 0b1,
} t_DMA_PRIORITYSET_CH6_enum;

typedef enum { 
 	DMA_PRIORITYSET_CH7_off		 = 0b0,
	DMA_PRIORITYSET_CH7_on		 = 0b1,
} t_DMA_PRIORITYSET_CH7_enum;

typedef enum { 
 	DMA_PRIORITYSET_CH8_off		 = 0b0,
	DMA_PRIORITYSET_CH8_on		 = 0b1,
} t_DMA_PRIORITYSET_CH8_enum;

typedef enum { 
 	DMA_PRIORITYSET_CH9_off		 = 0b0,
	DMA_PRIORITYSET_CH9_on		 = 0b1,
} t_DMA_PRIORITYSET_CH9_enum;

typedef enum { 
 	DMA_PRIORITYSET_CH10_off		 = 0b0,
	DMA_PRIORITYSET_CH10_on		 = 0b1,
} t_DMA_PRIORITYSET_CH10_enum;

typedef enum { 
 	DMA_PRIORITYSET_CH11_off		 = 0b0,
	DMA_PRIORITYSET_CH11_on		 = 0b1,
} t_DMA_PRIORITYSET_CH11_enum;

typedef enum { 
 	DMA_PRIORITYSET_CH12_off		 = 0b0,
	DMA_PRIORITYSET_CH12_on		 = 0b1,
} t_DMA_PRIORITYSET_CH12_enum;

typedef enum { 
 	DMA_PRIORITYSET_CH13_off		 = 0b0,
	DMA_PRIORITYSET_CH13_on		 = 0b1,
} t_DMA_PRIORITYSET_CH13_enum;

typedef enum { 
 	DMA_PRIORITYSET_CH14_off		 = 0b0,
	DMA_PRIORITYSET_CH14_on		 = 0b1,
} t_DMA_PRIORITYSET_CH14_enum;

typedef enum { 
 	DMA_PRIORITYSET_CH15_off		 = 0b0,
	DMA_PRIORITYSET_CH15_on		 = 0b1,
} t_DMA_PRIORITYSET_CH15_enum;

typedef enum { 
 	DMA_PRIORITYSET_CH16_off		 = 0b0,
	DMA_PRIORITYSET_CH16_on		 = 0b1,
} t_DMA_PRIORITYSET_CH16_enum;

typedef enum { 
 	DMA_PRIORITYSET_CH17_off		 = 0b0,
	DMA_PRIORITYSET_CH17_on		 = 0b1,
} t_DMA_PRIORITYSET_CH17_enum;

typedef enum { 
 	DMA_PRIORITYSET_CH18_off		 = 0b0,
	DMA_PRIORITYSET_CH18_on		 = 0b1,
} t_DMA_PRIORITYSET_CH18_enum;

typedef enum { 
 	DMA_PRIORITYSET_CH19_off		 = 0b0,
	DMA_PRIORITYSET_CH19_on		 = 0b1,
} t_DMA_PRIORITYSET_CH19_enum;

typedef enum { 
 	DMA_PRIORITYSET_CH20_off		 = 0b0,
	DMA_PRIORITYSET_CH20_on		 = 0b1,
} t_DMA_PRIORITYSET_CH20_enum;

typedef enum { 
 	DMA_PRIORITYSET_CH21_off		 = 0b0,
	DMA_PRIORITYSET_CH21_on		 = 0b1,
} t_DMA_PRIORITYSET_CH21_enum;

typedef enum { 
 	DMA_PRIORITYSET_CH22_off		 = 0b0,
	DMA_PRIORITYSET_CH22_on		 = 0b1,
} t_DMA_PRIORITYSET_CH22_enum;

typedef enum { 
 	DMA_PRIORITYSET_CH23_off		 = 0b0,
	DMA_PRIORITYSET_CH23_on		 = 0b1,
} t_DMA_PRIORITYSET_CH23_enum;




#define DMA_PRIORITYCLR	0x3000c03c		 /*--  --*/

#define DMA_PRIORITYCLR_CH0_pos	 	 	 	0	 	 /*--  --*/
#define DMA_PRIORITYCLR_CH1_pos	 	 	 	1	 	 /*--  --*/
#define DMA_PRIORITYCLR_CH2_pos	 	 	 	2	 	 /*--  --*/
#define DMA_PRIORITYCLR_CH3_pos	 	 	 	3	 	 /*--  --*/
#define DMA_PRIORITYCLR_CH4_pos	 	 	 	4	 	 /*--  --*/
#define DMA_PRIORITYCLR_CH5_pos	 	 	 	5	 	 /*--  --*/
#define DMA_PRIORITYCLR_CH6_pos	 	 	 	6	 	 /*--  --*/
#define DMA_PRIORITYCLR_CH7_pos	 	 	 	7	 	 /*--  --*/
#define DMA_PRIORITYCLR_CH8_pos	 	 	 	8	 	 /*--  --*/
#define DMA_PRIORITYCLR_CH9_pos	 	 	 	9	 	 /*--  --*/
#define DMA_PRIORITYCLR_CH10_pos	 	 	 	10	 	 /*--  --*/
#define DMA_PRIORITYCLR_CH11_pos	 	 	 	11	 	 /*--  --*/
#define DMA_PRIORITYCLR_CH12_pos	 	 	 	12	 	 /*--  --*/
#define DMA_PRIORITYCLR_CH13_pos	 	 	 	13	 	 /*--  --*/
#define DMA_PRIORITYCLR_CH14_pos	 	 	 	14	 	 /*--  --*/
#define DMA_PRIORITYCLR_CH15_pos	 	 	 	15	 	 /*--  --*/
#define DMA_PRIORITYCLR_CH16_pos	 	 	 	16	 	 /*--  --*/
#define DMA_PRIORITYCLR_CH17_pos	 	 	 	17	 	 /*--  --*/
#define DMA_PRIORITYCLR_CH18_pos	 	 	 	18	 	 /*--  --*/
#define DMA_PRIORITYCLR_CH19_pos	 	 	 	19	 	 /*--  --*/
#define DMA_PRIORITYCLR_CH20_pos	 	 	 	20	 	 /*--  --*/
#define DMA_PRIORITYCLR_CH21_pos	 	 	 	21	 	 /*--  --*/
#define DMA_PRIORITYCLR_CH22_pos	 	 	 	22	 	 /*--  --*/
#define DMA_PRIORITYCLR_CH23_pos	 	 	 	23	 	 /*--  --*/


#define DMA_PRIORITYCLR_CH0_msk	 	 	 	0x00000001UL
#define DMA_PRIORITYCLR_CH1_msk	 	 	 	0x00000002UL
#define DMA_PRIORITYCLR_CH2_msk	 	 	 	0x00000004UL
#define DMA_PRIORITYCLR_CH3_msk	 	 	 	0x00000008UL
#define DMA_PRIORITYCLR_CH4_msk	 	 	 	0x00000010UL
#define DMA_PRIORITYCLR_CH5_msk	 	 	 	0x00000020UL
#define DMA_PRIORITYCLR_CH6_msk	 	 	 	0x00000040UL
#define DMA_PRIORITYCLR_CH7_msk	 	 	 	0x00000080UL
#define DMA_PRIORITYCLR_CH8_msk	 	 	 	0x00000100UL
#define DMA_PRIORITYCLR_CH9_msk	 	 	 	0x00000200UL
#define DMA_PRIORITYCLR_CH10_msk	 	 	 	0x00000400UL
#define DMA_PRIORITYCLR_CH11_msk	 	 	 	0x00000800UL
#define DMA_PRIORITYCLR_CH12_msk	 	 	 	0x00001000UL
#define DMA_PRIORITYCLR_CH13_msk	 	 	 	0x00002000UL
#define DMA_PRIORITYCLR_CH14_msk	 	 	 	0x00004000UL
#define DMA_PRIORITYCLR_CH15_msk	 	 	 	0x00008000UL
#define DMA_PRIORITYCLR_CH16_msk	 	 	 	0x00010000UL
#define DMA_PRIORITYCLR_CH17_msk	 	 	 	0x00020000UL
#define DMA_PRIORITYCLR_CH18_msk	 	 	 	0x00040000UL
#define DMA_PRIORITYCLR_CH19_msk	 	 	 	0x00080000UL
#define DMA_PRIORITYCLR_CH20_msk	 	 	 	0x00100000UL
#define DMA_PRIORITYCLR_CH21_msk	 	 	 	0x00200000UL
#define DMA_PRIORITYCLR_CH22_msk	 	 	 	0x00400000UL
#define DMA_PRIORITYCLR_CH23_msk	 	 	 	0x00800000UL


typedef struct {
uint32_t 	 	DMA_PRIORITYCLR_CH0	 	:1;
uint32_t 	 	DMA_PRIORITYCLR_CH1	 	:1;
uint32_t 	 	DMA_PRIORITYCLR_CH2	 	:1;
uint32_t 	 	DMA_PRIORITYCLR_CH3	 	:1;
uint32_t 	 	DMA_PRIORITYCLR_CH4	 	:1;
uint32_t 	 	DMA_PRIORITYCLR_CH5	 	:1;
uint32_t 	 	DMA_PRIORITYCLR_CH6	 	:1;
uint32_t 	 	DMA_PRIORITYCLR_CH7	 	:1;
uint32_t 	 	DMA_PRIORITYCLR_CH8	 	:1;
uint32_t 	 	DMA_PRIORITYCLR_CH9	 	:1;
uint32_t 	 	DMA_PRIORITYCLR_CH10	 	:1;
uint32_t 	 	DMA_PRIORITYCLR_CH11	 	:1;
uint32_t 	 	DMA_PRIORITYCLR_CH12	 	:1;
uint32_t 	 	DMA_PRIORITYCLR_CH13	 	:1;
uint32_t 	 	DMA_PRIORITYCLR_CH14	 	:1;
uint32_t 	 	DMA_PRIORITYCLR_CH15	 	:1;
uint32_t 	 	DMA_PRIORITYCLR_CH16	 	:1;
uint32_t 	 	DMA_PRIORITYCLR_CH17	 	:1;
uint32_t 	 	DMA_PRIORITYCLR_CH18	 	:1;
uint32_t 	 	DMA_PRIORITYCLR_CH19	 	:1;
uint32_t 	 	DMA_PRIORITYCLR_CH20	 	:1;
uint32_t 	 	DMA_PRIORITYCLR_CH21	 	:1;
uint32_t 	 	DMA_PRIORITYCLR_CH22	 	:1;
uint32_t 	 	DMA_PRIORITYCLR_CH23	 	:1;
uint32_t 	 	 	 	:8;
} t_DMA_PRIORITYCLR_bits;


typedef enum { 
 	DMA_PRIORITYCLR_CH0_off		 = 0b0,
	DMA_PRIORITYCLR_CH0_on		 = 0b1,
} t_DMA_PRIORITYCLR_CH0_enum;

typedef enum { 
 	DMA_PRIORITYCLR_CH1_off		 = 0b0,
	DMA_PRIORITYCLR_CH1_on		 = 0b1,
} t_DMA_PRIORITYCLR_CH1_enum;

typedef enum { 
 	DMA_PRIORITYCLR_CH2_off		 = 0b0,
	DMA_PRIORITYCLR_CH2_on		 = 0b1,
} t_DMA_PRIORITYCLR_CH2_enum;

typedef enum { 
 	DMA_PRIORITYCLR_CH3_off		 = 0b0,
	DMA_PRIORITYCLR_CH3_on		 = 0b1,
} t_DMA_PRIORITYCLR_CH3_enum;

typedef enum { 
 	DMA_PRIORITYCLR_CH4_off		 = 0b0,
	DMA_PRIORITYCLR_CH4_on		 = 0b1,
} t_DMA_PRIORITYCLR_CH4_enum;

typedef enum { 
 	DMA_PRIORITYCLR_CH5_off		 = 0b0,
	DMA_PRIORITYCLR_CH5_on		 = 0b1,
} t_DMA_PRIORITYCLR_CH5_enum;

typedef enum { 
 	DMA_PRIORITYCLR_CH6_off		 = 0b0,
	DMA_PRIORITYCLR_CH6_on		 = 0b1,
} t_DMA_PRIORITYCLR_CH6_enum;

typedef enum { 
 	DMA_PRIORITYCLR_CH7_off		 = 0b0,
	DMA_PRIORITYCLR_CH7_on		 = 0b1,
} t_DMA_PRIORITYCLR_CH7_enum;

typedef enum { 
 	DMA_PRIORITYCLR_CH8_off		 = 0b0,
	DMA_PRIORITYCLR_CH8_on		 = 0b1,
} t_DMA_PRIORITYCLR_CH8_enum;

typedef enum { 
 	DMA_PRIORITYCLR_CH9_off		 = 0b0,
	DMA_PRIORITYCLR_CH9_on		 = 0b1,
} t_DMA_PRIORITYCLR_CH9_enum;

typedef enum { 
 	DMA_PRIORITYCLR_CH10_off		 = 0b0,
	DMA_PRIORITYCLR_CH10_on		 = 0b1,
} t_DMA_PRIORITYCLR_CH10_enum;

typedef enum { 
 	DMA_PRIORITYCLR_CH11_off		 = 0b0,
	DMA_PRIORITYCLR_CH11_on		 = 0b1,
} t_DMA_PRIORITYCLR_CH11_enum;

typedef enum { 
 	DMA_PRIORITYCLR_CH12_off		 = 0b0,
	DMA_PRIORITYCLR_CH12_on		 = 0b1,
} t_DMA_PRIORITYCLR_CH12_enum;

typedef enum { 
 	DMA_PRIORITYCLR_CH13_off		 = 0b0,
	DMA_PRIORITYCLR_CH13_on		 = 0b1,
} t_DMA_PRIORITYCLR_CH13_enum;

typedef enum { 
 	DMA_PRIORITYCLR_CH14_off		 = 0b0,
	DMA_PRIORITYCLR_CH14_on		 = 0b1,
} t_DMA_PRIORITYCLR_CH14_enum;

typedef enum { 
 	DMA_PRIORITYCLR_CH15_off		 = 0b0,
	DMA_PRIORITYCLR_CH15_on		 = 0b1,
} t_DMA_PRIORITYCLR_CH15_enum;

typedef enum { 
 	DMA_PRIORITYCLR_CH16_off		 = 0b0,
	DMA_PRIORITYCLR_CH16_on		 = 0b1,
} t_DMA_PRIORITYCLR_CH16_enum;

typedef enum { 
 	DMA_PRIORITYCLR_CH17_off		 = 0b0,
	DMA_PRIORITYCLR_CH17_on		 = 0b1,
} t_DMA_PRIORITYCLR_CH17_enum;

typedef enum { 
 	DMA_PRIORITYCLR_CH18_off		 = 0b0,
	DMA_PRIORITYCLR_CH18_on		 = 0b1,
} t_DMA_PRIORITYCLR_CH18_enum;

typedef enum { 
 	DMA_PRIORITYCLR_CH19_off		 = 0b0,
	DMA_PRIORITYCLR_CH19_on		 = 0b1,
} t_DMA_PRIORITYCLR_CH19_enum;

typedef enum { 
 	DMA_PRIORITYCLR_CH20_off		 = 0b0,
	DMA_PRIORITYCLR_CH20_on		 = 0b1,
} t_DMA_PRIORITYCLR_CH20_enum;

typedef enum { 
 	DMA_PRIORITYCLR_CH21_off		 = 0b0,
	DMA_PRIORITYCLR_CH21_on		 = 0b1,
} t_DMA_PRIORITYCLR_CH21_enum;

typedef enum { 
 	DMA_PRIORITYCLR_CH22_off		 = 0b0,
	DMA_PRIORITYCLR_CH22_on		 = 0b1,
} t_DMA_PRIORITYCLR_CH22_enum;

typedef enum { 
 	DMA_PRIORITYCLR_CH23_off		 = 0b0,
	DMA_PRIORITYCLR_CH23_on		 = 0b1,
} t_DMA_PRIORITYCLR_CH23_enum;




#define DMA_CIRCULARSET	0x3000c040		 /*--  --*/

#define DMA_CIRCULARSET_CH0_pos	 	 	 	0	 	 /*--  --*/
#define DMA_CIRCULARSET_CH1_pos	 	 	 	1	 	 /*--  --*/
#define DMA_CIRCULARSET_CH2_pos	 	 	 	2	 	 /*--  --*/
#define DMA_CIRCULARSET_CH3_pos	 	 	 	3	 	 /*--  --*/
#define DMA_CIRCULARSET_CH4_pos	 	 	 	4	 	 /*--  --*/
#define DMA_CIRCULARSET_CH5_pos	 	 	 	5	 	 /*--  --*/
#define DMA_CIRCULARSET_CH6_pos	 	 	 	6	 	 /*--  --*/
#define DMA_CIRCULARSET_CH7_pos	 	 	 	7	 	 /*--  --*/
#define DMA_CIRCULARSET_CH8_pos	 	 	 	8	 	 /*--  --*/
#define DMA_CIRCULARSET_CH9_pos	 	 	 	9	 	 /*--  --*/
#define DMA_CIRCULARSET_CH10_pos	 	 	 	10	 	 /*--  --*/
#define DMA_CIRCULARSET_CH11_pos	 	 	 	11	 	 /*--  --*/
#define DMA_CIRCULARSET_CH12_pos	 	 	 	12	 	 /*--  --*/
#define DMA_CIRCULARSET_CH13_pos	 	 	 	13	 	 /*--  --*/
#define DMA_CIRCULARSET_CH14_pos	 	 	 	14	 	 /*--  --*/
#define DMA_CIRCULARSET_CH15_pos	 	 	 	15	 	 /*--  --*/
#define DMA_CIRCULARSET_CH16_pos	 	 	 	16	 	 /*--  --*/
#define DMA_CIRCULARSET_CH17_pos	 	 	 	17	 	 /*--  --*/
#define DMA_CIRCULARSET_CH18_pos	 	 	 	18	 	 /*--  --*/
#define DMA_CIRCULARSET_CH19_pos	 	 	 	19	 	 /*--  --*/
#define DMA_CIRCULARSET_CH20_pos	 	 	 	20	 	 /*--  --*/
#define DMA_CIRCULARSET_CH21_pos	 	 	 	21	 	 /*--  --*/
#define DMA_CIRCULARSET_CH22_pos	 	 	 	22	 	 /*--  --*/
#define DMA_CIRCULARSET_CH23_pos	 	 	 	23	 	 /*--  --*/


#define DMA_CIRCULARSET_CH0_msk	 	 	 	0x00000001UL
#define DMA_CIRCULARSET_CH1_msk	 	 	 	0x00000002UL
#define DMA_CIRCULARSET_CH2_msk	 	 	 	0x00000004UL
#define DMA_CIRCULARSET_CH3_msk	 	 	 	0x00000008UL
#define DMA_CIRCULARSET_CH4_msk	 	 	 	0x00000010UL
#define DMA_CIRCULARSET_CH5_msk	 	 	 	0x00000020UL
#define DMA_CIRCULARSET_CH6_msk	 	 	 	0x00000040UL
#define DMA_CIRCULARSET_CH7_msk	 	 	 	0x00000080UL
#define DMA_CIRCULARSET_CH8_msk	 	 	 	0x00000100UL
#define DMA_CIRCULARSET_CH9_msk	 	 	 	0x00000200UL
#define DMA_CIRCULARSET_CH10_msk	 	 	 	0x00000400UL
#define DMA_CIRCULARSET_CH11_msk	 	 	 	0x00000800UL
#define DMA_CIRCULARSET_CH12_msk	 	 	 	0x00001000UL
#define DMA_CIRCULARSET_CH13_msk	 	 	 	0x00002000UL
#define DMA_CIRCULARSET_CH14_msk	 	 	 	0x00004000UL
#define DMA_CIRCULARSET_CH15_msk	 	 	 	0x00008000UL
#define DMA_CIRCULARSET_CH16_msk	 	 	 	0x00010000UL
#define DMA_CIRCULARSET_CH17_msk	 	 	 	0x00020000UL
#define DMA_CIRCULARSET_CH18_msk	 	 	 	0x00040000UL
#define DMA_CIRCULARSET_CH19_msk	 	 	 	0x00080000UL
#define DMA_CIRCULARSET_CH20_msk	 	 	 	0x00100000UL
#define DMA_CIRCULARSET_CH21_msk	 	 	 	0x00200000UL
#define DMA_CIRCULARSET_CH22_msk	 	 	 	0x00400000UL
#define DMA_CIRCULARSET_CH23_msk	 	 	 	0x00800000UL


typedef struct {
uint32_t 	 	DMA_CIRCULARSET_CH0	 	:1;
uint32_t 	 	DMA_CIRCULARSET_CH1	 	:1;
uint32_t 	 	DMA_CIRCULARSET_CH2	 	:1;
uint32_t 	 	DMA_CIRCULARSET_CH3	 	:1;
uint32_t 	 	DMA_CIRCULARSET_CH4	 	:1;
uint32_t 	 	DMA_CIRCULARSET_CH5	 	:1;
uint32_t 	 	DMA_CIRCULARSET_CH6	 	:1;
uint32_t 	 	DMA_CIRCULARSET_CH7	 	:1;
uint32_t 	 	DMA_CIRCULARSET_CH8	 	:1;
uint32_t 	 	DMA_CIRCULARSET_CH9	 	:1;
uint32_t 	 	DMA_CIRCULARSET_CH10	 	:1;
uint32_t 	 	DMA_CIRCULARSET_CH11	 	:1;
uint32_t 	 	DMA_CIRCULARSET_CH12	 	:1;
uint32_t 	 	DMA_CIRCULARSET_CH13	 	:1;
uint32_t 	 	DMA_CIRCULARSET_CH14	 	:1;
uint32_t 	 	DMA_CIRCULARSET_CH15	 	:1;
uint32_t 	 	DMA_CIRCULARSET_CH16	 	:1;
uint32_t 	 	DMA_CIRCULARSET_CH17	 	:1;
uint32_t 	 	DMA_CIRCULARSET_CH18	 	:1;
uint32_t 	 	DMA_CIRCULARSET_CH19	 	:1;
uint32_t 	 	DMA_CIRCULARSET_CH20	 	:1;
uint32_t 	 	DMA_CIRCULARSET_CH21	 	:1;
uint32_t 	 	DMA_CIRCULARSET_CH22	 	:1;
uint32_t 	 	DMA_CIRCULARSET_CH23	 	:1;
uint32_t 	 	 	 	:8;
} t_DMA_CIRCULARSET_bits;


typedef enum { 
 	DMA_CIRCULARSET_CH0_off		 = 0b0,
	DMA_CIRCULARSET_CH0_on		 = 0b1,
} t_DMA_CIRCULARSET_CH0_enum;

typedef enum { 
 	DMA_CIRCULARSET_CH1_off		 = 0b0,
	DMA_CIRCULARSET_CH1_on		 = 0b1,
} t_DMA_CIRCULARSET_CH1_enum;

typedef enum { 
 	DMA_CIRCULARSET_CH2_off		 = 0b0,
	DMA_CIRCULARSET_CH2_on		 = 0b1,
} t_DMA_CIRCULARSET_CH2_enum;

typedef enum { 
 	DMA_CIRCULARSET_CH3_off		 = 0b0,
	DMA_CIRCULARSET_CH3_on		 = 0b1,
} t_DMA_CIRCULARSET_CH3_enum;

typedef enum { 
 	DMA_CIRCULARSET_CH4_off		 = 0b0,
	DMA_CIRCULARSET_CH4_on		 = 0b1,
} t_DMA_CIRCULARSET_CH4_enum;

typedef enum { 
 	DMA_CIRCULARSET_CH5_off		 = 0b0,
	DMA_CIRCULARSET_CH5_on		 = 0b1,
} t_DMA_CIRCULARSET_CH5_enum;

typedef enum { 
 	DMA_CIRCULARSET_CH6_off		 = 0b0,
	DMA_CIRCULARSET_CH6_on		 = 0b1,
} t_DMA_CIRCULARSET_CH6_enum;

typedef enum { 
 	DMA_CIRCULARSET_CH7_off		 = 0b0,
	DMA_CIRCULARSET_CH7_on		 = 0b1,
} t_DMA_CIRCULARSET_CH7_enum;

typedef enum { 
 	DMA_CIRCULARSET_CH8_off		 = 0b0,
	DMA_CIRCULARSET_CH8_on		 = 0b1,
} t_DMA_CIRCULARSET_CH8_enum;

typedef enum { 
 	DMA_CIRCULARSET_CH9_off		 = 0b0,
	DMA_CIRCULARSET_CH9_on		 = 0b1,
} t_DMA_CIRCULARSET_CH9_enum;

typedef enum { 
 	DMA_CIRCULARSET_CH10_off		 = 0b0,
	DMA_CIRCULARSET_CH10_on		 = 0b1,
} t_DMA_CIRCULARSET_CH10_enum;

typedef enum { 
 	DMA_CIRCULARSET_CH11_off		 = 0b0,
	DMA_CIRCULARSET_CH11_on		 = 0b1,
} t_DMA_CIRCULARSET_CH11_enum;

typedef enum { 
 	DMA_CIRCULARSET_CH12_off		 = 0b0,
	DMA_CIRCULARSET_CH12_on		 = 0b1,
} t_DMA_CIRCULARSET_CH12_enum;

typedef enum { 
 	DMA_CIRCULARSET_CH13_off		 = 0b0,
	DMA_CIRCULARSET_CH13_on		 = 0b1,
} t_DMA_CIRCULARSET_CH13_enum;

typedef enum { 
 	DMA_CIRCULARSET_CH14_off		 = 0b0,
	DMA_CIRCULARSET_CH14_on		 = 0b1,
} t_DMA_CIRCULARSET_CH14_enum;

typedef enum { 
 	DMA_CIRCULARSET_CH15_off		 = 0b0,
	DMA_CIRCULARSET_CH15_on		 = 0b1,
} t_DMA_CIRCULARSET_CH15_enum;

typedef enum { 
 	DMA_CIRCULARSET_CH16_off		 = 0b0,
	DMA_CIRCULARSET_CH16_on		 = 0b1,
} t_DMA_CIRCULARSET_CH16_enum;

typedef enum { 
 	DMA_CIRCULARSET_CH17_off		 = 0b0,
	DMA_CIRCULARSET_CH17_on		 = 0b1,
} t_DMA_CIRCULARSET_CH17_enum;

typedef enum { 
 	DMA_CIRCULARSET_CH18_off		 = 0b0,
	DMA_CIRCULARSET_CH18_on		 = 0b1,
} t_DMA_CIRCULARSET_CH18_enum;

typedef enum { 
 	DMA_CIRCULARSET_CH19_off		 = 0b0,
	DMA_CIRCULARSET_CH19_on		 = 0b1,
} t_DMA_CIRCULARSET_CH19_enum;

typedef enum { 
 	DMA_CIRCULARSET_CH20_off		 = 0b0,
	DMA_CIRCULARSET_CH20_on		 = 0b1,
} t_DMA_CIRCULARSET_CH20_enum;

typedef enum { 
 	DMA_CIRCULARSET_CH21_off		 = 0b0,
	DMA_CIRCULARSET_CH21_on		 = 0b1,
} t_DMA_CIRCULARSET_CH21_enum;

typedef enum { 
 	DMA_CIRCULARSET_CH22_off		 = 0b0,
	DMA_CIRCULARSET_CH22_on		 = 0b1,
} t_DMA_CIRCULARSET_CH22_enum;

typedef enum { 
 	DMA_CIRCULARSET_CH23_off		 = 0b0,
	DMA_CIRCULARSET_CH23_on		 = 0b1,
} t_DMA_CIRCULARSET_CH23_enum;




#define DMA_CIRCULARCLR	0x3000c044		 /*--  --*/

#define DMA_CIRCULARCLR_CH0_pos	 	 	 	0	 	 /*--  --*/
#define DMA_CIRCULARCLR_CH1_pos	 	 	 	1	 	 /*--  --*/
#define DMA_CIRCULARCLR_CH2_pos	 	 	 	2	 	 /*--  --*/
#define DMA_CIRCULARCLR_CH3_pos	 	 	 	3	 	 /*--  --*/
#define DMA_CIRCULARCLR_CH4_pos	 	 	 	4	 	 /*--  --*/
#define DMA_CIRCULARCLR_CH5_pos	 	 	 	5	 	 /*--  --*/
#define DMA_CIRCULARCLR_CH6_pos	 	 	 	6	 	 /*--  --*/
#define DMA_CIRCULARCLR_CH7_pos	 	 	 	7	 	 /*--  --*/
#define DMA_CIRCULARCLR_CH8_pos	 	 	 	8	 	 /*--  --*/
#define DMA_CIRCULARCLR_CH9_pos	 	 	 	9	 	 /*--  --*/
#define DMA_CIRCULARCLR_CH10_pos	 	 	 	10	 	 /*--  --*/
#define DMA_CIRCULARCLR_CH11_pos	 	 	 	11	 	 /*--  --*/
#define DMA_CIRCULARCLR_CH12_pos	 	 	 	12	 	 /*--  --*/
#define DMA_CIRCULARCLR_CH13_pos	 	 	 	13	 	 /*--  --*/
#define DMA_CIRCULARCLR_CH14_pos	 	 	 	14	 	 /*--  --*/
#define DMA_CIRCULARCLR_CH15_pos	 	 	 	15	 	 /*--  --*/
#define DMA_CIRCULARCLR_CH16_pos	 	 	 	16	 	 /*--  --*/
#define DMA_CIRCULARCLR_CH17_pos	 	 	 	17	 	 /*--  --*/
#define DMA_CIRCULARCLR_CH18_pos	 	 	 	18	 	 /*--  --*/
#define DMA_CIRCULARCLR_CH19_pos	 	 	 	19	 	 /*--  --*/
#define DMA_CIRCULARCLR_CH20_pos	 	 	 	20	 	 /*--  --*/
#define DMA_CIRCULARCLR_CH21_pos	 	 	 	21	 	 /*--  --*/
#define DMA_CIRCULARCLR_CH22_pos	 	 	 	22	 	 /*--  --*/
#define DMA_CIRCULARCLR_CH23_pos	 	 	 	23	 	 /*--  --*/


#define DMA_CIRCULARCLR_CH0_msk	 	 	 	0x00000001UL
#define DMA_CIRCULARCLR_CH1_msk	 	 	 	0x00000002UL
#define DMA_CIRCULARCLR_CH2_msk	 	 	 	0x00000004UL
#define DMA_CIRCULARCLR_CH3_msk	 	 	 	0x00000008UL
#define DMA_CIRCULARCLR_CH4_msk	 	 	 	0x00000010UL
#define DMA_CIRCULARCLR_CH5_msk	 	 	 	0x00000020UL
#define DMA_CIRCULARCLR_CH6_msk	 	 	 	0x00000040UL
#define DMA_CIRCULARCLR_CH7_msk	 	 	 	0x00000080UL
#define DMA_CIRCULARCLR_CH8_msk	 	 	 	0x00000100UL
#define DMA_CIRCULARCLR_CH9_msk	 	 	 	0x00000200UL
#define DMA_CIRCULARCLR_CH10_msk	 	 	 	0x00000400UL
#define DMA_CIRCULARCLR_CH11_msk	 	 	 	0x00000800UL
#define DMA_CIRCULARCLR_CH12_msk	 	 	 	0x00001000UL
#define DMA_CIRCULARCLR_CH13_msk	 	 	 	0x00002000UL
#define DMA_CIRCULARCLR_CH14_msk	 	 	 	0x00004000UL
#define DMA_CIRCULARCLR_CH15_msk	 	 	 	0x00008000UL
#define DMA_CIRCULARCLR_CH16_msk	 	 	 	0x00010000UL
#define DMA_CIRCULARCLR_CH17_msk	 	 	 	0x00020000UL
#define DMA_CIRCULARCLR_CH18_msk	 	 	 	0x00040000UL
#define DMA_CIRCULARCLR_CH19_msk	 	 	 	0x00080000UL
#define DMA_CIRCULARCLR_CH20_msk	 	 	 	0x00100000UL
#define DMA_CIRCULARCLR_CH21_msk	 	 	 	0x00200000UL
#define DMA_CIRCULARCLR_CH22_msk	 	 	 	0x00400000UL
#define DMA_CIRCULARCLR_CH23_msk	 	 	 	0x00800000UL


typedef struct {
uint32_t 	 	DMA_CIRCULARCLR_CH0	 	:1;
uint32_t 	 	DMA_CIRCULARCLR_CH1	 	:1;
uint32_t 	 	DMA_CIRCULARCLR_CH2	 	:1;
uint32_t 	 	DMA_CIRCULARCLR_CH3	 	:1;
uint32_t 	 	DMA_CIRCULARCLR_CH4	 	:1;
uint32_t 	 	DMA_CIRCULARCLR_CH5	 	:1;
uint32_t 	 	DMA_CIRCULARCLR_CH6	 	:1;
uint32_t 	 	DMA_CIRCULARCLR_CH7	 	:1;
uint32_t 	 	DMA_CIRCULARCLR_CH8	 	:1;
uint32_t 	 	DMA_CIRCULARCLR_CH9	 	:1;
uint32_t 	 	DMA_CIRCULARCLR_CH10	 	:1;
uint32_t 	 	DMA_CIRCULARCLR_CH11	 	:1;
uint32_t 	 	DMA_CIRCULARCLR_CH12	 	:1;
uint32_t 	 	DMA_CIRCULARCLR_CH13	 	:1;
uint32_t 	 	DMA_CIRCULARCLR_CH14	 	:1;
uint32_t 	 	DMA_CIRCULARCLR_CH15	 	:1;
uint32_t 	 	DMA_CIRCULARCLR_CH16	 	:1;
uint32_t 	 	DMA_CIRCULARCLR_CH17	 	:1;
uint32_t 	 	DMA_CIRCULARCLR_CH18	 	:1;
uint32_t 	 	DMA_CIRCULARCLR_CH19	 	:1;
uint32_t 	 	DMA_CIRCULARCLR_CH20	 	:1;
uint32_t 	 	DMA_CIRCULARCLR_CH21	 	:1;
uint32_t 	 	DMA_CIRCULARCLR_CH22	 	:1;
uint32_t 	 	DMA_CIRCULARCLR_CH23	 	:1;
uint32_t 	 	 	 	:8;
} t_DMA_CIRCULARCLR_bits;


typedef enum { 
 	DMA_CIRCULARCLR_CH0_off		 = 0b0,
	DMA_CIRCULARCLR_CH0_on		 = 0b1,
} t_DMA_CIRCULARCLR_CH0_enum;

typedef enum { 
 	DMA_CIRCULARCLR_CH1_off		 = 0b0,
	DMA_CIRCULARCLR_CH1_on		 = 0b1,
} t_DMA_CIRCULARCLR_CH1_enum;

typedef enum { 
 	DMA_CIRCULARCLR_CH2_off		 = 0b0,
	DMA_CIRCULARCLR_CH2_on		 = 0b1,
} t_DMA_CIRCULARCLR_CH2_enum;

typedef enum { 
 	DMA_CIRCULARCLR_CH3_off		 = 0b0,
	DMA_CIRCULARCLR_CH3_on		 = 0b1,
} t_DMA_CIRCULARCLR_CH3_enum;

typedef enum { 
 	DMA_CIRCULARCLR_CH4_off		 = 0b0,
	DMA_CIRCULARCLR_CH4_on		 = 0b1,
} t_DMA_CIRCULARCLR_CH4_enum;

typedef enum { 
 	DMA_CIRCULARCLR_CH5_off		 = 0b0,
	DMA_CIRCULARCLR_CH5_on		 = 0b1,
} t_DMA_CIRCULARCLR_CH5_enum;

typedef enum { 
 	DMA_CIRCULARCLR_CH6_off		 = 0b0,
	DMA_CIRCULARCLR_CH6_on		 = 0b1,
} t_DMA_CIRCULARCLR_CH6_enum;

typedef enum { 
 	DMA_CIRCULARCLR_CH7_off		 = 0b0,
	DMA_CIRCULARCLR_CH7_on		 = 0b1,
} t_DMA_CIRCULARCLR_CH7_enum;

typedef enum { 
 	DMA_CIRCULARCLR_CH8_off		 = 0b0,
	DMA_CIRCULARCLR_CH8_on		 = 0b1,
} t_DMA_CIRCULARCLR_CH8_enum;

typedef enum { 
 	DMA_CIRCULARCLR_CH9_off		 = 0b0,
	DMA_CIRCULARCLR_CH9_on		 = 0b1,
} t_DMA_CIRCULARCLR_CH9_enum;

typedef enum { 
 	DMA_CIRCULARCLR_CH10_off		 = 0b0,
	DMA_CIRCULARCLR_CH10_on		 = 0b1,
} t_DMA_CIRCULARCLR_CH10_enum;

typedef enum { 
 	DMA_CIRCULARCLR_CH11_off		 = 0b0,
	DMA_CIRCULARCLR_CH11_on		 = 0b1,
} t_DMA_CIRCULARCLR_CH11_enum;

typedef enum { 
 	DMA_CIRCULARCLR_CH12_off		 = 0b0,
	DMA_CIRCULARCLR_CH12_on		 = 0b1,
} t_DMA_CIRCULARCLR_CH12_enum;

typedef enum { 
 	DMA_CIRCULARCLR_CH13_off		 = 0b0,
	DMA_CIRCULARCLR_CH13_on		 = 0b1,
} t_DMA_CIRCULARCLR_CH13_enum;

typedef enum { 
 	DMA_CIRCULARCLR_CH14_off		 = 0b0,
	DMA_CIRCULARCLR_CH14_on		 = 0b1,
} t_DMA_CIRCULARCLR_CH14_enum;

typedef enum { 
 	DMA_CIRCULARCLR_CH15_off		 = 0b0,
	DMA_CIRCULARCLR_CH15_on		 = 0b1,
} t_DMA_CIRCULARCLR_CH15_enum;

typedef enum { 
 	DMA_CIRCULARCLR_CH16_off		 = 0b0,
	DMA_CIRCULARCLR_CH16_on		 = 0b1,
} t_DMA_CIRCULARCLR_CH16_enum;

typedef enum { 
 	DMA_CIRCULARCLR_CH17_off		 = 0b0,
	DMA_CIRCULARCLR_CH17_on		 = 0b1,
} t_DMA_CIRCULARCLR_CH17_enum;

typedef enum { 
 	DMA_CIRCULARCLR_CH18_off		 = 0b0,
	DMA_CIRCULARCLR_CH18_on		 = 0b1,
} t_DMA_CIRCULARCLR_CH18_enum;

typedef enum { 
 	DMA_CIRCULARCLR_CH19_off		 = 0b0,
	DMA_CIRCULARCLR_CH19_on		 = 0b1,
} t_DMA_CIRCULARCLR_CH19_enum;

typedef enum { 
 	DMA_CIRCULARCLR_CH20_off		 = 0b0,
	DMA_CIRCULARCLR_CH20_on		 = 0b1,
} t_DMA_CIRCULARCLR_CH20_enum;

typedef enum { 
 	DMA_CIRCULARCLR_CH21_off		 = 0b0,
	DMA_CIRCULARCLR_CH21_on		 = 0b1,
} t_DMA_CIRCULARCLR_CH21_enum;

typedef enum { 
 	DMA_CIRCULARCLR_CH22_off		 = 0b0,
	DMA_CIRCULARCLR_CH22_on		 = 0b1,
} t_DMA_CIRCULARCLR_CH22_enum;

typedef enum { 
 	DMA_CIRCULARCLR_CH23_off		 = 0b0,
	DMA_CIRCULARCLR_CH23_on		 = 0b1,
} t_DMA_CIRCULARCLR_CH23_enum;




#define DMA_ERRCLR	0x3000c04c		 /*--  --*/

#define DMA_ERRCLR_VAL_pos	 	 	 	0	 	 /*--  --*/


#define DMA_ERRCLR_VAL_msk	 	 	 	0x00000001UL


typedef struct {
uint32_t 	 	DMA_ERRCLR_VAL	 	:1;
uint32_t 	 	 	 	:31;
} t_DMA_ERRCLR_bits;


typedef enum { 
 	DMA_ERRCLR_VAL_off		 = 0b0,
	DMA_ERRCLR_VAL_on		 = 0b1,
} t_DMA_ERRCLR_VAL_enum;




#define DMA_IRQSTAT	0x3000c050		 /*--  --*/

#define DMA_IRQSTAT_CH0_pos	 	 	 	0	 	 /*--  --*/
#define DMA_IRQSTAT_CH1_pos	 	 	 	1	 	 /*--  --*/
#define DMA_IRQSTAT_CH2_pos	 	 	 	2	 	 /*--  --*/
#define DMA_IRQSTAT_CH3_pos	 	 	 	3	 	 /*--  --*/
#define DMA_IRQSTAT_CH4_pos	 	 	 	4	 	 /*--  --*/
#define DMA_IRQSTAT_CH5_pos	 	 	 	5	 	 /*--  --*/
#define DMA_IRQSTAT_CH6_pos	 	 	 	6	 	 /*--  --*/
#define DMA_IRQSTAT_CH7_pos	 	 	 	7	 	 /*--  --*/
#define DMA_IRQSTAT_CH8_pos	 	 	 	8	 	 /*--  --*/
#define DMA_IRQSTAT_CH9_pos	 	 	 	9	 	 /*--  --*/
#define DMA_IRQSTAT_CH10_pos	 	 	 	10	 	 /*--  --*/
#define DMA_IRQSTAT_CH11_pos	 	 	 	11	 	 /*--  --*/
#define DMA_IRQSTAT_CH12_pos	 	 	 	12	 	 /*--  --*/
#define DMA_IRQSTAT_CH13_pos	 	 	 	13	 	 /*--  --*/
#define DMA_IRQSTAT_CH14_pos	 	 	 	14	 	 /*--  --*/
#define DMA_IRQSTAT_CH15_pos	 	 	 	15	 	 /*--  --*/
#define DMA_IRQSTAT_CH16_pos	 	 	 	16	 	 /*--  --*/
#define DMA_IRQSTAT_CH17_pos	 	 	 	17	 	 /*--  --*/
#define DMA_IRQSTAT_CH18_pos	 	 	 	18	 	 /*--  --*/
#define DMA_IRQSTAT_CH19_pos	 	 	 	19	 	 /*--  --*/
#define DMA_IRQSTAT_CH20_pos	 	 	 	20	 	 /*--  --*/
#define DMA_IRQSTAT_CH21_pos	 	 	 	21	 	 /*--  --*/
#define DMA_IRQSTAT_CH22_pos	 	 	 	22	 	 /*--  --*/
#define DMA_IRQSTAT_CH23_pos	 	 	 	23	 	 /*--  --*/


#define DMA_IRQSTAT_CH0_msk	 	 	 	0x00000001UL
#define DMA_IRQSTAT_CH1_msk	 	 	 	0x00000002UL
#define DMA_IRQSTAT_CH2_msk	 	 	 	0x00000004UL
#define DMA_IRQSTAT_CH3_msk	 	 	 	0x00000008UL
#define DMA_IRQSTAT_CH4_msk	 	 	 	0x00000010UL
#define DMA_IRQSTAT_CH5_msk	 	 	 	0x00000020UL
#define DMA_IRQSTAT_CH6_msk	 	 	 	0x00000040UL
#define DMA_IRQSTAT_CH7_msk	 	 	 	0x00000080UL
#define DMA_IRQSTAT_CH8_msk	 	 	 	0x00000100UL
#define DMA_IRQSTAT_CH9_msk	 	 	 	0x00000200UL
#define DMA_IRQSTAT_CH10_msk	 	 	 	0x00000400UL
#define DMA_IRQSTAT_CH11_msk	 	 	 	0x00000800UL
#define DMA_IRQSTAT_CH12_msk	 	 	 	0x00001000UL
#define DMA_IRQSTAT_CH13_msk	 	 	 	0x00002000UL
#define DMA_IRQSTAT_CH14_msk	 	 	 	0x00004000UL
#define DMA_IRQSTAT_CH15_msk	 	 	 	0x00008000UL
#define DMA_IRQSTAT_CH16_msk	 	 	 	0x00010000UL
#define DMA_IRQSTAT_CH17_msk	 	 	 	0x00020000UL
#define DMA_IRQSTAT_CH18_msk	 	 	 	0x00040000UL
#define DMA_IRQSTAT_CH19_msk	 	 	 	0x00080000UL
#define DMA_IRQSTAT_CH20_msk	 	 	 	0x00100000UL
#define DMA_IRQSTAT_CH21_msk	 	 	 	0x00200000UL
#define DMA_IRQSTAT_CH22_msk	 	 	 	0x00400000UL
#define DMA_IRQSTAT_CH23_msk	 	 	 	0x00800000UL


typedef struct {
uint32_t 	 	DMA_IRQSTAT_CH0	 	:1;
uint32_t 	 	DMA_IRQSTAT_CH1	 	:1;
uint32_t 	 	DMA_IRQSTAT_CH2	 	:1;
uint32_t 	 	DMA_IRQSTAT_CH3	 	:1;
uint32_t 	 	DMA_IRQSTAT_CH4	 	:1;
uint32_t 	 	DMA_IRQSTAT_CH5	 	:1;
uint32_t 	 	DMA_IRQSTAT_CH6	 	:1;
uint32_t 	 	DMA_IRQSTAT_CH7	 	:1;
uint32_t 	 	DMA_IRQSTAT_CH8	 	:1;
uint32_t 	 	DMA_IRQSTAT_CH9	 	:1;
uint32_t 	 	DMA_IRQSTAT_CH10	 	:1;
uint32_t 	 	DMA_IRQSTAT_CH11	 	:1;
uint32_t 	 	DMA_IRQSTAT_CH12	 	:1;
uint32_t 	 	DMA_IRQSTAT_CH13	 	:1;
uint32_t 	 	DMA_IRQSTAT_CH14	 	:1;
uint32_t 	 	DMA_IRQSTAT_CH15	 	:1;
uint32_t 	 	DMA_IRQSTAT_CH16	 	:1;
uint32_t 	 	DMA_IRQSTAT_CH17	 	:1;
uint32_t 	 	DMA_IRQSTAT_CH18	 	:1;
uint32_t 	 	DMA_IRQSTAT_CH19	 	:1;
uint32_t 	 	DMA_IRQSTAT_CH20	 	:1;
uint32_t 	 	DMA_IRQSTAT_CH21	 	:1;
uint32_t 	 	DMA_IRQSTAT_CH22	 	:1;
uint32_t 	 	DMA_IRQSTAT_CH23	 	:1;
uint32_t 	 	 	 	:8;
} t_DMA_IRQSTAT_bits;


typedef enum { 
 	DMA_IRQSTAT_CH0_off		 = 0b0,
	DMA_IRQSTAT_CH0_on		 = 0b1,
} t_DMA_IRQSTAT_CH0_enum;

typedef enum { 
 	DMA_IRQSTAT_CH1_off		 = 0b0,
	DMA_IRQSTAT_CH1_on		 = 0b1,
} t_DMA_IRQSTAT_CH1_enum;

typedef enum { 
 	DMA_IRQSTAT_CH2_off		 = 0b0,
	DMA_IRQSTAT_CH2_on		 = 0b1,
} t_DMA_IRQSTAT_CH2_enum;

typedef enum { 
 	DMA_IRQSTAT_CH3_off		 = 0b0,
	DMA_IRQSTAT_CH3_on		 = 0b1,
} t_DMA_IRQSTAT_CH3_enum;

typedef enum { 
 	DMA_IRQSTAT_CH4_off		 = 0b0,
	DMA_IRQSTAT_CH4_on		 = 0b1,
} t_DMA_IRQSTAT_CH4_enum;

typedef enum { 
 	DMA_IRQSTAT_CH5_off		 = 0b0,
	DMA_IRQSTAT_CH5_on		 = 0b1,
} t_DMA_IRQSTAT_CH5_enum;

typedef enum { 
 	DMA_IRQSTAT_CH6_off		 = 0b0,
	DMA_IRQSTAT_CH6_on		 = 0b1,
} t_DMA_IRQSTAT_CH6_enum;

typedef enum { 
 	DMA_IRQSTAT_CH7_off		 = 0b0,
	DMA_IRQSTAT_CH7_on		 = 0b1,
} t_DMA_IRQSTAT_CH7_enum;

typedef enum { 
 	DMA_IRQSTAT_CH8_off		 = 0b0,
	DMA_IRQSTAT_CH8_on		 = 0b1,
} t_DMA_IRQSTAT_CH8_enum;

typedef enum { 
 	DMA_IRQSTAT_CH9_off		 = 0b0,
	DMA_IRQSTAT_CH9_on		 = 0b1,
} t_DMA_IRQSTAT_CH9_enum;

typedef enum { 
 	DMA_IRQSTAT_CH10_off		 = 0b0,
	DMA_IRQSTAT_CH10_on		 = 0b1,
} t_DMA_IRQSTAT_CH10_enum;

typedef enum { 
 	DMA_IRQSTAT_CH11_off		 = 0b0,
	DMA_IRQSTAT_CH11_on		 = 0b1,
} t_DMA_IRQSTAT_CH11_enum;

typedef enum { 
 	DMA_IRQSTAT_CH12_off		 = 0b0,
	DMA_IRQSTAT_CH12_on		 = 0b1,
} t_DMA_IRQSTAT_CH12_enum;

typedef enum { 
 	DMA_IRQSTAT_CH13_off		 = 0b0,
	DMA_IRQSTAT_CH13_on		 = 0b1,
} t_DMA_IRQSTAT_CH13_enum;

typedef enum { 
 	DMA_IRQSTAT_CH14_off		 = 0b0,
	DMA_IRQSTAT_CH14_on		 = 0b1,
} t_DMA_IRQSTAT_CH14_enum;

typedef enum { 
 	DMA_IRQSTAT_CH15_off		 = 0b0,
	DMA_IRQSTAT_CH15_on		 = 0b1,
} t_DMA_IRQSTAT_CH15_enum;

typedef enum { 
 	DMA_IRQSTAT_CH16_off		 = 0b0,
	DMA_IRQSTAT_CH16_on		 = 0b1,
} t_DMA_IRQSTAT_CH16_enum;

typedef enum { 
 	DMA_IRQSTAT_CH17_off		 = 0b0,
	DMA_IRQSTAT_CH17_on		 = 0b1,
} t_DMA_IRQSTAT_CH17_enum;

typedef enum { 
 	DMA_IRQSTAT_CH18_off		 = 0b0,
	DMA_IRQSTAT_CH18_on		 = 0b1,
} t_DMA_IRQSTAT_CH18_enum;

typedef enum { 
 	DMA_IRQSTAT_CH19_off		 = 0b0,
	DMA_IRQSTAT_CH19_on		 = 0b1,
} t_DMA_IRQSTAT_CH19_enum;

typedef enum { 
 	DMA_IRQSTAT_CH20_off		 = 0b0,
	DMA_IRQSTAT_CH20_on		 = 0b1,
} t_DMA_IRQSTAT_CH20_enum;

typedef enum { 
 	DMA_IRQSTAT_CH21_off		 = 0b0,
	DMA_IRQSTAT_CH21_on		 = 0b1,
} t_DMA_IRQSTAT_CH21_enum;

typedef enum { 
 	DMA_IRQSTAT_CH22_off		 = 0b0,
	DMA_IRQSTAT_CH22_on		 = 0b1,
} t_DMA_IRQSTAT_CH22_enum;

typedef enum { 
 	DMA_IRQSTAT_CH23_off		 = 0b0,
	DMA_IRQSTAT_CH23_on		 = 0b1,
} t_DMA_IRQSTAT_CH23_enum;




#define DMA_IRQSTATCLR	0x3000c054		 /*--  --*/

#define DMA_IRQSTATCLR_CH0_pos	 	 	 	0	 	 /*--  --*/
#define DMA_IRQSTATCLR_CH1_pos	 	 	 	1	 	 /*--  --*/
#define DMA_IRQSTATCLR_CH2_pos	 	 	 	2	 	 /*--  --*/
#define DMA_IRQSTATCLR_CH3_pos	 	 	 	3	 	 /*--  --*/
#define DMA_IRQSTATCLR_CH4_pos	 	 	 	4	 	 /*--  --*/
#define DMA_IRQSTATCLR_CH5_pos	 	 	 	5	 	 /*--  --*/
#define DMA_IRQSTATCLR_CH6_pos	 	 	 	6	 	 /*--  --*/
#define DMA_IRQSTATCLR_CH7_pos	 	 	 	7	 	 /*--  --*/
#define DMA_IRQSTATCLR_CH8_pos	 	 	 	8	 	 /*--  --*/
#define DMA_IRQSTATCLR_CH9_pos	 	 	 	9	 	 /*--  --*/
#define DMA_IRQSTATCLR_CH10_pos	 	 	 	10	 	 /*--  --*/
#define DMA_IRQSTATCLR_CH11_pos	 	 	 	11	 	 /*--  --*/
#define DMA_IRQSTATCLR_CH12_pos	 	 	 	12	 	 /*--  --*/
#define DMA_IRQSTATCLR_CH13_pos	 	 	 	13	 	 /*--  --*/
#define DMA_IRQSTATCLR_CH14_pos	 	 	 	14	 	 /*--  --*/
#define DMA_IRQSTATCLR_CH15_pos	 	 	 	15	 	 /*--  --*/
#define DMA_IRQSTATCLR_CH16_pos	 	 	 	16	 	 /*--  --*/
#define DMA_IRQSTATCLR_CH17_pos	 	 	 	17	 	 /*--  --*/
#define DMA_IRQSTATCLR_CH18_pos	 	 	 	18	 	 /*--  --*/
#define DMA_IRQSTATCLR_CH19_pos	 	 	 	19	 	 /*--  --*/
#define DMA_IRQSTATCLR_CH20_pos	 	 	 	20	 	 /*--  --*/
#define DMA_IRQSTATCLR_CH21_pos	 	 	 	21	 	 /*--  --*/
#define DMA_IRQSTATCLR_CH22_pos	 	 	 	22	 	 /*--  --*/
#define DMA_IRQSTATCLR_CH23_pos	 	 	 	23	 	 /*--  --*/


#define DMA_IRQSTATCLR_CH0_msk	 	 	 	0x00000001UL
#define DMA_IRQSTATCLR_CH1_msk	 	 	 	0x00000002UL
#define DMA_IRQSTATCLR_CH2_msk	 	 	 	0x00000004UL
#define DMA_IRQSTATCLR_CH3_msk	 	 	 	0x00000008UL
#define DMA_IRQSTATCLR_CH4_msk	 	 	 	0x00000010UL
#define DMA_IRQSTATCLR_CH5_msk	 	 	 	0x00000020UL
#define DMA_IRQSTATCLR_CH6_msk	 	 	 	0x00000040UL
#define DMA_IRQSTATCLR_CH7_msk	 	 	 	0x00000080UL
#define DMA_IRQSTATCLR_CH8_msk	 	 	 	0x00000100UL
#define DMA_IRQSTATCLR_CH9_msk	 	 	 	0x00000200UL
#define DMA_IRQSTATCLR_CH10_msk	 	 	 	0x00000400UL
#define DMA_IRQSTATCLR_CH11_msk	 	 	 	0x00000800UL
#define DMA_IRQSTATCLR_CH12_msk	 	 	 	0x00001000UL
#define DMA_IRQSTATCLR_CH13_msk	 	 	 	0x00002000UL
#define DMA_IRQSTATCLR_CH14_msk	 	 	 	0x00004000UL
#define DMA_IRQSTATCLR_CH15_msk	 	 	 	0x00008000UL
#define DMA_IRQSTATCLR_CH16_msk	 	 	 	0x00010000UL
#define DMA_IRQSTATCLR_CH17_msk	 	 	 	0x00020000UL
#define DMA_IRQSTATCLR_CH18_msk	 	 	 	0x00040000UL
#define DMA_IRQSTATCLR_CH19_msk	 	 	 	0x00080000UL
#define DMA_IRQSTATCLR_CH20_msk	 	 	 	0x00100000UL
#define DMA_IRQSTATCLR_CH21_msk	 	 	 	0x00200000UL
#define DMA_IRQSTATCLR_CH22_msk	 	 	 	0x00400000UL
#define DMA_IRQSTATCLR_CH23_msk	 	 	 	0x00800000UL


typedef struct {
uint32_t 	 	DMA_IRQSTATCLR_CH0	 	:1;
uint32_t 	 	DMA_IRQSTATCLR_CH1	 	:1;
uint32_t 	 	DMA_IRQSTATCLR_CH2	 	:1;
uint32_t 	 	DMA_IRQSTATCLR_CH3	 	:1;
uint32_t 	 	DMA_IRQSTATCLR_CH4	 	:1;
uint32_t 	 	DMA_IRQSTATCLR_CH5	 	:1;
uint32_t 	 	DMA_IRQSTATCLR_CH6	 	:1;
uint32_t 	 	DMA_IRQSTATCLR_CH7	 	:1;
uint32_t 	 	DMA_IRQSTATCLR_CH8	 	:1;
uint32_t 	 	DMA_IRQSTATCLR_CH9	 	:1;
uint32_t 	 	DMA_IRQSTATCLR_CH10	 	:1;
uint32_t 	 	DMA_IRQSTATCLR_CH11	 	:1;
uint32_t 	 	DMA_IRQSTATCLR_CH12	 	:1;
uint32_t 	 	DMA_IRQSTATCLR_CH13	 	:1;
uint32_t 	 	DMA_IRQSTATCLR_CH14	 	:1;
uint32_t 	 	DMA_IRQSTATCLR_CH15	 	:1;
uint32_t 	 	DMA_IRQSTATCLR_CH16	 	:1;
uint32_t 	 	DMA_IRQSTATCLR_CH17	 	:1;
uint32_t 	 	DMA_IRQSTATCLR_CH18	 	:1;
uint32_t 	 	DMA_IRQSTATCLR_CH19	 	:1;
uint32_t 	 	DMA_IRQSTATCLR_CH20	 	:1;
uint32_t 	 	DMA_IRQSTATCLR_CH21	 	:1;
uint32_t 	 	DMA_IRQSTATCLR_CH22	 	:1;
uint32_t 	 	DMA_IRQSTATCLR_CH23	 	:1;
uint32_t 	 	 	 	:8;
} t_DMA_IRQSTATCLR_bits;


typedef enum { 
 	DMA_IRQSTATCLR_CH0_off		 = 0b0,
	DMA_IRQSTATCLR_CH0_on		 = 0b1,
} t_DMA_IRQSTATCLR_CH0_enum;

typedef enum { 
 	DMA_IRQSTATCLR_CH1_off		 = 0b0,
	DMA_IRQSTATCLR_CH1_on		 = 0b1,
} t_DMA_IRQSTATCLR_CH1_enum;

typedef enum { 
 	DMA_IRQSTATCLR_CH2_off		 = 0b0,
	DMA_IRQSTATCLR_CH2_on		 = 0b1,
} t_DMA_IRQSTATCLR_CH2_enum;

typedef enum { 
 	DMA_IRQSTATCLR_CH3_off		 = 0b0,
	DMA_IRQSTATCLR_CH3_on		 = 0b1,
} t_DMA_IRQSTATCLR_CH3_enum;

typedef enum { 
 	DMA_IRQSTATCLR_CH4_off		 = 0b0,
	DMA_IRQSTATCLR_CH4_on		 = 0b1,
} t_DMA_IRQSTATCLR_CH4_enum;

typedef enum { 
 	DMA_IRQSTATCLR_CH5_off		 = 0b0,
	DMA_IRQSTATCLR_CH5_on		 = 0b1,
} t_DMA_IRQSTATCLR_CH5_enum;

typedef enum { 
 	DMA_IRQSTATCLR_CH6_off		 = 0b0,
	DMA_IRQSTATCLR_CH6_on		 = 0b1,
} t_DMA_IRQSTATCLR_CH6_enum;

typedef enum { 
 	DMA_IRQSTATCLR_CH7_off		 = 0b0,
	DMA_IRQSTATCLR_CH7_on		 = 0b1,
} t_DMA_IRQSTATCLR_CH7_enum;

typedef enum { 
 	DMA_IRQSTATCLR_CH8_off		 = 0b0,
	DMA_IRQSTATCLR_CH8_on		 = 0b1,
} t_DMA_IRQSTATCLR_CH8_enum;

typedef enum { 
 	DMA_IRQSTATCLR_CH9_off		 = 0b0,
	DMA_IRQSTATCLR_CH9_on		 = 0b1,
} t_DMA_IRQSTATCLR_CH9_enum;

typedef enum { 
 	DMA_IRQSTATCLR_CH10_off		 = 0b0,
	DMA_IRQSTATCLR_CH10_on		 = 0b1,
} t_DMA_IRQSTATCLR_CH10_enum;

typedef enum { 
 	DMA_IRQSTATCLR_CH11_off		 = 0b0,
	DMA_IRQSTATCLR_CH11_on		 = 0b1,
} t_DMA_IRQSTATCLR_CH11_enum;

typedef enum { 
 	DMA_IRQSTATCLR_CH12_off		 = 0b0,
	DMA_IRQSTATCLR_CH12_on		 = 0b1,
} t_DMA_IRQSTATCLR_CH12_enum;

typedef enum { 
 	DMA_IRQSTATCLR_CH13_off		 = 0b0,
	DMA_IRQSTATCLR_CH13_on		 = 0b1,
} t_DMA_IRQSTATCLR_CH13_enum;

typedef enum { 
 	DMA_IRQSTATCLR_CH14_off		 = 0b0,
	DMA_IRQSTATCLR_CH14_on		 = 0b1,
} t_DMA_IRQSTATCLR_CH14_enum;

typedef enum { 
 	DMA_IRQSTATCLR_CH15_off		 = 0b0,
	DMA_IRQSTATCLR_CH15_on		 = 0b1,
} t_DMA_IRQSTATCLR_CH15_enum;

typedef enum { 
 	DMA_IRQSTATCLR_CH16_off		 = 0b0,
	DMA_IRQSTATCLR_CH16_on		 = 0b1,
} t_DMA_IRQSTATCLR_CH16_enum;

typedef enum { 
 	DMA_IRQSTATCLR_CH17_off		 = 0b0,
	DMA_IRQSTATCLR_CH17_on		 = 0b1,
} t_DMA_IRQSTATCLR_CH17_enum;

typedef enum { 
 	DMA_IRQSTATCLR_CH18_off		 = 0b0,
	DMA_IRQSTATCLR_CH18_on		 = 0b1,
} t_DMA_IRQSTATCLR_CH18_enum;

typedef enum { 
 	DMA_IRQSTATCLR_CH19_off		 = 0b0,
	DMA_IRQSTATCLR_CH19_on		 = 0b1,
} t_DMA_IRQSTATCLR_CH19_enum;

typedef enum { 
 	DMA_IRQSTATCLR_CH20_off		 = 0b0,
	DMA_IRQSTATCLR_CH20_on		 = 0b1,
} t_DMA_IRQSTATCLR_CH20_enum;

typedef enum { 
 	DMA_IRQSTATCLR_CH21_off		 = 0b0,
	DMA_IRQSTATCLR_CH21_on		 = 0b1,
} t_DMA_IRQSTATCLR_CH21_enum;

typedef enum { 
 	DMA_IRQSTATCLR_CH22_off		 = 0b0,
	DMA_IRQSTATCLR_CH22_on		 = 0b1,
} t_DMA_IRQSTATCLR_CH22_enum;

typedef enum { 
 	DMA_IRQSTATCLR_CH23_off		 = 0b0,
	DMA_IRQSTATCLR_CH23_on		 = 0b1,
} t_DMA_IRQSTATCLR_CH23_enum;



typedef struct { 
union {
 __IO uint32_t 	DMA_STATUS_reg;
 __IO t_DMA_STATUS_bits	 DMA_STATUS_bit;
};
union {
 __IO uint32_t 	DMA_CFG_reg;
 __IO t_DMA_CFG_bits	 DMA_CFG_bit;
};
union {
 __IO uint32_t 	DMA_BASEPTR_reg;
 __IO t_DMA_BASEPTR_bits	 DMA_BASEPTR_bit;
};
union {
 __IO uint32_t 	DMA_ALTBASEPTR_reg;
 __IO t_DMA_ALTBASEPTR_bits	 DMA_ALTBASEPTR_bit;
};
union {
 __IO uint32_t 	DMA_WAITONREQ_reg;
 __IO t_DMA_WAITONREQ_bits	 DMA_WAITONREQ_bit;
};
union {
 __IO uint32_t 	DMA_SWREQ_reg;
 __IO t_DMA_SWREQ_bits	 DMA_SWREQ_bit;
};
union {
 __IO uint32_t 	DMA_USEBURSTSET_reg;
 __IO t_DMA_USEBURSTSET_bits	 DMA_USEBURSTSET_bit;
};
union {
 __IO uint32_t 	DMA_USEBURSTCLR_reg;
 __IO t_DMA_USEBURSTCLR_bits	 DMA_USEBURSTCLR_bit;
};
union {
 __IO uint32_t 	DMA_REQMASKSET_reg;
 __IO t_DMA_REQMASKSET_bits	 DMA_REQMASKSET_bit;
};
union {
 __IO uint32_t 	DMA_REQMASKCLR_reg;
 __IO t_DMA_REQMASKCLR_bits	 DMA_REQMASKCLR_bit;
};
union {
 __IO uint32_t 	DMA_ENSET_reg;
 __IO t_DMA_ENSET_bits	 DMA_ENSET_bit;
};
union {
 __IO uint32_t 	DMA_ENCLR_reg;
 __IO t_DMA_ENCLR_bits	 DMA_ENCLR_bit;
};
union {
 __IO uint32_t 	DMA_PRIALTSET_reg;
 __IO t_DMA_PRIALTSET_bits	 DMA_PRIALTSET_bit;
};
union {
 __IO uint32_t 	DMA_PRIALTCLR_reg;
 __IO t_DMA_PRIALTCLR_bits	 DMA_PRIALTCLR_bit;
};
union {
 __IO uint32_t 	DMA_PRIORITYSET_reg;
 __IO t_DMA_PRIORITYSET_bits	 DMA_PRIORITYSET_bit;
};
union {
 __IO uint32_t 	DMA_PRIORITYCLR_reg;
 __IO t_DMA_PRIORITYCLR_bits	 DMA_PRIORITYCLR_bit;
};
union {
 __IO uint32_t 	DMA_CIRCULARSET_reg;
 __IO t_DMA_CIRCULARSET_bits	 DMA_CIRCULARSET_bit;
};
union {
 __IO uint32_t 	DMA_CIRCULARCLR_reg;
 __IO t_DMA_CIRCULARCLR_bits	 DMA_CIRCULARCLR_bit;
};
__IO uint32_t reserved0[1];
union {
 __IO uint32_t 	DMA_ERRCLR_reg;
 __IO t_DMA_ERRCLR_bits	 DMA_ERRCLR_bit;
};
union {
 __IO uint32_t 	DMA_IRQSTAT_reg;
 __IO t_DMA_IRQSTAT_bits	 DMA_IRQSTAT_bit;
};
union {
 __IO uint32_t 	DMA_IRQSTATCLR_reg;
 __IO t_DMA_IRQSTATCLR_bits	 DMA_IRQSTATCLR_bit;
};
} t_DMA_REG;



#define IWDT_LOAD	0x38012000		 /*--  --*/

#define IWDT_LOAD_VAL_pos	 	 	 	0	 	 /*--  --*/


#define IWDT_LOAD_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	IWDT_LOAD_VAL	 	:32;
} t_IWDT_LOAD_bits;





#define IWDT_VALUE	0x38012004		 /*--  --*/

#define IWDT_VALUE_VAL_pos	 	 	 	0	 	 /*--  --*/


#define IWDT_VALUE_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	IWDT_VALUE_VAL	 	:32;
} t_IWDT_VALUE_bits;





#define IWDT_CTRL	0x38012008		 /*--  --*/

#define IWDT_CTRL_INTEN_pos	 	 	 	0	 	 /*--  --*/
#define IWDT_CTRL_RESEN_pos	 	 	 	1	 	 /*--  --*/
#define IWDT_CTRL_BLK_pos	 	 	 	2	 	 /*--  --*/


#define IWDT_CTRL_INTEN_msk	 	 	 	0x00000001UL
#define IWDT_CTRL_RESEN_msk	 	 	 	0x00000002UL
#define IWDT_CTRL_BLK_msk	 	 	 	0x00000004UL


typedef struct {
uint32_t 	 	IWDT_CTRL_INTEN	 	:1;
uint32_t 	 	IWDT_CTRL_RESEN	 	:1;
uint32_t 	 	IWDT_CTRL_BLK	 	:1;
uint32_t 	 	 	 	:29;
} t_IWDT_CTRL_bits;


typedef enum { 
 	IWDT_CTRL_INTEN_off		 = 0b0,
	IWDT_CTRL_INTEN_on		 = 0b1,
} t_IWDT_CTRL_INTEN_enum;

typedef enum { 
 	IWDT_CTRL_RESEN_off		 = 0b0,
	IWDT_CTRL_RESEN_on		 = 0b1,
} t_IWDT_CTRL_RESEN_enum;

typedef enum { 
 	IWDT_CTRL_BLK_off		 = 0b0,
	IWDT_CTRL_BLK_on		 = 0b1,
} t_IWDT_CTRL_BLK_enum;




#define IWDT_INTCLR	0x3801200c		 /*--  --*/

#define IWDT_INTCLR_WDTCLR_pos	 	 	 	0	 	 /*--  --*/


#define IWDT_INTCLR_WDTCLR_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	IWDT_INTCLR_WDTCLR	 	:32;
} t_IWDT_INTCLR_bits;





#define IWDT_RIS	0x38012010		 /*--  --*/

#define IWDT_RIS_RAWWDTINT_pos	 	 	 	0	 	 /*--  --*/


#define IWDT_RIS_RAWWDTINT_msk	 	 	 	0x00000001UL


typedef struct {
uint32_t 	 	IWDT_RIS_RAWWDTINT	 	:1;
uint32_t 	 	 	 	:31;
} t_IWDT_RIS_bits;


typedef enum { 
 	IWDT_RIS_RAWWDTINT_off		 = 0b0,
	IWDT_RIS_RAWWDTINT_on		 = 0b1,
} t_IWDT_RIS_RAWWDTINT_enum;




#define IWDT_MIS	0x38012014		 /*--  --*/

#define IWDT_MIS_WDTINT_pos	 	 	 	0	 	 /*--  --*/


#define IWDT_MIS_WDTINT_msk	 	 	 	0x00000001UL


typedef struct {
uint32_t 	 	IWDT_MIS_WDTINT	 	:1;
uint32_t 	 	 	 	:31;
} t_IWDT_MIS_bits;


typedef enum { 
 	IWDT_MIS_WDTINT_off		 = 0b0,
	IWDT_MIS_WDTINT_on		 = 0b1,
} t_IWDT_MIS_WDTINT_enum;




#define IWDT_LOCK	0x38012c00		 /*--  --*/

#define IWDT_LOCK_REGWRDIS_pos	 	 	 	0	 	 /*--  --*/


#define IWDT_LOCK_REGWRDIS_msk	 	 	 	0x00000001UL


typedef struct {
uint32_t 	 	IWDT_LOCK_REGWRDIS	 	:1;
uint32_t 	 	 	 	:31;
} t_IWDT_LOCK_bits;


typedef enum { 
 	IWDT_LOCK_REGWRDIS_off		 = 0b0,
	IWDT_LOCK_REGWRDIS_on		 = 0b1,
} t_IWDT_LOCK_REGWRDIS_enum;



typedef struct { 
union {
 __IO uint32_t 	IWDT_LOAD_reg;
 __IO t_IWDT_LOAD_bits	 IWDT_LOAD_bit;
};
union {
 __IO uint32_t 	IWDT_VALUE_reg;
 __IO t_IWDT_VALUE_bits	 IWDT_VALUE_bit;
};
union {
 __IO uint32_t 	IWDT_CTRL_reg;
 __IO t_IWDT_CTRL_bits	 IWDT_CTRL_bit;
};
union {
 __IO uint32_t 	IWDT_INTCLR_reg;
 __IO t_IWDT_INTCLR_bits	 IWDT_INTCLR_bit;
};
union {
 __IO uint32_t 	IWDT_RIS_reg;
 __IO t_IWDT_RIS_bits	 IWDT_RIS_bit;
};
union {
 __IO uint32_t 	IWDT_MIS_reg;
 __IO t_IWDT_MIS_bits	 IWDT_MIS_bit;
};
__IO uint32_t reserved0[762];
union {
 __IO uint32_t 	IWDT_LOCK_reg;
 __IO t_IWDT_LOCK_bits	 IWDT_LOCK_bit;
};
} t_IWDT_REG;



#define PMUSYS_PDEN	0x3000f000		 /*--  --*/

#define PMUSYS_PDEN_PLLEN_pos	 	 	 	0	 	 /*--  --*/
#define PMUSYS_PDEN_USBEN_pos	 	 	 	1	 	 /*--  --*/
#define PMUSYS_PDEN_ADCEN_pos	 	 	 	2	 	 /*--  --*/
#define PMUSYS_PDEN_FLASHEN_pos	 	 	 	3	 	 /*--  --*/
#define PMUSYS_PDEN_SCMEN_pos	 	 	 	4	 	 /*--  --*/
#define PMUSYS_PDEN_SRAM0EN_pos	 	 	 	8	 	 /*--  --*/
#define PMUSYS_PDEN_SRAM1EN_pos	 	 	 	9	 	 /*--  --*/
#define PMUSYS_PDEN_SRAM2EN_pos	 	 	 	10	 	 /*--  --*/
#define PMUSYS_PDEN_SRAM3EN_pos	 	 	 	11	 	 /*--  --*/
#define PMUSYS_PDEN_SRAM4EN_pos	 	 	 	12	 	 /*--  --*/
#define PMUSYS_PDEN_SRAM5EN_pos	 	 	 	13	 	 /*--  --*/
#define PMUSYS_PDEN_SRAM6EN_pos	 	 	 	14	 	 /*--  --*/
#define PMUSYS_PDEN_SRAM7EN_pos	 	 	 	15	 	 /*--  --*/


#define PMUSYS_PDEN_PLLEN_msk	 	 	 	0x00000001UL
#define PMUSYS_PDEN_USBEN_msk	 	 	 	0x00000002UL
#define PMUSYS_PDEN_ADCEN_msk	 	 	 	0x00000004UL
#define PMUSYS_PDEN_FLASHEN_msk	 	 	 	0x00000008UL
#define PMUSYS_PDEN_SCMEN_msk	 	 	 	0x00000010UL
#define PMUSYS_PDEN_SRAM0EN_msk	 	 	 	0x00000100UL
#define PMUSYS_PDEN_SRAM1EN_msk	 	 	 	0x00000200UL
#define PMUSYS_PDEN_SRAM2EN_msk	 	 	 	0x00000400UL
#define PMUSYS_PDEN_SRAM3EN_msk	 	 	 	0x00000800UL
#define PMUSYS_PDEN_SRAM4EN_msk	 	 	 	0x00001000UL
#define PMUSYS_PDEN_SRAM5EN_msk	 	 	 	0x00002000UL
#define PMUSYS_PDEN_SRAM6EN_msk	 	 	 	0x00004000UL
#define PMUSYS_PDEN_SRAM7EN_msk	 	 	 	0x00008000UL


typedef struct {
uint32_t 	 	PMUSYS_PDEN_PLLEN	 	:1;
uint32_t 	 	PMUSYS_PDEN_USBEN	 	:1;
uint32_t 	 	PMUSYS_PDEN_ADCEN	 	:1;
uint32_t 	 	PMUSYS_PDEN_FLASHEN	 	:1;
uint32_t 	 	PMUSYS_PDEN_SCMEN	 	:1;
uint32_t 	 	 	 	:3;
uint32_t 	 	PMUSYS_PDEN_SRAM0EN	 	:1;
uint32_t 	 	PMUSYS_PDEN_SRAM1EN	 	:1;
uint32_t 	 	PMUSYS_PDEN_SRAM2EN	 	:1;
uint32_t 	 	PMUSYS_PDEN_SRAM3EN	 	:1;
uint32_t 	 	PMUSYS_PDEN_SRAM4EN	 	:1;
uint32_t 	 	PMUSYS_PDEN_SRAM5EN	 	:1;
uint32_t 	 	PMUSYS_PDEN_SRAM6EN	 	:1;
uint32_t 	 	PMUSYS_PDEN_SRAM7EN	 	:1;
uint32_t 	 	 	 	:16;
} t_PMUSYS_PDEN_bits;


typedef enum { 
 	PMUSYS_PDEN_PLLEN_off		 = 0b0,
	PMUSYS_PDEN_PLLEN_on		 = 0b1,
} t_PMUSYS_PDEN_PLLEN_enum;

typedef enum { 
 	PMUSYS_PDEN_USBEN_off		 = 0b0,
	PMUSYS_PDEN_USBEN_on		 = 0b1,
} t_PMUSYS_PDEN_USBEN_enum;

typedef enum { 
 	PMUSYS_PDEN_ADCEN_off		 = 0b0,
	PMUSYS_PDEN_ADCEN_on		 = 0b1,
} t_PMUSYS_PDEN_ADCEN_enum;

typedef enum { 
 	PMUSYS_PDEN_FLASHEN_off		 = 0b0,
	PMUSYS_PDEN_FLASHEN_on		 = 0b1,
} t_PMUSYS_PDEN_FLASHEN_enum;

typedef enum { 
 	PMUSYS_PDEN_SCMEN_off		 = 0b0,
	PMUSYS_PDEN_SCMEN_on		 = 0b1,
} t_PMUSYS_PDEN_SCMEN_enum;

typedef enum { 
 	PMUSYS_PDEN_SRAM0EN_off		 = 0b0,
	PMUSYS_PDEN_SRAM0EN_on		 = 0b1,
} t_PMUSYS_PDEN_SRAM0EN_enum;

typedef enum { 
 	PMUSYS_PDEN_SRAM1EN_off		 = 0b0,
	PMUSYS_PDEN_SRAM1EN_on		 = 0b1,
} t_PMUSYS_PDEN_SRAM1EN_enum;

typedef enum { 
 	PMUSYS_PDEN_SRAM2EN_off		 = 0b0,
	PMUSYS_PDEN_SRAM2EN_on		 = 0b1,
} t_PMUSYS_PDEN_SRAM2EN_enum;

typedef enum { 
 	PMUSYS_PDEN_SRAM3EN_off		 = 0b0,
	PMUSYS_PDEN_SRAM3EN_on		 = 0b1,
} t_PMUSYS_PDEN_SRAM3EN_enum;

typedef enum { 
 	PMUSYS_PDEN_SRAM4EN_off		 = 0b0,
	PMUSYS_PDEN_SRAM4EN_on		 = 0b1,
} t_PMUSYS_PDEN_SRAM4EN_enum;

typedef enum { 
 	PMUSYS_PDEN_SRAM5EN_off		 = 0b0,
	PMUSYS_PDEN_SRAM5EN_on		 = 0b1,
} t_PMUSYS_PDEN_SRAM5EN_enum;

typedef enum { 
 	PMUSYS_PDEN_SRAM6EN_off		 = 0b0,
	PMUSYS_PDEN_SRAM6EN_on		 = 0b1,
} t_PMUSYS_PDEN_SRAM6EN_enum;

typedef enum { 
 	PMUSYS_PDEN_SRAM7EN_off		 = 0b0,
	PMUSYS_PDEN_SRAM7EN_on		 = 0b1,
} t_PMUSYS_PDEN_SRAM7EN_enum;




#define PMUSYS_PDENFORCE	0x3000f004		 /*--  --*/

#define PMUSYS_PDENFORCE_PLLEN_pos	 	 	 	0	 	 /*--  --*/
#define PMUSYS_PDENFORCE_USBEN_pos	 	 	 	1	 	 /*--  --*/
#define PMUSYS_PDENFORCE_ADCEN_pos	 	 	 	2	 	 /*--  --*/
#define PMUSYS_PDENFORCE_FLASHEN_pos	 	 	 	3	 	 /*--  --*/
#define PMUSYS_PDENFORCE_SCMEN_pos	 	 	 	4	 	 /*--  --*/
#define PMUSYS_PDENFORCE_SRAM0EN_pos	 	 	 	8	 	 /*--  --*/
#define PMUSYS_PDENFORCE_SRAM1EN_pos	 	 	 	9	 	 /*--  --*/
#define PMUSYS_PDENFORCE_SRAM2EN_pos	 	 	 	10	 	 /*--  --*/
#define PMUSYS_PDENFORCE_SRAM3EN_pos	 	 	 	11	 	 /*--  --*/
#define PMUSYS_PDENFORCE_SRAM4EN_pos	 	 	 	12	 	 /*--  --*/
#define PMUSYS_PDENFORCE_SRAM5EN_pos	 	 	 	13	 	 /*--  --*/
#define PMUSYS_PDENFORCE_SRAM6EN_pos	 	 	 	14	 	 /*--  --*/
#define PMUSYS_PDENFORCE_SRAM7EN_pos	 	 	 	15	 	 /*--  --*/


#define PMUSYS_PDENFORCE_PLLEN_msk	 	 	 	0x00000001UL
#define PMUSYS_PDENFORCE_USBEN_msk	 	 	 	0x00000002UL
#define PMUSYS_PDENFORCE_ADCEN_msk	 	 	 	0x00000004UL
#define PMUSYS_PDENFORCE_FLASHEN_msk	 	 	 	0x00000008UL
#define PMUSYS_PDENFORCE_SCMEN_msk	 	 	 	0x00000010UL
#define PMUSYS_PDENFORCE_SRAM0EN_msk	 	 	 	0x00000100UL
#define PMUSYS_PDENFORCE_SRAM1EN_msk	 	 	 	0x00000200UL
#define PMUSYS_PDENFORCE_SRAM2EN_msk	 	 	 	0x00000400UL
#define PMUSYS_PDENFORCE_SRAM3EN_msk	 	 	 	0x00000800UL
#define PMUSYS_PDENFORCE_SRAM4EN_msk	 	 	 	0x00001000UL
#define PMUSYS_PDENFORCE_SRAM5EN_msk	 	 	 	0x00002000UL
#define PMUSYS_PDENFORCE_SRAM6EN_msk	 	 	 	0x00004000UL
#define PMUSYS_PDENFORCE_SRAM7EN_msk	 	 	 	0x00008000UL


typedef struct {
uint32_t 	 	PMUSYS_PDENFORCE_PLLEN	 	:1;
uint32_t 	 	PMUSYS_PDENFORCE_USBEN	 	:1;
uint32_t 	 	PMUSYS_PDENFORCE_ADCEN	 	:1;
uint32_t 	 	PMUSYS_PDENFORCE_FLASHEN	 	:1;
uint32_t 	 	PMUSYS_PDENFORCE_SCMEN	 	:1;
uint32_t 	 	 	 	:3;
uint32_t 	 	PMUSYS_PDENFORCE_SRAM0EN	 	:1;
uint32_t 	 	PMUSYS_PDENFORCE_SRAM1EN	 	:1;
uint32_t 	 	PMUSYS_PDENFORCE_SRAM2EN	 	:1;
uint32_t 	 	PMUSYS_PDENFORCE_SRAM3EN	 	:1;
uint32_t 	 	PMUSYS_PDENFORCE_SRAM4EN	 	:1;
uint32_t 	 	PMUSYS_PDENFORCE_SRAM5EN	 	:1;
uint32_t 	 	PMUSYS_PDENFORCE_SRAM6EN	 	:1;
uint32_t 	 	PMUSYS_PDENFORCE_SRAM7EN	 	:1;
uint32_t 	 	 	 	:16;
} t_PMUSYS_PDENFORCE_bits;


typedef enum { 
 	PMUSYS_PDENFORCE_PLLEN_off		 = 0b0,
	PMUSYS_PDENFORCE_PLLEN_on		 = 0b1,
} t_PMUSYS_PDENFORCE_PLLEN_enum;

typedef enum { 
 	PMUSYS_PDENFORCE_USBEN_off		 = 0b0,
	PMUSYS_PDENFORCE_USBEN_on		 = 0b1,
} t_PMUSYS_PDENFORCE_USBEN_enum;

typedef enum { 
 	PMUSYS_PDENFORCE_ADCEN_off		 = 0b0,
	PMUSYS_PDENFORCE_ADCEN_on		 = 0b1,
} t_PMUSYS_PDENFORCE_ADCEN_enum;

typedef enum { 
 	PMUSYS_PDENFORCE_FLASHEN_off		 = 0b0,
	PMUSYS_PDENFORCE_FLASHEN_on		 = 0b1,
} t_PMUSYS_PDENFORCE_FLASHEN_enum;

typedef enum { 
 	PMUSYS_PDENFORCE_SCMEN_off		 = 0b0,
	PMUSYS_PDENFORCE_SCMEN_on		 = 0b1,
} t_PMUSYS_PDENFORCE_SCMEN_enum;

typedef enum { 
 	PMUSYS_PDENFORCE_SRAM0EN_off		 = 0b0,
	PMUSYS_PDENFORCE_SRAM0EN_on		 = 0b1,
} t_PMUSYS_PDENFORCE_SRAM0EN_enum;

typedef enum { 
 	PMUSYS_PDENFORCE_SRAM1EN_off		 = 0b0,
	PMUSYS_PDENFORCE_SRAM1EN_on		 = 0b1,
} t_PMUSYS_PDENFORCE_SRAM1EN_enum;

typedef enum { 
 	PMUSYS_PDENFORCE_SRAM2EN_off		 = 0b0,
	PMUSYS_PDENFORCE_SRAM2EN_on		 = 0b1,
} t_PMUSYS_PDENFORCE_SRAM2EN_enum;

typedef enum { 
 	PMUSYS_PDENFORCE_SRAM3EN_off		 = 0b0,
	PMUSYS_PDENFORCE_SRAM3EN_on		 = 0b1,
} t_PMUSYS_PDENFORCE_SRAM3EN_enum;

typedef enum { 
 	PMUSYS_PDENFORCE_SRAM4EN_off		 = 0b0,
	PMUSYS_PDENFORCE_SRAM4EN_on		 = 0b1,
} t_PMUSYS_PDENFORCE_SRAM4EN_enum;

typedef enum { 
 	PMUSYS_PDENFORCE_SRAM5EN_off		 = 0b0,
	PMUSYS_PDENFORCE_SRAM5EN_on		 = 0b1,
} t_PMUSYS_PDENFORCE_SRAM5EN_enum;

typedef enum { 
 	PMUSYS_PDENFORCE_SRAM6EN_off		 = 0b0,
	PMUSYS_PDENFORCE_SRAM6EN_on		 = 0b1,
} t_PMUSYS_PDENFORCE_SRAM6EN_enum;

typedef enum { 
 	PMUSYS_PDENFORCE_SRAM7EN_off		 = 0b0,
	PMUSYS_PDENFORCE_SRAM7EN_on		 = 0b1,
} t_PMUSYS_PDENFORCE_SRAM7EN_enum;




#define PMUSYS_RETEN	0x3000f008		 /*--  --*/

#define PMUSYS_RETEN_SRAM0EN_pos	 	 	 	8	 	 /*--  --*/
#define PMUSYS_RETEN_SRAM1EN_pos	 	 	 	9	 	 /*--  --*/
#define PMUSYS_RETEN_SRAM2EN_pos	 	 	 	10	 	 /*--  --*/
#define PMUSYS_RETEN_SRAM3EN_pos	 	 	 	11	 	 /*--  --*/
#define PMUSYS_RETEN_SRAM4EN_pos	 	 	 	12	 	 /*--  --*/
#define PMUSYS_RETEN_SRAM5EN_pos	 	 	 	13	 	 /*--  --*/
#define PMUSYS_RETEN_SRAM6EN_pos	 	 	 	14	 	 /*--  --*/
#define PMUSYS_RETEN_SRAM7EN_pos	 	 	 	15	 	 /*--  --*/


#define PMUSYS_RETEN_SRAM0EN_msk	 	 	 	0x00000100UL
#define PMUSYS_RETEN_SRAM1EN_msk	 	 	 	0x00000200UL
#define PMUSYS_RETEN_SRAM2EN_msk	 	 	 	0x00000400UL
#define PMUSYS_RETEN_SRAM3EN_msk	 	 	 	0x00000800UL
#define PMUSYS_RETEN_SRAM4EN_msk	 	 	 	0x00001000UL
#define PMUSYS_RETEN_SRAM5EN_msk	 	 	 	0x00002000UL
#define PMUSYS_RETEN_SRAM6EN_msk	 	 	 	0x00004000UL
#define PMUSYS_RETEN_SRAM7EN_msk	 	 	 	0x00008000UL


typedef struct {
uint32_t 	 	 	 	:8;
uint32_t 	 	PMUSYS_RETEN_SRAM0EN	 	:1;
uint32_t 	 	PMUSYS_RETEN_SRAM1EN	 	:1;
uint32_t 	 	PMUSYS_RETEN_SRAM2EN	 	:1;
uint32_t 	 	PMUSYS_RETEN_SRAM3EN	 	:1;
uint32_t 	 	PMUSYS_RETEN_SRAM4EN	 	:1;
uint32_t 	 	PMUSYS_RETEN_SRAM5EN	 	:1;
uint32_t 	 	PMUSYS_RETEN_SRAM6EN	 	:1;
uint32_t 	 	PMUSYS_RETEN_SRAM7EN	 	:1;
uint32_t 	 	 	 	:16;
} t_PMUSYS_RETEN_bits;


typedef enum { 
 	PMUSYS_RETEN_SRAM0EN_off		 = 0b0,
	PMUSYS_RETEN_SRAM0EN_on		 = 0b1,
} t_PMUSYS_RETEN_SRAM0EN_enum;

typedef enum { 
 	PMUSYS_RETEN_SRAM1EN_off		 = 0b0,
	PMUSYS_RETEN_SRAM1EN_on		 = 0b1,
} t_PMUSYS_RETEN_SRAM1EN_enum;

typedef enum { 
 	PMUSYS_RETEN_SRAM2EN_off		 = 0b0,
	PMUSYS_RETEN_SRAM2EN_on		 = 0b1,
} t_PMUSYS_RETEN_SRAM2EN_enum;

typedef enum { 
 	PMUSYS_RETEN_SRAM3EN_off		 = 0b0,
	PMUSYS_RETEN_SRAM3EN_on		 = 0b1,
} t_PMUSYS_RETEN_SRAM3EN_enum;

typedef enum { 
 	PMUSYS_RETEN_SRAM4EN_off		 = 0b0,
	PMUSYS_RETEN_SRAM4EN_on		 = 0b1,
} t_PMUSYS_RETEN_SRAM4EN_enum;

typedef enum { 
 	PMUSYS_RETEN_SRAM5EN_off		 = 0b0,
	PMUSYS_RETEN_SRAM5EN_on		 = 0b1,
} t_PMUSYS_RETEN_SRAM5EN_enum;

typedef enum { 
 	PMUSYS_RETEN_SRAM6EN_off		 = 0b0,
	PMUSYS_RETEN_SRAM6EN_on		 = 0b1,
} t_PMUSYS_RETEN_SRAM6EN_enum;

typedef enum { 
 	PMUSYS_RETEN_SRAM7EN_off		 = 0b0,
	PMUSYS_RETEN_SRAM7EN_on		 = 0b1,
} t_PMUSYS_RETEN_SRAM7EN_enum;




#define PMUSYS_ADCPWRCFG	0x3000f010		 /*--  --*/

#define PMUSYS_ADCPWRCFG_LDOEN_pos	 	 	 	0	 	 /*--  --*/
#define PMUSYS_ADCPWRCFG_LVLDIS_pos	 	 	 	1	 	 /*--  --*/


#define PMUSYS_ADCPWRCFG_LDOEN_msk	 	 	 	0x00000001UL
#define PMUSYS_ADCPWRCFG_LVLDIS_msk	 	 	 	0x00000002UL


typedef struct {
uint32_t 	 	PMUSYS_ADCPWRCFG_LDOEN	 	:1;
uint32_t 	 	PMUSYS_ADCPWRCFG_LVLDIS	 	:1;
uint32_t 	 	 	 	:30;
} t_PMUSYS_ADCPWRCFG_bits;


typedef enum { 
 	PMUSYS_ADCPWRCFG_LDOEN_off		 = 0b0,
	PMUSYS_ADCPWRCFG_LDOEN_on		 = 0b1,
} t_PMUSYS_ADCPWRCFG_LDOEN_enum;

typedef enum { 
 	PMUSYS_ADCPWRCFG_LVLDIS_off		 = 0b0,
	PMUSYS_ADCPWRCFG_LVLDIS_on		 = 0b1,
} t_PMUSYS_ADCPWRCFG_LVLDIS_enum;




#define PMUSYS_CHIPID	0x3000f100		 /*--  --*/

#define PMUSYS_CHIPID_REV_pos	 	 	 	0	 	 /*--  --*/
#define PMUSYS_CHIPID_ID_pos	 	 	 	4	 	 /*--  --*/


#define PMUSYS_CHIPID_REV_msk	 	 	 	0x0000000fUL
#define PMUSYS_CHIPID_ID_msk	 	 	 	0xfffffff0UL


typedef struct {
uint32_t 	 	PMUSYS_CHIPID_REV	 	:4;
uint32_t 	 	PMUSYS_CHIPID_ID	 	:28;
} t_PMUSYS_CHIPID_bits;





#define PMUSYS_SERVCTL	0x3000f104		 /*--  --*/

#define PMUSYS_SERVCTL_SERVEN_pos	 	 	 	0	 	 /*--  --*/
#define PMUSYS_SERVCTL_DONE_pos	 	 	 	8	 	 /*--  --*/


#define PMUSYS_SERVCTL_SERVEN_msk	 	 	 	0x00000001UL
#define PMUSYS_SERVCTL_DONE_msk	 	 	 	0x00000100UL


typedef struct {
uint32_t 	 	PMUSYS_SERVCTL_SERVEN	 	:1;
uint32_t 	 	 	 	:7;
uint32_t 	 	PMUSYS_SERVCTL_DONE	 	:1;
uint32_t 	 	 	 	:23;
} t_PMUSYS_SERVCTL_bits;


typedef enum { 
 	PMUSYS_SERVCTL_SERVEN_off		 = 0b0,
	PMUSYS_SERVCTL_SERVEN_on		 = 0b1,
} t_PMUSYS_SERVCTL_SERVEN_enum;

typedef enum { 
 	PMUSYS_SERVCTL_DONE_off		 = 0b0,
	PMUSYS_SERVCTL_DONE_on		 = 0b1,
} t_PMUSYS_SERVCTL_DONE_enum;



typedef struct { 
union {
 __IO uint32_t 	PMUSYS_PDEN_reg;
 __IO t_PMUSYS_PDEN_bits	 PMUSYS_PDEN_bit;
};
union {
 __IO uint32_t 	PMUSYS_PDENFORCE_reg;
 __IO t_PMUSYS_PDENFORCE_bits	 PMUSYS_PDENFORCE_bit;
};
union {
 __IO uint32_t 	PMUSYS_RETEN_reg;
 __IO t_PMUSYS_RETEN_bits	 PMUSYS_RETEN_bit;
};
__IO uint32_t reserved0[1];
union {
 __IO uint32_t 	PMUSYS_ADCPWRCFG_reg;
 __IO t_PMUSYS_ADCPWRCFG_bits	 PMUSYS_ADCPWRCFG_bit;
};
__IO uint32_t reserved1[59];
union {
 __IO uint32_t 	PMUSYS_CHIPID_reg;
 __IO t_PMUSYS_CHIPID_bits	 PMUSYS_CHIPID_bit;
};
union {
 __IO uint32_t 	PMUSYS_SERVCTL_reg;
 __IO t_PMUSYS_SERVCTL_bits	 PMUSYS_SERVCTL_bit;
};
} t_PMUSYS_REG;


typedef struct { 
} t_ADCSD_REG;



#define I2C_SDA	0x30005000		 /*--  --*/

#define I2C_SDA_DATA_pos	 	 	 	0	 	 /*--  --*/


#define I2C_SDA_DATA_msk	 	 	 	0x000000ffUL


typedef struct {
uint32_t 	 	I2C_SDA_DATA	 	:8;
uint32_t 	 	 	 	:24;
} t_I2C_SDA_bits;





#define I2C_ST	0x30005004		 /*--  --*/

#define I2C_ST_MODE_pos	 	 	 	0	 	 /*--  --*/
#define I2C_ST_INT_pos	 	 	 	7	 	 /*--  --*/


#define I2C_ST_MODE_msk	 	 	 	0x0000003fUL
#define I2C_ST_INT_msk	 	 	 	0x00000080UL


typedef struct {
uint32_t 	 	I2C_ST_MODE	 	:6;
uint32_t 	 	 	 	:1;
uint32_t 	 	I2C_ST_INT	 	:1;
uint32_t 	 	 	 	:24;
} t_I2C_ST_bits;


typedef enum { 
 	I2C_ST_MODE_idle		 = 0b000000,
	I2C_ST_MODE_stdone		 = 0b000001,
	I2C_ST_MODE_rsdone		 = 0b000010,
	I2C_ST_MODE_idlarl		 = 0b000011,
	I2C_ST_MODE_mtadpa		 = 0b000100,
	I2C_ST_MODE_mtadna		 = 0b000101,
	I2C_ST_MODE_mtdapa		 = 0b000110,
	I2C_ST_MODE_mtdana		 = 0b000111,
	I2C_ST_MODE_mradpa		 = 0b001000,
	I2C_ST_MODE_mradna		 = 0b001001,
	I2C_ST_MODE_mrdapa		 = 0b001010,
	I2C_ST_MODE_mrdana		 = 0b001011,
	I2C_ST_MODE_mtmcer		 = 0b001100,
	I2C_ST_MODE_sradpa		 = 0b010000,
	I2C_ST_MODE_sraapa		 = 0b010001,
	I2C_ST_MODE_srdapa		 = 0b010010,
	I2C_ST_MODE_srdana		 = 0b010011,
	I2C_ST_MODE_stadpa		 = 0b010100,
	I2C_ST_MODE_staapa		 = 0b010101,
	I2C_ST_MODE_stdapa		 = 0b010110,
	I2C_ST_MODE_stdana		 = 0b010111,
	I2C_ST_MODE_satadp		 = 0b011000,
	I2C_ST_MODE_sataap		 = 0b011001,
	I2C_ST_MODE_satdap		 = 0b011010,
	I2C_ST_MODE_satdan		 = 0b011011,
	I2C_ST_MODE_sstop		 = 0b011100,
	I2C_ST_MODE_sgadpa		 = 0b011101,
	I2C_ST_MODE_sdaapa		 = 0b011110,
	I2C_ST_MODE_berror		 = 0b011111,
	I2C_ST_MODE_hmtmcok		 = 0b100001,
	I2C_ST_MODE_hrsdone		 = 0b100010,
	I2C_ST_MODE_hidlarl		 = 0b100011,
	I2C_ST_MODE_hmtadpa		 = 0b100100,
	I2C_ST_MODE_hmtadna		 = 0b100101,
	I2C_ST_MODE_hmtdapa		 = 0b100110,
	I2C_ST_MODE_hmtdana		 = 0b100111,
	I2C_ST_MODE_hmradpa		 = 0b101000,
	I2C_ST_MODE_hmradna		 = 0b101001,
	I2C_ST_MODE_hmrdapa		 = 0b101010,
	I2C_ST_MODE_hmrdana		 = 0b101011,
	I2C_ST_MODE_hsradpa		 = 0b110000,
	I2C_ST_MODE_hsrdapa		 = 0b110010,
	I2C_ST_MODE_hsrdana		 = 0b110011,
	I2C_ST_MODE_hstadpa		 = 0b110100,
	I2C_ST_MODE_hstdapa		 = 0b110110,
	I2C_ST_MODE_hstdana		 = 0b110111,
} t_I2C_ST_MODE_enum;

typedef enum { 
 	I2C_ST_INT_off		 = 0b0,
	I2C_ST_INT_on		 = 0b1,
} t_I2C_ST_INT_enum;




#define I2C_CST	0x30005008		 /*--  --*/

#define I2C_CST_BB_pos	 	 	 	0	 	 /*--  --*/
#define I2C_CST_TOCDIV_pos	 	 	 	1	 	 /*--  --*/
#define I2C_CST_TOERR_pos	 	 	 	3	 	 /*--  --*/
#define I2C_CST_TSDA_pos	 	 	 	4	 	 /*--  --*/
#define I2C_CST_TGSCL_pos	 	 	 	5	 	 /*--  --*/
#define I2C_CST_PECNEXT_pos	 	 	 	6	 	 /*--  --*/
#define I2C_CST_PECFAULT_pos	 	 	 	7	 	 /*--  --*/


#define I2C_CST_BB_msk	 	 	 	0x00000001UL
#define I2C_CST_TOCDIV_msk	 	 	 	0x00000006UL
#define I2C_CST_TOERR_msk	 	 	 	0x00000008UL
#define I2C_CST_TSDA_msk	 	 	 	0x00000010UL
#define I2C_CST_TGSCL_msk	 	 	 	0x00000020UL
#define I2C_CST_PECNEXT_msk	 	 	 	0x00000040UL
#define I2C_CST_PECFAULT_msk	 	 	 	0x00000080UL


typedef struct {
uint32_t 	 	I2C_CST_BB	 	:1;
uint32_t 	 	I2C_CST_TOCDIV	 	:2;
uint32_t 	 	I2C_CST_TOERR	 	:1;
uint32_t 	 	I2C_CST_TSDA	 	:1;
uint32_t 	 	I2C_CST_TGSCL	 	:1;
uint32_t 	 	I2C_CST_PECNEXT	 	:1;
uint32_t 	 	I2C_CST_PECFAULT	 	:1;
uint32_t 	 	 	 	:24;
} t_I2C_CST_bits;


typedef enum { 
 	I2C_CST_BB_off		 = 0b0,
	I2C_CST_BB_on		 = 0b1,
} t_I2C_CST_BB_enum;

typedef enum { 
 	I2C_CST_TOCDIV_disable		 = 0b00,
	I2C_CST_TOCDIV_div4		 = 0b01,
	I2C_CST_TOCDIV_div8		 = 0b10,
	I2C_CST_TOCDIV_div16		 = 0b11,
} t_I2C_CST_TOCDIV_enum;

typedef enum { 
 	I2C_CST_TOERR_off		 = 0b0,
	I2C_CST_TOERR_on		 = 0b1,
} t_I2C_CST_TOERR_enum;

typedef enum { 
 	I2C_CST_TSDA_off		 = 0b0,
	I2C_CST_TSDA_on		 = 0b1,
} t_I2C_CST_TSDA_enum;

typedef enum { 
 	I2C_CST_TGSCL_off		 = 0b0,
	I2C_CST_TGSCL_on		 = 0b1,
} t_I2C_CST_TGSCL_enum;

typedef enum { 
 	I2C_CST_PECNEXT_off		 = 0b0,
	I2C_CST_PECNEXT_on		 = 0b1,
} t_I2C_CST_PECNEXT_enum;

typedef enum { 
 	I2C_CST_PECFAULT_off		 = 0b0,
	I2C_CST_PECFAULT_on		 = 0b1,
} t_I2C_CST_PECFAULT_enum;




#define I2C_CTL0	0x3000500c		 /*--  --*/

#define I2C_CTL0_START_pos	 	 	 	0	 	 /*--  --*/
#define I2C_CTL0_STOP_pos	 	 	 	1	 	 /*--  --*/
#define I2C_CTL0_INTEN_pos	 	 	 	2	 	 /*--  --*/
#define I2C_CTL0_ACK_pos	 	 	 	4	 	 /*--  --*/
#define I2C_CTL0_GCMEN_pos	 	 	 	5	 	 /*--  --*/
#define I2C_CTL0_SMBARE_pos	 	 	 	6	 	 /*--  --*/
#define I2C_CTL0_CLRST_pos	 	 	 	7	 	 /*--  --*/


#define I2C_CTL0_START_msk	 	 	 	0x00000001UL
#define I2C_CTL0_STOP_msk	 	 	 	0x00000002UL
#define I2C_CTL0_INTEN_msk	 	 	 	0x00000004UL
#define I2C_CTL0_ACK_msk	 	 	 	0x00000010UL
#define I2C_CTL0_GCMEN_msk	 	 	 	0x00000020UL
#define I2C_CTL0_SMBARE_msk	 	 	 	0x00000040UL
#define I2C_CTL0_CLRST_msk	 	 	 	0x00000080UL


typedef struct {
uint32_t 	 	I2C_CTL0_START	 	:1;
uint32_t 	 	I2C_CTL0_STOP	 	:1;
uint32_t 	 	I2C_CTL0_INTEN	 	:1;
uint32_t 	 	 	 	:1;
uint32_t 	 	I2C_CTL0_ACK	 	:1;
uint32_t 	 	I2C_CTL0_GCMEN	 	:1;
uint32_t 	 	I2C_CTL0_SMBARE	 	:1;
uint32_t 	 	I2C_CTL0_CLRST	 	:1;
uint32_t 	 	 	 	:24;
} t_I2C_CTL0_bits;


typedef enum { 
 	I2C_CTL0_START_off		 = 0b0,
	I2C_CTL0_START_on		 = 0b1,
} t_I2C_CTL0_START_enum;

typedef enum { 
 	I2C_CTL0_STOP_off		 = 0b0,
	I2C_CTL0_STOP_on		 = 0b1,
} t_I2C_CTL0_STOP_enum;

typedef enum { 
 	I2C_CTL0_INTEN_off		 = 0b0,
	I2C_CTL0_INTEN_on		 = 0b1,
} t_I2C_CTL0_INTEN_enum;

typedef enum { 
 	I2C_CTL0_ACK_off		 = 0b0,
	I2C_CTL0_ACK_on		 = 0b1,
} t_I2C_CTL0_ACK_enum;

typedef enum { 
 	I2C_CTL0_GCMEN_off		 = 0b0,
	I2C_CTL0_GCMEN_on		 = 0b1,
} t_I2C_CTL0_GCMEN_enum;

typedef enum { 
 	I2C_CTL0_SMBARE_off		 = 0b0,
	I2C_CTL0_SMBARE_on		 = 0b1,
} t_I2C_CTL0_SMBARE_enum;

typedef enum { 
 	I2C_CTL0_CLRST_off		 = 0b0,
	I2C_CTL0_CLRST_on		 = 0b1,
} t_I2C_CTL0_CLRST_enum;




#define I2C_ADDR	0x30005010		 /*--  --*/

#define I2C_ADDR_ADDR_pos	 	 	 	0	 	 /*--  --*/
#define I2C_ADDR_SAEN_pos	 	 	 	7	 	 /*--  --*/


#define I2C_ADDR_ADDR_msk	 	 	 	0x0000007fUL
#define I2C_ADDR_SAEN_msk	 	 	 	0x00000080UL


typedef struct {
uint32_t 	 	I2C_ADDR_ADDR	 	:7;
uint32_t 	 	I2C_ADDR_SAEN	 	:1;
uint32_t 	 	 	 	:24;
} t_I2C_ADDR_bits;


typedef enum { 
 	I2C_ADDR_SAEN_off		 = 0b0,
	I2C_ADDR_SAEN_on		 = 0b1,
} t_I2C_ADDR_SAEN_enum;




#define I2C_CTL1	0x30005014		 /*--  --*/

#define I2C_CTL1_ENABLE_pos	 	 	 	0	 	 /*--  --*/
#define I2C_CTL1_SCLFRQ_pos	 	 	 	1	 	 /*--  --*/


#define I2C_CTL1_ENABLE_msk	 	 	 	0x00000001UL
#define I2C_CTL1_SCLFRQ_msk	 	 	 	0x000000feUL


typedef struct {
uint32_t 	 	I2C_CTL1_ENABLE	 	:1;
uint32_t 	 	I2C_CTL1_SCLFRQ	 	:7;
uint32_t 	 	 	 	:24;
} t_I2C_CTL1_bits;


typedef enum { 
 	I2C_CTL1_ENABLE_off		 = 0b0,
	I2C_CTL1_ENABLE_on		 = 0b1,
} t_I2C_CTL1_ENABLE_enum;




#define I2C_TOPR	0x30005018		 /*--  --*/

#define I2C_TOPR_SMBTOPR_pos	 	 	 	0	 	 /*--  --*/


#define I2C_TOPR_SMBTOPR_msk	 	 	 	0x000000ffUL


typedef struct {
uint32_t 	 	I2C_TOPR_SMBTOPR	 	:8;
uint32_t 	 	 	 	:24;
} t_I2C_TOPR_bits;





#define I2C_CTL2	0x3000501c		 /*--  --*/

#define I2C_CTL2_S10ADR_pos	 	 	 	0	 	 /*--  --*/
#define I2C_CTL2_S10EN_pos	 	 	 	3	 	 /*--  --*/
#define I2C_CTL2_HSDIV_pos	 	 	 	4	 	 /*--  --*/


#define I2C_CTL2_S10ADR_msk	 	 	 	0x00000007UL
#define I2C_CTL2_S10EN_msk	 	 	 	0x00000008UL
#define I2C_CTL2_HSDIV_msk	 	 	 	0x000000f0UL


typedef struct {
uint32_t 	 	I2C_CTL2_S10ADR	 	:3;
uint32_t 	 	I2C_CTL2_S10EN	 	:1;
uint32_t 	 	I2C_CTL2_HSDIV	 	:4;
uint32_t 	 	 	 	:24;
} t_I2C_CTL2_bits;


typedef enum { 
 	I2C_CTL2_S10EN_off		 = 0b0,
	I2C_CTL2_S10EN_on		 = 0b1,
} t_I2C_CTL2_S10EN_enum;




#define I2C_CTL3	0x30005020		 /*--  --*/

#define I2C_CTL3_SCLFRQ_pos	 	 	 	0	 	 /*--  --*/


#define I2C_CTL3_SCLFRQ_msk	 	 	 	0x000000ffUL


typedef struct {
uint32_t 	 	I2C_CTL3_SCLFRQ	 	:8;
uint32_t 	 	 	 	:24;
} t_I2C_CTL3_bits;





#define I2C_CTL4	0x30005024		 /*--  --*/

#define I2C_CTL4_RSDIV_pos	 	 	 	0	 	 /*--  --*/


#define I2C_CTL4_RSDIV_msk	 	 	 	0x000000ffUL


typedef struct {
uint32_t 	 	I2C_CTL4_RSDIV	 	:8;
uint32_t 	 	 	 	:24;
} t_I2C_CTL4_bits;





#define I2C_CTL5	0x30005028		 /*--  --*/

#define I2C_CTL5_HSDIV_pos	 	 	 	0	 	 /*--  --*/


#define I2C_CTL5_HSDIV_msk	 	 	 	0x000000ffUL


typedef struct {
uint32_t 	 	I2C_CTL5_HSDIV	 	:8;
uint32_t 	 	 	 	:24;
} t_I2C_CTL5_bits;




typedef struct { 
union {
 __IO uint32_t 	I2C_SDA_reg;
 __IO t_I2C_SDA_bits	 I2C_SDA_bit;
};
union {
 __IO uint32_t 	I2C_ST_reg;
 __IO t_I2C_ST_bits	 I2C_ST_bit;
};
union {
 __IO uint32_t 	I2C_CST_reg;
 __IO t_I2C_CST_bits	 I2C_CST_bit;
};
union {
 __IO uint32_t 	I2C_CTL0_reg;
 __IO t_I2C_CTL0_bits	 I2C_CTL0_bit;
};
union {
 __IO uint32_t 	I2C_ADDR_reg;
 __IO t_I2C_ADDR_bits	 I2C_ADDR_bit;
};
union {
 __IO uint32_t 	I2C_CTL1_reg;
 __IO t_I2C_CTL1_bits	 I2C_CTL1_bit;
};
union {
 __IO uint32_t 	I2C_TOPR_reg;
 __IO t_I2C_TOPR_bits	 I2C_TOPR_bit;
};
union {
 __IO uint32_t 	I2C_CTL2_reg;
 __IO t_I2C_CTL2_bits	 I2C_CTL2_bit;
};
union {
 __IO uint32_t 	I2C_CTL3_reg;
 __IO t_I2C_CTL3_bits	 I2C_CTL3_bit;
};
union {
 __IO uint32_t 	I2C_CTL4_reg;
 __IO t_I2C_CTL4_bits	 I2C_CTL4_bit;
};
union {
 __IO uint32_t 	I2C_CTL5_reg;
 __IO t_I2C_CTL5_bits	 I2C_CTL5_bit;
};
} t_I2C_REG;



#define FLASH_ADDR	0x3000d000		 /*--  --*/

#define FLASH_ADDR_VAL_pos	 	 	 	0	 	 /*--  --*/


#define FLASH_ADDR_VAL_msk	 	 	 	0x0007ffffUL


typedef struct {
uint32_t 	 	FLASH_ADDR_VAL	 	:19;
uint32_t 	 	 	 	:13;
} t_FLASH_ADDR_bits;





#define FLASH_DATA0	0x3000d004		 /*--  --*/

#define FLASH_DATA0_VAL_pos	 	 	 	0	 	 /*--  --*/


#define FLASH_DATA0_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	FLASH_DATA0_VAL	 	:32;
} t_FLASH_DATA0_bits;





#define FLASH_DATA1	0x3000d008		 /*--  --*/

#define FLASH_DATA1_VAL_pos	 	 	 	0	 	 /*--  --*/


#define FLASH_DATA1_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	FLASH_DATA1_VAL	 	:32;
} t_FLASH_DATA1_bits;





#define FLASH_DATA2	0x3000d00c		 /*--  --*/

#define FLASH_DATA2_VAL_pos	 	 	 	0	 	 /*--  --*/


#define FLASH_DATA2_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	FLASH_DATA2_VAL	 	:32;
} t_FLASH_DATA2_bits;





#define FLASH_DATA3	0x3000d010		 /*--  --*/

#define FLASH_DATA3_VAL_pos	 	 	 	0	 	 /*--  --*/


#define FLASH_DATA3_VAL_msk	 	 	 	0xffffffffUL


typedef struct {
uint32_t 	 	FLASH_DATA3_VAL	 	:32;
} t_FLASH_DATA3_bits;





#define FLASH_CMD	0x3000d044		 /*--  --*/

#define FLASH_CMD_RD_pos	 	 	 	0	 	 /*--  --*/
#define FLASH_CMD_WR_pos	 	 	 	1	 	 /*--  --*/
#define FLASH_CMD_ERSEC_pos	 	 	 	2	 	 /*--  --*/
#define FLASH_CMD_ALLSEC_pos	 	 	 	3	 	 /*--  --*/
#define FLASH_CMD_NVRON_pos	 	 	 	8	 	 /*--  --*/
#define FLASH_CMD_KEY_pos	 	 	 	16	 	 /*--  --*/


#define FLASH_CMD_RD_msk	 	 	 	0x00000001UL
#define FLASH_CMD_WR_msk	 	 	 	0x00000002UL
#define FLASH_CMD_ERSEC_msk	 	 	 	0x00000004UL
#define FLASH_CMD_ALLSEC_msk	 	 	 	0x00000008UL
#define FLASH_CMD_NVRON_msk	 	 	 	0x00000100UL
#define FLASH_CMD_KEY_msk	 	 	 	0xffff0000UL


typedef struct {
uint32_t 	 	FLASH_CMD_RD	 	:1;
uint32_t 	 	FLASH_CMD_WR	 	:1;
uint32_t 	 	FLASH_CMD_ERSEC	 	:1;
uint32_t 	 	FLASH_CMD_ALLSEC	 	:1;
uint32_t 	 	 	 	:4;
uint32_t 	 	FLASH_CMD_NVRON	 	:1;
uint32_t 	 	 	 	:7;
uint32_t 	 	FLASH_CMD_KEY	 	:16;
} t_FLASH_CMD_bits;


typedef enum { 
 	FLASH_CMD_RD_off		 = 0b0,
	FLASH_CMD_RD_on		 = 0b1,
} t_FLASH_CMD_RD_enum;

typedef enum { 
 	FLASH_CMD_WR_off		 = 0b0,
	FLASH_CMD_WR_on		 = 0b1,
} t_FLASH_CMD_WR_enum;

typedef enum { 
 	FLASH_CMD_ERSEC_off		 = 0b0,
	FLASH_CMD_ERSEC_on		 = 0b1,
} t_FLASH_CMD_ERSEC_enum;

typedef enum { 
 	FLASH_CMD_ALLSEC_off		 = 0b0,
	FLASH_CMD_ALLSEC_on		 = 0b1,
} t_FLASH_CMD_ALLSEC_enum;

typedef enum { 
 	FLASH_CMD_NVRON_off		 = 0b0,
	FLASH_CMD_NVRON_on		 = 0b1,
} t_FLASH_CMD_NVRON_enum;

typedef enum { 
 	FLASH_CMD_KEY_access		 = 0b1100000011011110,
} t_FLASH_CMD_KEY_enum;




#define FLASH_STAT	0x3000d048		 /*--  --*/

#define FLASH_STAT_BUSY_pos	 	 	 	0	 	 /*--  --*/
#define FLASH_STAT_IRQF_pos	 	 	 	1	 	 /*--  --*/


#define FLASH_STAT_BUSY_msk	 	 	 	0x00000001UL
#define FLASH_STAT_IRQF_msk	 	 	 	0x00000002UL


typedef struct {
uint32_t 	 	FLASH_STAT_BUSY	 	:1;
uint32_t 	 	FLASH_STAT_IRQF	 	:1;
uint32_t 	 	 	 	:30;
} t_FLASH_STAT_bits;


typedef enum { 
 	FLASH_STAT_BUSY_off		 = 0b0,
	FLASH_STAT_BUSY_on		 = 0b1,
} t_FLASH_STAT_BUSY_enum;

typedef enum { 
 	FLASH_STAT_IRQF_off		 = 0b0,
	FLASH_STAT_IRQF_on		 = 0b1,
} t_FLASH_STAT_IRQF_enum;




#define FLASH_CTRL	0x3000d04c		 /*--  --*/

#define FLASH_CTRL_CEN_pos	 	 	 	1	 	 /*--  --*/
#define FLASH_CTRL_CFLUSH_pos	 	 	 	8	 	 /*--  --*/
#define FLASH_CTRL_LAT_pos	 	 	 	16	 	 /*--  --*/


#define FLASH_CTRL_CEN_msk	 	 	 	0x00000002UL
#define FLASH_CTRL_CFLUSH_msk	 	 	 	0x00000100UL
#define FLASH_CTRL_LAT_msk	 	 	 	0x000f0000UL


typedef struct {
uint32_t 	 	 	 	:1;
uint32_t 	 	FLASH_CTRL_CEN	 	:1;
uint32_t 	 	 	 	:6;
uint32_t 	 	FLASH_CTRL_CFLUSH	 	:1;
uint32_t 	 	 	 	:7;
uint32_t 	 	FLASH_CTRL_LAT	 	:4;
uint32_t 	 	 	 	:12;
} t_FLASH_CTRL_bits;


typedef enum { 
 	FLASH_CTRL_CEN_off		 = 0b0,
	FLASH_CTRL_CEN_on		 = 0b1,
} t_FLASH_CTRL_CEN_enum;

typedef enum { 
 	FLASH_CTRL_CFLUSH_off		 = 0b0,
	FLASH_CTRL_CFLUSH_on		 = 0b1,
} t_FLASH_CTRL_CFLUSH_enum;




#define FLASH_LP	0x3000d0c8		 /*--  --*/

#define FLASH_LP_LPEN_pos	 	 	 	0	 	 /*--  --*/


#define FLASH_LP_LPEN_msk	 	 	 	0x00000001UL


typedef struct {
uint32_t 	 	FLASH_LP_LPEN	 	:1;
uint32_t 	 	 	 	:31;
} t_FLASH_LP_bits;


typedef enum { 
 	FLASH_LP_LPEN_off		 = 0b0,
	FLASH_LP_LPEN_on		 = 0b1,
} t_FLASH_LP_LPEN_enum;



typedef struct { 
union {
 __IO uint32_t 	FLASH_ADDR_reg;
 __IO t_FLASH_ADDR_bits	 FLASH_ADDR_bit;
};
union {
 __IO uint32_t 	FLASH_DATA0_reg;
 __IO t_FLASH_DATA0_bits	 FLASH_DATA0_bit;
};
union {
 __IO uint32_t 	FLASH_DATA1_reg;
 __IO t_FLASH_DATA1_bits	 FLASH_DATA1_bit;
};
union {
 __IO uint32_t 	FLASH_DATA2_reg;
 __IO t_FLASH_DATA2_bits	 FLASH_DATA2_bit;
};
union {
 __IO uint32_t 	FLASH_DATA3_reg;
 __IO t_FLASH_DATA3_bits	 FLASH_DATA3_bit;
};
__IO uint32_t reserved0[12];
union {
 __IO uint32_t 	FLASH_CMD_reg;
 __IO t_FLASH_CMD_bits	 FLASH_CMD_bit;
};
union {
 __IO uint32_t 	FLASH_STAT_reg;
 __IO t_FLASH_STAT_bits	 FLASH_STAT_bit;
};
union {
 __IO uint32_t 	FLASH_CTRL_reg;
 __IO t_FLASH_CTRL_bits	 FLASH_CTRL_bit;
};
__IO uint32_t reserved1[30];
union {
 __IO uint32_t 	FLASH_LP_reg;
 __IO t_FLASH_LP_bits	 FLASH_LP_bit;
};
} t_FLASH_REG;


typedef struct { 
} t_QSPI_REG;

