#include<stdio.h>
#include<math.h>
int main()
{
	int choice;
	printf("Enter '1' for addition\n");//1+2+3+.....+N
	printf("Enter '2' for subtraction\n");//100+99+98+.....+N
	printf("Enter '3' to find the summation of square series\n");//1^2+2^2+3^2+.....+N^2
	printf("Enter '4' to find the summation of even series\n");//2+4+6+....+N
	printf("Enter '5' to find the summation of odd series\n");//1+3+%+.....+N
	printf("Enter '6' to find the summation of cyclic series\n");//1^1+2^2+3^3+.....+N^N
	printf("Enter choice : ");
	scanf_s("%d", &choice);

	double first_term, last_data, incremental_value;
	double sum = 0, i;

	switch (choice)
	{
	case 1:
		printf("Enter the first term : ");
		scanf_s("%lf", &first_term);
		printf("Enter the last term : ");
		scanf_s("%lf", &last_data);
		printf("Enter increment data : ");
		scanf_s("%lf", &incremental_value);

		for (i = first_term; i <= last_data; i = i + incremental_value)
		{
			sum = sum + i;
		}
		printf("The summation is %lf\n", sum);

		break;

	case 2:
		printf("Enter the first term : ");
		scanf_s("%lf", &first_term);
		printf("Enter the last term : ");
		scanf_s("%lf", &last_data);
		printf("Enter increment data : ");
		scanf_s("%lf", &incremental_value);

		for (i = first_term; i >= last_data; i = i - incremental_value)
		{
			sum = sum + i;
		}
		printf("The summation is %lf\n", sum);

		break; 

	case 3:
			printf("Enter the first term : ");
			scanf_s("%lf", &first_term);
			printf("Enter the last term : ");
			scanf_s("%lf", &last_data);
			printf("Enter increment data : ");
			scanf_s("%lf", &incremental_value);

			for (i = first_term; i <= last_data; i = i +incremental_value)
			{
				sum = sum + pow(i,2);
			}
			printf("The summation is %lf\n", sum);

			break;

	case 4:
		
		printf("Enter a number : ");
		scanf_s("%lf", &last_data);

		for (i =2; i <= last_data; i = i +2)
		{
			sum = sum + i;
		}
		printf("The summation is %lf\n", sum);

		break;

	case 5:

		printf("Enter a number : ");
		scanf_s("%lf", &last_data);

		for (i = 1; i <= last_data; i = i + 2)
		{
			sum = sum + i;
		}
		printf("The summation is %lf\n", sum);

		break;

	case 6:
		printf("Enter the first term : ");
		scanf_s("%lf", &first_term);
		printf("Enter the last term : ");
		scanf_s("%lf", &last_data);
		printf("Enter increment data : ");
		scanf_s("%lf", &incremental_value);

		for (i = first_term; i <= last_data; i = i + incremental_value)
		{
			sum = sum + pow(i, i);
		}
		printf("The summation of this cyclic series is %lf\n", sum);

		break;

	default:

		printf("Wrong input\a");
		break;
	}
	
	main();
	return 0;
}