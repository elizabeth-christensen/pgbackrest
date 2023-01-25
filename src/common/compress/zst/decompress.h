/***********************************************************************************************************************************
ZST Decompress

Decompress IO from the zst format.
***********************************************************************************************************************************/
#ifdef HAVE_LIBZST

#ifndef COMMON_COMPRESS_ZST_DECOMPRESS_H
#define COMMON_COMPRESS_ZST_DECOMPRESS_H

#include "common/io/filter/filter.h"

/***********************************************************************************************************************************
Filter type constant
***********************************************************************************************************************************/
#define ZST_DECOMPRESS_FILTER_TYPE                                  STRID5("zst-dcmp", 0x83464dd27a0)

/***********************************************************************************************************************************
Constructors
***********************************************************************************************************************************/
FN_EXTERN IoFilter *zstDecompressNew(void);

#endif

#endif // HAVE_LIBZST
