//==============testing.cpp================
printf("\r\nHere is testing.cpp");

int func1(int cal);

int main(void)
{
    int value=0;
    printf("\r\nHere is main func.");
    value=func1(10);
    printf("\r\nHere is the value [%d].",value);
    return 0;
}

int func1(int cal)
{
    for(int i=0;i<10;i++)
    {cal=cal+1;}
    return cal;
}