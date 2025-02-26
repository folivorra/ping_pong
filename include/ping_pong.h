#ifndef PING_PONG_H
#define PING_PONG_H

#include <ncurses.h>
#include <stdio.h>
#include <unistd.h>

void render_canvas(int ball_x, int ball_y, int racket_first_pos, int racket_second_pos, int p1, int p2);
int move_ball_x(int ball_x, char direction_rl);
int move_ball_y(int ball_y, char direction_ud);
int move_racket(int cur_pos, int move);
int update_move(char action, char up, char down);
char switch_direction_rl(int ball_x, char direction_rl, int flag_first, int flag_second);
char switch_direction_ud(int ball_y, char direction_ud);
int flag_first_to_switch_rl(int ball_y, int racket_first_pos);
int flag_second_to_switch_rl(int ball_y, int racket_second_pos);
int flag_to_score(int ball_x);
int win_process(int p1, int p2);

#endif