#include <stdio.h>

struct answer {
    char q[100];
    char select1[100];
    char select2[100];
    char select3[100];
    char select4[100];
    int solution;
};

int main(void){
    int user = 0;
    struct answer q1[100] = {{
    "임베디드 장치에 가장 적합한 프로그래밍 언어는?", "1. Python", "2. C", "3. JAVA"
    , "4. Javascript", 3},
    {"서로 다른 자료형을 모을 수 있는 구조는?", "1. 배열", "2. 변수", "3. 구조체", "4. 포인터", 3},
    };

    for(int i = 0; i < 100; i++){
        printf("%s\n", q1[i].q);
        printf("%s  ", q1[i].select1);
        printf("%s  ", q1[i].select2);
        printf("%s  ", q1[i].select3);
        printf("%s  ", q1[i].select4);
        scanf("%d", &user);
        if(q1[i].solution == user)
            printf("맞았습니다.\n");
        else
            printf("틀렸습니다.\n");
    }

        
    return 0;   
}