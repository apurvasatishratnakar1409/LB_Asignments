/*
Updated : nohtyP suollevraM
*/
# include<stdio.h>

void StrCpyRevX(char *src, char *dest)
{
    char *end = src;

    
    while(*end != '\0')
    {
        end++;
    }
    end--; 
    while(end >= src)
    {
        *dest = *end;
        dest++;
        end--;
    }

    *dest = '\0';
}

int main()
{
    char Arr[50] = "Marvellous Python";
    char Brr[50];

    StrCpyRevX(Arr, Brr);

    printf("Updated : %s\n", Brr);  // Output: nohtyP suollevraM

    return 0;
}
