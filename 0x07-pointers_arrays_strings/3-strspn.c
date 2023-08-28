unsigned int _strspn(char *s, char *accept)
{
int count = 0;
unsigned int i = 0, j = 0;


while (*(s + i) != '\0')
{
    while (*(accept + j) != '\0')
    {
        if (*(s + i) == *(accept + j))
        {
            count++;
        }
        j++;
    }
    j = 0;
    i++;
}
return (count);
}
