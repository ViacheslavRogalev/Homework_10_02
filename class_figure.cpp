#include "class_figure.h"

Figure::Figure() 
{ 
    sides_count = 0; 
    name = "Фигура"; 
}

Figure::Figure(int sides_count, std::string name)
{
    this->sides_count = sides_count;
    this->name = name;
}

std::string Figure::get_name() 
{ 
    return name; 
};

int Figure::get_sides_count() 
{ 
    return sides_count; 
};