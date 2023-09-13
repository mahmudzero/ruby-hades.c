#include <stdio.h>

#define def void
#define dont printf("hwuaagh!\n");

def defiance() {
	int going_to_die = 1;
	if (going_to_die == 1) {
		dont
	}
}

int main(void) {
	defiance();
	return 0;
}
