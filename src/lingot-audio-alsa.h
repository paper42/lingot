/*
 * lingot, a musical instrument tuner.
 *
 * Copyright (C) 2004-2018  Ibán Cereijo Graña.
 * Copyright (C) 2004-2008  Jairo Chapela Martínez.

 *
 * This file is part of lingot.
 *
 * lingot is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * lingot is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with lingot; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifdef ALSA

#ifndef __LINGOT_AUDIO_ALSA_H__
#define __LINGOT_AUDIO_ALSA_H__

#include "lingot-audio.h"

void lingot_audio_alsa_new(LingotAudioHandler*, char* device, int sample_rate);
// In case of failure, the audio_system is set to -1.

void lingot_audio_alsa_destroy(LingotAudioHandler*);

int lingot_audio_alsa_read(LingotAudioHandler*);

int lingot_audio_alsa_get_audio_system_properties(LingotAudioSystemProperties*);
// Return status : 0 for OK, else -1.

#endif
#endif
