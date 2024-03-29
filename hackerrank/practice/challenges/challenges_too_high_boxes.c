/*Input Format

The first line contains a single integer , denoting the number of boxes.
 lines follow with three integers on each separated by single spaces  ,  and  which are length, width and height in feet of the -th box.

Constraints

Output Format

For every box from the input which has a height lesser than  feet, print its volume in a separate line.

Sample Input 0

4
5 5 5
1 2 40
10 5 41
7 2 42
Sample Output 0

125
80*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
	int length;
    int width;
    int height;
};

typedef struct box box;

int get_volume(box b) {
	int x;
    x=(b.length)*(b.width)*(b.height);
    return x;
}

int is_lower_than_max_height(box b) {
	if(b.height<MAX_HEIGHT)
        return 1;
    else
        return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}