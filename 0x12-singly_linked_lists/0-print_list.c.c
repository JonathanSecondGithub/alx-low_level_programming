/**
 * print_list - function that prints all the elements of a list_t list
 * h: head
 */
size_t print_list(const list_t *h)
{
    int i = 0;
    while (h)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");
            return (1);
        }
        else
        {
            printf("[%d] %s\n", strlen(h->str), h->str);
        }
        h = h->next;
        i++;
    }
    return (i);
}