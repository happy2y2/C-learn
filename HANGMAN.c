#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main (void){
  int pick, ch, i, j, k, cnt;
  char *solution[10] = { // 동물 10마리
    "rabbit",
    "rion",
    "tiger",
    "baer",
    "frog",
    "horse",
    "chiken",
    "pig",
    "cow",
    "duck"
  };
  char answer[100] = "";

  srand(time(NULL));
  pick = rand() % 10;
  printf(" ------------------------------------------- \n");
  printf("|###  HANGMAN GAME START                   |\n");
  printf("|###  Categories : Animal                  |\n");
  printf("|###  Created new problum. solve it!!!     |\n");
  printf(" ------------------------------------------- \n");

  // printf("%s\n", solution[pick]); // test : the random word

  cnt = 0;
  for(i = 0; solution[pick][i] != 0; i++){
    answer[i] = '_';
    cnt++;
  }


  printf("your answer : %s(%d)\n", answer, cnt);  // test : number of under bar
  
  while(1){
  ch = getchar();
  
  for(j = 0; solution[pick][j] != 0; j++)
    if(ch == solution[pick][j]){
      answer[j] = solution[pick][j];
      printf("your answer : %s(%d)\n", answer, cnt);  // test : number of under bar
    }
  }

  return 0;
}
