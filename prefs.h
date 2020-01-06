#pragma once
#include "base.h"
#include <stdio.h> // FILE cannot be forward declared

typedef enum {
  Conf_read_left_and_right = 0, // left and right will be set
  Conf_read_irrelevant,         // only left will be set
  Conf_read_buffer_too_small,   // neither will be set
  Conf_read_eof,                // "
  Conf_read_io_error,           // "
} Conf_read_result;

Conf_read_result conf_read_line(FILE* file, char* buf, Usz bufsize,
                                char** out_left, Usz* out_leftlen,
                                char** out_right, Usz* out_rightlen);
