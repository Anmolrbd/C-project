#include <stdio.h>
#include<conio.h>
typedef struct {
    int x;
    int y;
} Point;

Point modifyPoint(Point p) {
    p.x += 10;
    p.y += 10;
    return p;
}

int main() {
	Point p1, p2;	
	printf("Enter coordinates (x y): ");
  	scanf("%d %d", &p1.x, &p1.y);
	p2 = modifyPoint(p1);
	printf("Modified coordinates: (%d, %d)\n", p2.x, p2.y);
	getch();
	return 0;
}

