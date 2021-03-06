/*
 * Copyright (C) 2013 Jeff Kent <jeff@jkent.net>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef MACH_S5PCXX_NAND_H
#define MACH_S5PCXX_NAND_H

#define S3C_NFREG(x) (x)
#define S5P_NFREG(x) (x + 0x20000)

#define S5P_NFCONF			S3C_NFREG(0x00)
#define S5P_NFCONF_MSGLEN24		(1 << 25)
#define S5P_NFCONF_ECCTYPE_MASK		(3 << 23)
#define S5P_NFCONF_ECCTYPE_1BIT		(0 << 23)
#define S5P_NFCONF_ECCTYPE_4BIT		(1 << 23)
#define S5P_NFCONF_ECCTYPE_DISABLE	(3 << 23)
#define S5P_NFCONF_TACLS(_x)		(_x << 12)
#define S5P_NFCONF_TWRPH0(_x)		(_x << 8)
#define S5P_NFCONF_TWRPH1(_x)		(_x << 4)
#define S5P_NFCONF_SLC2K		(0 << 2)
#define S5P_NFCONF_SLC512		(1 << 2)
#define S5P_NFCONF_MLC4K		(2 << 2)
#define S5P_NFCONF_MLC2K		(3 << 2)
#define S5P_NFCONF_EXTRAADDR		(1 << 1)
#define S5P_NFCONT			S3C_NFREG(0x04)
#define S5P_NFCONT_NCE_MASK		((3 << 1) | (3 << 22))
#define S5P_NFCONT_NCE(_x)		(1 << (_x + ((_x < 2) ? 1 : 20)))
#define S5P_NFCONT_ENCODE		(1 << 18)
#define S5P_NFCONT_LOCKTIGHT		(1 << 17)
#define S5P_NFCONT_LOCK			(1 << 16)
#define S5P_NFCONT_ENCINTENB		(1 << 13)
#define S5P_NFCONT_DECINTENB		(1 << 12)
#define S5P_NFCONT_ILLINTENB		(1 << 10)
#define S5P_NFCONT_RNBINTENB		(1 << 8)
#define S5P_NFCONT_MECCLOCK		(1 << 7)
#define S5P_NFCONT_SECCLOCK		(1 << 6)
#define S5P_NFCONT_INITMECC		(1 << 5)
#define S5P_NFCONT_INITSECC		(1 << 4)
#define S5P_NFCONT_ENABLE		(1 << 0)
#define S5P_NFCMD			S3C_NFREG(0x08)
#define S5P_NFADDR			S3C_NFREG(0x0C)
#define S5P_NFDATA			S3C_NFREG(0x10)
#define S5P_NFMECCD0			S3C_NFREG(0x14)
#define S5P_NFMECCD1			S3C_NFREG(0x18)
#define S5P_NFSECCD			S3C_NFREG(0x1C)
#define S5P_NFSBLK			S3C_NFREG(0x20)
#define S5P_NFEBLK			S3C_NFREG(0x24)
#define S5P_NFSTAT			S3C_NFREG(0x28)
#define S5P_NFSTAT_RNB_GRP(_x)		(1 << (_x + 28))
#define S5P_NFSTAT_TRANS_GRP(_x)	(1 << (_x + 24))
#define S5P_NFSTAT_NCE_GRP(_x)		(1 << (_x + 8))
#define S5P_NFSTAT_MLCENCDONE		(1 << 7)
#define S5P_NFSTAT_MLCDECDONE		(1 << 6)
#define S5P_NFSTAT_ILLEGALACCESS	(1 << 5)
#define S5P_NFSTAT_TRANS		(1 << 4)
#define S5P_NFSTAT_NCE1			(1 << 3)
#define S5P_NFSTAT_NCE0			(1 << 2)
#define S5P_NFSTAT_RNB			(1 << 0)
#define S5P_NFECCERR0			S3C_NFREG(0x2C)
#define S5P_NFECCERR1			S3C_NFREG(0x30)
#define S5P_NFMECC0			S3C_NFREG(0x34)
#define S5P_NFMECC1			S3C_NFREG(0x38)
#define S5P_NFSECC			S3C_NFREG(0x3C)
#define S5P_NFMLCBITPT			S3C_NFREG(0x40)

#define S5P_NFECCCONF			S5P_NFREG(0x00)
#define S5P_NFECCCONF_MSGLEN(_x)	(_x << 16)
#define S5P_NFECCCONF_ECCTYPE_MASK	(0x7)
#define S5P_NFECCCONF_ECCTYPE_DISABLE	(0 << 0)
#define S5P_NFECCCONF_ECCTYPE_8BIT	(3 << 0)
#define S5P_NFECCCONF_ECCTYPE_12BIT	(4 << 0)
#define S5P_NFECCCONF_ECCTYPE_16BIT	(5 << 0)
#define S5P_NFECCCONT			S5P_NFREG(0x20)
#define S5P_NFECCCONT_ENCINTENB		(1 << 25)
#define S5P_NFECCCONT_DECINTENB		(1 << 24)
#define S5P_NFECCCONT_ENCODE		(1 << 16)
#define S5P_NFECCCONT_INITMECC		(1 << 2)
#define S5P_NFECCCONT_RESETECC		(1 << 0)
#define S5P_NFECCSTAT			S5P_NFREG(0x30)
#define S5P_NFECCSTAT_BUSY		(1 << 31)
#define S5P_NFECCSTAT_ENCDONE		(1 << 25)
#define S5P_NFECCSTAT_DECDONE		(1 << 24)
#define S5P_NFECCSTAT_FREEPG		(1 << 8)
#define S5P_NFECCSECSTAT		S5P_NFREG(0x40)
#define S5P_NFECCSECSTAT_VALIDERR(_x)	(1 << (_x + 8))
#define S5P_NFECCSECSTAT_ERRNO_MASK	(0x1F)
#define S5P_NFECCPRGECC0		S5P_NFREG(0x90)
#define S5P_NFECCPRGECC1		S5P_NFREG(0x94)
#define S5P_NFECCPRGECC2		S5P_NFREG(0x98)
#define S5P_NFECCPRGECC3		S5P_NFREG(0x9C)
#define S5P_NFECCPRGECC4		S5P_NFREG(0xA0)
#define S5P_NFECCPRGECC5		S5P_NFREG(0xA4)
#define S5P_NFECCPRGECC6		S5P_NFREG(0xA8)
#define S5P_NFECCERL0			S5P_NFREG(0xC0)
#define S5P_NFECCERL1			S5P_NFREG(0xC4)
#define S5P_NFECCERL2			S5P_NFREG(0xC8)
#define S5P_NFECCERL3			S5P_NFREG(0xCC)
#define S5P_NFECCERL4			S5P_NFREG(0xD0)
#define S5P_NFECCERL5			S5P_NFREG(0xD4)
#define S5P_NFECCERL6			S5P_NFREG(0xD8)
#define S5P_NFECCERL7			S5P_NFREG(0xDC)
#define S5P_NFECCERP0			S5P_NFREG(0xF0)
#define S5P_NFECCERP1			S5P_NFREG(0xF4)
#define S5P_NFECCERP2			S5P_NFREG(0xF8)
#define S5P_NFECCERP3			S5P_NFREG(0xFC)
#define S5P_NFECCCONECC0		S5P_NFREG(0x110)
#define S5P_NFECCCONECC1		S5P_NFREG(0x114)
#define S5P_NFECCCONECC2		S5P_NFREG(0x118)
#define S5P_NFECCCONECC3		S5P_NFREG(0x11C)
#define S5P_NFECCCONECC4		S5P_NFREG(0x120)
#define S5P_NFECCCONECC5		S5P_NFREG(0x124)
#define S5P_NFECCCONECC6		S5P_NFREG(0x128)

#endif /* MACH_S5PCXX_NAND_H */
