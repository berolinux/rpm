/** \ingroup ELGAMAL_m
 * \file elgamal.h
 *
 * ElGamal signature scheme, header.
 */

/*
 * Copyright (c) 2000, 2001, 2002 Virtual Unlimited B.V.
 *
 * Author: Bob Deblier <bob@virtualunlimited.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef _ELGAMAL_H
#define _ELGAMAL_H

#include "mpbarrett.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 */
BEECRYPTAPI /*@unused@*/
int elgv1sign(const mpbarrett* p, const mpbarrett* n, const mpnumber* g, randomGeneratorContext*, const mpnumber* hm, const mpnumber* x, mpnumber* r, mpnumber* s)
	/*@modifies r, s */;

/**
 */
BEECRYPTAPI /*@unused@*/
int elgv3sign(const mpbarrett* p, const mpbarrett* n, const mpnumber* g, randomGeneratorContext*, const mpnumber* hm, const mpnumber* x, mpnumber* r, mpnumber* s)
	/*@modifies r, s */;

/**
 */
BEECRYPTAPI /*@unused@*/
int elgv1vrfy(const mpbarrett* p, const mpbarrett* n, const mpnumber* g, const mpnumber* hm, const mpnumber* y, const mpnumber* r, const mpnumber* s)
	/*@*/;

/**
 */
BEECRYPTAPI /*@unused@*/
int elgv3vrfy(const mpbarrett* p, const mpbarrett* n, const mpnumber* g, const mpnumber* hm, const mpnumber* y, const mpnumber* r, const mpnumber* s)
	/*@*/;

#ifdef __cplusplus
}
#endif

#endif
