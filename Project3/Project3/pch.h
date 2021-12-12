#ifndef PCH_H
#define PCH_H

#include <iostream>
#include <string>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <GL/freeglut_ext.h> 
#include <GL/glm/glm/glm.hpp>
#include <GL/glm/glm/ext.hpp>
#include <GL/glm/glm/gtc/matrix_transform.hpp>

float clamp(float min, float mid, float max);
float radian(float angle);

#endif