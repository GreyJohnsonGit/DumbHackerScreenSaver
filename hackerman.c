#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	int i, target;

	for(i = 0; i < 100; i++) {
		target = rand();
		printf("Attacking: %010d\t Payload: %08x\n", target, rand());
		if(i%14 == 0 && i) {
			printf("***ATMPT CAP***\n");
			printf("PANIC NUMBER:\n%010d%010d\n%010d%010d\n%010d%010d\n%010d%010d\n", rand(), rand(), rand(), rand(), rand(), rand(), rand(), rand());
			printf("***PANIC END***\n");
		}
		else if(i%9 == 0 && i) {
			printf("Success........Results written to %010d.log\n", target);
		} 
		sleep(1);
	}

	return 0;
}
