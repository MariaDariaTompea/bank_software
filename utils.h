int isalpha_or_space(char * s)
{
    // Function to check if a string contains only alphabetic characters or spaces
    // Parameters: s (char*) - the string to be checked
    // Returns: 1 if the string contains only alphabetic characters or spaces, 0 otherwise
    int i ;
    for (i = 0; s[i]; i++)
        if (!((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || s[i] == ' ' ))
        return 0;
    return 1;
}
int isalpha_or_number(char * s)
{
    // Function to check if a string contains only alphabetic characters or numbers
    // Parameters: s (char*) - the string to be checked
    // Returns: 1 if the string contains only alphabetic characters or numbers, 0 otherwise
    int i ;
    for (i = 0; s[i]; i++)
        if (!((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i] >= '0' && s[i]<='9' ) ) )
        return 0;
    return 1;
}
void Elimina_bn(char * s) /// o functie ajutatoare pentru fgets (scoate ENTERUL de la sfarsitul sirului)
{
    // Helper function to remove the newline character ('\n') from the end of a string
    // Parameters: s (char*) - the string from which to remove the newline character
    // Returns: None
    s[strlen(s)-1]='\0';
}
void Elimina_spatiu_inceput(char * s)
{
    // Helper function to remove leading spaces from a string
    // Parameters: s (char*) - the string from which to remove leading spaces
    // Returns: None
    while(s[0] == ' ')
        strcpy(s, s+1);
}
float Valid_number(char *s)
{
    // Function to validate and convert a string to a floating-point number
    // Parameters: s (char*) - the string to be converted
    // Returns: The converted float value if the string is a valid number, 0 otherwise
    int i;
    int nr_p=0;
    for (i=0; s[i]; i++)
        if (s[i] == '.')
            nr_p++;
    if (nr_p>1)
        return 0;
    for (i=0; s[i]; i++)
        if (!( s[i]>='0' && s[i]<='9'  || s[i] =='.'))
            return 0;
    return atof(s);
}
