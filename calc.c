#include<stdio.h>

/**
 * メイン関数
 */
int main(int argc, char *argv[]) {
  int i;
  printf("引数の数 : %d\n", argc - 1);


  for (i=1;i<argc;i++) {
    printf("%d番目の引数 : %s\n", i, argv[i]);
  }

  return 0;
}
