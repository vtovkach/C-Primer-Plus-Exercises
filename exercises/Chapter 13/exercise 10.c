/* Programmign Exercise 13.10 */

#include <stdio.h>
#include <string.h>

#define N_LEN 36
#define BUF_LEN 4096

char *get_s(char * restrict, FILE * restrict, int);

int main(void)
{
    FILE *fptr;
    char file_name[N_LEN];
    char temp_buf[BUF_LEN];
    int offset;
    char *check;

    printf("Please enter the file name: ");
    get_s(file_name, stdin, N_LEN);

    fptr = fopen(file_name, "rb");
    if(fptr == NULL)
    {
        fprintf(stderr, "Error opening a file!\n");
        return -1;
    }

    printf("Enter the position in file (< 0 to quit): ");
    while(scanf("%d", &offset) == 1 && offset >= 0)
    {
        // Set file's offset to the user's input
        fseek(fptr, offset, SEEK_SET);    

        check = get_s(temp_buf, fptr, BUF_LEN);
        if(check == NULL)
            continue;
        
        fprintf(stdout, "%s\n", temp_buf);

        printf("Enter the position in file (< 0 to quit): ");
    }

    fclose(fptr);

    return 0;
}

char *get_s(char *restrict buf, FILE * restrict fp, int bytes)
{
    char *return_val;
    char *find;

    return_val = fgets(buf, bytes, fp);

    if(return_val)
    {
        find = strchr(buf, '\n');
        if(*find == '\n')
        {
            // Remove newline character 
            *find = '\0';
        }
        else
        {
            while(fgetc(fp) != '\n');
        }
    }

    return return_val;
}