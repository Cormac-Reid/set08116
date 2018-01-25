#define GLM_ENABLE_EXPERIMENTAL
#include <glm\glm.hpp>
#include <glm\gtc\constants.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <glm\gtc\quaternion.hpp>
#include <glm\gtx\euler_angles.hpp>
#include <glm\gtx\projection.hpp>
#include <iostream>

using namespace std;
using namespace glm;

int main() {
	vec2 r(1.0, 0.0);
	vec2 s(0.0, 1.0);
	vec3 t(1.0, 0.0, 0.0);
	vec3 u(0.0, 0.0, 1.0);
	vec4 v(1.0, 0.0, 0.0, 0.0);
	vec4 w(0.0, 0.0, 0.0, 1.0);

	//Convert Vector
	vec3(vec2(1.0, 0.0), 0.0);
	vec4(vec2(0.0, 1.0), 0.0, 0.0);
	vec2(vec3(1.0, 0.0, 0.0));
	vec4(vec3(0.0, 0.0, 1.0), 0.0);
	vec2(vec4(1.0, 0.0, 0.0, 0.0));
	vec3(vec4(0.0, 0.0, 0.0, 1.0));

	//Add/Sub Vectors
	vec2 a = r + s;
	vec2 b = r - s;
	vec3 c = t + u;
	vec3 d = t - u;
	vec4 e = v + w;
	vec4 f = v - w;

	//Mult/Div Vectors
	vec2 g = 10.0f * r;
	vec2 h = g / 5.0f;
	vec3 i = 4.0f * t;
	vec3 j = t / 2.0f;
	vec4 k = 2.0f * v;
	vec4 l = v / 1.5f;

	//Length of Vector
	float fa = length(r);
	float fb = length(t);
	float fc = length(v);

	//Normalizing Vectors
	vec2 m = normalize(r);
	vec3 n = normalize(t);
	vec4 o = normalize(v);

	//Dot Product
	float fd = dot(r, s);
	float fe = dot(t, u);
	float ff = dot(v, w);

	//Vector Projection
	vec2 va = proj(r, s);
	vec3 vb = proj(t, u);
	vec4 vc = proj(v, w);

	//Cross Product
	vec3 vd = cross(t, u);

	//Matrices

	//Defining a Matrix
	mat4 ma(1.0f);
	mat4 mb(2.0f);

	//Matrix Addition
	mat4 mc = ma + mb;
	mat4 md = ma - mb;

	//Matrix Scaling
	mat4 me = 2.0f * ma;
	mat4 mf = mb / 3.0f;

	//Matrix Mult
	mat4 mg = ma * mb;

	//Matrix-Vector Mult
	vec4 ve(t, 0.0);
	vec4 vf = ve * ma;

	//Quaternions

	quat qa;
	
	//Quat Rotations
	//quat qb = rotate(quat(), angle, vec3(1.0, 0.0, 0.0));
}