#include "Settings.h"

int width = 1178;
int height = 674;
double movespeed = 0.35;
double backstrength = 800;
int bulletspeed = 6;
int gap_time = 500;
double g = 1000;
double gx = 800;
char player1[128] = "玩家1";
char player2[128] = "玩家2";
int rolelives = 5;
char char_rolelives[10];

int initialhp = 20;

int bornx[2] = { 350, 700 };
int borny[2] = { -100, -100 };

void showsettings() {
  drawAlpha(&gameimage.settings, 0, 0);
  myfont.lfHeight = 36;
  myfont.lfWeight = FW_BOLD;
  settextstyle(&myfont);
  outtextxy(69, 279, player1);
  outtextxy(659, 279, player2);
  _stprintf_s(char_rolelives, _T("%d"), rolelives);
  outtextxy(71, 528, char_rolelives);
}

void changesetting(int& par) {
  char s[10];
  InputBox(s, 10, _T("请输入新值"));
  par = atoi(s);
  writesettings();
  showsettings();
}

void changesetting(char* par) {
  char s[20];
  InputBox(s, 20, _T("请输入新用户名"));
  strcpy(par, s);
  writesettings();
  showsettings();
}