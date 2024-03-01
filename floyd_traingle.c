#include <stdio.h>

int main() {
  int rows;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  int i, j, n = 1;
  for (i = 1; i <= rows; i++) 
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d ", n);
      n++;
    }
    printf("\n");
  }
  return 0;
}

// Floyd Traingle Pattern with C
