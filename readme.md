# Fish32 seed board

https://www.analoglamb.com/product/esp32-community-education-board-analoglamb-fish32-seed-board/

Examples are built with the Arduino ide,  platform io or esp-idf.

https://docs.espressif.com/projects/esp-idf/en/latest/get-started/

https://platformio.org/


## Building

Setup esp-idf
```
pio run
```

# Hardware

## I2C bus

Name | type  | pin
-----| ------ | ----- 
P_I2C_SCL	| u8 |	23
P_I2C_SDA	| u8 |	22

### 1306, OLED
Is at address  0x3C/0x78
or more seldom 0x3D/0x7A

### Proximity sensor
APDS-9960
https://cdn.sparkfun.com/assets/learn_tutorials/3/2/1/Avago-APDS-9960-datasheet.pdf

Name | type  | pin
-----| ------ | ----- 
P_PROX_INT	| u8 |	36


### Crypto chip ATECC508A
https://www.microchip.com/wwwproducts/en/ATECC508A

### Extra GPIO,
http://www.si-en.com/product.asp?pid=1593


### Motion sensor
MPU9250

Name | type  | pin
-----| ------ | ----- 
P_MPU_INT	| u8 |	39



# SD card
Name | type  | pin
-----| ------ | -----
P_SD_DAT2	| u8 |	09
P_SD_DAT3	| u8 |	10
P_SD_CMD	| u8 |	11
P_SD_CLK	| u8 |	06
P_SD_DAT0	| u8 |	07
P_SD_DAT1	| u8 |	08

P_XDCS	| u8 |	2

# Motor
DRV8835

Name | type  | pin
-----| ------ | ----- 
P_MOTOR_BIN2	| u8 |	5
P_MOTOR_BIN1	| u8 |	17
P_MOTOR_AIN1 	| u8 |	16
P_MOTOR_AIN2 	| u8 |	4

# IO expansion board

Name | type  | pin
-----| ------ | ----- 
P_IOEXP_DOWN_RST | u8 |	21
P_IOEXP_DOWN_INT | u8 |	19
P_IOEXP_UP_RST	| u8 |	18
P_IOEXP_UP_INT	| u8 |	35

# USB to UART

Name | type  | pin
-----| ------ | ----- 
P_UOTXD | u8 |	1
P_UORXD | u8 |	3


# SPI
The ethernet controller and LORA is connected to SPI

K_SPI = 2

Name | type  | pin
-----| ------ | ----- 
P_SPI_MOSI	| u8 |	13
P_SPI_MISO	| u8 |	12
P_SPI_CLK	| u8 |	14

### Lora
Over SPI

Name | type  | pin
-----| ------ | ----- 
P_LORA_CS	| u8 |	0
P_LORA_IRQ	| u8 |	26
P_LORA_RESET	| u8 |	15




### Ethernet
Connectoed on SPI

PHY, HR911106A


Should be similar to this,
http://www.kosmodrom.com.ua/pdf/HR911105A.pdf
W5500
https://www.wiznet.io/product-item/w5500/

https://github.com/Wiznet/WIZ_Ethernet_Library

Name | type  | pin
-----| ------ | ----- 
P_SPI_MOSI	| u8 |	13
P_SPI_MISO	| u8 |	12
P_SPI_CLK	| u8 |	14

Name | type  | pin
-----| ------ | ----- 
P_ETH_INT	| u8 |	27
P_ETH_CS	| u8 |	25


## Relay, Button 3 & 4
Key 3, CTRL 1
Key 4, CTRL 2

Name | type  | pin
-----| ------ | ----- 
P_RELAY_CTRL1| u8 |	32
P_RELAY_CTRL2	| u8 |	33


## Voltage converter
http://www.ti.com/lit/ds/symlink/tps63060.pdf



