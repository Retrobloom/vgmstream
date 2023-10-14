#ifndef _LAYOUTS_UTIL_H
#define _LAYOUTS_UTIL_H

#include "../vgmstream.h"

typedef VGMSTREAM* (*init_vgmstream_t)(STREAMFILE*);

/* add a new layer from subfile (setups layout if needed) */
bool layered_add_subfile(VGMSTREAM* vs, int layers, int layer_channels, STREAMFILE* sf, uint32_t offset, uint32_t size, const char* ext, init_vgmstream_t init_vgmstream);

/* add a new layer from codec data (setups layout if needed) 
 * codec is passed in the vs for easier free/etc control */
bool layered_add_codec(VGMSTREAM* vs, int layers, int layer_channels);

/* call when done adding layers */
bool layered_add_done(VGMSTREAM* vs);
#endif
