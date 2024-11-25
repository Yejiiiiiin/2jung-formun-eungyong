#include <stdio.h>

int get_integer() {
  int value ;
  printf("정수를 입력하세요:");
  scanf("%d", &value);
  return value;
}

int drawRect(int x, int y) { return x * y; }

int main(void) {
  int x, y;
  x = get_integer();
  y = get_integer();
  int mul = drawRect(x, y);

  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++)
      printf("*");

    printf("\n");
  }
   printf("별의 개수는 %d개 입니다.\n",mul); 
  return 0;
}
