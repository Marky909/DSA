#include <stdio.h>
#include <conio.h>

void towerOfHanoi(int, char, char, char); // Function prototype

int main() {
  int n;
  printf("Enter number of disks: ");
  scanf("%d", &n);
  towerOfHanoi(n, 'S', 'T', 'D'); // s=source peg,T=Temp,D=destination
  getch();
  return 0; 
}

void towerOfHanoi(int n, char s, char t, char d) {
  if (n > 0) {
    towerOfHanoi(n - 1, s, d, t);
    printf("Move disk %d from %c to %c\n", n, s, d);
    towerOfHanoi(n - 1, t, s, d);
  }
}