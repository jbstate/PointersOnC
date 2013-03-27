/* 
 * Program that reads characters from standard input, and prints them out
 * including line numbers preceding the line of text.
 */

#include<stdio.h>
#include<string.h>
#define MAX_LINE_LENGTH 1000

int main() {
   char user_input[MAX_LINE_LENGTH];
   char dest_str[MAX_LINE_LENGTH];
   int current_line_length = 0;
   int longest_line = 0;
   int i = 0;
   int j = 0;
   int z = 0;

   /* This while loops takes care of user input one character at a time
    * therefore, current_line_length keeps incrementing individually
    */
   while ((user_input[i++] = getchar()) != EOF) {
     ++current_line_length;

     if(current_line_length > longest_line) {
       longest_line = current_line_length - 1;// minus 1 to exclude newline 
     }//end if

     if(user_input[i - 1] == '\n') {
	   printf("Value of i is: %d ", i); 	 	 
       current_line_length = 0;
       if(longest_line <= (i - 1)) { /* copy array */
         for(j; j <= (i - 1); j++) {
           dest_str[j] = user_input[j];
         }//end for
       }//end if
       i = 0; /* variable i has to be resetted since it's not done in the for loop */
       j = 0; /* variable j has to be resetted since it's not done in the for loop */
     }//end if    
   }//end while

   printf("Longest line size is: %d\n ", longest_line);
   for(z; z <= longest_line; z++) {
     printf("%c", dest_str[z]);
   }//end for
}//end main

