#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
int greatestNumberIndex(int *numbers){
    int greatest=0, index;
    int size = sizeof(numbers)/sizeof(numbers[0]);
    printf("Size: %d\n", size);
    for(int i=0; i < size; i++){
        //printf("Here: %d\n", numbers[i]);
        if(numbers[i] > greatest){
            greatest = numbers[i];
            index = i;
            printf("Index:%d Greates:%d\n", index, greatest);
        }
    }
    return index;
}
int greatestNumberValue(int *numbers){
    int greatest=0, index;
    int size = sizeof(numbers)/sizeof(numbers[0]);
    printf("Size: %d\n", size);
    for(int i=0; i < size; i++){
        //printf("Here: %d\n", numbers[i]);
        if(numbers[i] > greatest){
            greatest = numbers[i];
            index = i;
            printf("Index:%d Greates:%d\n", index, greatest);
        }
    }
    return greatest;
}

void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    int *area = malloc(n*sizeof(int));
    
    for(int i=0; i<n; i++){
        // printf("AquiA%d\n", tr[i].a);
        // printf("AquiB%d\n", tr[i].b);
        // printf("AquiC%d\n", tr[i].c);
        int p, s;
        p = (tr[i].a + tr[i].b + tr[i].c)/2;
        s = sqrt(p*((p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c)));
        area[i] = s;    
    }
    for(int j=n; j>=0; j--){
        int index = greatestNumberIndex(area);
        tr[j] = tr[index];
        delete (area,index);
        
    }
    
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}