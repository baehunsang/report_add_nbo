#include <stdio.h>
#include <stdint.h>
 #include <arpa/inet.h>

uint32_t open_bin(char* file){
	FILE* fp = fopen(file, "rb");
	uint32_t num;
	fread(&num, 1,32, fp);
	return ntohl(num);
}


int main(int argc, char* argv[]){
	uint32_t n1 = open_bin(argv[1]);
	uint32_t n2 = open_bin(argv[2]);
	printf("1000(0x%x) + 500(0x%x) = 1500(0x%x)", n2, n1, uint32_t(n1+n2));
}
