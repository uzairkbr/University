//Author: Uzair Ahmad
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
		
	int size = 15;
	char arr[size] ;
	char check ;
	int vowel = 0 ; // variable to count the number of vowels in the string
	int consonant = 0 ; // variable to count the number of consonants in the string
	
	do {
	    fflush(stdin);
		
		printf("\n\nEnter Value for string: "); 
		gets(arr);
		
		int length = strlen(arr);
		
		printf("\n\nAvailable Services: \n");
		printf("A : Count the number of vowels in the string.\n");
		printf("B : Count both the vowels and consonants in the string.\n");
		printf("C : Display the most frequent character in the string.\n");
		printf("D : Concatenate another string with the existing string.\n");
		printf("E : Exit the program.\n");
	
		printf("\nWhat Service do You Want?  ");
		scanf(" %c", &check );
		
		if (check == 'A' || check == 'a') {
			for (int i = 0; i < length; i++) {
				if (arr[i] == 'a' || arr[i] == 'A' || arr[i] == 'e' || arr[i] == 'E' || arr[i] == 'i' || arr[i] == 'I' || arr[i] == 'o' || arr[i] == 'O' || arr[i] == 'u' || arr[i] == 'U')
					vowel++ ;
			}
			printf("Number of Vowels: %d", vowel);
		}
		else if (check == 'B' || check == 'b') {
			for (int i = 0; i < length; i++) {
				if (arr[i] == 'a' || arr[i] == 'A' || arr[i] == 'e' || arr[i] == 'E' || arr[i] == 'i' || arr[i] == 'I' || arr[i] == 'o' || arr[i] == 'O' || arr[i] == 'u' || arr[i] == 'U')
					vowel++ ;
				else
				   consonant++ ;
			}
			printf("\nNumber of Vowels: %d\nNumber of Consonants: %d", vowel, consonant);
		}
		else if (check == 'C' || check == 'c') {
			char maxElement = arr[0];
			int count = 0, maxCount = 0;
	   	
		    for (int i = 0; i < size; i++) {
		        count = 1;
		        for (int j = i + 1; j < size; j++) {
		            if (arr[j] == arr[i]) {
		                count++;
		                if (count > maxCount) {
		                    maxElement = arr[j];
		                    maxCount = count;
		                }
		            }
		        }
		    }
	
			printf("Most frequent character: %c", maxElement);
		}
		else if (check == 'D' || check == 'd') {
			char second[size] ;
			
			fflush(stdin);
			printf("\nEnter Second Array: ");
			gets(second);
			
			strcat(arr, second);
			printf("\nThe concatenated string is: ");
			puts(arr);
		}
		else if (check == 'E' || check == 'e') {
			break;
		}else {
			printf("\nInvalid Input");
		}
		
		printf("\n\n-----------------------------------------------------------------------------------------------------------");
	} while ( check != 'E' || check != 'e');

	return 0;
}

