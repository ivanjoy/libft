int     ft_isprint(int c)
{
    if ((c >= ' ' && c <= '?') || (c >= '@' && c <= '~'))
        return (1);
    else
        return (0);
}
