#define OUTPUT 1
#define INPUT 0

#define GPIO_SET 1
#define GPIO_RESET 0

#define EXPORT_DIR "/sys/class/gpio/export"
#define UNEXPORT_DIR "/sys/class/gpio/unexport"
#define GPIO_DIR_MODE "/sys/class/gpio/gpio%d/direction"
#define GPIO_DIR_VALUE "/sys/class/gpio/gpio%d/value"

#ifdef ORANGE_PI_WIN

#define PIN_3 227  //TWI1_SDA
#define PIN_5 226  //TWI1_SCK
#define PIN_7 362  //S_PWM
#define PIN_8 354  //S_UART_TX
#define PIN_10 355 //S_UART_RX
#define PIN_11 229 //UART3_RX
#define PIN_12 100 //PD4
#define PIN_13 228 //UART3_TX
#define PIN_15 231 //UART3_CST
#define PIN_16 361 //PL9
#define PIN_18 68  //PC4
#define PIN_19 96  //SPI1_MOSI
#define PIN_21 99  //SPI1_MISO
#define PIN_22 230 //UART3_RTS
#define PIN_23 97  //SPI1_CLK
#define PIN_24 96  //SPI1_CS0
#define PIN_26 102 //PD6
#define PIN_27 143 //TWI2_SDA
#define PIN_28 142 //TWI2_SCK
#define PIN_29 36  //PB4
#define PIN_31 37  //PB5
#define PIN_32 34  //UART2_RTS
#define PIN_33 38  //PB6
#define PIN_35 39  //PB7
#define PIN_36 35  //UART2_CST
#define PIN_37 101 //PD5
#define PIN_38 32  //UART2_TX
#define PIN_40 33  //UART2_RX

#define TWI1_SDA 227
#define TWI1_SCK 226
#define S_PWM 362
#define S_UART_TX 354
#define S_UART_RX 355
#define UART3_RX 229
#define PD4 100
#define UART3_TX 228
#define UART3_CST 231
#define PL9 361
#define PC4 68
#define SPI1_MOSI 96
#define SPI1_MISO 99
#define UART3_RTS 230
#define SPI1_CLK 97
#define SPI1_CS0 96
#define PD6 102
#define TWI2_SDA 143
#define TWI2_SCK 142
#define PB4 36
#define PB5 37
#define UART2_RTS 34
#define PB6 38
#define PB7 39
#define UART2_CST 35
#define PD5 101
#define UART2_TX 32
#define UART2_RX 33

const int pinouts[] = {
	-1,
	-1,
	227,
	-1,
	226,
	-1,
	362,
	354,
	-1,
	355,
	229,
	100,
	228,
	-1,
	231,
	361,
	-1,
	68,
	96,
	-1,
	99,
	230,
	97,
	96,
	-1,
	102,
	143,
	142,
	36,
	-1,
	37,
	34,
	38,
	-1,
	39,
	35,
	101,
	32,
	-1,
	33
};

#endif

#ifdef OMEGA2

#endif