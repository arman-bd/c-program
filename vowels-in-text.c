/*
This program will ask for an input from user
then will iterate through the text for counting
the number of vowels in text.
*/

#include<stdio.h>
#include<string.h>

int main(){
    // Define required variables
    int i;
    int v = 0;
    char name[99] = "";

    // Ask for user input
    printf("Enter Text: ");
    scanf("%[^\n]s", name);

    for(i=0; i <= strlen(name); i++){
        // Check if the char is a vowel
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' ||
           name[i]=='o' || name[i]=='u' ||
           name[i]=='A' || name[i]=='E' || name[i]=='I' ||
           name[i]=='O' || name[i]=='U'
        ){
            // Found a vowel
            v++;
        }
    }

    // Output result
    printf("Total Vowel: %d", v);
    return 0;
}

