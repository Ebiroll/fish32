/******************************************************************************
 * 
 *
*******************************************************************************/
#pragma once
#ifndef __FISH_PINS__
#define __FISH_PINS__
#include "nvs_flash.h"
#include "driver/spi_master.h"

#define GPIO_NONE 255

//-------------------------------//
// Define GPIO used in fish32    //
//-------------------------------//

// Must be HSPI or VSPI
#define K_SPI VSPI_HOST

// KSPI pins of the SPI bus
//-------------------------
#define PIN_NUM_MISO GPIO_NUM_19 	// Master Input, Slave Output
#define PIN_NUM_MOSI GPIO_NUM_23	// Master Output, Slave Input   Named Data or SDA or D1 for oled
#define PIN_NUM_CLK  GPIO_NUM_18 	// Master clock  Named SCL or SCK or D0 for oled

// status led if any.
//------------------- 
#define GPIO_LED	GPIO_NONE		// Flashing led or Playing led



// 2 Buttons
//-------------
#define P_RELAY_CTRL1   GPIO_NONE		
#define P_RELAY_CTRL2   GPIO_NONE		


// I2C 
//------------------------------------------------
#define P_I2C_SCL GPIO_NUM_23
#define P_I2C_SDA GPIO_NUM_22
#define PIN_I2C_RST	GPIO_NONE		//  not used


// SPI 
//---------
#define P_SPI_MOSI	GPIO_NUM_13		//
#define P_SPI_MISO  GPIO_NUM_12
#define P_SPI_CLK	GPIO_NUM_14		//

// IR Signal
//-----------
#define P_IR_SIGNAL GPIO_NONE	// Remote IR 


#endif
