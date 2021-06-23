//
// Created by Jeroen Vandezande on 23/06/2021.
//

#include <stdint.h>
#include <stdbool.h>

#ifndef _I2C_H_
#define _I2C_H_

typedef bool (*I2CMaster_ReadMethod_t)(uint8_t address, uint8_t * data, size_t length);
typedef bool (*I2CMaster_WriteMethod_t)(uint8_t address, uint8_t * data, size_t length);
typedef bool (*I2CMaster_ReadWriteMethod_t)(uint8_t address, uint8_t * data, size_t readLength, size_t writeLength);

#endif //_I2C_H_
