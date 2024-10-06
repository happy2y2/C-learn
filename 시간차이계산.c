#include <stdio.h>
typedef struct time TIME;

  struct time {
  int hours;
  int minutes;
  int seconds;
  };

int time_to_secs(struct time t){
  return t.hours * 3600 + t.minutes * 60 + t.seconds;
}

struct time secs_to_time(int secs){
  TIME t;
  t.hours = secs / 3600;
  t.minutes = (secs % 3600) / 60;
  t.seconds = secs & 60;
  return t;
}

int main(void){
  TIME t1, t2, t3;
  int tdiff;

  printf("시작 시간(시, 분, 초): ");
  scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

  printf("\n종료 시간(시, 분, 초): ");
  scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

  tdiff = time_to_secs(t2) - time_to_secs(t1);
  t3 = secs_to_time(tdiff);

  printf("소요 시간 : %d시간 %d분 %d초\n", t3.hours, t3.minutes, t3.seconds);

  return 0;
}