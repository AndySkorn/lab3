#pragma once
#include <iostream>
#include <cmath>
#include <ctime>
#include "Shape.h"
#include "Hexagon.h"
#include "Octagon.h"
#include "Parallelogram.h"
#include "Rectangl.h"
#include "Square.h"
#include "Trapeze.h"
#include "Triangle.h"


class FactoryShape
{
public:
	FactoryShape();
	Shape* Generator();

	virtual ~FactoryShape();
};

