main()
{
    char *strings[] = 
    {
        "C language", "Basic", "World wide", "Olympic", "Great Wall"
    };
    char **p, i;
    p = strings;
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", *(p + i));
    }
}
