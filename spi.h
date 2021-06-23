#ifndef LOWLEVELCINTERFACES_LIBRARY_H
#define LOWLEVELCINTERFACES_LIBRARY_H

#include <stdint.h>
#include <stdbool.h>

typedef void (*SPI_ReadWriteMethod_t)(uint8_t * data, size_t length, uint8_t cs_ID);

#endif //LOWLEVELCINTERFACES_LIBRARY_H
