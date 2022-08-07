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
        //printf("Area:%d\n", area[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=0;j<n-i-1; j++){
            if(area[j]>area[j+1]){
                int tmp;
                tmp = area[j];
                area[j] = area[j+1];
                area[j+1]=tmp;
                //Swapping areas
                tmp=tr[j].a;
                tr[j].a=tr[j+1].a;
                tr[j+1].a=tmp;
                tmp=tr[j].b;
                tr[j].b=tr[j+1].b;
                tr[j+1].b=tmp;
                tmp=tr[j].c;
                tr[j].c=tr[j+1].c;
                tr[j+1].c=tmp;
                
                
            }
        }
    }
}

int main()