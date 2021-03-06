/** @file _sensors.h
 *  @brief Sensor internal interface.
 */

/* Copyright (C) 2007 the NxOS developers
 *
 * See AUTHORS for a full list of the developers.
 *
 * Redistribution of this file is permitted under
 * the terms of the GNU Public License (GPL) version 2.
 */

#ifndef __NXOS_BASE_DRIVERS__SENSORS_H__
#define __NXOS_BASE_DRIVERS__SENSORS_H__

#include "base/types.h"
#include "base/drivers/sensors.h"

/** @addtogroup driverinternal */
/*@{*/

/** @defgroup sensorsinternal Sensor interface */
/*@{*/

/** Mapping of PIO ports to I2C busses.
 *
 * Each sensor port has two DIGI pins, whose use varies from sensor to
 * sensor. We remember which two pins each sensor has using the
 * sensors_pins structure.
 */
typedef struct {
  U32 scl; /**< DIGI0 - I2C clock. */
  U32 sda; /**< DIGI1 - I2C data. */
} nx__sensors_pins;

/** Mapping of PIO line to ADC lines.
 *
 * Each sensor port DIGI1 line can be used as A/D Inputs.
 * For each A/D input, the control and data bits are defined in the
 * sensors_adc structure.
 */
typedef struct {
  U32 chn; /**< DIGI1 - ADC Channel Number. */
  volatile U32 *ptr; /**< DIGI1 - ADC Channel Data Register Address. */
} nx__sensors_adcmap;

/** Initialize the sensors driver. */
void nx__sensors_init(void);

/** Enable @a sensor in I2C mode.
 *
 * @param sensor The sensor port.
 */
void nx__sensors_i2c_enable(U32 sensor);

/** Enable @a sensor in Lego color sensor mode.
 *
 * @param sensor The sensor port.
 */
void nx__sensors_color_enable(U32 sensor);


/** Get and return the port mapping for @a sensor.
 *
 * @param sensor The sensor port.
 */
const nx__sensors_pins *nx__sensors_get_pins(U32 sensor);

/** Get and return the ADC mapping for @a sensor.
 *
 * @param sensor The sensor port.
 */
const nx__sensors_adcmap *nx__sensors_get_adcmap(U32 sensor);


/** Disable the sensor port @a sensor.
 *
 * @param sensor The sensor port.
 *
 * @warning Make sure that all higher level drivers are "detached"
 * from the port before disabling it, or they might end up very
 * confused.
 */
void nx__sensors_disable(U32 sensor);

/*@}*/
/*@}*/

#endif /* __NXOS_BASE_DRIVERS__SENSORS_H__ */
