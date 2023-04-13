#include "gulpp.h"
#include "engine.h"
#include "config.h"
#include "ray_math.h"

#include <vector>
#include <chrono>
#include <iostream>

#include "raytracer.h"



GLfloat vertices[] =
        {
                -1.0f, -1.0f , 0.0f, 0.0f, 0.0f,
                -1.0f,  1.0f , 0.0f, 0.0f, 1.0f,
                 1.0f,  1.0f , 0.0f, 1.0f, 1.0f,
                 1.0f, -1.0f , 0.0f, 1.0f, 0.0f,
        };
GLuint indices[] =
        {
                0, 2, 1,
                0, 3, 2
        };

const char* vertexShaderSource = R"(#version 460 core
layout (location = 0) in vec3 pos;
layout (location = 1) in vec2 uvs;
out vec2 UVs;
void main()
{
	gl_Position = vec4(pos.x, pos.y, pos.z, 1.000);
	UVs = uvs;
})";
const char* fragmentShaderSource = R"(#version 460 core
out vec4 FragColor;
uniform sampler2D tex;
in vec2 UVs;
void main()
{
	FragColor = texture(tex, UVs);
})";

bool Scene[8][8] = {
        {false, true , false, true , false, true , false, true },
        {false, false, false, false, false, false, false, false},
        {false, false, false, false, false, false, false, false},
        {false, false, false, false, false, false, false, false},
        {false, false, false, false, false, false, false, false},
        {false, false, false, false, false, false, false, false},
        {false, true , false, true , false, true , false, true },
        {false, true , false, true , false, true , false, true },
};


int main()
{
        EngineContext engine;
        
        
        GLuint vertexShader = gl::CreateShader(gl::ShaderType::eVertexShader);
        gl::ShaderSource(vertexShader, 1, &vertexShaderSource, nullptr);
        gl::CompileShader(vertexShader);
        GLuint fragmentShader = gl::CreateShader(gl::ShaderType::eFragmentShader);
        gl::ShaderSource(fragmentShader, 1, &fragmentShaderSource, nullptr);
        gl::CompileShader(fragmentShader);
        
        GLuint shaderProgram = gl::CreateProgram();
        gl::AttachShader(shaderProgram, vertexShader);
        gl::AttachShader(shaderProgram, fragmentShader);
        gl::LinkProgram(shaderProgram);
        
        gl::DeleteShader(vertexShader);
        gl::DeleteShader(fragmentShader);
        
        
        GLuint VAO, VBO, EBO;
        gl::CreateVertexArrays(1, &VAO);
        gl::CreateBuffers(1, &VBO);
        gl::CreateBuffers(1, &EBO);
        
        gl::NamedBufferData(VBO, sizeof(vertices), vertices, gl::VertexBufferObjectUsage::eStaticDraw);
        gl::NamedBufferData(EBO, sizeof(indices), indices, gl::VertexBufferObjectUsage::eStaticDraw);
        
        gl::EnableVertexArrayAttrib(VAO, 0);
        gl::VertexArrayAttribBinding(VAO, 0, 0);
        gl::VertexArrayAttribFormat(VAO, 0, 3, gl::VertexAttribType::eFloat, gl::Boolean::eFalse, 0);
        
        gl::EnableVertexArrayAttrib(VAO, 1);
        gl::VertexArrayAttribBinding(VAO, 1, 0);
        gl::VertexArrayAttribFormat(VAO, 1, 2, gl::VertexAttribType::eFloat, gl::Boolean::eFalse, 3 * sizeof(GLfloat));
        
        gl::VertexArrayVertexBuffer(VAO, 0, VBO, 0, 5 * sizeof(GLfloat));
        gl::VertexArrayElementBuffer(VAO, EBO);
        
        Raytracer raytracer(SCREEN_WIDTH / 4, SCREEN_HEIGHT / 4);
        
        gl::ClearColor(19.0f / 255.0f, 34.0f / 255.0f, 44.0f / 255.0f, 1.0f);
        while (!engine.windowShouldClose())
        {
                EngineContext::clearWindowBuffer();
                
                gl::UseProgram(shaderProgram);
                gl::BindTextureUnit(0, raytracer.camera().image().tex());
                gl::Uniform1i(gl::GetUniformLocation(shaderProgram, "tex"), 0);
                gl::BindVertexArray(VAO);
                gl::DrawElements(gl::PrimitiveType::eTriangles, sizeof(indices) / sizeof(indices[0]), gl::DrawElementsType::eUnsignedInt, nullptr);
                
                engine.swapWindowBuffers();
                EngineContext::pollEvents();
        }
        
        
        
}