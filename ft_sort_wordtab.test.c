#include <stdlib.h>
#include <stdio.h>

void	ft_sort_wordtab(char **tab);

int		main()
{
	{
		int		ft_strcmp_for_test_for_test(char *s1, char *s2)
		{
			while (*s1 == *s2)
			{
				if (!*s1)
					return (0);
				s1++;
				s2++;
			}
			return ((unsigned char)*s1 - (unsigned char)*s2);
		}

		int		find_space(char *str, int pos)
		{
			if ((str[pos] == '\n') || (str[pos] == '\t') || (str[pos] == ' '))
				return (1);
			return (0);
		}

		int		free_split_test (char **t, int n)
		{
			while (n >= 0)
				free (t[n--]);
			free (t);
			return (0);
		}

		char	*copy_wd_till_space(char *str, int pos)
		{
			char *new_wd;
			int wd_len;
	
			wd_len = 0;
			while ((str[wd_len + pos]) && (find_space(str, pos) == 0))
				wd_len++;
			new_wd = (char*)malloc(sizeof(char) * (wd_len + 1));
			wd_len = 0;
			while ((str[wd_len + pos]) 
					&& (find_space(str, wd_len + pos) == 0))
				new_wd[wd_len] = str[wd_len++ + pos];
			new_wd[wd_len] = '\0';
			return (new_wd);
		}

		int		is_new_wd(char *str, int cursor)
		{
			int i;
			int test;
	
			i = 0;
			test = 1;
			while ((cursor - i >= 0) && (i < 1))
			{
				if (find_space(str, cursor-i))
					test = 0;
				i++;
			}
			if ((test == 1) && 
				(((cursor >= 1) && find_space(str, cursor - 1))
					 || (cursor == 0)))
				return (1);
			return (0);
		}

		int		count_wd(char *str)
		{
			int cursor;
			int count;
	
			count = 0;
			cursor = 0;
			while (str[cursor])
			{
				if (is_new_wd(str, cursor++))
					count++;
			}
			return (count);
		}

		char	**ft_split_whitespaces(char *str)
		{
			char **tab;
			int cursor;
			int count;
	
			count = 0;
			cursor = 0;
			tab = (char**)malloc(sizeof(char*) * (count_wd(str)) + 1);
			while (str[cursor])
			{
				if (is_new_wd(str, cursor))
					tab[count++] = copy_wd_till_space(str, cursor);
				cursor++;
			}
			tab[count] = 0;
			return (tab);
		}
		char test[] =  "hello hello2 hi hi how are you ?";
		char **split_test;

		split_test = (ft_split_whitespaces (test));
		ft_sort_wordtab (split_test);
		printf ("since *test = 'hello hello2 hi hi how are you ?', words must be ordered: ? are hello hello2 hi hi how you\n");
		printf ("? ");
		if (!ft_strcmp_for_test_for_test (split_test[0], "?"))
			printf ("OK\n");
		else
		{
			printf ("error: received %s", split_test[0]);
			return (free_split_test(split_test, 8) + 1);
		}
		printf ("are ");
		if (!ft_strcmp_for_test_for_test (split_test[1], "are"))
			printf ("OK\n");
		else
		{
			printf ("error: received %s", split_test[1]);
			return (free_split_test(split_test, 8) + 1);
		}
		printf ("hello ");
		if (!ft_strcmp_for_test_for_test (split_test[2], "hello"))
			printf ("OK\n");
		else
		{
			printf ("error: received %s", split_test[2]);
			return (free_split_test(split_test, 8) + 1);
		}
		printf ("hello2 ");
		if (!ft_strcmp_for_test_for_test (split_test[3], "hello2"))
			printf ("OK\n");
		else
		{
			printf ("error: received %s", split_test[3]);
			return (free_split_test(split_test, 8) + 1);
		}
		printf ("hi and hi ");
		if (!ft_strcmp_for_test_for_test (split_test[4], "hi") && !ft_strcmp_for_test_for_test (split_test[5],"hi"))
			printf ("OK\n");
		else
		{
			printf ("error: received %s and %s", split_test[4], split_test[5]);
			return (free_split_test(split_test, 8) + 1);
		}
		printf ("you ");
		if (!ft_strcmp_for_test_for_test (split_test[7], "you"))
			printf ("OK\n");
		else
		{
			printf ("error: received %s", split_test[7]);
			return (free_split_test(split_test, 8) + 1);
		}
		printf ("array must be terminated by zero\n");
		if (split_test[8] && split_test[8][0])
		{	
			printf ("error\n");
			return (1);
		}
		printf ("ft_sort_wordtab OK\n");
		return (free_split_test(split_test, 8));
	}
}
