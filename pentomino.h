#ifndef __PENTOMINO_H__
#define __PENTOMINO_H__
#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void parse_args(int argc, char ** argv);

int read_field();

void find_solutions_r(int figure_type);

#endif /* __PENTOMINO_H__ */
