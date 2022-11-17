#include<stdio.h>
#define BITS sizeof(int)*2
#define bitset(byte,nbit)   ((byte) |=  (1<<(nbit)))
#define bitclear(byte,nbit) ((byte) &= ~(1<<(nbit)))
#define bitflip(byte,nbit)  ((byte) ^=  (1<<(nbit)))
#define LSBcheck(byte) (byte & 1)
#define MSBcheck(byte) (byte & (1 >> (BITS - 1)))
//#define x ((byte << nbit) & 1)
#define bitget(byte,nbit) ((byte << nbit) & 1)
#define evenodd(byte) (byte & 1)

void main()
{
	int byte,nbit;
	
	printf("Enter number:");
	scanf("%d",&byte);

	printf("Enter position:");
	scanf("%d",&nbit);

	bitset(byte,nbit);
	printf("Set bit is %d\n",byte);

	bitclear(byte,nbit);
        printf("Clear bit is %d\n",byte);

	bitflip(byte,nbit);
        printf("Flip bit is %d\n",byte);
	
        LSBcheck(byte)?printf(" %d is set\n",byte):printf("%d not set\n",byte);
	MSBcheck(byte)?printf(" %d is set\n",byte):printf("%d not set\n",byte);

	bitget(byte,nbit)?printf("The %d bit is set\n",nbit):printf("%d is not set\n",nbit);

	evenodd(byte)?printf("odd\n"):printf("Even\n");



}
