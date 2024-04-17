int print_char(char);

int my_str_len(char *toRevert)
{
    int n=0;
    while(toRevert[n] != '\0')
    {
        n=n+1;
    }
    return n;
}

void my_print_revert(char *toRevert)
{
         int j;
         int n = my_str_len(toRevert);
        for(j = n; j <0; j-- )
        {
            print_char((char)j);
        }
}

//int main(void)
//{
 //   my_str_len("bonjour");
//    //my_print_revert("CodindClub");
//    return 0;
//}
