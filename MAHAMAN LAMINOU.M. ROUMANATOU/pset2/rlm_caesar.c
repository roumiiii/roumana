#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, string argv[])
{
if(argc==2)
{

//initialize the key

    int k=atoi(argv[1]);
    //enter the key word

    string plaintext=get_string("plaintext: ");
    //ascii to alphabetical

    printf("ciphertext: ");
    for(int i=0; i<strlen(plaintext); i++)

    if(isalpha(plaintext[i]))
    {
        //lower letter
        if(islower(plaintext[i]))
        printf("%c", (((plaintext[i]-97)+ k)%26)+97);

    //upper letter
    if(isupper(plaintext[i]))
      printf("%c", (((plaintext[i]-65)+ k)%26)+65);

}
//number
else
    printf("%c", plaintext[i]);
}
printf("\n");
}