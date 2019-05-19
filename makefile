minishell:mini_shell.cc
	g++ mini_shell.cc -o mini_shell
.PHONY:clean
clean:
	rm -f mini_shell mini_shell.cc
