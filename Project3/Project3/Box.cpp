#include "Box.h"
#include <gl/glew.h>
#include <gl/freeglut.h>
#include <gl/freeglut_ext.h>
#include <glm/ext.hpp>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <vector>

CBox::CBox()
{
}

CBox::~CBox()
{
}

void CBox::Ready_Buffer()
{
	scale = glm::vec3(1.f,1.f,1.f);
	int m_iNumVertices = 36;
	int m_iStride = sizeof(glm::vec3);
	
	vecVertices.resize(m_iNumVertices);

	vecVertices[0] = glm::vec3(0.5f, 0.5f, -0.5f);
	vecVertices[1] = glm::vec3(0.5f, -0.5f, -0.5f);
	vecVertices[2] = glm::vec3(-0.5f, -0.5f, -0.5f);
	vecVertices[3] = glm::vec3(-0.5f, -0.5f, -0.5f);
	vecVertices[4] = glm::vec3(-0.5f, 0.5f, -0.5f);
	vecVertices[5] = glm::vec3(0.5f, 0.5f, -0.5f);
	vecVertices[6] = glm::vec3(-0.5f, -0.5f, 0.5f);
	vecVertices[7] = glm::vec3(0.5f, -0.5f, 0.5f);
	vecVertices[8] = glm::vec3(0.5f, 0.5f, 0.5f);
	vecVertices[9] = glm::vec3(0.5f, 0.5f, 0.5f);
	vecVertices[10] = glm::vec3(-0.5f, 0.5f, 0.5f);
	vecVertices[11] = glm::vec3(-0.5f, -0.5f, 0.5f);
	vecVertices[12] = glm::vec3(-0.5f, -0.5f, -0.5f);
	vecVertices[13] = glm::vec3(-0.5f, -0.5f, 0.5f);
	vecVertices[14] = glm::vec3(-0.5f, 0.5f, 0.5f);
	vecVertices[15] = glm::vec3(-0.5f, 0.5f, 0.5f);
	vecVertices[16] = glm::vec3(-0.5f, 0.5f, -0.5f);
	vecVertices[17] = glm::vec3(-0.5f, -0.5f, -0.5f);
	vecVertices[18] = glm::vec3(0.5f, 0.5f, 0.5f);
	vecVertices[19] = glm::vec3(0.5f, -0.5f, 0.5f);
	vecVertices[20] = glm::vec3(0.5f, -0.5f, -0.5f);
	vecVertices[21] = glm::vec3(0.5f, -0.5f, -0.5f);
	vecVertices[22] = glm::vec3(0.5f, 0.5f, -0.5f);
	vecVertices[23] = glm::vec3(0.5f, 0.5f, 0.5f);
	vecVertices[24] = glm::vec3(0.5f, 0.5f, 0.5f);
	vecVertices[25] = glm::vec3(0.5f, 0.5f, -0.5f);
	vecVertices[26] = glm::vec3(-0.5f, 0.5f, -0.5f);
	vecVertices[27] = glm::vec3(-0.5f, 0.5f, -0.5f);
	vecVertices[28] = glm::vec3(-0.5f, 0.5f, 0.5f);
	vecVertices[29] = glm::vec3(0.5f, 0.5f, 0.5f);
	vecVertices[30] = glm::vec3(-0.5f, -0.5f, -0.5f);
	vecVertices[31] = glm::vec3(0.5f, -0.5f, -0.5f);
	vecVertices[32] = glm::vec3(0.5f, -0.5f, 0.5f);
	vecVertices[33] = glm::vec3(0.5f, -0.5f, 0.5f);
	vecVertices[34] = glm::vec3(-0.5f, -0.5f, 0.5f);
	vecVertices[35] = glm::vec3(-0.5f, -0.5f, -0.5f);
	
	vecColors.resize(m_iNumVertices);

	vecColors[0] = glm::vec3(1.f, 0.5f, 0.5f);
	vecColors[1] = glm::vec3(1.f, 0.5f, 0.5f);
	vecColors[2] = glm::vec3(1.f, 0.5f, 0.5f);
	vecColors[3] = glm::vec3(0.5f, 1.5f, 0.5f);
	vecColors[4] = glm::vec3(0.5f, 1.5f, 0.5f);
	vecColors[5] = glm::vec3(0.5f, 1.5f, 0.5f);
	vecColors[6] = glm::vec3(0.5f, 0.5f, 1.5f);
	vecColors[7] = glm::vec3(0.5f, 0.5f, 1.5f);
	vecColors[8] = glm::vec3(0.5f, 0.5f, 1.5f);
	vecColors[9] = glm::vec3(1.f, 0.5f, 1.f);
	vecColors[10] = glm::vec3(1.f, 0.5f, 1.f);
	vecColors[11] = glm::vec3(1.f, 0.5f, 1.f);
	vecColors[12] = glm::vec3(0.5f, 0.f, 1.f);
	vecColors[13] = glm::vec3(0.5f, 0.f, 1.f);
	vecColors[14] = glm::vec3(0.5f, 0.f, 1.f);
	vecColors[15] = glm::vec3(1.f, 0.f, 0.5f);
	vecColors[16] = glm::vec3(1.f, 0.f, 0.5f);
	vecColors[17] = glm::vec3(1.f, 0.f, 0.5f);
	vecColors[18] = glm::vec3(0.f, 0.5f, 1.f);
	vecColors[19] = glm::vec3(0.f, 0.5f, 1.f);
	vecColors[20] = glm::vec3(0.f, 0.5f, 1.f);
	vecColors[21] = glm::vec3(0.f,1.f, 0.f);
	vecColors[22] = glm::vec3(0.f,1.f, 0.f);
	vecColors[23] = glm::vec3(0.f,1.f, 0.f);
	vecColors[24] = glm::vec3(0.f, 0.f, 1.f);
	vecColors[25] = glm::vec3(0.f, 0.f, 1.f);
	vecColors[26] = glm::vec3(0.f, 0.f, 1.f);
	vecColors[27] = glm::vec3(1.f, 0.5f, 1.f);
	vecColors[28] = glm::vec3(1.f, 0.5f, 1.f);
	vecColors[29] = glm::vec3(1.f, 0.5f, 1.f);
	vecColors[30] = glm::vec3(0.5f, 1.f, 1.f);
	vecColors[31] = glm::vec3(0.5f, 1.f, 1.f);
	vecColors[32] = glm::vec3(0.5f, 1.f, 1.f);
	vecColors[33] = glm::vec3(1.f, 1.f, 0.5f);
	vecColors[34] = glm::vec3(1.f, 1.f, 0.5f);
	vecColors[35] = glm::vec3(1.f, 1.f, 0.5f);

	
	// vertex array
	// |- vertex buffer (vector3)
	// |- vertex buffer (color)

	// 1. create vertex array
	// 2, bind vertex array
	// 3. create 2 vertex buffer2
	// 4. bind vertex buffer (vector3)
	// 5. send data to vertex buffer (vector3)
	// 6. bind vertex buffer (color)
	// 7. send data to vertex buffer (color)
	// 8. set vertex attributes


	// crezte vertex array
	glGenVertexArrays(1, &vao);
	// bind vertex array
	glBindVertexArray(vao);

	// create 2 vertex buffers
	glGenBuffers(2, vbo);

	// create vertex buffer (vector3)
	glBindBuffer(GL_ARRAY_BUFFER, vbo[0]);
	// send data to vertex buffer (vector3)
	glBufferData(GL_ARRAY_BUFFER, sizeof(glm::vec3)*vecVertices.size(), vecVertices.data(), GL_STATIC_DRAW);
	// set vertex attribute 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(0);

	// create vertex buffer (color)
	glBindBuffer(GL_ARRAY_BUFFER, vbo[1]);
	// send data to vertex buffer (color)
	glBufferData(GL_ARRAY_BUFFER, sizeof(glm::vec3)* vecColors.size(), vecColors.data(), GL_STATIC_DRAW);
	// set vertex attribute 1
	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(1);


}

