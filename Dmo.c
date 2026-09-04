 #include <stdio.h>

int main(void)
{
	int numbers[] = {64, 34, 25, 12, 22, 11, 90};
	int count = sizeof(numbers) / sizeof(numbers[0]);

	for (int pass = 0; pass < count - 1; pass++) {
		int swapped = 0;

		for (int index = 0; index < count - pass - 1; index++) {
			if (numbers[index] > numbers[index + 1]) {
				int temporary = numbers[index];
				numbers[index] = numbers[index + 1];
				numbers[index + 1] = temporary;
				swapped = 1;
			}
		}

		if (!swapped) {
			break;
		}
	}

	printf("Sorted array: ");
	for (int index = 0; index < count; index++) {
		printf("%d ", numbers[index]);
	}
	printf("\n");

	return 0;
}
