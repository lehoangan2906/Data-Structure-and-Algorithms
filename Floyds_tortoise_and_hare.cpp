node *find_loop(node *head)
{
	node *p1;
	node *p2;

	if (head == NULL)
		return (NULL);
	p1 = head;
	p2 = head;
	while (p2->next != NULL && p2->next->next != NULL)
	{
		p1 = p1->next;
		p2 = p2->next->next;
		if (p1 == p2)
		{
			p1 = head;
			while (p1 != p2)
			{
				p1 = p1->next;
				p2 = p2->next;
			}
			return (p2);
		}
	}
	return (NULL);
}