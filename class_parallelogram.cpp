﻿#include "class_figure.h"
#include "class_triangle.h"
#include "class_quadrangle.h"
#include "class_parallelogram.h"

Parallelogram::Parallelogram()
{
    name = "Параллелограмм:";
    length_side_a = length_side_c = 20;
    length_side_b = length_side_d = 30;
    value_angle_A = value_angle_C = 30;
    value_angle_B = value_angle_D = 40;
};