#pragma once
#include <gl/glew.h>
#include <gl/freeglut.h>
#include <gl/freeglut_ext.h>
#include <glm/ext.hpp>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

typedef struct Vector3
{
	Vector3()
	{
		x = 0;
		y = 0;
		z = 0;
	}
	Vector3(float _x, float _y, float _z)
	{
		x = _x;
		y = _y;
		z = _z;
	}
	float x;
	float y;
	float z;
};

class CBox
{
public:
	CBox();
	~CBox();
public:
	void Ready_Buffer();
	void Update();
	void Draw(GLuint pID);
	CBox* Clone_Component();

	void SetPos(glm::vec3 _pos);
	void SetRot(glm::vec3 _rot);
	void SetSpeed(float _speed);
	void SetScale(glm::vec3 _scale);

	const float& GetSpeed() {return Speed;};
	const glm::vec3& GetPos() { return location; };
public:
	glm::vec3 location;
	glm::vec3 rotation; // euler
	glm::vec3 scale;

private:
	vector<glm::vec3>	vecVertices;
	vector<glm::vec3>	vecColors;
	vector<int>	vecIndices;
	glm::mat4 transform;

	GLuint vao, vbo[2];
	GLuint ebo;

	//GLfloat ScaleY;
	bool IsUD;
	float Speed;
};

