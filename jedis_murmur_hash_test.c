#include <stdio.h>
#include <stdint.h>
#include <ctype.h>
#include <sys/types.h>
#include "jedis_murmur_hash.h"

int main(int argc, char **argv)
{
	if(argc<2) { 
		printf("usage: cmd key");
		printf("\n");
		return 0;
	}

	char *str = argv[1];
	printf("str:%s",str);
	printf("\n");
	int64_t hash = jedis_murmur_hash(str);
	printf("result:%ld", hash);
	printf("\n");
	return 0;
}
