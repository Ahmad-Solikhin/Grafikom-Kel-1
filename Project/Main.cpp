#include"Mesh.h"



const unsigned int width = 1200;
const unsigned int height = 800;


// Vertices coordinates
Vertex lantai[] =
{ //               COORDINATES           /            Normals         /           Colors         /       TexCoord       //
	Vertex{glm::vec3(-10.99f, -5.2f,  -6.51f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-10.99f, -5.2f, -30.99f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(10.99f, -5.2f, -30.99f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(10.99f, -5.2f,  -6.51f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)},

	Vertex{glm::vec3(-10.99f, -5.0f,  -6.51f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-10.99f, -5.0f, -30.99f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(10.99f, -5.0f, -30.99f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(10.99f, -5.0f,  -6.51f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)},
};


// Indices for vertices order
GLuint lantaiIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	4, 5, 6,
	4, 6, 7,
	0, 4, 5,
	0, 5, 1,
	3, 7, 6,
	3, 6, 2,
	1, 5, 6,
	1, 6, 2,
	0, 4, 7,
	0, 7, 3
};

Vertex kipas[] =
{
	Vertex{glm::vec3(-0.5f, 8.89f,  0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.72f, 0.1f, 0.1f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.5f, 8.89f, -5.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.72f, 0.1f, 0.1f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(0.5f, 8.89f, -5.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.72f, 0.1f, 0.1f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(0.5f, 8.89f,  0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.72f, 0.1f, 0.1f), glm::vec2(1.0f, 0.0f)},
	//4
	Vertex{glm::vec3(0.0f, 8.89f,  0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.72f, 0.1f, 0.1f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, 8.89f, -0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.72f, 0.1f, 0.1f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(5.0f, 8.89f, -0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.72f, 0.1f, 0.1f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(5.0f, 8.89f,  0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.72f, 0.1f, 0.1f), glm::vec2(1.0f, 0.0f)},
	//8
	Vertex{glm::vec3(-0.0f, 8.89f,  0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.72f, 0.1f, 0.1f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.0f, 8.89f, -0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.72f, 0.1f, 0.1f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-5.0f, 8.89f, -0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.72f, 0.1f, 0.1f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-5.0f, 8.89f,  0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.72f, 0.1f, 0.1f), glm::vec2(1.0f, 0.0f)},
	//12
	Vertex{glm::vec3(-0.5f, 8.89f,  0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.72f, 0.1f, 0.1f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.5f, 8.89f, 5.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.72f, 0.1f, 0.1f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(0.5f, 8.89f, 5.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.72f, 0.1f, 0.1f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(0.5f, 8.89f,  0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.72f, 0.1f, 0.1f), glm::vec2(1.0f, 0.0f)},

	

	//16
	Vertex{glm::vec3(-0.5f, 8.71f,  0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.67f, 0.05f, 0.05f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.5f, 8.71f, -5.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.67f, 0.05f, 0.05f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(0.5f, 8.71f, -5.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.67f, 0.05f, 0.05f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(0.5f, 8.71f,  0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.67f, 0.05f, 0.05f), glm::vec2(1.0f, 0.0f)},
	//20
	Vertex{glm::vec3(0.0f, 8.71f,  0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.67f, 0.05f, 0.05f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, 8.71f, -0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.67f, 0.05f, 0.05f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(5.0f, 8.71f, -0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.67f, 0.05f, 0.05f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(5.0f, 8.71f,  0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.67f, 0.05f, 0.05f), glm::vec2(1.0f, 0.0f)},
	//24
	Vertex{glm::vec3(-0.0f, 8.71f,  0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.67f, 0.05f, 0.05f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.0f, 8.71f, -0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.67f, 0.05f, 0.05f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-5.0f, 8.71f, -0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.67f, 0.05f, 0.05f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-5.0f, 8.71f,  0.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.67f, 0.05f, 0.05f), glm::vec2(1.0f, 0.0f)},
	//28
	Vertex{glm::vec3(-0.5f, 8.71f,  0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.67f, 0.05f, 0.05f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.5f, 8.71f, 5.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.67f, 0.05f, 0.05f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(0.5f, 8.71f, 5.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.67f, 0.05f, 0.05f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(0.5f, 8.71f,  0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.67f, 0.05f, 0.05f), glm::vec2(1.0f, 0.0f)}
};

GLuint kipasIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	4, 5, 6,
	4, 6, 7,
	8, 9, 10, 
	8, 10, 11,
	12, 13, 14,
	12, 14, 15,

	16, 17, 18,
	16, 18, 19,
	20, 21, 22,
	20, 22, 23,
	24, 25, 26,
	24, 26, 27,
	28, 29, 30,
	28, 30, 31,

	17, 1, 2,
	17, 2, 18,
	16, 0, 1,
	16, 1, 17,
	19, 3, 0,
	19, 0, 16,
	19, 3, 2,
	19, 2, 18,

	21, 5, 6,
	21, 6, 22,
	20, 4, 5,
	20, 5, 21,
	23, 7, 4,
	23, 4, 20,
	23, 7, 6,
	23, 6, 22,

	25, 9, 10,
	25, 10, 26,
	24, 8, 9,
	24, 9, 25,
	27, 11, 8,
	27, 8, 24,
	27, 11, 10,
	27, 10, 26,

	29, 13, 14,
	29, 14, 30,
	28, 12, 13,
	28, 13, 29,
	31, 15, 12,
	31, 12, 28,
	30, 14, 15,
	30, 15, 31
};

Vertex kotak[] =
{
	Vertex{glm::vec3(-0.8f, 10.0f,  -17.45f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.8f, 10.0f,  -19.05f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.8f, 10.0f,  -19.05f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.8f, 10.0f,  -17.45f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	//4
	Vertex{glm::vec3(-0.5f, 9.3f,  -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.9f, 0.9f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.5f, 9.3f,  -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.9f, 0.9f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.5f, 9.3f,  -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.9f, 0.9f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.5f, 9.3f,  -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.9f, 0.9f), glm::vec2(0.0f, 0.0f)},
	//8
	Vertex{glm::vec3(-0.3f, 9.3f,  -17.95f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.9f, 0.9f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.3f, 9.3f,  -18.55f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.9f, 0.9f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.3f, 9.3f,  -18.55f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.9f, 0.9f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.3f, 9.3f,  -17.95f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.9f, 0.9f), glm::vec2(0.0f, 0.0f)},
	//12
	Vertex{glm::vec3(-0.3f, 8.9f,  -17.95f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.8f, 0.8f, 0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.3f, 8.9f,  -18.55f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.8f, 0.8f, 0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.3f, 8.9f,  -18.55f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.8f, 0.8f, 0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.3f, 8.9f,  -17.95f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.8f, 0.8f, 0.8f), glm::vec2(0.0f, 0.0f)},

	//16
	Vertex{glm::vec3(-0.5f, 8.9f,  -17.35f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.8f, 0.8f, 0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.5f, 8.9f,  -19.15f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.8f, 0.8f, 0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.5f, 8.9f,  -19.15f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.8f, 0.8f, 0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.5f, 8.9f,  -17.35f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.8f, 0.8f, 0.8f), glm::vec2(0.0f, 0.0f)},
	//20
	Vertex{glm::vec3(0.0f, 8.9f,  -17.15f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.8f, 0.8f, 0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, 8.9f,  -19.35f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.8f, 0.8f, 0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.8f, 8.9f,  -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.8f, 0.8f, 0.8f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.8f, 8.9f,  -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.8f, 0.8f, 0.8f), glm::vec2(0.0f, 0.0f)},
	//24
	Vertex{glm::vec3(-0.5f, 8.7f,  -17.35f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.7f, 0.7f, 0.7f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.5f, 8.7f,  -19.15f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.7f, 0.7f, 0.7f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.5f, 8.7f,  -19.15f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.7f, 0.7f, 0.7f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.5f, 8.7f,  -17.35f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.7f, 0.7f, 0.7f), glm::vec2(0.0f, 0.0f)},
	//28
	Vertex{glm::vec3(0.0f, 8.7f,  -17.15f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.7f, 0.7f, 0.7f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, 8.7f,  -19.35f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.7f, 0.7f, 0.7f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.8f, 8.7f,  -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.7f, 0.7f, 0.7f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.8f, 8.7f,  -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.7f, 0.7f, 0.7f), glm::vec2(0.0f, 0.0f)},
	
}; 

GLuint kotakIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	4, 5, 6,
	4, 6, 7,
	5, 1, 2,
	5, 2, 6,
	4, 0, 3,
	4, 3, 7,
	4, 0, 1,
	4, 1, 5,
	7, 3, 2,
	7, 2, 6,
	8, 9, 10,
	8, 10, 11,
	12, 13, 14,
	12, 14, 15,
	9, 13, 14,
	9, 14, 10,
	8, 12, 15,
	8, 15, 11,
	12, 8, 9,
	12, 9, 13,
	15, 11, 10,
	15, 10, 14,
	16, 17, 18,
	16, 18, 19,
	20, 16, 19,
	17, 21, 18,
	16, 22, 17,
	19, 18, 23,

	24, 25, 26,
	24, 26, 27,
	28, 24, 27,
	25, 29, 26,
	24, 30, 25,
	27, 26, 31,
	24, 16, 20,
	24, 20, 28,
	28, 20, 19,
	28, 19, 27,
	27, 19, 23,
	27, 23, 31,
	31, 23, 18,
	31, 18, 26,
	26, 18, 21,
	26, 21, 29,
	29, 21, 17,
	29, 17, 25,
	25, 17, 22,
	25, 22, 30,
	30, 22, 16,
	30, 16, 24
};

Vertex karpet[] =
{
	Vertex{glm::vec3(-5.0f, -5.1f,  -10.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-5.0f, -5.1f, -25.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(5.0f, -5.1f, -25.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(5.0f, -5.1f,  -10.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(-5.0f, -4.9f,  -10.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-5.0f, -4.9f, -25.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(5.0f, -4.9f, -25.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(5.0f, -4.9f,  -10.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)}
};

GLuint karpetIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	0, 1, 5,
	0, 5, 4,
	4, 5, 6,
	4, 6, 7,
	3, 0, 4,
	3, 4, 7,
	2, 3, 7,
	2, 7, 6,
	2, 1, 5,
	2, 5, 6
};

Vertex sofaDepan[] =
{
	Vertex{glm::vec3(0.0f, -5.0f,  -22.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.7f, 0.7f, 0.7f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, -5.0f,  -26.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.6f, 0.6f, 0.6f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(5.0f, -5.0f,  -26.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.6f, 0.6f, 0.6f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(5.0f, -5.0f,  -22.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.7f, 0.7f, 0.7f), glm::vec2(1.0f, 0.0f)},
	//4
	Vertex{glm::vec3(0.0f, -3.0f,  -22.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.7f, 0.7f, 0.7f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, -3.0f,  -26.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.6f, 0.6f, 0.6f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(5.0f, -3.0f,  -26.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.6f, 0.6f, 0.6f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(5.0f, -3.0f,  -22.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.7f, 0.7f, 0.7f), glm::vec2(1.0f, 0.0f)},
	//8
	Vertex{glm::vec3(5.0f, -5.0f,  -22.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.4f, 0.27f, 0.27f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(5.0f, -5.0f,  -26.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.3f, 0.17f, 0.17f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(6.0f, -5.0f,  -26.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.3f, 0.17f, 0.17f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(6.0f, -5.0f,  -22.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.4f, 0.27f, 0.27f), glm::vec2(1.0f, 0.0f)},
	//12
	Vertex{glm::vec3(5.0f, -2.0f,  -22.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.4f, 0.27f, 0.27f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(5.0f, -2.0f,  -26.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.3f, 0.17f, 0.17f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(6.0f, -2.0f,  -26.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.3f, 0.17f, 0.17f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(6.0f, -2.0f,  -22.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.4f, 0.27f, 0.27f), glm::vec2(1.0f, 0.0f)},
	//16
	Vertex{glm::vec3(0.0f, -5.0f,  -22.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.4f, 0.27f, 0.27f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, -5.0f,  -26.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.3f, 0.17f, 0.17f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(-1.0f, -5.0f,  -26.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.3f, 0.17f, 0.17f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(-1.0f, -5.0f,  -22.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.4f, 0.27f, 0.27f), glm::vec2(1.0f, 0.0f)},
	//20
	Vertex{glm::vec3(0.0f, -2.0f,  -22.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.4f, 0.27f, 0.27f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, -2.0f,  -26.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.3f, 0.17f, 0.17f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(-1.0f, -2.0f,  -26.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.3f, 0.17f, 0.17f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(-1.0f, -2.0f,  -22.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.4f, 0.27f, 0.27f), glm::vec2(1.0f, 0.0f)},
	//24
	Vertex{glm::vec3(0.0f, -3.0f,  -25.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.7f, 0.7f, 0.7f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, -3.0f,  -26.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.6f, 0.6f, 0.6f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(5.0f, -3.0f,  -26.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.6f, 0.6f, 0.6f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(5.0f, -3.0f,  -25.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.7f, 0.7f, 0.7f), glm::vec2(1.0f, 0.0f)},
	//28
	Vertex{glm::vec3(0.0f, -0.5f,  -25.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.7f, 0.7f, 0.7f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, -0.5f,  -26.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.6f, 0.6f, 0.6f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(5.0f, -0.5f,  -26.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.6f, 0.6f, 0.6f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(5.0f, -0.5f,  -25.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.7f, 0.7f, 0.7f), glm::vec2(1.0f, 0.0f)}
	
};

GLuint sofaDepanIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	4, 5, 6,
	4, 6, 7,
	1, 5, 6,
	1, 6, 2,
	0, 4, 7,
	0, 7, 3,
	0, 4, 5,
	0, 5, 1,
	3, 7, 6,
	3, 6, 2,
	8, 9, 10,
	8, 10, 11,
	12, 13, 14,
	12, 14, 15,
	9, 13, 14,
	9, 14, 10,
	8, 12, 15,
	8, 15, 11,
	8, 12, 13,
	8, 13, 9,
	11, 15, 14,
	11, 14, 10,
	16, 17, 18,
	16, 18, 19,
	20, 21, 22,
	20, 22, 23,
	18, 22, 21,
	18, 21, 17,
	19, 23, 20,
	19, 20, 16,
	19, 23, 22,
	19, 22, 18,
	16, 20, 21,
	16, 21, 17,
	24, 25, 26,
	24, 26, 27,
	28, 29, 30,
	28, 30, 31,
	25, 29, 30,
	25, 30, 26,
	24, 28, 31,
	24, 31, 27,
	24, 28, 29,
	24, 29, 25,
	27, 31, 30,
	27, 30, 26
};

Vertex sofaKiri[] =
{
	//kiri
	Vertex{glm::vec3(-6.5f, -5.0f,  -10.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.6f, 0.6f, 0.6f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-6.5f, -5.0f, -20.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.6f, 0.6f, 0.6f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-2.5f, -5.0f, -20.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.7f, 0.7f, 0.7f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-2.5f, -5.0f,  -10.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.7f, 0.7f, 0.7f), glm::vec2(1.0f, 0.0f)},
	//4
	Vertex{glm::vec3(-6.5f, -3.0f,  -10.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.6f, 0.6f, 0.6f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-6.5f, -3.0f, -20.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.6f, 0.6f, 0.6f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-2.5f, -3.0f, -20.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.7f, 0.7f, 0.7f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-2.5f, -3.0f,  -10.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.7f, 0.7f, 0.7f), glm::vec2(1.0f, 0.0f)},
	//8
	Vertex{glm::vec3(-6.5f, -5.0f,  -10.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.3f, 0.17f, 0.17f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-6.5f, -2.0f,  -10.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.3f, 0.17f, 0.17f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-2.0f, -2.0f,  -10.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.4f, 0.27f, 0.27f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(-2.0f, -5.0f,  -10.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.4f, 0.27f, 0.27f), glm::vec2(1.0f, 0.0f)},
	//12
	Vertex{glm::vec3(-6.5f, -5.0f,  -9.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.3f, 0.17f, 0.17f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-6.5f, -2.0f,  -9.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.3f, 0.17f, 0.17f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-2.0f, -2.0f,  -9.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.4f, 0.27f, 0.27f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(-2.0f, -5.0f,  -9.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.4f, 0.27f, 0.27f), glm::vec2(1.0f, 0.0f)},
	//16
	Vertex{glm::vec3(-6.5f, -5.0f,  -20.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.3f, 0.17f, 0.17f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-6.5f, -2.0f,  -20.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.3f, 0.17f, 0.17f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-2.0f, -2.0f,  -20.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.4f, 0.27f, 0.27f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(-2.0f, -5.0f,  -20.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.4f, 0.27f, 0.27f), glm::vec2(1.0f, 0.0f)},
	//20
	Vertex{glm::vec3(-6.5f, -5.0f,  -21.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.3f, 0.17f, 0.17f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-6.5f, -2.0f,  -21.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.3f, 0.17f, 0.17f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-2.0f, -2.0f,  -21.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.4f, 0.27f, 0.27f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(-2.0f, -5.0f,  -21.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.4f, 0.27f, 0.27f), glm::vec2(1.0f, 0.0f)},
	//24
	Vertex{glm::vec3(-6.5f, -3.0f,  -10.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.6f, 0.6f, 0.6f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-6.5f, -3.0f, -20.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.6f, 0.6f, 0.6f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-5.5f, -3.0f, -20.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.7f, 0.7f, 0.7f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-5.5f, -3.0f,  -10.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.7f, 0.7f, 0.7f), glm::vec2(0.0f, 0.0f)},
	//28
	Vertex{glm::vec3(-6.5f, -0.5f,  -10.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.6f, 0.6f, 0.6f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-6.5f, -0.5f, -20.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.6f, 0.6f, 0.6f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-5.5f, -0.5f, -20.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.7f, 0.7f, 0.7f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-5.5f, -0.5f,  -10.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.7f, 0.7f, 0.7f), glm::vec2(0.0f, 0.0f)}
	
};

GLuint sofaKiriIndices[] = 
{
	0, 1, 2,
	0, 2, 3,
	4, 5, 6, 
	4, 6, 7,
	0, 4, 7,
	0, 7, 3,
	1, 5, 6,
	1, 6, 2,
	0, 4, 5,
	0, 5, 1,
	3, 7, 6,
	3, 6, 2,
	8, 9, 10,
	8, 10, 11,
	12, 13, 14,
	12, 14, 15,
	13, 9, 10,
	13, 10, 14,
	12, 13, 9,
	12, 9, 8,
	15, 14, 10,
	15, 10, 11,
	16, 17, 18,
	16, 18, 19,
	20, 21, 22,
	20, 22, 23,
	17, 21, 22,
	17, 22, 18,
	16, 17, 21,
	16, 21, 20,
	19, 18, 22,
	19, 22, 23,
	24, 25, 26,
	24, 26, 27,
	28, 29, 30,
	28, 30, 31,
	25, 29, 30,
	25, 30, 26,
	24, 28, 31,
	24, 31, 27,
	24, 28, 29,
	24, 29, 25,
	27, 31, 30,
	27, 30, 26
};

Vertex meja[] =
{
	Vertex{glm::vec3(-0.5f, -2.8f,  -11.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(-0.5f, -2.8f,  -20.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(4.0f, -2.8f,  -20.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(4.0f, -2.8f,  -11.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)},
	//4
	Vertex{glm::vec3(-0.5f, -3.0f,  -11.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.49f, 0.49f, 0.49f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(-0.5f, -3.0f,  -20.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.49f, 0.49f, 0.49f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(4.0f, -3.0f,  -20.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.49f, 0.49f, 0.49f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(4.0f, -3.0f,  -11.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.49f, 0.49f, 0.49f), glm::vec2(1.0f, 0.0f)},
	//8 kaki
	Vertex{glm::vec3(-0.2f, -3.0f,  -11.3f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.2f, 0.2f, 0.2f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(-0.2f, -3.0f,  -11.6f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.2f, 0.2f, 0.2f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(0.1f, -3.0f,  -11.6f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.2f, 0.2f, 0.2f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(0.1f, -3.0f,  -11.3f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.2f, 0.2f, 0.2f), glm::vec2(1.0f, 0.0f)},
	//12
	Vertex{glm::vec3(-0.3f, -5.0f,  -11.3f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(-0.3f, -5.0f,  -11.6f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, -5.0f,  -11.6f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, -5.0f,  -11.3f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},
	//16
	Vertex{glm::vec3(-0.2f, -3.0f,  -19.9f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.2f, 0.2f, 0.2f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(-0.2f, -3.0f,  -20.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.2f, 0.2f, 0.2f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(0.1f, -3.0f,  -20.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.2f, 0.2f, 0.2f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(0.1f, -3.0f,  -19.9f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.2f, 0.2f, 0.2f), glm::vec2(1.0f, 0.0f)},
	//20
	Vertex{glm::vec3(-0.3f, -5.0f,  -19.9f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(-0.3f, -5.0f,  -20.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, -5.0f,  -20.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, -5.0f,  -19.9f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},
	//24
	Vertex{glm::vec3(3.4f, -3.0f,  -11.3f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.2f, 0.2f, 0.2f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(3.4f, -3.0f,  -11.6f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.2f, 0.2f, 0.2f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(3.7f, -3.0f,  -11.6f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.2f, 0.2f, 0.2f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(3.7f, -3.0f,  -11.3f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.2f, 0.2f, 0.2f), glm::vec2(1.0f, 0.0f)},
	//28
	Vertex{glm::vec3(3.5f, -5.0f,  -11.3f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(3.5f, -5.0f,  -11.6f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(3.8f, -5.0f,  -11.6f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(3.8f, -5.0f,  -11.3f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},
	
	//32
	Vertex{glm::vec3(3.4f, -3.0f,  -19.9f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.2f, 0.2f, 0.2f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(3.4f, -3.0f,  -20.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.2f, 0.2f, 0.2f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(3.7f, -3.0f,  -20.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.2f, 0.2f, 0.2f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(3.7f, -3.0f,  -19.9f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.2f, 0.2f, 0.2f), glm::vec2(1.0f, 0.0f)},
	//36
	Vertex{glm::vec3(3.5f, -5.0f,  -19.9f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(3.5f, -5.0f,  -20.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(3.8f, -5.0f,  -20.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(3.8f, -5.0f,  -19.9f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)}
};

GLuint mejaIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	4, 5, 6,
	4, 6, 7,
	5, 1, 2,
	5, 2, 6,
	4, 0, 3,
	4, 3, 7,
	4, 0, 1,
	4, 1, 5,
	7, 3, 2,
	7, 2, 6,
	8, 9, 10,
	8, 10, 11,
	12, 13, 14,
	12, 14, 15,
	13, 9, 10,
	13, 10, 14,
	12, 8, 11,
	12, 11, 15,
	12, 8, 9,
	12, 9, 13,
	15, 11, 10,
	15, 10, 14,

	16, 17, 18,
	16, 18, 19,
	20, 21, 22,
	20, 22, 23,
	21, 17, 18,
	21, 18, 22,
	20, 16, 19,
	20, 19, 23,
	20, 16, 17,
	20, 17, 21,
	23, 19, 18,
	23, 18, 22,

	24, 25, 26,
	24, 26, 27,
	28, 29, 30,
	28, 30, 31,
	29, 25, 26,
	29, 26, 30,
	28, 24, 27,
	28, 27, 31,
	28, 24, 25,
	28, 25, 29,
	31, 27, 26,
	31, 26, 30,

	32, 33, 34,
	32, 34, 35,
	36, 37, 38,
	36, 38, 39,
	37, 33, 34,
	37, 34, 38,
	36, 32, 35,
	36, 35, 39,
	36, 32, 33,
	36, 33, 37,
	39, 35, 34,
	39, 34, 38
};

Vertex bingkai[] =
{
	Vertex{glm::vec3(-2.8f, 1.8f, -29.8f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.43f, 0.1f, 0.1f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-2.8f, 5.0f, -29.8f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.43f, 0.1f, 0.1f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(2.8f, 5.0f, -29.8f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.43f, 0.1f, 0.1f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(2.8f, 1.8f, -29.8f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.43f, 0.1f, 0.1f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(-2.8f, 1.8f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.43f, 0.1f, 0.1f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-2.8f, 5.0f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.43f, 0.1f, 0.1f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(2.8f, 5.0f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.43f, 0.1f, 0.1f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(2.8f, 1.8f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.43f, 0.1f, 0.1f), glm::vec2(1.0f, 0.0f)}
};

GLuint bingkaiIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	4, 5, 6,
	4, 6, 7,
	7, 4, 0,
	7, 0, 3,
	4, 5, 1,
	4, 1, 0,
	5, 6, 2,
	5, 2, 1,
	6, 7, 3,
	6, 3, 2
};
//3.2f
Vertex rakDindingKiri[] =
{
	Vertex{glm::vec3(-6.7f, 1.8f, -29.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-6.7f, 2.1f, -29.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-3.2f, 2.1f, -29.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-3.2f, 1.8f, -29.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(1.0f, 0.0f)},
	
	Vertex{glm::vec3(-6.7f, 1.8f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-6.7f, 2.1f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-3.2f, 2.1f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-3.2f, 1.8f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(1.0f, 0.0f)},

	Vertex{glm::vec3(-6.7f, 3.0f, -29.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-6.4f, 3.0f, -29.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-6.4f, 2.1f, -29.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 1.0f)},

	Vertex{glm::vec3(-6.7f, 3.0f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-6.4f, 3.0f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-6.4f, 2.1f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 1.0f)},
	//14
	Vertex{glm::vec3(-3.2f, 3.0f, -29.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-3.4f, 3.0f, -29.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-3.4f, 2.1f, -29.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 1.0f)},
	//17
	Vertex{glm::vec3(-3.2f, 3.0f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-3.4f, 3.0f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-3.4f, 2.1f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 1.0f)}
};


GLuint rakDindingKiriIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	4, 5, 6,
	4, 6, 7,
	4, 5, 1,
	4, 1, 0,
	1, 5, 6,
	1, 6, 2,
	3, 2, 6,
	3, 6, 7,
	0, 4, 7,
	0, 7, 3,
	1, 8, 9,
	1, 9, 10,
	5, 11, 12,
	5, 12, 13,
	5, 11, 8,
	5, 8, 0,
	8, 11, 12,
	8, 12, 9,
	10, 9, 12,
	10, 12, 13,
	16, 15, 14,
	16, 14, 2,
	19, 18, 17,
	19, 17, 6,
	19, 18, 15,
	19, 15, 16,
	15, 18, 17,
	15, 17, 14,
	2, 14, 17,
	2, 17, 6
};

Vertex bukuKiri[] =
{
	Vertex{glm::vec3(-6.35f, 2.1f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.86f, 0.17f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-6.35f, 3.5f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.86f, 0.17f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-6.35f, 3.5f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.86f, 0.17f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-6.35f, 2.1f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.86f, 0.17f, 0.0f), glm::vec2(0.0f, 0.0f)},
	
	Vertex{glm::vec3(-5.65f, 2.1f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.86f, 0.17f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-5.65f, 3.5f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.86f, 0.17f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-5.65f, 3.5f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.86f, 0.17f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-5.65f, 2.1f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.86f, 0.17f, 0.0f), glm::vec2(0.0f, 0.0f)},
	//8
	Vertex{glm::vec3(-5.6f, 2.1f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.5f, 0.8f, 0.44f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-5.6f, 3.5f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.5f, 0.8f, 0.44f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-5.6f, 3.5f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.5f, 0.8f, 0.44f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-5.6f, 2.1f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.5f, 0.8f, 0.44f), glm::vec2(0.0f, 0.0f)},
	//12 
	Vertex{glm::vec3(-4.9f, 2.1f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.5f, 0.8f, 0.44f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-4.9f, 3.5f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.5f, 0.8f, 0.44f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-4.9f, 3.5f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.5f, 0.8f, 0.44f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-4.9f, 2.1f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.5f, 0.8f, 0.44f), glm::vec2(0.0f, 0.0f)},
	//16
	Vertex{glm::vec3(-4.85f, 2.1f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.78f, 0.22f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-4.85f, 3.5f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.78f, 0.22f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-4.85f, 3.5f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.78f, 0.22f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-4.85f, 2.1f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.78f, 0.22f), glm::vec2(0.0f, 0.0f)},
	//20 
	Vertex{glm::vec3(-4.15f, 2.1f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.78f, 0.22f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-4.15f, 3.5f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.78f, 0.22f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-4.15f, 3.5f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.78f, 0.22f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-4.15f, 2.1f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.78f, 0.22f), glm::vec2(0.0f, 0.0f)},
	//24
	Vertex{glm::vec3(-4.1f, 2.1f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.22f, 0.41f, 0.9f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-4.1f, 3.5f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.22f, 0.41f, 0.9f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-4.1f, 3.5f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.22f, 0.41f, 0.9f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-4.1f, 2.1f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.22f, 0.41f, 0.9f), glm::vec2(0.0f, 0.0f)},
	//28 
	Vertex{glm::vec3(-3.45f, 2.1f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.22f, 0.41f, 0.9f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-3.45f, 3.5f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.22f, 0.41f, 0.9f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-3.45f, 3.5f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.22f, 0.41f, 0.9f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-3.45f, 2.1f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.22f, 0.41f, 0.9f), glm::vec2(0.0f, 0.0f)},

	//kertas
	//32
	Vertex{glm::vec3(-6.34f, 3.4f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-6.34f, 3.4f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-5.66f, 3.4f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-5.66f, 3.4f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	//36
	Vertex{glm::vec3(-5.59f, 3.4f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-5.59f, 3.4f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-4.91f, 3.4f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-4.91f, 3.4f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	//40
	Vertex{glm::vec3(-4.84f, 3.4f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-4.84f, 3.4f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-4.16f, 3.4f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-4.16f, 3.4f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	//44
	Vertex{glm::vec3(-4.09f, 3.4f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-4.09f, 3.4f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-3.46f, 3.4f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-3.46f, 3.4f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
};

GLuint bukuKiriIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	4, 5, 6,
	4, 6, 7,
	8, 9, 10,
	8, 10, 11,
	12, 13, 14,
	12, 14, 15,
	16, 17, 18,
	16, 18, 19,
	20, 21, 22, 
	20, 22, 23,
	24, 25, 26,
	24, 26, 27,
	28, 29, 30,
	28, 30, 31,
	0, 1, 5,
	0, 5, 4,
	8, 9, 13,
	8, 13, 12,
	16, 17, 21,
	16, 21, 20,
	24, 25, 29, 
	24, 29, 28,
	32, 33, 34, 
	32, 34, 35,
	36, 37, 38,
	36, 38, 39,
	40, 41, 42,
	40, 42, 43,
	44, 45, 46,
	44, 46, 47
};

Vertex rakDindingKanan[] =
{
	Vertex{glm::vec3(3.2f, 1.8f, -29.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(3.2f, 2.1f, -29.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(6.7f, 2.1f, -29.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(6.7f, 1.8f, -29.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(1.0f, 0.0f)},

	Vertex{glm::vec3(3.2f, 1.8f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(3.2f, 2.1f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(6.7f, 2.1f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(6.7f, 1.8f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(1.0f, 0.0f)},

	Vertex{glm::vec3(3.2f, 3.0f, -29.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(3.4f, 3.0f, -29.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(3.4f, 2.1f, -29.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 1.0f)},

	Vertex{glm::vec3(3.2f, 3.0f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(3.4f, 3.0f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(3.4f, 2.1f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 1.0f)},
	//14
	Vertex{glm::vec3(6.7f, 3.0f, -29.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(6.5f, 3.0f, -29.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(6.5f, 2.1f, -29.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 1.0f)},
	//17
	Vertex{glm::vec3(6.7f, 3.0f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(6.5f, 3.0f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(6.5f, 2.1f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.95f, 0.86f, 0.82f), glm::vec2(0.0f, 1.0f)}
};

GLuint rakDindingKananIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	4, 5, 6,
	4, 6, 7,
	4, 5, 1,
	4, 1, 0,
	1, 5, 6,
	1, 6, 2,
	3, 2, 6,
	3, 6, 7,
	0, 4, 7,
	0, 7, 3,
	1, 8, 9,
	1, 9, 10,
	5, 11, 12,
	5, 12, 13,
	5, 11, 8,
	5, 8, 0,
	8, 11, 12,
	8, 12, 9,
	10, 9, 12,
	10, 12, 13,
	16, 15, 14,
	16, 14, 2,
	19, 18, 17,
	19, 17, 6,
	19, 18, 15,
	19, 15, 16,
	15, 18, 17,
	15, 17, 14,
	2, 14, 17,
	2, 17, 6
};

Vertex bukuKanan[] =
{
	Vertex{glm::vec3(3.45f, 2.1f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.86f, 0.17f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(3.45f, 3.5f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.86f, 0.17f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(3.45f, 3.5f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.86f, 0.17f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(3.45f, 2.1f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.86f, 0.17f, 0.0f), glm::vec2(0.0f, 0.0f)},

	Vertex{glm::vec3(4.15f, 2.1f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.86f, 0.17f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(4.15f, 3.5f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.86f, 0.17f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(4.15f, 3.5f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.86f, 0.17f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(4.15f, 2.1f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.86f, 0.17f, 0.0f), glm::vec2(0.0f, 0.0f)},
	//8
	Vertex{glm::vec3(4.2f, 2.1f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.5f, 0.8f, 0.44f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(4.2f, 3.5f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.5f, 0.8f, 0.44f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(4.2f, 3.5f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.5f, 0.8f, 0.44f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(4.2f, 2.1f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.5f, 0.8f, 0.44f), glm::vec2(0.0f, 0.0f)},
	//12 
	Vertex{glm::vec3(4.9f, 2.1f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.5f, 0.8f, 0.44f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(4.9f, 3.5f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.5f, 0.8f, 0.44f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(4.9f, 3.5f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.5f, 0.8f, 0.44f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(4.9f, 2.1f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.5f, 0.8f, 0.44f), glm::vec2(0.0f, 0.0f)},
	//16
	Vertex{glm::vec3(4.95f, 2.1f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.78f, 0.22f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(4.95f, 3.5f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.78f, 0.22f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(4.95f, 3.5f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.78f, 0.22f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(4.95f, 2.1f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.78f, 0.22f), glm::vec2(0.0f, 0.0f)},
	//20 
	Vertex{glm::vec3(5.65f, 2.1f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.78f, 0.22f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(5.65f, 3.5f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.78f, 0.22f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(5.65f, 3.5f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.78f, 0.22f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(5.65f, 2.1f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.78f, 0.22f), glm::vec2(0.0f, 0.0f)},
	//24
	Vertex{glm::vec3(5.7f, 2.1f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.22f, 0.41f, 0.9f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(5.7f, 3.5f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.22f, 0.41f, 0.9f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(5.7f, 3.5f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.22f, 0.41f, 0.9f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(5.7f, 2.1f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.22f, 0.41f, 0.9f), glm::vec2(0.0f, 0.0f)},
	//28 
	Vertex{glm::vec3(6.45f, 2.1f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.22f, 0.41f, 0.9f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(6.45f, 3.5f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.22f, 0.41f, 0.9f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(6.45f, 3.5f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.22f, 0.41f, 0.9f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(6.45f, 2.1f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.22f, 0.41f, 0.9f), glm::vec2(0.0f, 0.0f)},

	//kertas
	//32
	Vertex{glm::vec3(3.46f, 3.4f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(3.46f, 3.4f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(4.14f, 3.4f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(4.14f, 3.4f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)},
	//36
	Vertex{glm::vec3(4.21f, 3.4f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(4.21f, 3.4f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(4.89f, 3.4f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(4.89f, 3.4f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	//40
	Vertex{glm::vec3(4.96f, 3.4f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(4.96f, 3.4f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(5.64f, 3.4f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(5.64f, 3.4f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	//44
	Vertex{glm::vec3(5.71f, 3.4f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(5.71f, 3.4f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(6.44f, 3.4f, -30.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(6.44f, 3.4f, -29.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)}
};

GLuint bukuKananIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	4, 5, 6,
	4, 6, 7,
	8, 9, 10,
	8, 10, 11,
	12, 13, 14,
	12, 14, 15,
	16, 17, 18,
	16, 18, 19,
	20, 21, 22,
	20, 22, 23,
	24, 25, 26,
	24, 26, 27,
	28, 29, 30,
	28, 30, 31,
	0, 1, 5,
	0, 5, 4,
	8, 9, 13,
	8, 13, 12,
	16, 17, 21,
	16, 21, 20,
	24, 25, 29,
	24, 29, 28,
	32, 33, 34, 
	32, 34, 35,
	36, 37, 38, 
	36, 38, 39,
	40, 41, 42,
	40, 42, 43,
	44, 45, 46,
	44, 46, 47
};

Vertex lukisan[] =
{
	Vertex{glm::vec3(-2.5f, 2.1f, -29.79f), glm::vec3(0.f, 0.1f, 0.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-2.5f, 4.7f, -29.79f), glm::vec3(0.f, 0.1f, 0.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(2.5f, 4.7f, -29.79f), glm::vec3(0.f, 0.1f, 0.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(2.5f, 2.1f, -29.79f), glm::vec3(0.f, 0.1f, 0.1f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)}
};

GLuint lukisanIndices[] =
{
	0, 1, 2,
	0, 2, 3
};

Vertex atap[] =
{
	Vertex{glm::vec3(-11.0f, 10.0f,  -6.5f), glm::vec3(0.07f, 0.13f, 0.17f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-11.0f, 10.0f, -31.0f), glm::vec3(0.07f, 0.13f, 0.17f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(11.0f, 10.0f, -31.0f), glm::vec3(0.07f, 0.13f, 0.17f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(11.0f, 10.0f,  -6.5f), glm::vec3(0.07f, 0.13f, 0.17f), glm::vec3(1.0f, 1.0f, 1.0f)},
	
	Vertex{glm::vec3(-11.0f, 11.0f,  -6.5f), glm::vec3(0.04f, 0.1f, 0.14f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-11.0f, 11.0f, -31.0f), glm::vec3(0.04f, 0.1f, 0.14f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(11.0f, 11.0f, -31.0f), glm::vec3(0.04f, 0.1f, 0.14f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(11.0f, 11.0f,  -6.5f), glm::vec3(0.04f, 0.1f, 0.14f), glm::vec3(1.0f, 1.0f, 1.0f)},
};

GLuint atapIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	4, 5, 6,
	4, 6, 7,
	0, 4, 5,
	0, 5, 1,
	3, 7, 6,
	3, 6, 2,
	1, 5, 6,
	1, 6, 2,
	0, 4, 7,
	0, 7, 3
};

Vertex jam[] =
{
	Vertex{glm::vec3(10.0f, 6.0f, -18.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.9f, 0.9f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(10.0f, 8.0f, -18.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.9f, 0.9f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(10.0f, 8.0f, -16.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.9f, 0.9f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(10.0f, 6.0f, -16.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.9f, 0.9f), glm::vec2(0.0f, 0.0f)},
	//4
	Vertex{glm::vec3(9.8f, 6.0f, -18.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.9f, 0.9f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(9.8f, 8.0f, -18.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.9f, 0.9f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(9.8f, 8.0f, -16.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.9f, 0.9f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(9.8f, 6.0f, -16.5f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.9f, 0.9f, 0.9f), glm::vec2(0.0f, 0.0f)},
	//8
	Vertex{glm::vec3(10.0f, 7.8f, -18.51f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(10.0f, 8.01f, -18.51f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(10.0f, 8.01f, -16.49f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(10.0f, 7.8f, -16.49f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	
	//12
	Vertex{glm::vec3(9.75f, 7.8f, -18.51f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(9.75f, 8.01f, -18.51f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(9.75f, 8.01f, -16.49f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(9.75f, 7.8f, -16.49f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	//16
	Vertex{glm::vec3(10.0f, 5.99f, -16.7f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(10.0f, 8.01f, -16.7f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(10.0f, 8.01f, -16.49f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(10.0f, 5.99f, -16.49f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	 
	//20
	Vertex{glm::vec3(9.75f, 5.99f, -16.7f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(9.75f, 8.01f, -16.7f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(9.75f, 8.01f, -16.49f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(9.75f, 5.99f, -16.49f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},

	//24
	Vertex{glm::vec3(10.0f, 5.99f, -18.51f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(10.0f, 6.2f, -18.51f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(10.0f, 6.2f, -16.49f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(10.0f, 5.99f, -16.49f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	
	//28
	Vertex{glm::vec3(9.75f, 5.99f, -18.51f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(9.75f, 6.2f, -18.51f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(9.75f, 6.2f, -16.49f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(9.75f, 5.99f, -16.49f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	//32
	Vertex{glm::vec3(10.0f, 5.99f, -18.51f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(10.0f, 8.01f, -18.51f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(10.0f, 8.01f, -18.3f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(10.0f, 5.99f, -18.3f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	//36
	Vertex{glm::vec3(9.75f, 5.99f, -18.51f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(9.75f, 8.01f, -18.51f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(9.75f, 8.01f, -18.3f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(9.75f, 5.99f, -18.3f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	//40 patokan angka
	Vertex{glm::vec3(9.78f, 7.5f, -17.53f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(9.78f, 7.7f, -17.53f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(9.78f, 7.7f, -17.47f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(9.78f, 7.5f, -17.47f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	//44
	Vertex{glm::vec3(9.78f, 6.3f, -17.53f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(9.78f, 6.5f, -17.53f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(9.78f, 6.5f, -17.47f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(9.78f, 6.3f, -17.47f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	//48
	Vertex{glm::vec3(9.78f, 6.97f, -17.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(9.78f, 7.03f, -17.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(9.78f, 7.03f, -16.8f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(9.78f, 6.97f, -16.8f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	//52
	Vertex{glm::vec3(9.78f, 6.97f, -18.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(9.78f, 7.03f, -18.2f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(9.78f, 7.03f, -18.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(9.78f, 6.97f, -18.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},

	//56 tengah
	Vertex{glm::vec3(9.78f, 6.98f, -17.52f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(9.78f, 7.02f, -17.52f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(9.78f, 7.02f, -17.48f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(9.78f, 6.98f, -17.48f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	
};

GLuint jamIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	4, 5, 6,
	4, 6, 7,
	8, 9, 10,
	8, 10, 11,
	12, 13, 14,
	12, 14, 15,
	16, 17, 18,
	16, 18, 19,
	20, 21, 22,
	20, 22, 23,
	24, 25, 26,
	24, 26, 27,
	28, 29, 30,
	28, 30, 31,
	32, 33, 34,
	32, 34, 35,
	36, 37, 38,
	36, 38, 39,

	4, 5, 1,
	4, 1, 0,
	7, 6, 2,
	7, 2, 3,

	4, 0, 3,
	4, 3, 7,
	5, 1, 2,
	5, 2, 6,

	13, 9, 10,
	13, 10, 14,
	12, 8, 11,
	12, 11, 15,
	20, 16, 17,
	20, 17, 21,
	23, 19, 18,
	23, 18, 22,
	32, 36, 37,
	32, 37, 33,
	35, 39, 38,
	35, 38, 34,
	28, 24, 27,
	28, 27, 31,
	29, 25, 26,
	29, 26, 30,

	40, 41, 42,
	40, 42, 43,
	44, 45, 46,
	44, 46, 47,
	48, 49, 50,
	48, 50, 51,
	52, 53, 54,
	52, 54, 55,
	56, 57, 58,
	56, 58, 59
};

Vertex jarumP[] =
{
	Vertex{glm::vec3(0.0f, 0.0f, -0.035f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, 0.6f, -0.035f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(0.0f, 0.6f, 0.035f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(0.0f, 0.0f, 0.035f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},

	Vertex{glm::vec3(0.0f, 0.0f, -0.035f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, -0.1f, -0.035f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(0.0f, -0.1f, 0.035f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(0.0f, 0.0f, 0.035f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},

	Vertex{glm::vec3(0.0f, 0.65f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	
};

GLuint jarumPIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	4, 5, 6,
	4, 6, 7,
	1, 8, 2
};

Vertex jarumS[] =
{
	Vertex{glm::vec3(0.0f, 0.0f, -0.035f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, 0.4f, -0.035f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(0.0f, 0.4f, 0.035f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(0.0f, 0.0f, 0.035f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},

	Vertex{glm::vec3(0.0f, 0.0f, -0.035f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.0f, -0.1f, -0.035f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(0.0f, -0.1f, 0.035f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(0.0f, 0.0f, 0.035f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},

	Vertex{glm::vec3(0.0f, 0.45f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},

};

GLuint jarumSIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	4, 5, 6,
	4, 6, 7,
	1, 8, 2
};

Vertex tembok[] =
{
	// Tembok kiri atas
	Vertex{glm::vec3(-10.0f, 4.0f,  -6.5f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)}, 
	Vertex{glm::vec3(-10.0f, 10.0f,  -6.5f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)}, 
	Vertex{glm::vec3(-10.0f, 10.0f, -30.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-10.0f, 4.0f, -30.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	//4
	Vertex{glm::vec3(-11.0f, 4.0f,  -6.5f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-11.0f, 10.0f,  -6.5f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-11.0f, 10.0f, -31.0f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-11.0f, 4.0f, -31.0f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	// kiri 8
	Vertex{glm::vec3(-10.0f, -5.21f,  -6.5f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-10.0f, 10.0f,  -6.5f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-10.0f, 10.0f, -14.25f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-10.0f, -5.21f, -14.25f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	//12
	Vertex{glm::vec3(-11.0f, -5.21f,  -6.5f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-11.0f, 10.0f,  -6.5f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-11.0f, 10.0f, -14.25f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-11.0f, -5.21f, -14.25f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	// kanan 16
	Vertex{glm::vec3(-10.0f, -5.21f,  -22.25f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-10.0f, 10.0f,  -22.25f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-10.0f, 10.0f, -30.0), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-10.0f, -5.21f, -30.0), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	//20
	Vertex{glm::vec3(-11.0f, -5.21f,  -22.25f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-11.0f, 10.0f,  -22.25f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-11.0f, 10.0f, -31.0), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-11.0f, -5.21f, -31.0), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	//24
	Vertex{glm::vec3(-10.0f, 10.0f,  -6.5f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-11.0f, 10.0f,  -6.5f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-11.0f, 10.0f, -31.0f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-10.0f, 10.0f, -31.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	//28 Tembok kiri bawah
	Vertex{glm::vec3(-10.0f, -5.21f,  -6.5f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-11.0f, -5.21f,  -6.5f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-11.0f, -5.21f, -31.0f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-10.0f, -5.21f, -31.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	
	//32
	Vertex{glm::vec3(10.0f, -5.21f,  -6.5f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(10.0f, 10.0f,  -6.5f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(10.0f, 10.0f, -30.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(10.0f, -5.21f, -30.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	//36
	Vertex{glm::vec3(-11.0f, -5.211f, -30.0f), glm::vec3(0.0f, 0.0f, 0.9f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-11.0f, 10.0f, -30.0f), glm::vec3(0.0f, 0.0f, 0.9f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(11.0f, 10.0f,  -30.0f), glm::vec3(0.0f, 0.0f, 0.9f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(11.0f, -5.211f,  -30.0f), glm::vec3(0.0f, 0.0f, 0.9f), glm::vec3(1.0f, 1.0f, 1.0f)},
	//40
	Vertex{glm::vec3(-10.0f, 4.0f,  -6.5f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-11.0f, 4.0f,  -6.5f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-11.0f, 4.0f, -31.0f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-10.0f, 4.0f, -31.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	//44
	Vertex{glm::vec3(10.0f, 10.0f,  -6.5f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(11.0f, 10.0f,  -6.5f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(11.0f, 10.0f, -31.0f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(10.0f, 10.0f, -31.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	//48
	Vertex{glm::vec3(10.0f, -5.21f,  -6.5f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(11.0f, -5.21f,  -6.5f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(11.0f, -5.21f, -31.0f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(10.0f, -5.21f, -31.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f)},

	//52
	Vertex{glm::vec3(11.0f, -5.21f,  -6.5f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(11.0f, 10.0f,  -6.5f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(11.0f, 10.0f, -31.0f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(11.0f, -5.21f, -31.0f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	//56
	Vertex{glm::vec3(-11.0f, -5.211f, -31.0f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(-11.0f, 10.0f, -31.0f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(11.0f, 10.0f,  -31.0f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(11.0f, -5.211f,  -31.0f), glm::vec3(0.0f, 0.0f, 0.8f), glm::vec3(1.0f, 1.0f, 1.0f)},
};

GLuint tembokIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	4, 5, 6, 
	4, 6, 7,
	8, 9, 10,
	8, 10, 11,

	12, 13, 14,
	12, 14, 15,
	16, 17, 18,
	16, 18, 19,
	20, 21, 22,
	20, 22, 23,
	24, 25, 26,
	24, 26, 27,
	28, 29, 30,
	28, 30, 31,
	32, 33, 34,
	32, 34, 35,
	36, 37, 38,
	36, 38, 39,
	28, 29, 25,
	28, 25, 24,
	40, 41, 42,
	40, 42, 43,
	44, 45, 46,
	44, 46, 47,
	48, 49, 50,
	48, 50, 51,
	52, 53, 54,
	52, 54, 55,
	49, 48, 44,
	49, 44, 45,
	56, 57, 58,
	56, 58, 59,
	36, 56, 59,
	36, 59, 39
};

glm::vec3 pintu = glm::vec3(0.61f, 0.364f, 0.313f);
glm::vec3 pintuDalam = glm::vec3(0.41f, 0.164f, 0.113f);
glm::vec3 pintuBelakang = glm::vec3(0.51f, 0.264f, 0.213f);
glm::vec3 pintuDalamBelakang = glm::vec3(0.31f, 0.064f, 0.013f);

Vertex pintuKi[] =
{ // tengah depan
	Vertex{glm::vec3(-9.01f, -3.49f,  -15.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.01f, 2.5f,  -15.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, 2.5f, -16.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, -3.49f, -16.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 0.0f)},
	//4 tengah belakang
	Vertex{glm::vec3(-9.99f, -3.49f,  -15.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.99f, 2.5f,  -15.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, 2.5f, -16.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, -3.49f, -16.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 0.0f)},
	//8 depan atas
	Vertex{glm::vec3(-9.01f, 3.5f,  -14.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.01f, 4.0f,  -14.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, 4.0f, -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, 3.5f, -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 0.0f)},
	//12 depan bawah
	Vertex{glm::vec3(-9.01f, -4.99f,  -14.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.01f, -4.49f,  -14.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, -4.49f, -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, -4.99f, -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 0.0f)},
	//16 depan kiri
	Vertex{glm::vec3(-9.01f, -4.49f,  -14.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.01f, 3.5f,  -14.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, 3.5f, -14.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, -4.49f, -14.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 0.0f)},
	//20 depan kanan
	Vertex{glm::vec3(-9.01f, -4.49f,  -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.01f, 3.5f,  -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, 3.5f, -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, -4.49f, -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 0.0f)},
	//24
	Vertex{glm::vec3(-9.01f, 3.5f,  -14.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.01f, 4.0f,  -14.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, 4.0f, -14.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, 3.5f, -14.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 0.0f)},
	//28
	Vertex{glm::vec3(-9.01f, 3.5f,  -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.01f, 4.0f,  -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, 4.0f, -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, 3.5f, -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 0.0f)},
	//32
	Vertex{glm::vec3(-9.01f, -4.99f,  -14.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.01f, -4.49f,  -14.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, -4.49f, -14.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, -4.99f, -14.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 0.0f)},
	//36
	Vertex{glm::vec3(-9.01f, -4.99f,  -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.01f, -4.49f,  -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, -4.49f, -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, -4.99f, -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 0.0f)},
	//40 titik dalam
	Vertex{glm::vec3(-9.21f, -4.49f,  -14.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuDalam, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.21f, 3.5f,  -14.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuDalam, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.21f, 3.5f, -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuDalam, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.21f, -4.49f, -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuDalam, glm::vec2(1.0f, 0.0f)},
	
	//44 belakang atas
	Vertex{glm::vec3(-9.99f, 3.5f,  -14.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.99f, 4.0f,  -14.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, 4.0f, -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, 3.5f, -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 0.0f)},
	//48 belakang bawah
	Vertex{glm::vec3(-9.99f, -4.99f,  -14.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.99f, -4.49f,  -14.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, -4.49f, -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, -4.99f, -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 0.0f)},
	//52 belakang kiri
	Vertex{glm::vec3(-9.99f, -4.49f,  -14.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.99f, 3.5f,  -14.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, 3.5f, -14.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, -4.49f, -14.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 0.0f)},
	//56 belakang kanan
	Vertex{glm::vec3(-9.99f, -4.49f,  -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.99f, 3.5f,  -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, 3.5f, -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, -4.49f, -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 0.0f)},
	//60
	Vertex{glm::vec3(-9.99f, 3.5f,  -14.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.99f, 4.0f,  -14.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, 4.0f, -14.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, 3.5f, -14.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 0.0f)},
	//64
	Vertex{glm::vec3(-9.99f, 3.5f,  -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.99f, 4.0f,  -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, 4.0f, -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, 3.5f, -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 0.0f)},
	//68
	Vertex{glm::vec3(-9.99f, -4.99f,  -14.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.99f, -4.49f,  -14.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, -4.49f, -14.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, -4.99f, -14.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 0.0f)},
	//72
	Vertex{glm::vec3(-9.99f, -4.99f,  -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.99f, -4.49f,  -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, -4.49f, -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, -4.99f, -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 0.0f)},
	//76 titik dalam
	Vertex{glm::vec3(-9.79f, -4.49f,  -14.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuDalamBelakang, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.79f, 3.5f,  -14.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuDalamBelakang, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.79f, 3.5f, -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuDalamBelakang, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.79f, -4.49f, -17.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuDalamBelakang, glm::vec2(1.0f, 0.0f)},
	
};

GLuint pintuKiIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	4, 5, 6,
	4, 6, 7,
	8, 9, 10,
	8, 10, 11,
	12, 13, 14, 
	12, 14, 15,
	16, 17, 18,
	16, 18, 19,
	20, 21, 22,
	20, 22, 23,
	24, 25, 26,
	24, 26, 27,
	28, 29, 30, 
	28, 30, 31,
	32, 33, 34,
	32, 34, 35,
	36, 37, 38,
	36, 38, 39,
	40, 41, 42, 
	40, 42, 43,

	44, 45, 46,
	44, 46, 47,
	48, 49, 50,
	48, 50, 51,
	52, 53, 54,
	52, 54, 55,
	56, 57, 58,
	56, 58, 59,
	60, 61, 62,
	60, 62, 63,
	64, 65, 66,
	64, 66, 67,
	68, 69, 70,
	68, 70, 71,
	72, 73, 74,
	72, 74, 75,
	76, 77, 78,
	76, 78, 79,

	41, 8, 11,
	41, 11, 42,
	13, 40, 43,
	13, 43, 14,
	40, 19, 18,
	40, 18, 41,
	42, 21, 20,
	42, 20, 43,
	//jendol
	1, 41, 42,
	1, 42, 2,
	40, 0, 3,
	40, 3, 43,
	0, 40, 41,
	0, 41, 1,
	43, 3, 2,
	43, 2, 42,
	//baru
	5, 77, 78,
	5, 78, 6,
	76, 4, 7,
	76, 7, 79,
	4, 76, 77,
	4, 77, 5,
	79, 7, 6,
	79, 6, 78,
	77, 44, 47,
	77, 47, 78,
	76, 49, 50,
	76, 50, 79,
	76, 55, 54,
	76, 54, 77,
	79, 56, 57,
	79, 57, 78,
	30, 66, 75,
	30, 75, 39,

	1, 5, 6,
	1, 6, 2,
	0, 4, 7,
	0, 7, 3,

	0, 4, 5,
	0, 5, 1,
	2, 6, 7,
	2, 7, 3
};

Vertex pintuKa[] =
{
	Vertex{glm::vec3(-9.01f, -3.49f,  -19.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.01f, 2.5f,  -19.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, 2.5f, -20.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, -3.49f, -20.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 0.0f)},

	Vertex{glm::vec3(-9.99f, -3.49f,  -19.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.99f, 2.5f,  -19.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, 2.5f, -20.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, -3.49f, -20.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 0.0f)},
	//8 depan atas
	Vertex{glm::vec3(-9.01f, 3.5f,  -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.01f, 4.0f,  -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, 4.0f, -21.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, 3.5f, -21.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 0.0f)},
	//12 depan bawah
	Vertex{glm::vec3(-9.01f, -4.99f,  -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.01f, -4.49f,  -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, -4.49f, -21.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, -4.99f, -21.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 0.0f)},
	//16 depan kiri
	Vertex{glm::vec3(-9.01f, -4.49f,  -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.01f, 3.5f,  -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, 3.5f, -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, -4.49f, -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 0.0f)},
	//20 depan kanan
	Vertex{glm::vec3(-9.01f, -4.49f,  -21.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.01f, 3.5f,  -21.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, 3.5f, -22.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, -4.49f, -22.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 0.0f)},
	//24
	Vertex{glm::vec3(-9.01f, 3.5f,  -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.01f, 4.0f,  -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, 4.0f, -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, 3.5f, -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 0.0f)},
	//28
	Vertex{glm::vec3(-9.01f, 3.5f,  -21.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.01f, 4.0f,  -21.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, 4.0f, -22.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, 3.5f, -22.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 0.0f)},
	//32
	Vertex{glm::vec3(-9.01f, -4.99f,  -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.01f, -4.49f,  -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, -4.49f, -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, -4.99f, -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 0.0f)},
	//36
	Vertex{glm::vec3(-9.01f, -4.99f,  -21.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.01f, -4.49f,  -21.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, -4.49f, -22.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.01f, -4.99f, -22.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintu, glm::vec2(1.0f, 0.0f)},
	//40 titik dalam
	Vertex{glm::vec3(-9.21f, -4.49f,  -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuDalam, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.21f, 3.5f,  -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuDalam, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.21f, 3.5f, -21.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuDalam, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.21f, -4.49f, -21.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuDalam, glm::vec2(1.0f, 0.0f)},
	
	//44 belakang atas
	Vertex{glm::vec3(-9.99f, 3.5f,  -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.99f, 4.0f,  -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, 4.0f, -21.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, 3.5f, -21.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 0.0f)},
	//48 belakang bawah
	Vertex{glm::vec3(-9.99f, -4.99f,  -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.99f, -4.49f,  -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, -4.49f, -21.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, -4.99f, -21.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 0.0f)},
	//52 belakang kiri
	Vertex{glm::vec3(-9.99f, -4.49f,  -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.99f, 3.5f,  -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, 3.5f, -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, -4.49f, -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 0.0f)},
	//56 belakang kanan
	Vertex{glm::vec3(-9.99f, -4.49f,  -21.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.99f, 3.5f,  -21.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, 3.5f, -22.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, -4.49f, -22.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 0.0f)},
	//60
	Vertex{glm::vec3(-9.99f, 3.5f,  -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.99f, 4.0f,  -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, 4.0f, -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, 3.5f, -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 0.0f)},
	//64
	Vertex{glm::vec3(-9.99f, 3.5f,  -21.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.99f, 4.0f,  -21.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, 4.0f, -22.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, 3.5f, -22.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 0.0f)},
	//68
	Vertex{glm::vec3(-9.99f, -4.99f,  -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.99f, -4.49f,  -18.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, -4.49f, -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, -4.99f, -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 0.0f)},
	//72
	Vertex{glm::vec3(-9.99f, -4.99f,  -21.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.99f, -4.49f,  -21.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, -4.49f, -22.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.99f, -4.99f, -22.25f), glm::vec3(1.0f, 1.0f, 1.0f), pintuBelakang, glm::vec2(1.0f, 0.0f)},
	//76 titik dalam
	Vertex{glm::vec3(-9.79f, -4.49f,  -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuDalamBelakang, glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-9.79f, 3.5f,  -18.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuDalamBelakang, glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-9.79f, 3.5f, -21.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuDalamBelakang, glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-9.79f, -4.49f, -21.75f), glm::vec3(1.0f, 1.0f, 1.0f), pintuDalamBelakang, glm::vec2(1.0f, 0.0f)},
};

GLuint pintuKaIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	4, 5, 6,
	4, 6, 7,
	8, 9, 10,
	8, 10, 11,
	12, 13, 14,
	12, 14, 15,
	16, 17, 18,
	16, 18, 19,
	20, 21, 22,
	20, 22, 23,
	24, 25, 26,
	24, 26, 27,
	28, 29, 30,
	28, 30, 31,
	32, 33, 34,
	32, 34, 35,
	36, 37, 38,
	36, 38, 39,
	40, 41, 42,
	40, 42, 43,

	44, 45, 46,
	44, 46, 47,
	48, 49, 50,
	48, 50, 51,
	52, 53, 54, 
	52, 54, 55,
	56, 57, 58,
	56, 58, 59,
	60, 61, 62,
	60, 62, 63,
	64, 65, 66, 
	64, 66, 67,
	68, 69, 70,
	68, 70, 71,
	72, 73, 74,
	72, 74, 75,
	76, 77, 78,
	76, 78, 79,


	41, 8, 11,
	41, 11, 42,
	13, 40, 43,
	13, 43, 14,
	40, 19, 18,
	40, 18, 41,
	42, 21, 20,
	42, 20, 43,
	//jendol
	1, 41, 42,
	1, 42, 2,
	40, 0, 3,
	40, 3, 43,
	0, 40, 41,
	0, 41, 1,
	43, 3, 2,
	43, 2, 42,
	//baru
	5, 77, 78,
	5, 78, 6,
	76, 4, 7,
	76, 7, 79,
	4, 76, 77,
	4, 77, 5,
	79, 7, 6,
	79, 6, 78,
	77, 44, 47,
	77, 47, 78,
	76, 49, 50,
	76, 50, 79,
	76, 55, 54,
	76, 54, 77,
	79, 56, 57,
	79, 57, 78,
	32, 68, 61,
	32, 61, 25,


	1, 5, 6,
	1, 6, 2,
	0, 4, 7,
	0, 7, 3,

	0, 4, 5,
	0, 5, 1,
	2, 6, 7,
	2, 7, 3
};

Vertex tv[] =
{
	Vertex{glm::vec3(9.8f, 0.5f, -22.0f), glm::vec3(0.05f, 0.0568f, 0.1f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(9.5f, 5.0f, -22.0f), glm::vec3(0.15f, 0.1568f, 0.2f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(9.5f, 5.0f,  -13.0f), glm::vec3(0.15f, 0.1568f, 0.2f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(9.8f, 0.5f,  -13.0f), glm::vec3(0.05f, 0.0568f, 0.1f), glm::vec3(1.0f, 1.0f, 1.0f)},

	//depan
	Vertex{glm::vec3(9.5f, 0.5f, -22.0f), glm::vec3(0.05f, 0.0568f, 0.1f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(9.2f, 5.0f, -22.0f), glm::vec3(0.15f, 0.1568f, 0.2f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(9.2f, 5.0f,  -13.0f), glm::vec3(0.15f, 0.1568f, 0.2f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(9.5f, 0.5f,  -13.0f), glm::vec3(0.05f, 0.0568f, 0.1f), glm::vec3(1.0f, 1.0f, 1.0f)},
	
	//layar
	Vertex{glm::vec3(9.48f, 0.7f, -21.8f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(9.19f, 4.8f, -21.8f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(9.19f, 4.8f,  -13.2f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(9.48f, 0.7f,  -13.2f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f)},

	//penyangga
	Vertex{glm::vec3(9.99f, 4.0f, -18.5f), glm::vec3(0.15f, 0.1568f, 0.2f), glm::vec3(1.0f, 1.0f, 1.0f)}, //12
	Vertex{glm::vec3(9.99f, 2.0f, -18.5f), glm::vec3(0.15f, 0.1568f, 0.2f), glm::vec3(1.0f, 1.0f, 1.0f)}, //13
	Vertex{glm::vec3(9.99f, 4.0f,  -16.0f), glm::vec3(0.15f, 0.1568f, 0.2f), glm::vec3(1.0f, 1.0f, 1.0f)}, //14
	Vertex{glm::vec3(9.99f, 2.0f,  -16.0f), glm::vec3(0.15f, 0.1568f, 0.2f), glm::vec3(1.0f, 1.0f, 1.0f)}, //15

	//tiang
	Vertex{glm::vec3(9.99f, 3.05, -17.2f), glm::vec3(0.15f, 0.1568f, 0.2f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(9.5f, 4.0f,  -13.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(9.5f, 4.0f, -21.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(9.99f, 2.55, -17.2f), glm::vec3(0.15f, 0.1568f, 0.2f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(9.5f, 1.5f,  -13.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f)},
	Vertex{glm::vec3(9.5f, 1.5f, -21.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f)}
};

GLuint tvIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	4, 5, 6,
	4, 6, 7,
	4, 0, 3, 
	4, 3, 7,
	1, 2, 6,
	1, 6, 5,
	1, 5, 4,
	1, 4, 0,
	3, 7, 6,
	3, 6, 2,
	13, 12, 14,
	13, 14, 15,
	18, 17, 16,
	21, 20, 19,
	20, 17, 16,
	20, 16, 19,
	21, 18, 16,
	21, 16, 19
};

GLuint layar1Indices[] =
{
	0, 1, 2,
	0, 2, 3
};


Vertex lightVertices[] =
{ //     COORDINATES     //
	Vertex{glm::vec3(-0.1f, -0.1f,  0.1f)},
	Vertex{glm::vec3(-0.1f, -0.1f, -0.1f)},
	Vertex{glm::vec3(0.1f, -0.1f, -0.1f)},
	Vertex{glm::vec3(0.1f, -0.1f,  0.1f)},
	Vertex{glm::vec3(-0.1f,  0.1f,  0.1f)},
	Vertex{glm::vec3(-0.1f,  0.1f, -0.1f)},
	Vertex{glm::vec3(0.1f,  0.1f, -0.1f)},
	Vertex{glm::vec3(0.1f,  0.1f,  0.1f)}
};

GLuint lightIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	0, 4, 7,
	0, 7, 3,
	3, 7, 6,
	3, 6, 2,
	2, 6, 5,
	2, 5, 1,
	1, 5, 4,
	1, 4, 0,
	4, 5, 6,
	4, 6, 7
};

void keluar(GLFWwindow* window) {
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
		glfwSetWindowShouldClose(window, GLFW_TRUE);
	}
}






int main()
{

	std::cout << "Kelompok 1 :" << std::endl;
	std::cout << "Ahmad Solikhin Gayuh Raharjo" << std::endl;
	std::cout << "Tobib Nugroho" << std::endl;
	std::cout << "Amanda Rizkyta Hamidah" << std::endl;

	// Initialize GLFW
	glfwInit();

	// Tell GLFW what version of OpenGL we are using 
	// In this case we are using OpenGL 3.3
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	// Tell GLFW we are using the CORE profile
	// So that means we only have the modern functions
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// Create a GLFWwindow object of 800 by 800 pixels, naming it "YoutubeOpenGL"
	GLFWwindow* window = glfwCreateWindow(width, height, "Project", NULL, NULL);
	// Error check if the window fails to create
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	// Introduce the window into the current context
	glfwMakeContextCurrent(window);

	//Load GLAD so it configures OpenGL
	gladLoadGL();
	// Specify the viewport of OpenGL in the Window
	// In this case the viewport goes from x = 0, y = 0, to x = 800, y = 800
	glViewport(0, 0, width, height);


	// Original code from the tutorial
	Texture texture1[]
	{
		Texture("planks.png", "tex0", 0, GL_RGBA, GL_UNSIGNED_BYTE)
	};


	Texture texture2[]
	{
		Texture("white.png", "tex0", 0, GL_RGBA, GL_UNSIGNED_BYTE)
	};

	Texture texture3[]
	{
		Texture("lukisan.jpg", "tex0", 0, GL_RGB, GL_UNSIGNED_BYTE)
	};

	Texture texture4[]
	{
		Texture("karpet 2.jpg", "tex0", 0, GL_RGB, GL_UNSIGNED_BYTE)
	};



	// Generates Shader object using shaders default.vert and default.frag
	Shader shaderProgram("default.vert", "basetex.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> verts(lantai, lantai + sizeof(lantai) / sizeof(Vertex));
	std::vector <GLuint> ind(lantaiIndices, lantaiIndices + sizeof(lantaiIndices) / sizeof(GLuint));
	std::vector <Texture> tex(texture1, texture1 + sizeof(texture1) / sizeof(Texture));

	// Create floor mesh
	Mesh floor(verts, ind, tex);

	Shader lukisanShader("default.vert", "basetex.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> lukisanVerts(lukisan, lukisan + sizeof(lukisan) / sizeof(Vertex));
	std::vector <GLuint> lukisanInd(lukisanIndices, lukisanIndices + sizeof(lukisanIndices) / sizeof(GLuint));
	std::vector <Texture> lukisanTex(texture3, texture3 + sizeof(texture3) / sizeof(Texture));

	// Create floor mesh
	Mesh lukisan(lukisanVerts, lukisanInd, lukisanTex);

	Shader rakDindingKiriShader("default.vert", "basetex.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> rakDindingKiriVerts(rakDindingKiri, rakDindingKiri + sizeof(rakDindingKiri) / sizeof(Vertex));
	std::vector <GLuint> rakDindingKiriInd(rakDindingKiriIndices, rakDindingKiriIndices + sizeof(rakDindingKiriIndices) / sizeof(GLuint));
	std::vector <Texture> rakDindingKiriTex(texture2, texture2 + sizeof(texture2) / sizeof(Texture));

	// Create floor mesh
	Mesh rakDindingKiri(rakDindingKiriVerts, rakDindingKiriInd, rakDindingKiriTex);

	Shader bukuKiriShader("default.vert", "basetex.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> bukuKiriVerts(bukuKiri, bukuKiri + sizeof(bukuKiri) / sizeof(Vertex));
	std::vector <GLuint> bukuKiriInd(bukuKiriIndices, bukuKiriIndices + sizeof(bukuKiriIndices) / sizeof(GLuint));
	std::vector <Texture> bukuKiriTex(texture2, texture2 + sizeof(texture2) / sizeof(Texture));

	// Create floor mesh
	Mesh bukuKiri(bukuKiriVerts, bukuKiriInd, bukuKiriTex);

	Shader rakDindingKananShader("default.vert", "basetex.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> rakDindingKananVerts(rakDindingKanan, rakDindingKanan + sizeof(rakDindingKanan) / sizeof(Vertex));
	std::vector <GLuint> rakDindingKananInd(rakDindingKananIndices, rakDindingKananIndices + sizeof(rakDindingKananIndices) / sizeof(GLuint));
	std::vector <Texture> rakDindingKananTex(texture2, texture2 + sizeof(texture2) / sizeof(Texture));

	// Create floor mesh
	Mesh rakDindingKanan(rakDindingKananVerts, rakDindingKananInd, rakDindingKananTex);

	Shader bukuKananShader("default.vert", "basetex.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> bukuKananVerts(bukuKanan, bukuKanan + sizeof(bukuKanan) / sizeof(Vertex));
	std::vector <GLuint> bukuKananInd(bukuKananIndices, bukuKananIndices + sizeof(bukuKananIndices) / sizeof(GLuint));
	std::vector <Texture> bukuKananTex(texture2, texture2 + sizeof(texture2) / sizeof(Texture));

	// Create floor mesh
	Mesh bukuKanan(bukuKananVerts, bukuKananInd, bukuKananTex);

	Shader jamShader("default.vert", "basetex.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> jamVerts(jam, jam + sizeof(jam) / sizeof(Vertex));
	std::vector <GLuint> jamInd(jamIndices, jamIndices + sizeof(jamIndices) / sizeof(GLuint));
	std::vector <Texture> jamTex(texture2, texture2 + sizeof(texture2) / sizeof(Texture));

	// Create floor mesh
	Mesh jam(jamVerts, jamInd, jamTex);

	// Shader for light cube
	Shader atapShader("base.vert", "base.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> atapVerts(atap, atap + sizeof(atap) / sizeof(Vertex));
	std::vector <GLuint> atapInd(atapIndices, atapIndices + sizeof(atapIndices) / sizeof(GLuint));
	std::vector <Texture> atapTex(texture2, texture2 + sizeof(texture2) / sizeof(Texture));
	// Crate light mesh
	Mesh atap(atapVerts, atapInd, atapTex);

	Shader bingkaiShader("default.vert", "basetex.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> bingkaiVerts(bingkai, bingkai + sizeof(bingkai) / sizeof(Vertex));
	std::vector <GLuint> bingkaiInd(bingkaiIndices, bingkaiIndices + sizeof(bingkaiIndices) / sizeof(GLuint));
	std::vector <Texture> bingkaiTex(texture2, texture2 + sizeof(texture2) / sizeof(Texture));
	// Crate light mesh
	Mesh bingkai(bingkaiVerts, bingkaiInd, bingkaiTex);

	Shader tembokShader("base.vert", "base.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> tembokVerts(tembok, tembok + sizeof(tembok) / sizeof(Vertex));
	std::vector <GLuint> tembokInd(tembokIndices, tembokIndices + sizeof(tembokIndices) / sizeof(GLuint));
	std::vector <Texture> tembokTex(texture2, texture2 + sizeof(texture2) / sizeof(Texture));
	// Crate light mesh
	Mesh tembok(tembokVerts, tembokInd, tembokTex);

	Shader tvShader("base.vert", "basetex.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> tvVerts(tv, tv + sizeof(tv) / sizeof(Vertex));
	std::vector <GLuint> tvInd(tvIndices, tvIndices + sizeof(tvIndices) / sizeof(GLuint));
	std::vector <Texture> tvTex(texture2, texture2 + sizeof(texture2) / sizeof(Texture));
	// Crate light mesh
	Mesh tv(tvVerts, tvInd, tvTex);

	Shader karpetShader("default.vert", "basetex.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> karpetVerts(karpet, karpet + sizeof(karpet) / sizeof(Vertex));
	std::vector <GLuint> karpetInd(karpetIndices, karpetIndices + sizeof(karpetIndices) / sizeof(GLuint));
	std::vector <Texture> karpetTex(texture4, texture4 + sizeof(texture4) / sizeof(Texture));
	// Crate light mesh
	Mesh karpet(karpetVerts, karpetInd, karpetTex);

	Shader sofaKiriShader("default.vert", "basetex.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> sofaKiriVerts(sofaKiri, sofaKiri + sizeof(sofaKiri) / sizeof(Vertex));
	std::vector <GLuint> sofaKiriInd(sofaKiriIndices, sofaKiriIndices + sizeof(sofaKiriIndices) / sizeof(GLuint));
	std::vector <Texture> sofaKiriTex(texture2, texture2 + sizeof(texture2) / sizeof(Texture));
	// Crate light mesh
	Mesh sofaKiri(sofaKiriVerts, sofaKiriInd, sofaKiriTex);

	Shader sofaDepanShader("default.vert", "basetex.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> sofaDepanVerts(sofaDepan, sofaDepan + sizeof(sofaDepan) / sizeof(Vertex));
	std::vector <GLuint> sofaDepanInd(sofaDepanIndices, sofaDepanIndices + sizeof(sofaDepanIndices) / sizeof(GLuint));
	std::vector <Texture> sofaDepanTex(texture2, texture2 + sizeof(texture2) / sizeof(Texture));
	// Crate light mesh
	Mesh sofaDepan(sofaDepanVerts, sofaDepanInd, sofaDepanTex);

	Shader mejaShader("default.vert", "basetex.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> mejaVerts(meja, meja + sizeof(meja) / sizeof(Vertex));
	std::vector <GLuint> mejaInd(mejaIndices, mejaIndices + sizeof(mejaIndices) / sizeof(GLuint));
	std::vector <Texture> mejaTex(texture2, texture2 + sizeof(texture2) / sizeof(Texture));
	// Crate light mesh
	Mesh meja(mejaVerts, mejaInd, mejaTex);

	Shader kipasShader("default.vert", "basetex.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> kipasVerts(kipas, kipas + sizeof(kipas) / sizeof(Vertex));
	std::vector <GLuint> kipasInd(kipasIndices, kipasIndices + sizeof(kipasIndices) / sizeof(GLuint));
	std::vector <Texture> kipasTex(texture2, texture2 + sizeof(texture2) / sizeof(Texture));
	// Crate light mesh
	Mesh kipas(kipasVerts, kipasInd, kipasTex);

	Shader kotakShader("default.vert", "basetex.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> kotakVerts(kotak, kotak + sizeof(kotak) / sizeof(Vertex));
	std::vector <GLuint> kotakInd(kotakIndices, kotakIndices + sizeof(kotakIndices) / sizeof(GLuint));
	std::vector <Texture> kotakTex(texture2, texture2 + sizeof(texture2) / sizeof(Texture));
	// Crate light mesh
	Mesh kotak(kotakVerts, kotakInd, kotakTex);

	Shader jarumPShader("default.vert", "basetex.frag");
	std::vector <Vertex> jarumPVerts(jarumP, jarumP + sizeof(jarumP) / sizeof(Vertex));
	std::vector <GLuint> jarumPInd(jarumPIndices, jarumPIndices + sizeof(jarumPIndices) / sizeof(GLuint));
	std::vector <Texture> jarumPTex(texture2, texture2 + sizeof(texture2) / sizeof(Texture));
	Mesh jarumP(jarumPVerts, jarumPInd, jarumPTex);

	Shader jarumSShader("default.vert", "basetex.frag");
	std::vector <Vertex> jarumSVerts(jarumS, jarumS + sizeof(jarumS) / sizeof(Vertex));
	std::vector <GLuint> jarumSInd(jarumSIndices, jarumSIndices + sizeof(jarumSIndices) / sizeof(GLuint));
	std::vector <Texture> jarumSTex(texture2, texture2 + sizeof(texture2) / sizeof(Texture));
	Mesh jarumS(jarumSVerts, jarumSInd, jarumSTex);

	Shader pintuKiShader("default.vert", "basetex.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> pintuKiVerts(pintuKi, pintuKi + sizeof(pintuKi) / sizeof(Vertex));
	std::vector <GLuint> pintuKiInd(pintuKiIndices, pintuKiIndices + sizeof(pintuKiIndices) / sizeof(GLuint));
	std::vector <Texture> pintuKiTex(texture2, texture2 + sizeof(texture2) / sizeof(Texture));

	// Create floor mesh
	Mesh pintuKi(pintuKiVerts, pintuKiInd, pintuKiTex);

	Shader pintuKaShader("default.vert", "basetex.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> pintuKaVerts(pintuKa, pintuKa + sizeof(pintuKa) / sizeof(Vertex));
	std::vector <GLuint> pintuKaInd(pintuKaIndices, pintuKaIndices + sizeof(pintuKaIndices) / sizeof(GLuint));
	std::vector <Texture> pintuKaTex(texture2, texture2 + sizeof(texture2) / sizeof(Texture));

	// Create floor mesh
	Mesh pintuKa(pintuKaVerts, pintuKaInd, pintuKaTex);

	// Shader for light cube
	Shader lightShader("light.vert", "light.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> lightVerts(lightVertices, lightVertices + sizeof(lightVertices) / sizeof(Vertex));
	std::vector <GLuint> lightInd(lightIndices, lightIndices + sizeof(lightIndices) / sizeof(GLuint));
	// Crate light mesh
	Mesh light(lightVerts, lightInd, tex);

	Shader layarShader("base.vert", "basetex.frag");
	// Store mesh data in vectors for the mesh
	
	std::vector <GLuint> layar1Ind(layar1Indices, layar1Indices + sizeof(layar1Indices) / sizeof(GLuint));
	std::vector <Texture> layar1Tex(texture2, texture2 + sizeof(texture2) / sizeof(Texture));







	//glm::vec4 lightColor = glm::vec4(1.0f, 1.0f, 1.0f, 1.0f);
	//glm::vec3 lightPos = glm::vec3(0.5f, 0.5f, 0.5f);
	//glm::mat4 lightModel = glm::mat4(1.0f);
	//lightModel = glm::translate(lightModel, lightPos);

	
	

	glm::vec3 objectPos = glm::vec3(0.0f, 0.0f, 0.0f);
	glm::mat4 objectModel = glm::mat4(1.0f);
	objectModel = glm::translate(objectModel, objectPos);

	

	kotakShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(kotakShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(objectModel));
	jamShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(jamShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(objectModel));
	tembokShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(tembokShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(objectModel));
	rakDindingKiriShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(rakDindingKiriShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(objectModel));
	bukuKiriShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(bukuKiriShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(objectModel));
	rakDindingKananShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(rakDindingKananShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(objectModel));
	bukuKananShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(bukuKananShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(objectModel));
	atapShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(atapShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(objectModel));
	karpetShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(karpetShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(objectModel));
	bingkaiShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(bingkaiShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(objectModel));
	tvShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(tvShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(objectModel));
	sofaKiriShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(sofaKiriShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(objectModel));
	sofaDepanShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(sofaDepanShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(objectModel));
	mejaShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(mejaShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(objectModel));
	//lightShader.Activate();
	//glUniformMatrix4fv(glGetUniformLocation(lightShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(lightModel));
	//glUniform4f(glGetUniformLocation(lightShader.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	shaderProgram.Activate();
	glUniformMatrix4fv(glGetUniformLocation(shaderProgram.ID, "model"), 1, GL_FALSE, glm::value_ptr(objectModel));
	lukisanShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(lukisanShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(objectModel));
	//glUniform4f(glGetUniformLocation(shaderProgram.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	//glUniform3f(glGetUniformLocation(shaderProgram.ID, "lightPos"), lightPos.x, lightPos.y, lightPos.z);

	



	// Enables the Depth Buffer
	glEnable(GL_DEPTH_TEST);

	// Creates camera object
	Camera camera(width, height, glm::vec3(0.0f, 0.0f, 2.0f));

	float rotation = 0.0f;
	float rotationJarumP = 0.0f;
	float rotationJarumS = 0.0f;
	double prevTime = glfwGetTime();
	float rotate = 0.0f;
	float rotateJarumP = 0.2f;
	float rotateJarumS = 0.0168f;
	float kiriGeser = 0.0f;
	float kananGeser = 0.0f;
	float red = 0.0f;
	float blue = 0.0f;
	float green = 0.0f;
	

	
	
	

	// Main while loop
	while (!glfwWindowShouldClose(window))
	{
		// Specify the color of the background
		glClearColor(0.18f, 0.2f, 0.32f, 1.0f);
		// Clean the back buffer and depth buffer
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		
				
		// Handles camera inputs
		camera.Inputs(window);
		keluar(window);
		// Updates and exports the camera matrix to the Vertex Shader
		camera.updateMatrix(45.0f, 0.1f, 100.0f);
		
		double crntTime = glfwGetTime();

		if (glfwGetKey(window, GLFW_KEY_1) == GLFW_PRESS) 
		{
			rotate = -3.0f;
		} else if (glfwGetKey(window, GLFW_KEY_2) == GLFW_PRESS)
		{
			rotate = -4.0f;
		}
		else if (glfwGetKey(window, GLFW_KEY_3) == GLFW_PRESS)
		{
			rotate = -5.0f;
		}
		else if (glfwGetKey(window, GLFW_KEY_0) == GLFW_PRESS)
		{
			rotate = 0.0f;
		}

		if (glfwGetKey(window, GLFW_KEY_DOWN) == GLFW_PRESS)
		{
			if (kiriGeser < 3.9f)
			{
				kiriGeser += 0.1f;
			}
			else {
				kiriGeser += 0.0f;
			}

			if (kananGeser > -3.9f)
			{
				kananGeser -= 0.1f;
			}
			else {
				kananGeser -= 0.0f;
			}
		}
		
		
		if (glfwGetKey(window, GLFW_KEY_UP) == GLFW_PRESS)
		{
			if (kiriGeser > 0)
			{
				kiriGeser -= 0.1f;
			}
			else {
				kiriGeser -= 0.0f;
			}

			if (kananGeser < 0)
			{
				kananGeser += 0.1f;
			}
			else {
				kananGeser += 0.0f;
			}
		}
		//else if (glfwGetKey(window, GLFW_KEY_U) == GLFW_PRESS)
		//{
			//up += 1.0f;
		//}
			

		if (crntTime - prevTime >= 1 / 60) {
			rotation += rotate;
			rotationJarumP += rotateJarumP;
			rotationJarumS += rotateJarumS;
			prevTime = crntTime;
		}

		if (red == 0.0f && green == 0.0f && blue == 0.0f)
		{
			if (glfwGetKey(window, GLFW_KEY_H) == GLFW_PRESS)
			{
				red = 1.0f;
			}
		}else if (red == 1.0f && green == 0.0f && blue == 0.0f)
		{
			if (glfwGetKey(window, GLFW_KEY_H) == GLFW_PRESS)
			{
				red = 0.0f;
				green = 1.0f;
			}
		}else if (red == 0.0f && green == 1.0f && blue == 0.0f)
		{
			if (glfwGetKey(window, GLFW_KEY_H) == GLFW_PRESS)
			{
				green = 0.0f;
				blue = 1.0f;
			}
		}else if (red == 0.0f && green == 0.0f && blue == 1.0f)
		{
			if (glfwGetKey(window, GLFW_KEY_H) == GLFW_PRESS)
			{
				green = 1.0f;
				blue = 1.0f;
				red = 1.0f;
			}
		}else if (red == 1.0f && green == 1.0f && blue == 1.0f)
		{
			if (glfwGetKey(window, GLFW_KEY_H) == GLFW_PRESS)
			{
				green = 0.0f;
				blue = 0.0f;
				red = 0.0f;
			}
		}


		Vertex warna[] =
		{
			Vertex{glm::vec3(9.48f, 0.7f, -21.8f), glm::vec3(red, green, blue), glm::vec3(1.0f, 1.0f, 1.0f)},
			Vertex{glm::vec3(9.19f, 4.8f, -21.8f), glm::vec3(red, green, blue), glm::vec3(1.0f, 1.0f, 1.0f)},
			Vertex{glm::vec3(9.19f, 4.8f,  -13.2f), glm::vec3(red, green, blue), glm::vec3(1.0f, 1.0f, 1.0f)},
			Vertex{glm::vec3(9.48f, 0.7f,  -13.2f), glm::vec3(red, green, blue), glm::vec3(1.0f, 1.0f, 1.0f)}
		};
		std::vector <Vertex> layar1Verts(warna, warna + sizeof(warna) / sizeof(Vertex));
		Mesh layar(layar1Verts, layar1Ind, layar1Tex);

		layarShader.Activate();
		glUniformMatrix4fv(glGetUniformLocation(layarShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(objectModel));

		layar.Draw(layarShader, camera);

		

		kipasShader.Activate();
		glm::mat4 modelRotate = glm::mat4(1.0f);
		modelRotate = glm::translate(modelRotate, glm::vec3(0.0f, 0.0f, -18.25f));
		modelRotate = glm::rotate(modelRotate, glm::radians(rotation), glm::vec3(0.0f, 1.0f, 0.0f));
		modelRotate = glm::translate(modelRotate, objectPos);
		
		glUniformMatrix4fv(glGetUniformLocation(kipasShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(modelRotate));

		jarumPShader.Activate();
		glm::mat4 modelRotateJarumPanjang = glm::mat4(1.0f);
		modelRotateJarumPanjang = glm::translate(modelRotateJarumPanjang, glm::vec3(9.77f, 7.0f, -17.5f));
		modelRotateJarumPanjang = glm::rotate(modelRotateJarumPanjang, glm::radians(rotationJarumP), glm::vec3(1.0f, 0.0f, 0.0f));
		modelRotateJarumPanjang = glm::translate(modelRotateJarumPanjang, objectPos);
		glUniformMatrix4fv(glGetUniformLocation(jarumPShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(modelRotateJarumPanjang));

		jarumSShader.Activate();
		glm::mat4 modelRotateJarumPendek = glm::mat4(1.0f);
		modelRotateJarumPendek = glm::translate(modelRotateJarumPendek, glm::vec3(9.775f, 7.0f, -17.5f));
		modelRotateJarumPendek = glm::rotate(modelRotateJarumPendek, glm::radians(rotationJarumS), glm::vec3(1.0f, 0.0f, 0.0f));
		modelRotateJarumPendek = glm::translate(modelRotateJarumPendek, objectPos);
		glUniformMatrix4fv(glGetUniformLocation(jarumSShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(modelRotateJarumPendek));

		pintuKiShader.Activate();
		glm::mat4 pintuKiriGeser = glm::mat4(1.0f);
		pintuKiriGeser = glm::translate(pintuKiriGeser, glm::vec3(-1.0f, 0.0f, kiriGeser));
		glUniformMatrix4fv(glGetUniformLocation(pintuKiShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(pintuKiriGeser));

		pintuKaShader.Activate();
		glm::mat4 pintuKananGeser = glm::mat4(1.0f);
		pintuKananGeser = glm::translate(pintuKananGeser, glm::vec3(-1.0f, 0.0f, kananGeser));
		glUniformMatrix4fv(glGetUniformLocation(pintuKaShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(pintuKananGeser));

		// Draws different meshes
		floor.Draw(shaderProgram, camera);
		atap.Draw(atapShader, camera);
		tembok.Draw(tembokShader, camera);
		karpet.Draw(karpetShader, camera);
		bingkai.Draw(bingkaiShader, camera);
		lukisan.Draw(lukisanShader, camera);
		tv.Draw(tvShader, camera);
		rakDindingKiri.Draw(rakDindingKiriShader, camera);
		bukuKiri.Draw(bukuKiriShader, camera);
		rakDindingKanan.Draw(rakDindingKananShader, camera);
		bukuKanan.Draw(bukuKananShader, camera);
		sofaKiri.Draw(sofaKiriShader, camera);
		sofaDepan.Draw(sofaDepanShader, camera);
		meja.Draw(mejaShader, camera);
		kipas.Draw(kipasShader, camera);
		kotak.Draw(kotakShader, camera);
		jam.Draw(jamShader, camera);
		jarumP.Draw(jarumPShader, camera);
		jarumS.Draw(jarumSShader, camera);
		pintuKi.Draw(pintuKiShader, camera);
		pintuKa.Draw(pintuKaShader, camera);
		//light.Draw(lightShader, camera);


		// Swap the back buffer with the front buffer
		glfwSwapBuffers(window);
		// Take care of all GLFW events
		glfwPollEvents();
	}



	// Delete all the objects we've created
	kotakShader.Delete();

	shaderProgram.Delete();
	atapShader.Delete();
	tembokShader.Delete();
	karpetShader.Delete();
	bingkaiShader.Delete();
	lukisanShader.Delete();
	tvShader.Delete();
	rakDindingKiriShader.Delete();
	bukuKiriShader.Delete();
	rakDindingKananShader.Delete();
	bukuKananShader.Delete();
	sofaKiriShader.Delete();
	sofaDepanShader.Delete();
	mejaShader.Delete();
	kipasShader.Delete();
	jamShader.Delete();
	jarumPShader.Delete();
	jarumSShader.Delete();
	pintuKiShader.Delete();
	pintuKaShader.Delete();
	layarShader.Delete();
	//lightShader.Delete();
	// Delete window before ending the program
	glfwDestroyWindow(window);
	// Terminate GLFW before ending the program
	glfwTerminate();
	return 0;
}