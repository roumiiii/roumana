// Mahaman Laminou.M.Roumanatou
#include <stdio.h>
#include <cs50.h>
#define _XOPEN_SOURCE
#include <unistd.h>
#include <crypt.h>
#include <string.h>

char plaintext[4];
char salt [3];
string roumi;
string newhash;

int main (int argc, string argv[])
{


   if (argc != 2)
   {
       printf("Error: \n");
       return 1;
   }

   else

   {
      roumi = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ./";
       salt[0] = argv[1][0]; salt[1] = argv[1][1]; salt[2] = '\0';


       for(int i = 0; i < 26+26; i++)

       {
           plaintext[0] = roumi[i];
           plaintext[1] = '\0';

           newhash = crypt(plaintext, salt);

           if ((strncmp(argv[1], newhash,13)) == 0)
           {
               printf("Match found, password is %s",plaintext);
               return true;
           }
       }

       for(int i = 0; i < 26+26; i++)

       {
          plaintext[0] = roumi[i];

          for(int j = 0; j < 26+26; j++)
          {
            plaintext[1] = roumi[i];
            plaintext[2] = '\0';

            newhash = crypt(plaintext, salt);

           if ((strncmp(argv[1], newhash,13)) == 0)
           {
               printf(" found, password is %s", plaintext);
               return true;
           }

          }
       }

          for(int i = 0; i < 26+26; i++)
       {
          plaintext[0] = roumi[i];

          for(int j = 0; j < 26+26; j++)
          {
            plaintext[1] = roumi[i];

            for (int k = 0; k < 26+26; k++)
            {
                plaintext[2] = roumi[i];
                plaintext[3] = '\0';
            }

            newhash = crypt(plaintext, salt);

           if ((strncmp(argv[1], newhash,13)) == 0)
           {
               printf("found, password is %s", plaintext);
               return true;
           }

       }

   }
            for(int i =0; i < 26+26; i++)
            {

                  plaintext[0] = roumi[i];

          for(int j = 0; j < 26+26; j++)
          {
            plaintext[1] = roumi[i];

            for (int k = 0; k < 26+26; k++)
            {
                plaintext[2] = roumi[i];

               for (int l = 0; l < 26+26; l++)
               {
                   plaintext[3] =roumi[i];

               }

            newhash = crypt(plaintext, salt);

           if ((strncmp(argv[1], newhash,13)) == 0)
           {
               printf("found, password is %s", plaintext);
               return true;
           }
        }
     }
}

   return 0;

        }
}