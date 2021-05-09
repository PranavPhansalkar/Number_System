#include<stdio.h>
#include<math.h>
#pragma warning(disable : 4996)

int to_Decimal(int base_number,int base) {
	int temp = 0, decimal_form = 0,power=0;
	while (base_number > 0) 
	{
		temp = base_number % 10;
		decimal_form = decimal_form + (temp * pow(base,power));
		power++;
		base_number /= 10;
	}
	return decimal_form;
}

to_Binary(int toBeConverted)
{
	int temp = 0,i=0;
	int array[32] = { 0, };
	for(i=0;toBeConverted > 0;i++)
	{
		temp = toBeConverted % 2;
		array[i] = temp;
		toBeConverted /= 2;
	}
	printf("\nBinary equivalent: ");
	for (int j = i-1; j >= 0; j--)
	{
		printf("%d",array[j]);
	}


}

to_Octal(int toBeConverted)
{
	int temp = 0, i = 0;
	int array[32] = { 0, };
	for (i = 0; toBeConverted > 0; i++)
	{
		temp = toBeConverted % 8;
		array[i] = temp;
		toBeConverted /= 8;
	}
	printf("\nOctal equivalent: ");
	for (int j = i - 1; j >= 0; j--)
	{
		printf("%d", array[j]);
	}


}

to_Hex(int toBeConverted)
{
	int temp = 0, i = 0;
	int array[32] = { 0, };
	for (i = 0; toBeConverted > 0; i++)
	{
		temp = toBeConverted % 16;
	
		array[i] = temp;
		
		toBeConverted /= 16;
	}
	printf("\nHexamdecimal equivalent: ");
	for (int j = i - 1; j >= 0; j--)
	{
		printf("%X", array[j]);
	}


}



int main()
{
	int opt = 0, base_number = 0, base = 0, convert = 0,exit=0;
	while (exit == 0)
	{
		printf("\nChoose the input number system type:");
		printf("\n1.Decimal 2.Binary 3.Octal 4.Hexadecimal 5.Exit :");
		scanf("%d", &opt);
		switch (opt)
		{
		case 1: printf("\nEnter the number: ");
			scanf("%d", &base_number);
			to_Binary(base_number);
			to_Octal(base_number);
			to_Hex(base_number);
			break;

		case 2: printf("\nEnter the number: ");
			scanf("%d", &base_number);
			base = 2;
			convert = to_Decimal(base_number, base);
			printf("\nDecimal equivalent: %d", convert);
			to_Octal(convert);
			to_Hex(convert);
			break;


		case 3: printf("\nEnter the number: ");
			scanf("%o", &base_number);
			printf("\nDecimal equivalent: %d", base_number);
			to_Binary(base_number);
			to_Hex(base_number);
			break;

		case 4: printf("\nEnter the number: ");
			scanf("%X", &base_number);
			printf("\nDecimal equivalent: %d", base_number);
			to_Binary(base_number);
			to_Octal(base_number);
			break;

		case 5: exit = 1;
			break;

		default:printf("Invalid Input.");
		}
	
	}

}