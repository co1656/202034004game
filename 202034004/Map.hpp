#pragma once

#include "Locate.hpp"


class Map {
public:
    Logg::vec2 coord;
    Logg::vec2 quad[4];
    Logg::vec3 color;

    Map(float size_, float x_, float y_, Logg::vec3 col)
    {
        coord = Logg::vec2(0, 0);
        color = col;

        quad[0] = Logg::vec2(0, 0);
        quad[1] = Logg::vec2(0, 0);
        quad[2] = Logg::vec2(0,0);
        quad[3] = Logg::vec2(0,0); //�浹������ ���ʿ��� �� ���ľߵ�
    }
    ~Map()
    {

    }

    void Render()
    {
        quad[0] = quad[0] + coord;
        quad[1] = quad[1] + coord;
        quad[2] = quad[2] + coord;
        quad[3] = quad[3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[0].x, quad[0].y, 0.0f);
        glVertex3f(quad[1].x, quad[1].y, 0.0f);
        glVertex3f(quad[2].x, quad[2].y, 0.0f);

        glVertex3f(quad[1].x, quad[1].y, 0.0f);
        glVertex3f(quad[3].x, quad[3].y, 0.0f);
        glVertex3f(quad[2].x, quad[2].y, 0.0f);

        glEnd();

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(-1.0, -0.9);
        glVertex2f(-1.0, -1.0);
        glVertex2f(1.0, -1.0);
        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(-1.0, -0.9);
        glVertex2f(1.0, -0.9);
        glVertex2f(1.0, -1.0);

        glEnd();

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(-1.0, 0.9);
        glVertex2f(-1.0, 1.0);
        glVertex2f(1.0, 1.0);
        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(-1.0, 0.9);
        glVertex2f(1.0, 0.9);
        glVertex2f(1.0, 1.0);

        glEnd();

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(1.0, -1.0);
        glVertex2f(0.9, 1.0);
        glVertex2f(1.0, 1.0);
        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(0.9, 1.0);
        glVertex2f(0.9, -1.0);
        glVertex2f(1.0, -1.0);

        glEnd();

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(-1.0, -1.0);
        glVertex2f(-0.9, 1.0);
        glVertex2f(-1.0, 1.0);
        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(-0.9, 1.0);
        glVertex2f(-0.9, -1.0);
        glVertex2f(-1.0, -1.0);

        glEnd();//�׵θ�

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(-1.0, -0.6);
        glVertex2f(-1.0, -0.7);
        glVertex2f(-0.2, -0.7);
        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(-1.0, -0.6);
        glVertex2f(-0.2, -0.6);
        glVertex2f(-0.2, -0.7);

        glEnd();

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(0.7, -0.6);
        glVertex2f(0.7, -0.7);
        glVertex2f(0.2, -0.7);
        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(0.7, -0.6);
        glVertex2f(0.2, -0.6);
        glVertex2f(0.2, -0.7); //1����

        glEnd();

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(-0.05, -0.9);
        glVertex2f(-0.05, -0.5);
        glVertex2f(0.05, -0.5);
        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(-0.05, -0.9);
        glVertex2f(0.05, -0.9);
        glVertex2f(0.05, -0.5);

        glEnd();

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(-0.2, -0.6);
        glVertex2f(-0.2, -0.4);
        glVertex2f(-0.3, -0.4);
        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(-0.2, -0.6);
        glVertex2f(-0.3, -0.6);
        glVertex2f(-0.3, -0.4);

        glEnd();

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(0.2, -0.6);
        glVertex2f(0.2, -0.4);
        glVertex2f(0.3, -0.4);
        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(0.2, -0.6);
        glVertex2f(0.3, -0.6);
        glVertex2f(0.3, -0.4);

        glEnd();

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(-0.3, -0.4);
        glVertex2f(-0.3, -0.3);
        glVertex2f(0.3, -0.3);
        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(-0.3, -0.4);
        glVertex2f(0.3, -0.4);
        glVertex2f(0.3, -0.3);

        glEnd(); //1���� ���

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(0.7, -0.6);
        glVertex2f(0.7, 0.7);
        glVertex2f(0.6, 0.7);
        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(0.7, -0.6);
        glVertex2f(0.6, -0.6);
        glVertex2f(0.6, 0.7); 

        glEnd(); //1�� ������

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(0.3, 0.7);
        glVertex2f(0.3, -0.6);
        glVertex2f(0.2, -0.6);
        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(0.3, 0.7);
        glVertex2f(0.2, -0.6);
        glVertex2f(0.2, 0.7);

        glEnd(); //2�� ������

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(0.3, 0.7);
        glVertex2f(0.3, -0.6);
        glVertex2f(0.2, -0.6);
        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(0.3, 0.7);
        glVertex2f(0.2, -0.6);
        glVertex2f(0.2, 0.7);

        glEnd(); //2�� ����Ǳ��

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(-0.6, 0.4);
        glVertex2f(-0.6, 0.3);
        glVertex2f(0.3, 0.3);
        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(-0.6, 0.4);
        glVertex2f(0.3, 0.4);
        glVertex2f(0.3, 0.3);

        glEnd();

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(-0.6, -0.3);
        glVertex2f(-0.6, 0.3);
        glVertex2f(-0.5, 0.3);
        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(-0.6, -0.3);
        glVertex2f(-0.5, 0.3);
        glVertex2f(-0.5, -0.3);

        glEnd(); //�Ա�

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(-0.6, 0.75);
        glVertex2f(-0.6, 0.4);
        glVertex2f(-0.5, 0.4);
        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(-0.6, 0.75);
        glVertex2f(-0.5, 0.4);
        glVertex2f(-0.5, 0.75);

        glEnd();

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(-0.3, 0.9);
        glVertex2f(-0.3, 0.55);
        glVertex2f(-0.2, 0.55);
        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(-0.3, 0.9);
        glVertex2f(-0.2, 0.55);
        glVertex2f(-0.2, 0.9);

        glEnd(); //�Ա� ������ ���ұ�

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(-0.075, 0.75);
        glVertex2f(-0.075, 0.55);
        glVertex2f(0.1, 0.55);
        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(-0.075, 0.75);
        glVertex2f(0.1, 0.55);
        glVertex2f(0.1, 0.75);

        glEnd(); //���ұ� ���簢��

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(0.4, 0.9);
        glVertex2f(0.4, -0.3);
        glVertex2f(0.5, -0.3);
        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(0.4, 0.9);
        glVertex2f(0.5, -0.3);
        glVertex2f(0.5, 0.9);

        glEnd(); //���ұ� ���� ���

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(0.8, -0.6);
        glVertex2f(0.8, -0.7);
        glVertex2f(0.7, -0.7);
        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(0.8, -0.6);
        glVertex2f(0.7, -0.6);
        glVertex2f(0.7, -0.7);

        glEnd(); //�ι�° ���ʲ��ұ�

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(0.9, -0.3);
        glVertex2f(0.9, -0.4);
        glVertex2f(0.8, -0.4);
        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(0.9, -0.3);
        glVertex2f(0.8, -0.3);
        glVertex2f(0.8, -0.4);

        glEnd(); //�ι�° ������ ���ұ�

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(0.8, 0.0);
        glVertex2f(0.8, -0.1);
        glVertex2f(0.7, -0.1);
        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(0.8, 0.0);
        glVertex2f(0.7, 0.0);
        glVertex2f(0.7, -0.1);

        glEnd(); //�ι�° ���ʲ��ұ�

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(0.9, 0.3);
        glVertex2f(0.9, 0.4);
        glVertex2f(0.8, 0.4);
        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(0.9, 0.3);
        glVertex2f(0.8, 0.3);
        glVertex2f(0.8, 0.4);

        glEnd(); //�ι�° ������ ���ұ�

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(0.8, 0.6);
        glVertex2f(0.8, 0.7);
        glVertex2f(0.7, 0.7);
        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex2f(0.8, 0.6);
        glVertex2f(0.7, 0.6);
        glVertex2f(0.7, 0.7);

        glEnd(); //�ι�° ���ʲ��ұ�
    }

};