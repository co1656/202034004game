#pragma once

#include "Locate.hpp"


class Map {
public:
    Logg::vec2 coord;
    Logg::vec2 quad[24][4];
    Logg::vec3 color;

    Map(float size_, float x_, float y_, Logg::vec3 col)
    {
        coord = Logg::vec2(0, 0);
        color = col;

        quad[0][0] = Logg::vec2(-1.0, -0.9);
        quad[0][1] = Logg::vec2(-1.0, -1.0);
        quad[0][2] = Logg::vec2(1.0, -0.9);
        quad[0][3] = Logg::vec2(1.0, -1.0);

        quad[1][0] = Logg::vec2(0.9, -1.0);
        quad[1][1] = Logg::vec2(0.9, 1.0);
        quad[1][2] = Logg::vec2(1.0, -1.0);
        quad[1][3] = Logg::vec2(1.0, 1.0);

        quad[2][0] = Logg::vec2(-1.0, 0.9);
        quad[2][1] = Logg::vec2(-1.0, 1.0);
        quad[2][2] = Logg::vec2(1.0, 0.9);
        quad[2][3] = Logg::vec2(1.0, 1.0);

        quad[3][0] = Logg::vec2(-1.0, -1.0);
        quad[3][1] = Logg::vec2(-1.0, 1.0);
        quad[3][2] = Logg::vec2(-0.9, -1.0);
        quad[3][3] = Logg::vec2(-0.9, 1.0); //Å×µÎ¸®

        quad[4][0] = Logg::vec2(-1.0, -0.6);
        quad[4][1] = Logg::vec2(-1.0, -0.7);
        quad[4][2] = Logg::vec2(-0.2, -0.6);
        quad[4][3] = Logg::vec2(-0.2, -0.7);

        quad[5][0] = Logg::vec2(0.2, -0.6);
        quad[5][1] = Logg::vec2(0.2, -0.7);
        quad[5][2] = Logg::vec2(0.7, -0.6);
        quad[5][3] = Logg::vec2(0.7, -0.7); //1¹ø±æ

        quad[6][0] = Logg::vec2(-0.05, -0.9);
        quad[6][1] = Logg::vec2(-0.05, -0.5);
        quad[6][2] = Logg::vec2(0.05, -0.9);
        quad[6][3] = Logg::vec2(0.05, -0.5);

        quad[7][0] = Logg::vec2(-0.3, -0.6);
        quad[7][1] = Logg::vec2(-0.3, -0.4);
        quad[7][2] = Logg::vec2(-0.2, -0.6);
        quad[7][3] = Logg::vec2(-0.2, -0.4);

        quad[8][0] = Logg::vec2(0.2, -0.6);
        quad[8][1] = Logg::vec2(0.2, -0.4);
        quad[8][2] = Logg::vec2(0.3, -0.6);
        quad[8][3] = Logg::vec2(0.3, -0.4);

        quad[9][0] = Logg::vec2(-0.3, -0.3);
        quad[9][1] = Logg::vec2(-0.3, -0.4);
        quad[9][2] = Logg::vec2(0.3, -0.3);
        quad[9][3] = Logg::vec2(0.3, -0.4); //1¹ø±æ ±âµÕ

        quad[10][0] = Logg::vec2(0.7, -0.6);
        quad[10][1] = Logg::vec2(0.7, 0.7);
        quad[10][2] = Logg::vec2(0.6, -0.6);
        quad[10][3] = Logg::vec2(0.6, 0.7); //1¹ø À­±æ±âµÕ

        quad[11][0] = Logg::vec2(0.3, 0.7);
        quad[11][1] = Logg::vec2(0.3, -0.6);
        quad[11][2] = Logg::vec2(0.2, 0.7);
        quad[11][3] = Logg::vec2(0.2, -0.6); //2¹ø À­±æ±âµÕ

        quad[12][0] = Logg::vec2(-1.0, -0.9);
        quad[12][1] = Logg::vec2(-1.0, -1.0);
        quad[12][2] = Logg::vec2(1.0, -0.9);
        quad[12][3] = Logg::vec2(1.0, -1.0); //2¹ø À­±æ½Ç±âµÕ

        quad[13][0] = Logg::vec2(-0.6, 0.4);
        quad[13][1] = Logg::vec2(-0.6, 0.3);
        quad[13][2] = Logg::vec2(0.3, 0.4);
        quad[13][3] = Logg::vec2(0.3, 0.3);

        quad[14][0] = Logg::vec2(-0.6, -0.3);
        quad[14][1] = Logg::vec2(-0.6, 0.3);
        quad[14][2] = Logg::vec2(-0.5, -0.3);
        quad[14][3] = Logg::vec2(-0.5, 0.3); //ÀÔ±¸

        quad[15][0] = Logg::vec2(-0.6, 0.75);
        quad[15][1] = Logg::vec2(-0.6, 0.4);
        quad[15][2] = Logg::vec2(-0.5, 0.75);
        quad[15][3] = Logg::vec2(-0.5, 0.4);

        quad[16][0] = Logg::vec2(-0.3, 0.9);
        quad[16][1] = Logg::vec2(-0.3, 0.55);
        quad[16][2] = Logg::vec2(-0.2, 0.9);
        quad[16][3] = Logg::vec2(-0.2, 0.55); //ÀÔ±¸ ³ª¿À°í ²¿ºÒ±æ

        quad[17][0] = Logg::vec2(-0.075, 0.75);
        quad[17][1] = Logg::vec2(-0.075, 0.55);
        quad[17][2] = Logg::vec2(0.1, 0.75);
        quad[17][3] = Logg::vec2(0.1, 0.55); //²¿ºÒ±æ Á¤»ç°¢Çü

        quad[18][0] = Logg::vec2(0.4, 0.9);
        quad[18][1] = Logg::vec2(0.4, -0.3);
        quad[18][2] = Logg::vec2(0.5, 0.9);
        quad[18][3] = Logg::vec2(0.5, -0.3); //²¿ºÒ±æ ´ÙÀ½ ±âµÕ

        quad[19][0] = Logg::vec2(0.8, -0.6);
        quad[19][1] = Logg::vec2(0.8, -0.7);
        quad[19][2] = Logg::vec2(0.7, -0.6);
        quad[19][3] = Logg::vec2(0.7, -0.7); //µÎ¹øÂ° ¿ÞÂÊ²¿ºÒ±æ

        quad[20][0] = Logg::vec2(0.9, -0.3);
        quad[20][1] = Logg::vec2(0.9, -0.4);
        quad[20][2] = Logg::vec2(0.8, -0.3);
        quad[20][3] = Logg::vec2(0.8, -0.4);

        quad[21][0] = Logg::vec2(0.8, 0.0);
        quad[21][1] = Logg::vec2(0.8, -0.1);
        quad[21][2] = Logg::vec2(0.7, 0.0);
        quad[21][3] = Logg::vec2(0.7, -0.1);

        quad[22][0] = Logg::vec2(0.9, 0.3);
        quad[22][1] = Logg::vec2(0.9, 0.4);
        quad[22][2] = Logg::vec2(0.8, 0.3);
        quad[22][3] = Logg::vec2(0.8, 0.4);

        quad[23][0] = Logg::vec2(0.8, 0.6);
        quad[23][1] = Logg::vec2(0.8, 0.7);
        quad[23][2] = Logg::vec2(0.7, 0.6);
        quad[23][3] = Logg::vec2(0.7, 0.7);

    
    }
    ~Map()
    {

    }

