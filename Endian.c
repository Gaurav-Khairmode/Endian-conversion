#include<stdio.h>
unsigned int LitToBigEndian(unsigned int x);

int main( )
{
	int c, Little_Endian = 0xAABBCCDD ;

	printf("\n Little_Endian = 0x%X\n",Little_Endian);

	printf("\n Big_Endian    = 0x%X\n",LitToBigEndian(Little_Endian));
return 0;
}

unsigned int LitToBigEndian(unsigned int x)
{
	c= (((x>>24) & 0x000000ff) | ((x>>8) & 0x0000ff00) | ((x<<8) & 0x00ff0000) | ((x<<24) & 0xff000000));
	return c;
}
