#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

double* random_vector (int n) {
    double* rd = (double*)malloc(sizeof(double)*(1<<n));
    int size = 1<<n;
    for(int i=0; i<size; i++) {
    	rd[i] = (double)rand()/((double)RAND_MAX);
    }
    return rd;
}

void print_vector(double* vec,int n) {
    printf("vector with size %d: ", 1<<n);
    int size = 1<<n;
    for(int i=0; i<size; i++) {
    	printf("%f\t",vec[i]);
    }
    printf("\n");
}

double* gen_prefix(double* vec,int n) {
    int size = 1<<n;
    double* prefix = (double*)malloc(sizeof(double)*size);
    prefix[0] = vec[0];
    for(int i=1; i<size; i++) {
        prefix[i] = prefix[i-1] + vec[i]; 
    }
    return prefix;
}

int main (int argc, char *argv[]) {

    if (argc < 2) {
        printf("Usage: lab1_ex3 n \n");
        return(1);
    }

    printf("argv[1] = %s\n", argv[1]);

    int n = atoi(argv[1]);
    double* a, *prefix;
    a = random_vector(n);
    print_vector(a, n);
    prefix = gen_prefix(a, n);
    print_vector(prefix, n);

    return 0;
}
