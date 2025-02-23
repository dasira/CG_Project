#version 330
// in_Position was bound to attribute index 0 and
// in_Color was bound to attribute index 1
in vec3 in_Position; // 위치 속성
in vec4 in_Color; // 색상 속성
uniform mat4 modelTransform; // 변환 메트릭스
uniform mat4 viewTransform; // view변환 매트릭스
uniform mat4 projectionTransform;
uniform vec3 uniform_color; //  색상
out vec4 ex_Color; // 프래그먼트 세이더에게 전달

void main(void)
{
	gl_Position = projectionTransform * viewTransform * modelTransform * vec4(in_Position, 1.0);
	ex_Color = vec4(uniform_color, 1.0);
}
