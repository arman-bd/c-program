#include<stdio.h>

int main(){
    // Variable Declaring and Defining
    int vowel = 0, consonant = 0;
    char buffer;

    printf("Enter Text: ");
    while(buffer = getchar()){
        // Loop Breaker Condition(s)
        if(buffer == EOF || buffer == '\n'){
            break;
        }

        // Validate Characters ( A-Z and a-z )
        if((buffer >= 'a' && buffer <= 'z') || (buffer >= 'A' && buffer <= 'Z')){

            // Check If Vowel or Consonant
            if(buffer == 'A' || buffer == 'E' || buffer == 'I' || buffer == 'O' ||
               buffer == 'U' || buffer == 'a' || buffer == 'e' || buffer == 'i' ||
               buffer == 'o' || buffer == 'u'){
                // This is a Vowel
                vowel++;
            }else{
                // This is a Consonant
                consonant++;
            }
        }
    }

    // Print Result
    printf("\nTotal Vowel: %d, Total Consonant: %d\n", vowel, consonant);

    return 0;
}
