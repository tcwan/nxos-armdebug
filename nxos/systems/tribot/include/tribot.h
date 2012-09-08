/** @file tribot.h
 *  @brief Definitions of common Tribot constants, etc.
 */

/* Copyright (C) 2007-2012 the NxOS developers
 *
 * See AUTHORS for a full list of the developers.
 *
 * Redistribution of this file is permitted under
 * the terms of the GNU Public License (GPL) version 2.
 */

#ifndef __NXOS_SYSTEMS_TRIBOT_H__
#define __NXOS_SYSTEMS_TRIBOT_H__

/** @addtogroup tribot */
/*@{*/

	/* Timer Constants */
	.extern	nx_systick_wait_ms
	.equ	SYSTICK_1000MS, 1000
	.equ	SYSTICK_50MS,   50
	.equ	SYSTICK_3MS,    3
	.equ	SYSTICK_1MS,    1

	/* Sensor Port Assignments */
	.equ	TOUCH_PORT, 0		/* Sensor 1 */
	.equ	SOUND_PORT, 1		/* Sensor 2 */
	.equ	LIGHT_PORT, 2		/* Sensor 3 */
	.equ	ULSND_PORT, 3		/* Sensor 4 */
	.equ	DIGI0, 0
	.equ	DIGI1, 1

	/* Actuator Port Assignments */
	.extern nx_motors_rotate
	.extern nx_motors_stop
	.equ	CLAW_PORT, 0		/* Motor A */
	.equ	RWHEEL_PORT, 1		/* Motor B */
	.equ	LWHEEL_PORT, 2		/* Motor C */

	/* Min-Max constant */
    .equ	n, 5		/* Number of items in array */

/** @name Robot State Enums
 *
 * Robot State.
 * The enums must be consecutive, starting from 0
 */
/*@{*/
ENUM_BEGIN
ENUM_VALASSIGN(ROBOT_STOP, 0)   /**< Initial State. */
ENUM_VAL(ROBOT_FWD)             /**< Robot Moving Forward. */
ENUM_VAL(ROBOT_CW)        	/**< Robot Rotating Clockwise */
ENUM_VAL(ROBOT_CCW)        	/**< Robot Rotating Counter-Clockwise */
ENUM_END(robot_state_t)
/*@}*/

/*@}*/

#endif /* __NXOS_SYSTEMS_TRIBOT_H__ */
