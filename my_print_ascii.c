int print_char(char);

void my_print_ascii(void)
{
    int j;
    for(j = 64; j <= 127; j++) {
        print_char((char)j);
    }
}

// int main(void)
// {
//     my_print_ascii();
//     return 0;
// }