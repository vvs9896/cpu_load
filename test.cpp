#include <stdio.h>
#include <time.h>

int main() {
    clock_t begin, end;
    double cpu_time_used;
    unsigned long long int cnt = 0;

    begin = clock();
    for (unsigned long long i = 0; i < 90000000000; ++i) ++cnt;
    end = clock();

    cpu_time_used = ((double) (end - begin)) / CLOCKS_PER_SEC;
    
    printf("Time: %f seconds\n", cpu_time_used);

    return 0;
}