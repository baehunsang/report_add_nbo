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
	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)", n1, n1, n2, n2,uint32_t(n1+n2), uint32_t(n1+n2));
}
