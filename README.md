<div align="center">
	<div style="margin-bottom:3%">
		<a href="https://www.42sp.org.br/">
			<img src="./.image/ft_printfn.png" alt="ft_printf logo"/>
		</a>
	</div>
	<div>
		<img src="https://img.shields.io/badge/language-C-blue" />
		<img src="https://img.shields.io/badge/version-10-blue" />
		<img src="https://img.shields.io/badge/grade-100-green" />
	</div>
	<div>
		<a href="https://www.linkedin.com/in/gabriela-sertori-50b390189/">
			<img alt="Gabriela linkedin" src="https://img.shields.io/badge/-gabisertori-blue?style=flat&logo=Linkedin&logoColor=white" />
		</a>
		<a href="https://www.linkedin.com/in/lucas-l-a555bb199/">
			<img alt="Lucas linkedin" src="https://img.shields.io/badge/-krebscoder-blue?style=flat&logo=Linkedin&logoColor=white" />
		</a>
	</div>
	<div>
		<a href="https://github.com/gabrielasertori">
			<img alt="Gabriela Sertori" src="https://img.shields.io/badge/-gabisertori-blue?style=flat&logo=github&logoColor=white" />
		</a>
		<a href="https://github.com/KrebsCoder">
			<img alt="Lucas Krebs" src="https://img.shields.io/badge/-krebscoder-blue?style=flat&logo=github&logoColor=white" />
		</a>
	</div>
</div>

# Printf

This is the third project of école 42 projects.<br>
Once you really understand how printf works, writing your own printf is not that hard!<br>
If you wish to have your own printf, i really encourage you to do so, you will learn a lot. 😄

## 🗒️ About

This project objetive is to mimic the behavior of the famous printf function.<br>
If you want to test the real printf, all you need to do is to open a .c file, include the <stdio.h> library and use the printf like this:

```printf("test")```

The printf can print a lot of types of data, and we are covering just a few of those:

- `%c` print a single character.
- `%s` print a string of characters.
- `%p` the void * pointer argument is printed in hexadecimal.
- `%d` print a decimal (base 10) number.
- `%i` print an integer in base 10.
- `%u` print an unsigned decimal (base 10) number
- `%x` print a number in hexadecimal (base 16), with lowercase.
- `%X` print a number in hexadecimal (base 16), with uppercase.
- `%%` print a percent sign.

For more details and references, you can access this link: 
<a href="https://www.man7.org/linux/man-pages/man3/printf.3.html">Printf manual page</a> 


## ⌨️ How to compile it

```clang *.c ft_printf.h && ./a.out```

- The **.c* means the compiler is going to compile all files that ends with .c
- The ft_printf.h is necessary, it contains all the functions prototypes, it's also creating a printf library and contains the defined macros.
- The get_next_line.h has the header with the prototypes of utils.
- main.c has the test.
- When we compile with the first part of the command line, it's going to be generate an executable file so the ```&& ./a.out``` is saying to the compiler to also execute it.

## 🤝 Contributors

The collab:

<table>
  <tr>
      <td>
	<a href="https://github.com/gabrielasertori">
		<img src="https://avatars.githubusercontent.com/u/64798344?v=4" width="100px" alt="Gabi sertori avatar"/><br>
		<sub><b>Gabi Sertori</b></sub>
	</a>
	</td>
	<td>
		<a href="https://github.com/KrebsCoder">
			<img src="https://avatars.githubusercontent.com/u/69386576?v=4" width="100px" alt="Lucas krebs avatar"/><br>
			<sub><b>Lucas Krebs</b></sub>
		</a>
	</td>
	</tr>
</table>

## 📮 Contact

Please, if you encounter any bug, errors or have any tips, feel free to make contact. Open an issue [here](https://github.com/pair-programming-gabi-krebs/GNL/issues) with the title [bug], [problem], [sugestion] or [update] and describe the issue.
