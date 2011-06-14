#ifndef timing_h
#define timing_h

void timer_start();
void timer_split();
void timer_stop();

void frame_begin();
void frame_end();

float frame_rate();
float frame_time();
char* frame_rate_string();

#endif