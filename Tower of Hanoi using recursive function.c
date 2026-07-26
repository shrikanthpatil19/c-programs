#include <stdio.h>

void towerOfHanoi(int n, char source, char destination, char intermediate) {
if (n == 1) {
printf("Move disk 1 from %c to %c\n", source, destination);
return;
}
towerOfHanoi(n - 1, source, intermediate, destination);
printf("Move disk %d from %c to %c\n", n, source, destination);
towerOfHanoi(n - 1, intermediate, destination, source);
}

int main() {
int n;
printf("Enter the number of disks: ");
scanf("%d", &n);
printf("Sequence of moves:\n");
towerOfHanoi(n, 'S', 'D', 'I'); // S = Source, D = Destination, I = Intermediate

return 0;
}