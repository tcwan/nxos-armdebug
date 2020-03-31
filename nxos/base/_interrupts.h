/** @file _interrupts.h
 *  @brief Internal interrupt handling APIs.
 */

/* Copyright (c) 2007,2008 the NxOS developers
 *
 * See AUTHORS for a full list of the developers.
 *
 * Redistribution of this file is permitted under
 * the terms of the GNU Public License (GPL) version 2.
 */

#ifndef __NXOS_BASE__INTERRUPTS_H__
#define __NXOS_BASE__INTERRUPTS_H__

#include "base/interrupts.h"

/** @addtogroup kernelinternal */
/*@{*/

/** @defgroup interruptinternal Interrupts and task information
 *
 * This module just contains internal handlers related to exception
 * handling.
 */
/*@{*/

/** Default IRQ handler.
 *
 * Default handler for the IRQ interrupt defined in interrupts.S.
 * It just freezes the board in an infinite loop.
 */
void nx__default_irq(void);

/** Default FIQ handler.
 *
 * Default handlers for the FIQ interrupt defined in interrupts.S.
 * It just freezes the board in an infinite loop.
 */
void nx__default_fiq(void);

/** Spurious interrupt handler.
 *
 * Deal with IRQ interrupts that are not recognized or registered with NxOS.
 */
void nx__spurious_irq(void);
/*@}*/

/*@}*/
/*@}*/

#endif /* __NXOS_BASE__INTERRUPTS_H__ */
