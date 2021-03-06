/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __ASM_MACH_GPIO_H
#define __ASM_MACH_GPIO_H

#ifdef CONFIG_ARCH_S3C24xx
# include <mach/iomux-s3c24x0.h>
#endif
#ifdef CONFIG_ARCH_S3C64xx
# include <mach/iomux-s3c64xx.h>
#endif
#ifdef CONFIG_ARCH_S5PCxx
# define ARCH_NR_GPIOS 1024
# include <mach/iomux-s5pcxx.h>
#endif

#include <asm-generic/gpio.h>

void s3c_gpio_mode(unsigned);

#endif /* __ASM_MACH_GPIO_H */
