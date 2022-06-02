#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>

#include "Nemo.hpp"
#include "Enemy.hpp"
#include "Map.hpp"
#include "Locate.hpp"

#pragma comment(lib, "OpenGL32")

Nemo* n = new Nemo(0.1f, 0.9f, 0.9f, Logg::vec3(1.0f, 1.0f, 1.0f));
Enemy* e = new Enemy(0.1f, 0.0f, 0.0f, Logg::vec3(1.0f, 0.0f, 0.0f));
Map* m = new Map(0.1f, 0.0f, 0.0f, Logg::vec3(0.0f, 1.0f, 0.0f));



static void error_callback(int error, const char* description)
{
    fputs(description, stderr);
}
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        glfwSetWindowShouldClose(window, GL_TRUE);

    if (key == GLFW_KEY_UP && action == GLFW_PRESS)
        n->MoveUp(0.01f);
    if (key == GLFW_KEY_UP && action == GLFW_RELEASE)
        n->MoveUp(0.0f);
    if (key == GLFW_KEY_DOWN && action == GLFW_PRESS)
        n->MoveUp(-0.01f);
    if (key == GLFW_KEY_DOWN && action == GLFW_RELEASE)
        n->MoveUp(0.0f);
    if (key == GLFW_KEY_RIGHT && action == GLFW_PRESS)
        n->MoveRight(0.01f);
    if (key == GLFW_KEY_RIGHT && action == GLFW_RELEASE)
        n->MoveRight(0.0f);
    if (key == GLFW_KEY_LEFT && action == GLFW_PRESS)
        n->MoveRight(-0.01f);
    if (key == GLFW_KEY_LEFT && action == GLFW_RELEASE)
        n->MoveRight(0.0f);
}


int main(void)
{

    GLFWwindow* window;
    glfwSetErrorCallback(error_callback);
    if (!glfwInit())
        exit(EXIT_FAILURE);
    window = glfwCreateWindow(640, 480, "Simple example", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    glfwMakeContextCurrent(window);
    glfwSetKeyCallback(window, key_callback);

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    while (!glfwWindowShouldClose(window))
    {

        float ratio;
        int width, height;
        glfwGetFramebufferSize(window, &width, &height);
        ratio = width / (float)height;

        glClearColor(.0f, 0.0f, 0.0f, 0.1f);
        glClear(GL_COLOR_BUFFER_BIT);

        for (int i = 0; i < 4; i++)
        {
            if (n->quad[2].x < e->quad[i].x)
            {
                if (n->quad[0].y < e->quad[i].y)
                {
                    printf("Clear!!\n");
                    glfwSetWindowShouldClose(window, GL_TRUE);
                }
            }

        }

        n->Render();
        e->Render();
        m->Render();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    delete(n);
    delete(e);

    exit(EXIT_SUCCESS);
}