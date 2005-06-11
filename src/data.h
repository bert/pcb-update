/*
 *                            COPYRIGHT
 *
 *  PCB, interactive printed circuit board design
 *  Copyright (C) 1994,1995,1996 Thomas Nau
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *  Contact addresses for paper mail and Email:
 *  Thomas Nau, Schlehenweg 15, 88471 Baustetten, Germany
 *  Thomas.Nau@rz.uni-ulm.de
 *
 *  RCS: $Id$
 */

/* common identifiers
 */

#ifndef	__DATA_INCLUDED__
#define	__DATA_INCLUDED__

#include "global.h"

extern	GdkPixmap		**Stipples;
extern	GdkPixmap		*XC_hand_source, *XC_hand_mask;
extern	GdkPixmap		*XC_lock_source, *XC_lock_mask;
extern	GdkPixmap		*XC_clock_source, *XC_clock_mask;

extern	GdkRegion		*FullRegion;

/* ---------------------------------------------------------------------------
 * some shared identifiers
 */


extern	CrosshairType	Crosshair;

extern  MarkType	Marked;

extern	OutputType	Output;

extern	PCBTypePtr	PCB;

extern	SettingType	Settings;

extern	BufferType	Buffers[MAX_BUFFER];

extern	LibraryType	Library;

extern	DeviceInfoType	PrintingDevice[];

extern	LocationType Xorig, Yorig;
extern	LocationType vxl, vxh, vyl, vyh;

extern  BoxType		theScreen, clipBox;

extern	gfloat		Zoom_Multiplier;

extern	gchar		*Progname;
extern	gchar		*InputTranslations;

extern	gint		addedLines;
extern	gint		LayerStack[MAX_LAYER];

extern	gboolean	RedrawOnEnter;
extern	gboolean	render;
extern	gboolean	Bumped;

extern	FlagType	no_flags;

#endif
