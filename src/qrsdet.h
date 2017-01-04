/*****************************************************************************
FILE:  qrsdet.h
AUTHOR:	Patrick S. Hamilton
REVISED:	4/16/2002
  ___________________________________________________________________________

qrsdet.h QRS detector parameter definitions
Copywrite (C) 2000 Patrick S. Hamilton

This file is free software; you can redistribute it and/or modify it under
the terms of the GNU Library General Public License as published by the Free
Software Foundation; either version 2 of the License, or (at your option) any
later version.

This software is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE.  See the GNU Library General Public License for more
details.

You should have received a copy of the GNU Library General Public License along
with this library; if not, write to the Free Software Foundation, Inc., 59
Temple Place - Suite 330, Boston, MA 02111-1307, USA.

You may contact the author by e-mail (pat@eplimited.com) or postal mail
(Patrick Hamilton, E.P. Limited, 35 Medford St., Suite 204 Somerville,
MA 02143 USA).  For updates to this software, please visit our website
(http://www.eplimited.com).
  __________________________________________________________________________
  Revisions:
	4/16: Modified to allow simplified modification of digital filters in
   	qrsfilt().
*****************************************************************************/


#define SAMPLE_RATE	200	/* Sample rate in Hz. */
#define MS_PER_SAMPLE	5 /* ( (double) 1000/ (double) SAMPLE_RATE) */
#define MS10	((int) (10/ MS_PER_SAMPLE + 0.5))
#define MS25	5 /* ((int) (25/MS_PER_SAMPLE + 0.5)) */
#define MS30	((int) (30/MS_PER_SAMPLE + 0.5))
#define MS80	((int) (80/MS_PER_SAMPLE + 0.5))
#define MS95	((int) (95/MS_PER_SAMPLE + 0.5))
#define MS100	((int) (100/MS_PER_SAMPLE + 0.5))
#define MS125	((int) (125/MS_PER_SAMPLE + 0.5))
#define MS150	((int) (150/MS_PER_SAMPLE + 0.5))
#define MS160	((int) (160/MS_PER_SAMPLE + 0.5))
#define MS175	((int) (175/MS_PER_SAMPLE + 0.5))
#define MS195	((int) (195/MS_PER_SAMPLE + 0.5))
#define MS200	((int) (200/MS_PER_SAMPLE + 0.5))
#define MS220	((int) (220/MS_PER_SAMPLE + 0.5))
#define MS250	((int) (250/MS_PER_SAMPLE + 0.5))
#define MS300	((int) (300/MS_PER_SAMPLE + 0.5))
#define MS360	((int) (360/MS_PER_SAMPLE + 0.5))
#define MS450	((int) (450/MS_PER_SAMPLE + 0.5))
#define MS1000	SAMPLE_RATE
#define MS1500	((int) (1500/MS_PER_SAMPLE))
#define DERIV_LENGTH 2	/* MS10 */
#define LPBUFFER_LGTH 10 /* ((int) (2*MS25)) */


#define HPBUFFER_LGTH 25 /* MS125 */

#define WINDOW_WIDTH 16	/* MS80 */			// Moving window integration width.
/* PRE_BLANK is MS200 in qrsdet.c and MS195 in qrsdet2.c */
#define	FILTER_DELAY (int) (((double) DERIV_LENGTH/2) + ((double) LPBUFFER_LGTH/2 - 1) + (((double) HPBUFFER_LGTH-1)/2) + PRE_BLANK)  // filter delays plus 200 ms blanking delay */
#define DER_DELAY 253	/* WINDOW_WIDTH + FILTER_DELAY + MS100 */
