#include <stdio.h>
#include <string.h>


void isPalindrome(char str[])
{
	// Start from leftmost and rightmost
	int l = 0; // Start from leftmost corners
	int h = strlen(str) - 1; // rightmost corners

	// compare characters while they are same
	while (h > l)
	{
		if (str[l++] != str[h--])
		{
			printf("%s is false\n", str);
			return;
		}
	}
	printf("%s is true\n", str);
}


int main()
{
	isPalindrome("tacocat");
	isPalindrome("racecar");
	isPalindrome("beanbag");
	isPalindrome("hannah");

	return 0;
}
