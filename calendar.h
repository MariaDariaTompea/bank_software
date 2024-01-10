# include <time.h>
typedef struct date
{
    int luna, zi, an;
};
struct date DC;

int eAnBisect(int numar)
{
    // Function to check if a given year is a leap year
    // Parameters: numar (int) - the year to be checked
    // Returns: 1 if it's a leap year, 0 otherwise
    if((numar % 4 == 0) && (numar % 100 != 0))
        return 1;
    if(numar % 400 == 0)
        return 1;
    return 0;
}
int Format_Valid_Data(struct date d)
{
    // Function to check if a given date has a valid format
    // Parameters: d (struct date) - the date to be checked
    // Returns: 1 if the date is valid, 0 otherwise
    if(d.luna > 12 || d.luna<1) return 0;
    if (d.luna == 1 || d.luna == 3 || d.luna == 5 || d.luna==7 || d.luna==8 || d.luna == 10 || d.luna==12)
        return (d.zi>0 && d.zi<=31);
    if (d.luna==2)
        if (eAnBisect(d.an))
            return (d.zi>0 && d.zi<=29);
        else
            return (d.zi>0 && d.zi<=28);
    if (d.luna == 4 || d.luna == 6 || d.luna == 9 || d.luna==11)
        return (d.zi>0 && d.zi<=30);
}

int Compara_Data(struct date a, struct date b)
{
    // Function to compare two dates
    // Parameters: a (struct date), b (struct date)
    // Returns: -1 if a is earlier, 1 if b is earlier, 0 if equal
    if (a.an<b.an) return -1;
    if (a.an>b.an) return 1;
    if (a.luna<b.luna) return -1;
    if (a.luna>b.luna) return 1;
    if (a.zi<b.zi) return -1;
    if (a.zi>b.zi) return 1;
    return 0;
}
/// Seteaza DATA CURENTA in variabila globala DC
void Set_Data()
{
    // Function to set the current date in the global variable DC
    // Parameters: None
    // Returns: None
    time_t s;
    struct tm* current_time;
    s = time(NULL);
    current_time = localtime(&s);

    DC.zi = current_time->tm_mday;
    DC.luna = current_time->tm_mon + 1;
    DC.an = current_time->tm_year + 1900;

}
void Time(char * rez)
{
    // Function to get the current time in the format HH:MM:SS
    // Parameters: rez (char*) - output string containing the current time
    // Returns: None
    time_t s;
    struct tm* current_time;
    s = time(NULL);
    current_time = localtime(&s);

    char time_sir[20]="";
    char sir[10];
    itoa(current_time->tm_hour, sir, 10);
    strcat(time_sir, sir); strcat(time_sir, ":");
    itoa(current_time->tm_min, sir, 10);
    strcat(time_sir, sir); strcat(time_sir, ":");
    itoa(current_time->tm_sec, sir, 10);
    strcat(time_sir, sir);
    strcpy(rez, time_sir);
}
void data_to_str(struct date d, char* s)
{
    // Function to convert a date to a string in the format DD-MM-YYYY
    // Parameters: d (struct date), s (char*) - output string containing the date
    // Returns: None
    int zi =d.zi, luna= d.luna, an=d.an;
    s[0]='\0';
    char str_zi[5], str_luna[5], str_an[5];
    itoa(zi, str_zi, 10);
    itoa(luna, str_luna, 10);
    itoa(an, str_an, 10);
    strcat (s, str_zi);
    strcat (s, "-");
    strcat (s, str_luna);
    strcat (s, "-");
    strcat (s, str_an);
}
