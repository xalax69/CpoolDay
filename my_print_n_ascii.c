int print_char(char);

void my_print_n_ascii(int howMany)
{
    int j;
    int f = howMany + 32;
    for(j = 33; j <=f ; j++)
    {
        print_char((char)j);
    }
}
//int main(void)
//{
//    my_print_n_ascii(5);
//    return 0;
//}