    void Render()
    {
        quad[0][0] = quad[0][0] + coord;
        quad[0][1] = quad[0][1] + coord;
        quad[0][2] = quad[0][2] + coord;
        quad[0][3] = quad[0][3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[0][0].x, quad[0][0].y, 0.0f);
        glVertex3f(quad[0][1].x, quad[0][1].y, 0.0f);
        glVertex3f(quad[0][2].x, quad[0][2].y, 0.0f);

        glVertex3f(quad[0][1].x, quad[0][1].y, 0.0f);
        glVertex3f(quad[0][3].x, quad[0][3].y, 0.0f);
        glVertex3f(quad[0][2].x, quad[0][2].y, 0.0f);

        glEnd();

        quad[1][0] = quad[1][0] + coord;
        quad[1][1] = quad[1][1] + coord;
        quad[1][2] = quad[1][2] + coord;
        quad[1][3] = quad[1][3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[1][0].x, quad[1][0].y, 0.0f);
        glVertex3f(quad[1][1].x, quad[1][1].y, 0.0f);
        glVertex3f(quad[1][2].x, quad[1][2].y, 0.0f);

        glVertex3f(quad[1][1].x, quad[1][1].y, 0.0f);
        glVertex3f(quad[1][3].x, quad[1][3].y, 0.0f);
        glVertex3f(quad[1][2].x, quad[1][2].y, 0.0f);

        glEnd();

        quad[2][0] = quad[2][0] + coord;
        quad[2][1] = quad[2][1] + coord;
        quad[2][2] = quad[2][2] + coord;
        quad[2][3] = quad[2][3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[2][0].x, quad[2][0].y, 0.0f);
        glVertex3f(quad[2][1].x, quad[2][1].y, 0.0f);
        glVertex3f(quad[2][2].x, quad[2][2].y, 0.0f);

        glVertex3f(quad[2][1].x, quad[2][1].y, 0.0f);
        glVertex3f(quad[2][3].x, quad[2][3].y, 0.0f);
        glVertex3f(quad[2][2].x, quad[2][2].y, 0.0f);

        glEnd();

        quad[3][0] = quad[3][0] + coord;
        quad[3][1] = quad[3][1] + coord;
        quad[3][2] = quad[3][2] + coord;
        quad[3][3] = quad[3][3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[3][0].x, quad[3][0].y, 0.0f);
        glVertex3f(quad[3][1].x, quad[3][1].y, 0.0f);
        glVertex3f(quad[3][2].x, quad[3][2].y, 0.0f);

        glVertex3f(quad[3][1].x, quad[3][1].y, 0.0f);
        glVertex3f(quad[3][3].x, quad[3][3].y, 0.0f);
        glVertex3f(quad[3][2].x, quad[3][2].y, 0.0f);

        glEnd();

        quad[4][0] = quad[4][0] + coord;
        quad[4][1] = quad[4][1] + coord;
        quad[4][2] = quad[4][2] + coord;
        quad[4][3] = quad[4][3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[4][0].x, quad[4][0].y, 0.0f);
        glVertex3f(quad[4][1].x, quad[4][1].y, 0.0f);
        glVertex3f(quad[4][2].x, quad[4][2].y, 0.0f);

        glVertex3f(quad[4][1].x, quad[4][1].y, 0.0f);
        glVertex3f(quad[4][3].x, quad[4][3].y, 0.0f);
        glVertex3f(quad[4][2].x, quad[4][2].y, 0.0f);

        glEnd();

        quad[5][0] = quad[5][0] + coord;
        quad[5][1] = quad[5][1] + coord;
        quad[5][2] = quad[5][2] + coord;
        quad[5][3] = quad[5][3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[5][0].x, quad[5][0].y, 0.0f);
        glVertex3f(quad[5][1].x, quad[5][1].y, 0.0f);
        glVertex3f(quad[5][2].x, quad[5][2].y, 0.0f);

        glVertex3f(quad[5][1].x, quad[5][1].y, 0.0f);
        glVertex3f(quad[5][3].x, quad[5][3].y, 0.0f);
        glVertex3f(quad[5][2].x, quad[5][2].y, 0.0f);

        glEnd();

        quad[6][0] = quad[6][0] + coord;
        quad[6][1] = quad[6][1] + coord;
        quad[6][2] = quad[6][2] + coord;
        quad[6][3] = quad[6][3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[6][0].x, quad[6][0].y, 0.0f);
        glVertex3f(quad[6][1].x, quad[6][1].y, 0.0f);
        glVertex3f(quad[6][2].x, quad[6][2].y, 0.0f);

        glVertex3f(quad[6][1].x, quad[6][1].y, 0.0f);
        glVertex3f(quad[6][3].x, quad[6][3].y, 0.0f);
        glVertex3f(quad[6][2].x, quad[6][2].y, 0.0f);

        glEnd();

        quad[7][0] = quad[7][0] + coord;
        quad[7][1] = quad[7][1] + coord;
        quad[7][2] = quad[7][2] + coord;
        quad[7][3] = quad[7][3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[7][0].x, quad[7][0].y, 0.0f);
        glVertex3f(quad[7][1].x, quad[7][1].y, 0.0f);
        glVertex3f(quad[7][2].x, quad[7][2].y, 0.0f);

        glVertex3f(quad[7][1].x, quad[7][1].y, 0.0f);
        glVertex3f(quad[7][3].x, quad[7][3].y, 0.0f);
        glVertex3f(quad[7][2].x, quad[7][2].y, 0.0f);

        glEnd();

        quad[8][0] = quad[8][0] + coord;
        quad[8][1] = quad[8][1] + coord;
        quad[8][2] = quad[8][2] + coord;
        quad[8][3] = quad[8][3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[8][0].x, quad[8][0].y, 0.0f);
        glVertex3f(quad[8][1].x, quad[8][1].y, 0.0f);
        glVertex3f(quad[8][2].x, quad[8][2].y, 0.0f);

        glVertex3f(quad[8][1].x, quad[8][1].y, 0.0f);
        glVertex3f(quad[8][3].x, quad[8][3].y, 0.0f);
        glVertex3f(quad[8][2].x, quad[8][2].y, 0.0f);

        glEnd();

        quad[9][0] = quad[9][0] + coord;
        quad[9][1] = quad[9][1] + coord;
        quad[9][2] = quad[9][2] + coord;
        quad[9][3] = quad[9][3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[9][0].x, quad[9][0].y, 0.0f);
        glVertex3f(quad[9][1].x, quad[9][1].y, 0.0f);
        glVertex3f(quad[9][2].x, quad[9][2].y, 0.0f);

        glVertex3f(quad[9][1].x, quad[9][1].y, 0.0f);
        glVertex3f(quad[9][3].x, quad[9][3].y, 0.0f);
        glVertex3f(quad[9][2].x, quad[9][2].y, 0.0f);

        glEnd();

        quad[10][0] = quad[10][0] + coord;
        quad[10][1] = quad[10][1] + coord;
        quad[10][2] = quad[10][2] + coord;
        quad[10][3] = quad[10][3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[10][0].x, quad[10][0].y, 0.0f);
        glVertex3f(quad[10][1].x, quad[10][1].y, 0.0f);
        glVertex3f(quad[10][2].x, quad[10][2].y, 0.0f);

        glVertex3f(quad[10][1].x, quad[10][1].y, 0.0f);
        glVertex3f(quad[10][3].x, quad[10][3].y, 0.0f);
        glVertex3f(quad[10][2].x, quad[10][2].y, 0.0f);

        glEnd();

        quad[11][0] = quad[11][0] + coord;
        quad[11][1] = quad[11][1] + coord;
        quad[11][2] = quad[11][2] + coord;
        quad[11][3] = quad[11][3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[11][0].x, quad[11][0].y, 0.0f);
        glVertex3f(quad[11][1].x, quad[11][1].y, 0.0f);
        glVertex3f(quad[11][2].x, quad[11][2].y, 0.0f);

        glVertex3f(quad[11][1].x, quad[11][1].y, 0.0f);
        glVertex3f(quad[11][3].x, quad[11][3].y, 0.0f);
        glVertex3f(quad[11][2].x, quad[11][2].y, 0.0f);

        glEnd();

        quad[12][0] = quad[12][0] + coord;
        quad[12][1] = quad[12][1] + coord;
        quad[12][2] = quad[12][2] + coord;
        quad[12][3] = quad[12][3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[12][0].x, quad[12][0].y, 0.0f);
        glVertex3f(quad[12][1].x, quad[12][1].y, 0.0f);
        glVertex3f(quad[12][2].x, quad[12][2].y, 0.0f);

        glVertex3f(quad[12][1].x, quad[12][1].y, 0.0f);
        glVertex3f(quad[12][3].x, quad[12][3].y, 0.0f);
        glVertex3f(quad[12][2].x, quad[12][2].y, 0.0f);

        glEnd();

        quad[13][0] = quad[13][0] + coord;
        quad[13][1] = quad[13][1] + coord;
        quad[13][2] = quad[13][2] + coord;
        quad[13][3] = quad[13][3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[13][0].x, quad[13][0].y, 0.0f);
        glVertex3f(quad[13][1].x, quad[13][1].y, 0.0f);
        glVertex3f(quad[13][2].x, quad[13][2].y, 0.0f);

        glVertex3f(quad[13][1].x, quad[13][1].y, 0.0f);
        glVertex3f(quad[13][3].x, quad[13][3].y, 0.0f);
        glVertex3f(quad[13][2].x, quad[13][2].y, 0.0f);

        glEnd();

        quad[14][0] = quad[14][0] + coord;
        quad[14][1] = quad[14][1] + coord;
        quad[14][2] = quad[14][2] + coord;
        quad[14][3] = quad[14][3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[14][0].x, quad[14][0].y, 0.0f);
        glVertex3f(quad[14][1].x, quad[14][1].y, 0.0f);
        glVertex3f(quad[14][2].x, quad[14][2].y, 0.0f);

        glVertex3f(quad[14][1].x, quad[14][1].y, 0.0f);
        glVertex3f(quad[14][3].x, quad[14][3].y, 0.0f);
        glVertex3f(quad[14][2].x, quad[14][2].y, 0.0f);

        glEnd();

        quad[15][0] = quad[15][0] + coord;
        quad[15][1] = quad[15][1] + coord;
        quad[15][2] = quad[15][2] + coord;
        quad[15][3] = quad[15][3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[15][0].x, quad[15][0].y, 0.0f);
        glVertex3f(quad[15][1].x, quad[15][1].y, 0.0f);
        glVertex3f(quad[15][2].x, quad[15][2].y, 0.0f);

        glVertex3f(quad[15][1].x, quad[15][1].y, 0.0f);
        glVertex3f(quad[15][3].x, quad[15][3].y, 0.0f);
        glVertex3f(quad[15][2].x, quad[15][2].y, 0.0f);

        glEnd();

        quad[16][0] = quad[16][0] + coord;
        quad[16][1] = quad[16][1] + coord;
        quad[16][2] = quad[16][2] + coord;
        quad[16][3] = quad[16][3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[16][0].x, quad[16][0].y, 0.0f);
        glVertex3f(quad[16][1].x, quad[16][1].y, 0.0f);
        glVertex3f(quad[16][2].x, quad[16][2].y, 0.0f);

        glVertex3f(quad[16][1].x, quad[16][1].y, 0.0f);
        glVertex3f(quad[16][3].x, quad[16][3].y, 0.0f);
        glVertex3f(quad[16][2].x, quad[16][2].y, 0.0f);

        glEnd();

        quad[17][0] = quad[17][0] + coord;
        quad[17][1] = quad[17][1] + coord;
        quad[17][2] = quad[17][2] + coord;
        quad[17][3] = quad[17][3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[17][0].x, quad[17][0].y, 0.0f);
        glVertex3f(quad[17][1].x, quad[17][1].y, 0.0f);
        glVertex3f(quad[17][2].x, quad[17][2].y, 0.0f);

        glVertex3f(quad[17][1].x, quad[17][1].y, 0.0f);
        glVertex3f(quad[17][3].x, quad[17][3].y, 0.0f);
        glVertex3f(quad[17][2].x, quad[17][2].y, 0.0f);

        glEnd();

        quad[18][0] = quad[18][0] + coord;
        quad[18][1] = quad[18][1] + coord;
        quad[18][2] = quad[18][2] + coord;
        quad[18][3] = quad[18][3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[18][0].x, quad[18][0].y, 0.0f);
        glVertex3f(quad[18][1].x, quad[18][1].y, 0.0f);
        glVertex3f(quad[18][2].x, quad[18][2].y, 0.0f);

        glVertex3f(quad[18][1].x, quad[18][1].y, 0.0f);
        glVertex3f(quad[18][3].x, quad[18][3].y, 0.0f);
        glVertex3f(quad[18][2].x, quad[18][2].y, 0.0f);

        glEnd();

        quad[19][0] = quad[19][0] + coord;
        quad[19][1] = quad[19][1] + coord;
        quad[19][2] = quad[19][2] + coord;
        quad[19][3] = quad[19][3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[19][0].x, quad[19][0].y, 0.0f);
        glVertex3f(quad[19][1].x, quad[19][1].y, 0.0f);
        glVertex3f(quad[19][2].x, quad[19][2].y, 0.0f);

        glVertex3f(quad[19][1].x, quad[19][1].y, 0.0f);
        glVertex3f(quad[19][3].x, quad[19][3].y, 0.0f);
        glVertex3f(quad[19][2].x, quad[19][2].y, 0.0f);

        glEnd();

        quad[20][0] = quad[20][0] + coord;
        quad[20][1] = quad[20][1] + coord;
        quad[20][2] = quad[20][2] + coord;
        quad[20][3] = quad[20][3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[20][0].x, quad[20][0].y, 0.0f);
        glVertex3f(quad[20][1].x, quad[20][1].y, 0.0f);
        glVertex3f(quad[20][2].x, quad[20][2].y, 0.0f);

        glVertex3f(quad[20][1].x, quad[20][1].y, 0.0f);
        glVertex3f(quad[20][3].x, quad[20][3].y, 0.0f);
        glVertex3f(quad[20][2].x, quad[20][2].y, 0.0f);

        glEnd();

        quad[21][0] = quad[21][0] + coord;
        quad[21][1] = quad[21][1] + coord;
        quad[21][2] = quad[21][2] + coord;
        quad[21][3] = quad[21][3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[21][0].x, quad[21][0].y, 0.0f);
        glVertex3f(quad[21][1].x, quad[21][1].y, 0.0f);
        glVertex3f(quad[21][2].x, quad[21][2].y, 0.0f);

        glVertex3f(quad[21][1].x, quad[21][1].y, 0.0f);
        glVertex3f(quad[21][3].x, quad[21][3].y, 0.0f);
        glVertex3f(quad[21][2].x, quad[21][2].y, 0.0f);

        glEnd();

        quad[22][0] = quad[22][0] + coord;
        quad[22][1] = quad[22][1] + coord;
        quad[22][2] = quad[22][2] + coord;
        quad[22][3] = quad[22][3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[22][0].x, quad[22][0].y, 0.0f);
        glVertex3f(quad[22][1].x, quad[22][1].y, 0.0f);
        glVertex3f(quad[22][2].x, quad[22][2].y, 0.0f);

        glVertex3f(quad[22][1].x, quad[22][1].y, 0.0f);
        glVertex3f(quad[22][3].x, quad[22][3].y, 0.0f);
        glVertex3f(quad[22][2].x, quad[22][2].y, 0.0f);

        glEnd();

        quad[23][0] = quad[23][0] + coord;
        quad[23][1] = quad[23][1] + coord;
        quad[23][2] = quad[23][2] + coord;
        quad[23][3] = quad[23][3] + coord;

        glBegin(GL_TRIANGLES);
        glColor4f(color.x, color.y, color.z, 1.0f);
        glVertex3f(quad[23][0].x, quad[23][0].y, 0.0f);
        glVertex3f(quad[23][1].x, quad[23][1].y, 0.0f);
        glVertex3f(quad[23][2].x, quad[23][2].y, 0.0f);

        glVertex3f(quad[23][1].x, quad[23][1].y, 0.0f);
        glVertex3f(quad[23][3].x, quad[23][3].y, 0.0f);
        glVertex3f(quad[23][2].x, quad[23][2].y, 0.0f);

        glEnd();
    }

};