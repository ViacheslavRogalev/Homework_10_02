﻿#include "class_figure.h"
#include "class_triangle.h"

Triangle::Triangle()
{
    sides_count = 3;
    name = "Треугольник:";
    length_side_a = 10;
    length_side_b = 20;
    length_side_c = 30;
    value_angle_A = 50;
    value_angle_B = 60;
    value_angle_C = 70;
};

Triangle::Triangle(int sides_count, std::string name, int length_side_a, int length_side_b, int length_side_c,
    int value_angle_A, int value_angle_B, int value_angle_C)
{
    this->length_side_a = length_side_a;
    this->length_side_b = length_side_b;
    this->length_side_c = length_side_c;
    this->value_angle_A = value_angle_A;
    this->value_angle_B = value_angle_B;
    this->value_angle_C = value_angle_C;
};

int Triangle::get_lenght_side_a()
{
    return length_side_a;
};

int Triangle::get_lenght_side_b()
{
    return length_side_b;
};

int Triangle::get_lenght_side_c()
{
    return length_side_c;
};

int Triangle::get_value_angle_A()
{
    return value_angle_A;
};

int Triangle::get_value_angle_B()
{
    return value_angle_B;
};

int Triangle::get_value_angle_C()
{
    return value_angle_C;
};

bool Triangle::check() {
    if (((length_side_a == length_side_b) && (length_side_b == length_side_c) && (length_side_a == length_side_c)) &&
        ((value_angle_A == value_angle_B) && (value_angle_B == value_angle_C) && (value_angle_A == value_angle_C)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
};

void Triangle::print_info() 
{
    std::cout << get_name() << std::endl;
    std::cout << "Стороны:" << " a=" << get_lenght_side_a() << " b=" << get_lenght_side_b() << " c=" << get_lenght_side_c() << std::endl;
    std::cout << "Углы:" << " A=" << get_value_angle_A() << " B=" << get_value_angle_B() << " C=" << get_value_angle_C() << std::endl << std::endl;
};