void CBox::Update()
{
	if (IsUD)
		scale.y -= Speed;
	else
		scale.y += Speed;

	if (scale.y > 2)
		IsUD = !IsUD;
	else if (scale.y < 0.1)
		IsUD = !IsUD;
}

void CBox::Draw(GLuint pID)
{
	glUseProgram(pID);
	glBindVertexArray(vao);
	int modelLoc = glGetUniformLocation(pID, "model"); //--- 버텍스 세이더에서 모델링 변환 행렬 변수값을 받아온다.
	
	//--- 모델링 변환, 뷰잉 변환, 투영 변환 행렬을 설정한 후, 버텍스 세이더에 저장한다.
	glm::mat4 Rx = glm::mat4(1.0f);
	glm::mat4 Ry = glm::mat4(1.0f);
	glm::mat4 Rz = glm::mat4(1.0f);

	glm::mat4 Sx = glm::mat4(1.0f);
	glm::mat4 Sy = glm::mat4(1.0f);
	glm::mat4 Sz = glm::mat4(1.0f);

	glm::mat4 Tx = glm::mat4(1.0f);
	glm::mat4 TR = glm::mat4(1.0f);

	glm::mat4 rotate = glm::mat4(1.0f);
	//glm::mat4 scale = glm::mat4(1.0f);

	// 1. translate
	// 2. rotate
	// 3. scale

	Tx = glm::translate(Tx, location);
	
	Rx = glm::rotate(Rx, glm::radians((float)rotation.x), glm::vec3(1.0, 0.0, 0.0));
	Ry = glm::rotate(Ry, glm::radians((float)rotation.y), glm::vec3(0.0, 1.0, 0.0));
	Rz = glm::rotate(Rz, glm::radians((float)rotation.z), glm::vec3(0.0, 0.0, 1.0));

	Sx = glm::scale(Sx, scale);

	rotate = Rx * Ry * Rz;
	
	TR = Sx * rotate * Tx;

	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, &TR[0][0]);

	//--- 객체를 그린다.
	glBindVertexArray(vao);
	glDrawArrays(GL_TRIANGLES, 0, 36);
}

CBox* CBox::Clone_Component()
{
	return nullptr;
}

void CBox::SetPos(glm::vec3 _pos)
{
	location = _pos;
}

void CBox::SetRot(glm::vec3 _rot)
{
	rotation = _rot;
}

void CBox::SetSpeed(float _speed)
{
	Speed = _speed;
	if (Speed > 2)
		Speed = 2;
	if (Speed < 0)
		Speed = 0;
}

void CBox::SetScale(glm::vec3 _scale)
{
	scale = _scale;
}

