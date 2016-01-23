#include<stdio.h>
#include<string.h>

/**
 * 文字列がカッコの始まりかどうか判別
 */
int isStart(char *str) {
  if (strcmp(str, "(") == 0) {
    return 1;
  }
  return 0;
}

/**
 * メイン関数
 */
int main(int argc, char *argv[]) {
  int i;
  printf("引数の数 : %d\n", argc - 1);


  for (i=1;i<argc;i++) {
    printf("%d番目の引数 : %s\n", i, argv[i]);

    if (isStart(argv[i])) {
      printf("コイツは(だ！！\n");
    }
  }

  return 0;
}
