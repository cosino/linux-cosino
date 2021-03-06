/*
 * act8865.h  --  Voltage regulation for the active-semi act8865
 *
 * Copyright (C) 2013 Atmel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __LINUX_REGULATOR_ACT8865_H
#define __LINUX_REGULATOR_ACT8865_H

#include <linux/regulator/machine.h>

enum {
	ACT8865_DCDC1,
	ACT8865_DCDC2,
	ACT8865_DCDC3,
	ACT8865_LDO1,
	ACT8865_LDO2,
	ACT8865_LDO3,
	ACT8865_LDO4,
	ACT8865_REG_NUM,
};

/**
 * act8865_regulator_data - regulator data
 * @id: regulator id
 * @name: regulator name
 * @platform_data: regulator init data
 */
struct act8865_regulator_data {
	int				id;
	const char			*name;
	struct regulator_init_data	*platform_data;
};

/**
 * act8865_platform_data - platform data for act8865
 * @num_regulators: number of regulators used
 * @regulators: pointer to regulators used
 * @vsel_is_low: VSEL pin, drive to logic low to select default output voltage,
 *			drive to logic high to select secondary output voltage.
 */
struct act8865_platform_data {
	int num_regulators;
	struct act8865_regulator_data *regulators;
};
#endif
